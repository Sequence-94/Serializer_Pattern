#ifndef EXERCISE_H
#define EXERCISE_H
#include<QString>
#include<QList>


class Exercise
{
private:
    QString data;
    int number;

public:
    Exercise(QString d, int n);
    void setData(QString d);
    void setNum(int n);
    QString getData() const;
    int getNum() const;
};

#endif // EXERCISE_H
