// Write a menu driven program for Student in CPP language. Create a class student with data
// members roll no, name and marks. Implement the following functions
// void initStudent();
// void printStudentOnConsole();
// void acceptStudentFromConsole();



#include<iostream>
using namespace std;
class Student
{
    int roll_no;
    string name ;
    int marks;

    public :
    void initStudent()
    {
        roll_no = 01;
        name = "rahul";
        marks = 50;
    }

    void printStudentOnConsole()
    {
        cout<<"roll no - "<<roll_no<<endl;
        cout<<"name - "<<name<<endl;
        cout<<"marks - "<<marks<<endl;
    }

    void acceptStudentFromConsole()
    {
        cout<<"enter details : ";
        cin >> roll_no;
        cin>> name;
        cin>> marks;
    }

};

int menu(Student s1)
{
    int choice = 1;
    while (choice != 0)
    {

        cout<<"0 - exit"<<endl;
        cout<<"1 - initStudent"<<endl;
        cout<<"2 - printStudentOnConsole"<<endl;
        cout<<"3 - acceptStudentFromConsole"<<endl;
        cin>>choice;

        switch (choice)
        {
        case 0:
            return 0;
        case 1:
            s1.initStudent();
            s1.printStudentOnConsole();
            break;
        case 2:
            s1.printStudentOnConsole();
            break;
        case 3:
            s1.acceptStudentFromConsole();
            s1.printStudentOnConsole();
            break;
        }
    
    }
    return 0;
}

int main()
{
    Student s1;
    menu(s1);
    return 0;
}
