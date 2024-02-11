#include "listreader.h"

#include <QStringList>
#include <QVariant>
#include "filereader.h"

ListReader::ListReader()
{
}

ExerciseList* ListReader::read() const
{
    FileReader fr("myfile.txt");
    QString str = fr.read();
    ExerciseList* list{new ExerciseList()};
    QStringList data = str.split("\n");
    for (int loop=0; loop<data.size()-1; loop++)
    {
        QStringList line = data.at(loop).split("#");
        Exercise *e(new Exercise());
        e->setProperty(QString("data").toLatin1(),QVariant(line.at(0)));
        e->setProperty(QString("num").toLatin1(),QVariant(line.at(1).toInt()));
        list->add(e);
    }
    return list;
}
