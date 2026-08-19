#include<iostream>
#include<string>
using namespace std;

class Student{
    string name;
    float cgpa;
public:
   //Properties
   //Methods
   void getPercentage(){
    cout<<(cgpa*10)<<"%"<<endl;
   }
   //setters
   void setName(string NameVal){
    name=NameVal;
   }
   void setcgpa(float cgpaVal){
    cgpa=cgpaVal;
   }
   
   //getters
   string getName(){
    return name;
   }
   float getcgpa(){
    return cgpa;
   }
};

// class User{
// private:
//     int id;
//     float password;
// public:
//     string username;
//     string bio;
//     void deactivate(){
//         cout<<"Deleting account";
//     }
//     void editBio(string newBio){
//         bio=newBio;
//     }
// };

int main(){
    Student s1;//object
    // s1.name="Aashish Mulaniya";
    // cout<<s1.name<<endl;
    // s1.cgpa=9.0;
    // cout<<s1.cgpa<<endl;
    // s1.getPercentage();
    // cout<<sizeof(s1)<<endl;
    s1.setName("Aashish Mulaniya");
    s1.setcgpa(9.21);
    cout<<s1.getName()<<endl;
    cout<<s1.getcgpa()<<endl;
    return 0;
}