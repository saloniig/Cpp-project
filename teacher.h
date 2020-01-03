#ifndef TEACHER_H
#define TEACHER_H
#include<fstream>
#include<iostream>
#include<string>
using namespace std;
class teacher{
    string password,name,more;
    string email,father_name;
    int roll_no;
    public:
    
    void passwordvalidate();
    void studentadd();
    void assignmentadd();
    void marksadd();
};
#endif