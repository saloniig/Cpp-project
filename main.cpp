#include<iostream>
#include<string>
#include<fstream>
using namespace std;
#include"home.h"
#include"teacher.h"
#include"student.h"
int main(){
    int choice;
    cout<<"*****************************************************************************\n";
    cout<<"*                      ---------------------------                          *\n";
    cout<<"*                       WELCOME TO THE MAIN PAGE                            *\n";
    cout<<"*                      ---------------------------                          *\n";
    cout<<"*                                                                           *\n";
    cout<<"*                                                                           *\n";
    cout<<"*  1. login as a teacher                                                    *\n";
    cout<<"*                                                                           *\n";
    cout<<"*  2. login as a student                                                    *\n";
    cout<<"*                                                                           *\n";
    cout<<"*     please enter a number to proceed \n\n*    RESPONSE: ";cin>>choice;
    cout<<"\n*********************************************************************\n";
    
    home object;
    object.option(choice);
     }