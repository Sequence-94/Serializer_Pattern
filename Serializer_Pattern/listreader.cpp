#include "listreader.h"

ListReader::ListReader() {}

ExerciseList ListReader::read()
{
    QFile file(filePath);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)){
        qCritical()<<"Could not open file!";
        qCritical()<<file.errorString();
    }else{
        qInfo()<<"Reading list from file...";
        //opens a "stream" inorder to write to file
        QTextStream cin(&file);
        QMap<QString,int> map;
        ExerciseList result;
        while (!cin.atEnd()) {
            QString line = cin.readLine();
            QStringList parts = line.split(":");
            if(parts.size()==2){
                QString data = parts[0].trimmed();
                int number = parts[1].toInt();
                map[data]=number;
            }

        }
        for(auto i=map.cbegin(), end =map.cend();i!=end;i++){
            Exercise e(i.key(),i.value());
            result.insert(e);
        }
        return result;
    }

}
