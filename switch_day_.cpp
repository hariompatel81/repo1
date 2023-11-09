#include<iostream>
using namespace std;
int main(){
    int day;
    //1-monday, 2-tuesday,..............,7-sunday.
    cout<<"enter number between 1-7 :";
    cin>>day;
    switch(day){
    case 1:
    cout<<"monday"<<endl;
    break;
    case 2:
    cout<<"tuesday"<<endl;
    break;
    case 3:
    cout<<"wednesday"<<endl;
    break;
    case 4:
    cout<<"thasdy"<<endl;
    break;
    case 5:
    cout<<"friday"<<endl;
    break;
    case 6:
    cout<<"sturday"<<endl;
    break;
    case 7:
    cout<<"sunday"<<endl;
    break;
    default:
    cout<<"not a valid day"<<endl;
    return 0;
    }
}