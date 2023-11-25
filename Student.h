#ifndef STUDENT_H
#define STUDENT_H

#pragma once
#include <iostream>
class Student
{
public:
    Student();
    ~Student();
    int score;
    std::string name;
    Student(int score, std::string name);
    bool DisplayResult();

private:
};

#endif