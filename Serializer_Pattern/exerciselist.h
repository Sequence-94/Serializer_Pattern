#ifndef EXERCISELIST_H
#define EXERCISELIST_H

#include "exercise.h"
#include <QList>

class ExerciseList
{
public:
    ExerciseList();
    ~ExerciseList();
    void add(Exercise *e);
    QList<Exercise*>* getList() const;
private:
    QList<Exercise*> *list;
};

#endif // EXERCISELIST_H
