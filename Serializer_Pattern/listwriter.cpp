#include "listwriter.h"
#include "filewriter.h"
#include <QMetaProperty>
ListWriter::ListWriter()
{
}

void ListWriter::write(ExerciseList *el)
{
    QList<Exercise*>* list {el->getList()};
    QString alldata;

    foreach (Exercise *e, *list)
    {
        const QMetaObject* meta{e->metaObject()};
        int totalProperties{meta->propertyCount()};
        for(int i=1;i<totalProperties;i++)
        {
            QMetaProperty prop{meta->property(i)};
            alldata.append(prop.read(e).toString());
            alldata.append("#");
        }
        alldata.append("\n");
    }
    FileWriter f("myfile.txt");
    f.write(alldata);
}
