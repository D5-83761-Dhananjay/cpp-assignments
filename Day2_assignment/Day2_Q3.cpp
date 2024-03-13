#include <iostream>
#include <string.h>
using namespace std;

namespace NStudent{

class Student{
    private:
        int roll_No;
        string name;
        int marks;

    public:
        void initStudent(){
            roll_No = 01;
            name = "Ajay";
            marks = 2000;
        }

        void printStudentOnConsolee(){
            cout<<"Student details : "<<roll_No<<endl<<"/"<<name<<endl<<"/"<<marks<<endl<<endl;
        }

        void acceptStudentFromConsole(){
            cout<<"Enter the roll number"<<endl;
            cin>>roll_No>>name>>marks;
        }

};
}

using namespace NStudent;
int main()
{
	Student d1;


    int choice = 1;
    while (choice != 0)
    {
        cout<<endl<<"Enter 1 to intialise the date."<<endl;
        cout<<"Enter 2 to accept the date from console."<<endl;
        cout<<"Enter 3 to print the date on concole."<<endl;
        cout<<"Enter 0 to exit."<<endl;

        cout<<endl<<"enter your choice :";
        cin>>choice;
        switch (choice)
        {
        case 1:
            d1.initStudent();
            d1.printStudentOnConsolee();
            break;

        case 2:
            d1.acceptStudentFromConsole();
            d1.printStudentOnConsolee();
            break;

        case 3:
            d1.printStudentOnConsolee();
            break;

        case 0:
            break;

        default:
            break;
        }
    }
    
	return 0;
}
