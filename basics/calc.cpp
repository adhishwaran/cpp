#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"enter a: ";
    cin>>a;
    int b;
    cout<<"enter b: ";
    cin>>b;
    char op;
    cout<<"chose an operator (+,-,*,/)";
    cin>>op;
    switch (op){
        case '+':{
            int c = a+b;
            cout<<c;
            break;
        }
        case '-':{
            int c = a-b;
            cout<<c;
            break;
        }
        case '*':{
            int c = a*b;
            cout<<c;
            break;
        }
        case '/':{
            int c = a/b;
            cout<<c;
            break;
        }
        default:{
            int c = a+b;
            cout<<c;
        }
    }
    return 1;
}