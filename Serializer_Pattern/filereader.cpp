#include "filereader.h"
#include <QFile>
#include <QTextStream>

FileReader::FileReader(QString f): filename{f}
{
}

QString FileReader::read() const
{
    QFile file(filename);
    if (file.open(QIODevice::ReadOnly))
    {
        QTextStream fromFile(&file);
        QString s = fromFile.readAll();
        file.close();
        return s;
    }
    return QString();
}
