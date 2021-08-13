#ifndef FILETOMD5_H
#define FILETOMD5_H

#include <QObject>
#include <QHash>

class fileToMd5 : public QObject
{
    Q_OBJECT
public:
    explicit fileToMd5(QObject *parent = nullptr);

public slots:
    void filesToMd5(const QString& list);

signals:
    void findSameFile(const QHash<QString,QStringList>& sameFile);
    void progress(int current,int total);
private:
    QStringList getFiles(const QString& path);

};

#endif // FILETOMD5_H
