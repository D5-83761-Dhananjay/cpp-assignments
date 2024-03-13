#include<iostream>
using namespace std;
struct Date
{
private:
    int day;
    int month;
    int year;
public:
    void intit_Date()
    {
        day = 06;
        month = 02;
        year = 2024;
        cout<<"Date - "<<day<<":"<<month<<":"<<year<<endl;

    }
    void printDateOnConsole()
    {
        cout<<"Date - "<<day<<":"<<month<<":"<<year<<endl;
    }
    void acceptDateFromConsole()
    {
        cout<<"Enter date - ";
        cin>>day>>month>>year;
        cout<<"Date - "<<day<<":"<<month<<":"<<year<<endl;

    }
    bool isLeapYear()
    {
        if(year%4==0)
        {
            return 1;
        }
        else
        return 0;
    }
};

int menu(Date d1)
{
    int choice = 1;
    while (choice != 0)
    {

        cout<<"0 - exit"<<endl;
        cout<<"1 - initialize the date"<<endl;
        cout<<"2 - print Date"<<endl;
        cout<<"3 - accept date"<<endl;
        cout<<"4 - is leap year"<<endl;
        cin>>choice;

        switch (choice)
        {
        case 0:
            return 0;
        case 1:
            d1.intit_Date();
            break;
        case 2:
            d1.printDateOnConsole();
            break;
        case 3:
            d1.acceptDateFromConsole();
            break;
        case 4:
        if (d1.isLeapYear())
        {
            cout<<"this is leap year"<<endl;
        }
        else
        cout<<"this is not leap year"<<endl;
        }
    }
    return 0;
}
int main()
{
    Date d1;
    menu(d1);


    return 0;
}