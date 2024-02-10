#ifndef LISTREADER_H
#define LISTREADER_H
#include "exercise.h"
#include "exerciselist.h"
#include<QMap>
#include<QString>
#include<QDebug>

class ListReader
{
private:
    QString filename;
public:
    FileReader(QString f);
    QString read() const;
};

#endif // LISTREADER_H
