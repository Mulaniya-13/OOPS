#include<iostream>
#include<string>
using namespace std;

class Car {
    public:
        string name;
        string color;

    Car(string name,string color){
        this->name=name;
        this->color=color;
    }
    
    //Custom copy constructor
    Car(Car &original){
        cout<<"Copying old to new..\n";
        name=original.name;
        color=original.color;
    }
};

int main() {
    Car c1("Maruti 800","White");

    Car c2(c1); //custom constructor
    cout<<c2.name<<endl;//Maruti 800
    cout<<c2.color<<endl;//White
    return 0;
}