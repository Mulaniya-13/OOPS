#include<iostream>
using namespace std;

class Student{
   //Properties
   string name;
   float cgpa;
   //Methods
   void getPercentage(){
    cout<<(cgpa*10)<<"%"<<endl;
   }
};

class User{
    int id;
    string username;
    float password;
    string bio;
    void deactivate(){
        cout<<"Deleting account";
    }
    void editBio(string newBio){
        bio=newBio;
    }
};

int main(){
    Student s1;//object
    cout<<sizeof(s1)<<endl;
    return 0;
}