#ifndef LISTREADER_H
#define LISTREADER_H

#include "exerciselist.h"

class ListReader
{
public:
    ListReader();
    ExerciseList* read() const;
};

#endif // LISTREADER_H
