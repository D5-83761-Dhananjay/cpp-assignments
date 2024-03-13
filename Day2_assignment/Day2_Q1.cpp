#include<iostream>
using namespace std;

class BoxVolume
{
private:
    int lenght;
    int breadth;
    int width;
    
public:
    BoxVolume(){
        lenght = 1;
        breadth = 1;
        width = 1;
    };

    void acceptValue(){
        cout<<"Enter the lenght, breadth and width : "<<endl;
        cin>>lenght>>breadth>>width;
    }

    ~BoxVolume();
};

int main(){
    BoxVolume B;

}
