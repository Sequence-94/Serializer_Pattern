#include "exerciselist.h"

ExerciseList::ExerciseList():list{new QList<Exercise*>}
{
}

ExerciseList::~ExerciseList()
{
    qDeleteAll(*list);
    list->clear();
    delete list;
}

void ExerciseList::add(Exercise *e)
{
    list->append(e);
}

QList<Exercise*>* ExerciseList::getList() const
{
    return list;
}

