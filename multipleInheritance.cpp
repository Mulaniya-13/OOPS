#include<iostream>
using namespace std;

class Teacher{
public: 
   int salary;
   string subject;
};

class Student{
public:
   int rollno;
   float cgpa;
};

class TA: public Teacher, public Student{
public:
   string name;
};

int main(){
    TA ta1;
    ta1.name="Aashish Mulaniya";
    ta1.salary=20000;
    ta1.subject="C++";
    ta1.rollno=2023242001;
    ta1.cgpa=7.0;
    cout<<ta1.name<<endl;
    cout<<ta1.salary<<endl;
    cout<< ta1.subject<<endl;
    cout<<ta1.rollno<<endl;
    cout<<ta1.cgpa<<endl;
    return 0;
}