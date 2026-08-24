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

class Fish:public Animal{
public:
    int fins;
    void swim(){
        cout<<"swims\n";
    }
};

int main(){
    Fish f1;
    f1.eat();
    f1.swim();
    f1.breathe();
    return 0;
}