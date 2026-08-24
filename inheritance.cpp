#include<iostream>
using namespace std;

class Animal{
public:
    int color;
    void breathe(){
        cout<<"breathes\n";
    }
    void eat(){
        cout<<"eats\n";
    }
};

// class Fish:public Animal{
class Fish:protected Animal{
public:
    int fins;
    void swim(){
        eat();
        cout<<"swims\n";
    }
};

int main(){
    Fish f1;
    f1.fins=3;
    cout<<f1.fins<<endl;
    f1.swim();
    //Not inherited outside the class not in main function
    // f1.breathe();
    // f1.eat();
    return 0;
}