#include<iostream>
using namespace std;

class User{
private:
    int id;
    string password;
public:
    string username;   
    User(int id){
        this->id=id;
    }

    //setter
    void setPass(string password){
        this->password=password;
    }
    //getter
    string getPass(){
        return password;
    }
};

int main(){
    User u1(2023242001);
    u1.username="Aashish Mulaniya";
    u1.setPass("Aa123");
    cout<<u1.username<<endl;
    cout<<u1.getPass()<<endl;
    return 0;
}