#include<iostream>
#include<string.h>
using namespace std;

class Address{
    private:
        string building;
        string street;
        string city;
        int pinCode;

    public:
    Address(){
        building = "Meghapolis";
        street = "Pune Highway";
        city = "Pune";
        pinCode = 411057;
    }
    void accept(){
        cout<<endl<<"Building - ";
        cin>>building;
        cout<<endl<<"Street - ";
        cin>>street;
        cout<<endl<<"City - ";
        cin>>city;
        cout<<endl<<"Pin Code - ";
        cin>>pinCode;
        
    }

    void display(){

        cout<<endl<<endl<<"Lets print the address :";

        cout<<endl<<"Building - "<<building;
        cout<<endl<<"Street - "<<street;
        cout<<endl<<"City - "<<city;
        cout<<endl<<"Pin Code - "<<pinCode<<endl;
    };

    void getter()const{

        cout<<endl<<endl<<"Lets print the address :";
        cout<<endl<<"Building - "<<building;
        cout<<endl<<"Street - "<<street;
        cout<<endl<<"City - "<<city;
        cout<<endl<<"Pin Code - "<<pinCode<<endl;
    };

     void setter(){
        cout<<endl<<"Building - ";
        cin>>building;
        cout<<endl<<"Street - ";
        cin>>street;
        cout<<endl<<"City - ";
        cin>>city;
        cout<<endl<<"Pin Code - ";
        cin>>pinCode;
        
    }
};

int main(){
    Address a;

    int choice = 1;
    while (choice != 0)
    {
        cout<<endl<<"Enter 1 to accept the address."<<endl;
        cout<<"Enter 2 to set the address."<<endl;
        cout<<"Enter 3 to get the address."<<endl;
        cout<<"Enter 4 to display the address."<<endl;
        cout<<"Enter 0 to exit."<<endl;

        cout<<endl<<"enter your choice :";
        cin>>choice;
        switch (choice)
        {
        case 1:
            a.accept();
            break;

        case 2:
            a.setter();
            break;

        case 3:
            a.getter();
            break;
            
        case 4:
            a.display();
            break;

        case 0:
            break;

        default:
            break;
        }
    }

}