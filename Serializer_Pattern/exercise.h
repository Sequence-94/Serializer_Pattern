#ifndef EXERCISE_H
#define EXERCISE_H

#include <QString>

class Exercise
{
public:
    Exercise(QString d, int n);
    void setData(QString d);
    void setNum(int n);
    QString getData() const;
    int getNum() const;
private:
    QString data;
    int num;
};

#endif // EXERCISE_H
