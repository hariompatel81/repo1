# include<iostream>
using namespace std;
int main(){
    //this program is to chek if given alphabet  is vovel or consonent
    char alphabet;
    cout<<"enter one alphabet :"<<endl;
    cin>>alphabet;
    switch(alphabet){
    case 'a':
    cout<<"it is a vovel"<<endl;
    break;
    case 'e':
    cout<<"it is a vovel"<<endl;
    break;
    case 'i':
    cout<<"it is a vovel"<<endl;
    break;
    case 'o':
    cout<<"it is a vovel"<<endl;
    break;
    case 'u':
    cout<<"it is a vovel"<<endl;
    break;
    default:
    cout<<"given cherector is consonent";
    }
}