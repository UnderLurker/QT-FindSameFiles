#include "filetomd5.h"
#include <QCryptographicHash>
#include <QFile>
#include <QApplication>
#include <QDir>
#include <QStringList>

fileToMd5::fileToMd5(QObject *parent) : QObject(parent)
{

}

QStringList fileToMd5::getFiles(const QString &path)
{
    QStringList res;
    QDir dir(path);
    QFileInfoList infoList=dir.entryInfoList(QDir::Dirs|QDir::Files|QDir::NoDotAndDotDot);
    for(int i=0;i<infoList.count();i++){
        QFileInfo filePath=infoList.at(i);
        if(filePath.isDir()){
            QStringList list=getFiles(filePath.absoluteFilePath());
            res+=list;
        }
        else{
            res+=filePath.absoluteFilePath();
        }
    }
    return res;
}

void fileToMd5::filesToMd5(const QString &path)
{
    QStringList list=getFiles(path);
    QHash<QString,QStringList> sameFile;
    for(int i=0;i<list.count();i++){
        QString filePath=list.at(i);
        QCryptographicHash hash(QCryptographicHash::Md5);
        QFile file(filePath);
        if(!file.open(QIODevice::ReadOnly)) continue;
        while(!file.atEnd()){
            QByteArray info=file.readLine();
            hash.addData(info);
            qApp->processEvents();
        }
        file.close();
        QString result=hash.result().toHex();
        sameFile[result].append(filePath);
        emit progress(i+1,list.count());
    }
    emit findSameFile(sameFile);
}
