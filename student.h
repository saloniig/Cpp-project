#ifndef STUDENT_H
#define STUDENT_H
#include<fstream>
#include<iostream>
#include<string>
#include<string.h>
using namespace std;
class student
{
    string password,more;
    char name[10];
    public:
   
void passwordvalidate();
void marksview();
void assignmentview();
};
#endif