#ifndef LISTWRITER_H
#define LISTWRITER_H
#include "exercise.h"
#include "exerciselist.h"
#include<QFile>
#include<QString>
#include<QDebug>
#include<QTextStream>
#include<iostream>
using namespace std;

#include <QString>

class FileWriter{
public:
    FileWriter(QString fn);
    void write(QString s) const;
private:
    QString fileName;
};

#endif // LISTWRITER_H
