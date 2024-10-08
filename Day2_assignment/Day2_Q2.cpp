#include<iostream>
using namespace std;

class tollbooth
{
    private:
        unsigned int numberOfCars;
        double amount;
    
    public:
        tollbooth(){
            numberOfCars = 0;
            amount = 0;
        }

    void payingCars(){
        numberOfCars++;
        amount+=0.50;
        cout<<"Car Number - "<<numberOfCars<<" Amount - "<<amount<<endl;
    }

    void nopayCar(){
        numberOfCars++;
        cout<<"Car Number - "<<numberOfCars<<" Amount - "<<amount<<endl;
    }

    void printOnConsole(){
        cout<<"Total number of cars - "<<numberOfCars<<endl;
        cout<<"Total amount collected - "<<amount<<endl;
        int nonPayingAmount = numberOfCars*0.50 - amount;
        int nonPayingCars = nonPayingAmount/0.50;
        cout<<"Total number of non paying cars - "<<nonPayingCars<<endl<<endl;
    }

};

int main(){

    tollbooth t;
    while (int choice = 1)
    {
        cout<<"Enter 1 if toll has been paid by the car"<<endl;
        cout<<"Enter 2 if toll has not been paid by the car"<<endl;
        cout<<"Enter 3 to displays the totals"<<endl;
        cout<<"Enter 0 to exit"<<endl;
        cin>>choice;

        switch (choice)
        {
        case 1:
            t.payingCars();
            break;
        case 2:
            t.nopayCar();
            break;
        case 3:
            t.printOnConsole();
            break;
        case 0:
            return 0;
        default:
            break;
        }
    }
}