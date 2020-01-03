#include"teacher.h"
#include<iostream>
#include<string>
#include<string.h>
#include<fstream>
using namespace std;
teacher Tobject;
void teacher::assignmentadd(){
    string reader;
    fstream writer;
    writer.open("assignment.txt", fstream::in | fstream::out | fstream::app);
cout<<"enter the assignment content- \n" ;
getline(cin.ignore(),reader);
writer<<reader;
cout<<"\n";
writer<<"\n-------------------------------------------------";
cout<<"\n";
writer.close();
cout<<"if you wish to continue press y!";
        cin>>more;
        if(more=="y")
        Tobject.passwordvalidate();
        else {
            cout<<"                   ----------------------\n";
            cout<<"                   |thankyou visit again|\n";
            cout<<"                   ----------------------\n";
        }


}
void teacher::studentadd(){
    fstream writer;
    writer.open("studentadd.txt", fstream::in | fstream::out | fstream::app);
    if(writer.is_open()){
    
    cout<<"enter roll number: ";
    cin>>roll_no;
    cout<<"enter name: ";
    getline(cin.ignore(),name);
    cout<<"enter father's name: ";
    getline(cin,father_name);
    cout<<"enter e-mail: ";
    getline(cin,email);
    writer<<roll_no<<"      "<<name<<"      "<<father_name<<"       "<<email<<"\n";}
    writer.close();
    cout<<"if you wish to continue press y!";
        cin>>more;
        if(more=="y")
        Tobject.passwordvalidate();
        else {
            cout<<"                   ----------------------\n";
            cout<<"                   |thankyou visit again|\n";
            cout<<"                   ----------------------\n";
        }

}
void teacher::marksadd()
{
    float oops,cn,de;
    int roll;
    string name;
    ofstream markswriter;
    markswriter.open("marks.txt",fstream::in | fstream::out | fstream::app);
    cout<<"enter roll number: ";
    cin>>roll;
    cout<<"enter name: ";

    getline(cin.ignore(),name);
    cout<<"please enter marks in OOPS: ";
    cin>>oops;
    cout<<"enter marks in CN: ";
    cin>>cn;
    cout<<"enter marks in DE: ";
    cin>>de;
    markswriter<<"\n"<<name<<"  "<<oops<<"  "<<cn<<"  "<<de<<"  "<<cn+de+oops<<endl;
    markswriter.close();
    cout<<"             if you wish to continue press y!                   ";
        cin>>more;
        if(more=="y")
        Tobject.passwordvalidate();
        else {
            cout<<"                        ----------------------        \n";
            cout<<"                        |thankyou visit again|        \n";
            cout<<"                        ----------------------        \n";
        }
}
void teacher::passwordvalidate(){
    int response;
    
    cout<<"*           please enter your name: ";
    cin>>name;
    cout<<"*           password please: ";
    cin>>password;
    cout<<"\n**************************************************************\n";
    if(password=="t"){
        cout<<"\n";
        cout<<"*           if you wish to enter a new student press 1:    *\n";
        cout<<"*           for new assignment press 2:                    *\n";
        cout<<"*           for entering marks press 3:                    *\n";
        cout<<"*     RESPONSE: ";
        cin>>response;
        if (response==1)
        studentadd();
        else if(response==2)
        assignmentadd();
        else if(response==3)
        marksadd();
        else
        cout<<"not valid\n";
}
    else cout<<"incorrect password\n";
    }
    
