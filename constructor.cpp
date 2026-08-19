#include<iostream>
using namespace std;

class Car{
    string name;
    string color;
 
public:
    Car(){
        cout<<"Constructor without parameter\n";
    }

    // Car(string nameVal,string colorVal){
    Car(string name,string color){
        cout<<"Constructor with parameter\n";
        // name=nameVal;
        // color=colorVal;

        //this pointer
        this->name=name;
        this->color=color;
    }    

    void start(){
        cout<<"Car has started\n";
    }
    void stop(){
        cout<<"Car has stopped\n";
    }
    
    //getter
    string getName(){
        return name;
    }
    string getColor(){
        return color;
    }
    
};

int main(){
    Car c0;
    Car c1("Maruti Suzuki", "White");
    Car c2("fortuner","Black");
    cout<<"Car name: "<<c1.getName()<<endl;
    return 0;
}