#include<iostream>
using namespace std;

class Animal{
public:
    void breathe(){
        cout<<"breathes\n";
    }
    void eat(){
        cout<<"eats\n";
    }
};

class Mammal:public Animal{
public:
    string bloodType;
    Mammal(){
        bloodType="Warm";
    }
};

class Dog: public Mammal{
public:
    void tailwag(){
        cout<<"a dog wags its tail\n";
    }
};

int main(){
    Dog d1;
    d1.eat();
    d1.breathe();
    d1.tailwag();
    cout<<d1.bloodType<<endl;
    return 0;
}