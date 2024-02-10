#ifndef EXERCISELIST_H
#define EXERCISELIST_H
#include"exercise.h"
#include<QMap>
#include<QString>

class ExerciseList
{
public:
    ExerciseList();
    ExerciseList(Exercise& exe);
    void insert(Exercise exe);



    QMap<QString, int> getEList() const;

private:
    QMap<QString,int> eList;
};

#endif // EXERCISELIST_H
