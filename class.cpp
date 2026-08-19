#include<iostream>
using namespace std;

class Student{
public:
   //Properties
   string name;
   float cgpa;
   //Methods
   void getPercentage(){
    cout<<(cgpa*10)<<"%"<<endl;
   }
};

class User{
private:
    int id;
    float password;
public:
    string username;
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
    s1.name="Aashish Mulaniya";
    cout<<s1.name<<endl;
    s1.cgpa=9.0;
    cout<<s1.cgpa<<endl;
    s1.getPercentage();
    cout<<sizeof(s1)<<endl;
    return 0;
}