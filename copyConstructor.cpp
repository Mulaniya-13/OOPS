#include<iostream>
#include<string>
using namespace std;

class Car {
    public:
        string name;
        string color;
        int *mileage;

    Car(string name,string color){
        this->name=name;
        this->color=color;
        mileage=new int;//dynamic allocation
        *mileage=12;
    }
    
    //Custom copy constructor
    Car(Car &original){
        cout<<"Copying old to new..\n";
        name=original.name;
        color=original.color;
        // mileage=original.mileage;//shallow copy 
        mileage=new int;
        *mileage=*original.mileage;
    }
};

int main() {
    Car c1("Maruti 800","White");

    // Car c2(c1); //custom constructor
    // cout<<c2.name<<endl;//Maruti 800
    // cout<<c2.color<<endl;//White

    Car c2(c1);
    cout<<c2.name<<endl;
    cout<<c2.color<<endl;
    cout<<*c2.mileage<<endl;
    *c2.mileage=10;
    cout<<*c1.mileage<<endl;//12
    cout<<*c2.mileage<<endl;//10
    return 0;
}