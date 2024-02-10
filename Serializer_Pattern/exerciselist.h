#ifndef EXERCISELIST_H
#define EXERCISELIST_H
#include"exercise.h"
#include<QString>

class ExerciseList
{
public:
    ExerciseList();
    void add(Exercise e);
    QList<Exercise> getList() const;

private:
    QList<Exercise> list;
};

#endif // EXERCISELIST_H
