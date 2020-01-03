#include"home.h"
#include<iostream>
#include"teacher.h"
#include<string>
#include<fstream>
using namespace std;
void home::option(int choice){
if(choice==1)
{   cout<<"*                         ---------------------                       *\n";
    cout<<"*                         | welcome teacher!  |                       *\n";
    cout<<"*                         ---------------------                       *\n";
    Tobject.passwordvalidate();
    }
else if(choice==2)
{   cout<<"*                         ----------------------                      *\n";
    cout<<"*                         | student, welcome!  |                      *\n";
    cout<<"*                         ----------------------                      *\n";
    Sobject.passwordvalidate();

}
else cout<<"not a valid choice \n";
}
