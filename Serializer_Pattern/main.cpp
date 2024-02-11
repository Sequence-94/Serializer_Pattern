#include <QCoreApplication>

#include <QTextStream>
#include "exerciselist.h"
#include "listwriter.h"
#include "listreader.h"

int main(int argc, char *argv[])
{
    QTextStream out(stdout);

    Exercise *e1(new Exercise("one", 1));
    Exercise *e2(new Exercise("two", 2));

    ExerciseList *list1(new ExerciseList());
    list1->add(e1);
    list1->add(e2);

    ListWriter lw;
    lw.write(list1);

    ExerciseList *list2(new ExerciseList());
    ListReader lr;
    list2 = lr.read();

    QList<Exercise*>* inlist2 = list2->getList();

    foreach (Exercise *e, *inlist2)
        out << e->getData() << ": " << e->getNum() << "\n";

    delete list1;
    delete list2;
    return 0;
}
