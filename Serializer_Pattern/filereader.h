#ifndef FILEREADER_H
#define FILEREADER_H

#include "QString"

class FileReader
{
public:
    FileReader(QString f);
    QString read() const;
private:
    QString filename;
};

#endif // FILEREADER_H
