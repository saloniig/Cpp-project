#ifndef home_H
#define home_H
#include "teacher.h"
#include"student.h"
#include<fstream>
#include<iostream>
#include<string>
class home{

    int abc;
    public:
    int choice;
    void option(int choice);
    teacher Tobject;
    student Sobject;
};
#endif
