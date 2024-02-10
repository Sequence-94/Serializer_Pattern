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

class ListWriter
{
private:
    QString filePath = "simpleTextFile.txt";

public:
    //writer takes where it will write ->path
    //and
    //what it will write -> instance
    ListWriter();
    //ListWriter(QString path);
    void write(ExerciseList& eList);
};

#endif // LISTWRITER_H
