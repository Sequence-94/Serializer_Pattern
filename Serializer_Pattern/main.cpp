#include <QCoreApplication>
#include "exercise.h"
#include "exerciselist.h"
#include "listreader.h"
#include "listwriter.h"

#include<iostream>
#include<QDebug>
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Exercise e1("one",1);
    Exercise e2("two",2);

    ExerciseList eList;
    eList.insert(e1);
    eList.insert(e2);

    ListWriter lw;
    lw.write(eList);


    ExerciseList sList;
    ListReader lr;
    sList = lr.read();


    //testing if indeed i am able to read from file
    for(auto i=sList.getEList().cbegin(),end=sList.getEList().cend();i!=end;i++){
        qInfo()<<"["<<i.key()<<":"<<i.value()<<"]";
    }

    return a.exec();
}
