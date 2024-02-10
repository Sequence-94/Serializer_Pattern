#include "exerciselist.h"


ExerciseList::ExerciseList()
{
}

void ExerciseList::add(Exercise e)
{
    list.append(e);
}

QList<Exercise> ExerciseList::getList() const
{
    return list;
}





