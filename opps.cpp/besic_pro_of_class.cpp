#include<iostream>
using namespace std;
class som{
    
    int name ;
    public:
    int age;
    double cgpa;
    int helth;

    void hungri(){
        cout<<"hariom"<<endl;
    }

    int gethelth(){
        return helth;
    }

    char getname(){
        return name;
    }

    void sethelth(int  h){
        helth = h;
    }

    void setname(int name){
        name = name;
    }

};

int main(){
    som s1;
    // s1.name = 's';
    s1.age =22;
    s1.cgpa = 7.8;

    cout<<"name is: "<< s1.setname(2) <<endl;
    cout<<"name is: "<< s1.getname() <<endl;
    cout<<"age is :"<<s1.age<<endl;
    cout<<"cgpa is :"<<s1.cgpa<<endl;
    s1.hungri();
    s1.gethelth();


}