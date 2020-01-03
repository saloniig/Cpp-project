#include"student.h"
#include<fstream>
#include<iostream>
#include<string>
#include<string.h>
using namespace std;

student Sobject;
void student::assignmentview()
{
    string reader;
    ifstream myfile("assignment.txt");
    if(myfile.is_open()){
        while(getline(myfile,reader))
        {
            cout<<"\n"<<reader<<'\n';
        }
        myfile.close();
    }
    else
    
        cout<<"unable to open file"<<endl;
        cout<<"if you wish to continue press y!";
        cin>>more;
        if(more=="y")
        Sobject.passwordvalidate();
        
        else {
            cout<<"                      ----------------------                   \n";
            cout<<"                      |thankyou visit again|                   \n";
            cout<<"                      ----------------------                   \n";
        }
   
}
void student::marksview()
{  
    string c,name;
    cout<<"enter your name"<<endl;
    getline(cin.ignore(),c);
    ifstream myfile;
    myfile.open("marks.txt");
   while(myfile>>name)
   {
       if(name.compare(c)==0)
       {
           cout<<"roll number:"<<name<<endl;
           myfile>>name;
           cout<<"name:"<<name<<endl;
           myfile>>name;
            cout<<"oops marks:"<<name<<endl;
           myfile>>name;
            cout<<"cn marks:"<<name<<endl;
           myfile>>name;
           cout<<"de marks:"<<name<<endl;
           myfile>>name;
           cout<<"total:"<<name<<endl;
        }
       else {cout<<"your name is not in database \n";
       break;
       }
   }
         

   myfile.close();
   cout<<"*****************************************************************************\n";
   cout<<"*                 if you wish to continue press y!                           \n";
        cin>>more;
   cout<<"*                                                                           *\n";
        if(more=="y")
        Sobject.passwordvalidate();
        else {
            cout<<"               ----------------------                              \n";
            cout<<"               |thankyou visit again|                              \n";
            cout<<"               ----------------------                              \n";
            }
       
}

void student::passwordvalidate()
{   char more[2];
    int response;
    cout<<"please enter your username"<<endl;
    cin>>name;
    cout<<"please enter your password"<<endl;
    cin>>password;
    if(password=="*")
    {   
        cout<<"press 1 to view assignment"<<endl;
        cout<<"press 2 to view your marks"<<endl;
        cin>>response;
        if(response==1)
        assignmentview();
        else if(response==2)
        marksview();
        else
        cout<<"enter valid number"<<endl;
       }
        else
         cout<<"incorrect password"<<endl;
        }
        




