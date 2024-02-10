#include <QFile>
#include <QTextStream>
#include "filewriter.h"

FileWriter::FileWriter(QString fn): fileName{fn}
{
}

void FileWriter::write(QString s) const
{
    QFile file(fileName);
    if (file.open(QIODevice::WriteOnly))
    {
        QTextStream toFile(&file);
        toFile << s;
        file.close();
    }
}

