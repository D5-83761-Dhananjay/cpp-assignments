
#include<stdio.h>
#include<iostream>
using namespace std;
struct Date
{
    int day;
    int month;
    int year;
};
void initDate(struct Date* ptrDate)
{
    ptrDate->day = 1;
    ptrDate->month = 2;
    ptrDate->year = 2024;
}

void printDateOnConsole(struct Date* ptrDate)
{
    printf("Date - %d/%d/%d",ptrDate->day,ptrDate->month,ptrDate->year);
}

void acceptDateFromConsole(struct Date* ptrDate)
{
    printf("enter date - ");
    scanf("%d%d%d",&ptrDate->day,&ptrDate->month,&ptrDate->year);
}

int menu(struct Date*d1)
{
    int choice = 1;
    while (choice != 0)
    {

        cout<<endl<<"0 - exit"<<endl;
        cout<<"1 - initialize the date"<<endl;
        cout<<"2 - print Date"<<endl;
        cout<<"3 - accept date"<<endl;
        cin>>choice;

        switch (choice)
        {
        case 0:
            return 0;
        case 1:
            initDate(d1);
            printDateOnConsole(d1);
            break;
        case 2:
            printDateOnConsole(d1);
            break;
        case 3:
            acceptDateFromConsole(d1);
            printDateOnConsole(d1);
            break;
        }
    }
    return 0;
}

int main()
{
    struct Date d1;
    menu(&d1);
    return 0;
}