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
    Exercise();
    Exercise(QString data,int number);
    QString toString();
    QString getData() const;
    int getNumber() const;
};

#endif // EXERCISE_H
