#include "exerciselist.h"


ExerciseList::ExerciseList()
{

}

ExerciseList::ExerciseList(Exercise &exe)
{
    eList[exe.getData()]=exe.getNumber();
}

void ExerciseList::insert(Exercise exe)
{
    eList[exe.getData()]=exe.getNumber();
}

QMap<QString, int> ExerciseList::getEList() const
{
    return eList;
}





