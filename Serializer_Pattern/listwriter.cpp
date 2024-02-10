#include "listwriter.h"

ListWriter::ListWriter()
{

}

// ListWriter::ListWriter(QString path)
// {
//     filePath = path;
// }

void ListWriter::write(ExerciseList &eList)
{
     QFile file(filePath);
    if(!file.open(QIODevice::WriteOnly | QIODevice::Text)){
        qCritical()<<"Could not open file!";
        qCritical()<<file.errorString();
        return;
    }
    else{
        qInfo()<<"Writing list to file...";
        //opens a "stream" inorder to write to the file
        QTextStream cout(&file);
        QMap theList = eList.getEList();
        for(auto i=theList.cbegin(), end = theList.cend();i!=end;i++){
            cout<<i.key()<<":"<<i.value()<<"\n";
        }
    }

}


