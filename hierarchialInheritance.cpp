#include<iostream>
using namespace std;

class Animal{
public:
    void eat(){
        cout<<"eats\n";
    }
    void breathe(){
        cout<<"breathes\n";
    }
};

class Bird{
public:
    void fly(){
        cout<<"fly";
    }
};

class Fish: public Animal{
public:
    void swim(){
        cout<<"swims\n";
    }
};

class Mammal: public Animal{
public:
    void walk(){
        cout<<"walks\n";
    }
};

int main(){
    Mammal m1;
    m1.walk();
    m1.eat();
    return 0;
}