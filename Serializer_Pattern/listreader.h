#ifndef LISTREADER_H
#define LISTREADER_H
#include "exercise.h"
#include "exerciselist.h"
#include<QMap>
#include<QFile>
#include<QDebug>

class ListReader
{
private:
    QString filePath = "simpleTextFile.txt";
public:
    ListReader();
    ExerciseList read();
};

#endif // LISTREADER_H
