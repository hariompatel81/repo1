#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    cout<<"enter two inteager number :"<<endl;
    cin>>n1>>n2;
    char op;
    cout<<"enter any one opretor(+,-,*,/,%) :"<<endl;
    cin>>op;
    switch(op){
        case '+':
        cout<<"addition is :"<<n1+n2<<endl;
        break;
        case '-':
        cout<<"substrection is :"<<n1-n2<<endl;
        break;
        case '*':
        cout<<"product is :"<<n1*n2<<endl;
        break;
        case '/':
        cout<<"division is :"<<n1/n2<<endl;
        break;
        case '%':
        cout<<"modulas is :"<<n1%n2<<endl;
        break;
        default:
        cout<<"enter valid opretor."<<endl;
        return 0;
    }
}