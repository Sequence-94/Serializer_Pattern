#include "listwriter.h"
#include "filewriter.h"

ListWriter::ListWriter()
{
}

void ListWriter::write(ExerciseList el)
{
    QList<Exercise> list = el.getList();
    QString alldata;
    foreach (Exercise e, list)
    {
        alldata.append(QString(e.getData() + "#" + QString::number(e.getNum()) + "\n"));
    }
    FileWriter f("myfile.txt");
    f.write(alldata);
}
