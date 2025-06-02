#include<iostream>
using namespace std;

int add(){
    int a,b;
    cout<<"enter a : ";
    cin>>a;
    cout<<"enter b : ";
    cin>>b;
    int c = a+b;
    cout<<c;
    return 1;
}

int sub(){
    int a,b;
    cout<<"enter a : ";
    cin>>a;
    cout<<"enter b : ";
    cin>>b;
    int c = a-b;
    cout<<c;
    return 1;
}

int mul(){
    int a,b;
    cout<<"enter a : ";
    cin>>a;
    cout<<"enter b : ";
    cin>>b;
    int c = a*b;
    cout<<c;
    return 1;
}

int div(){
    int a,b;
    cout<<"enter a : ";
    cin>>a;
    cout<<"enter b : ";
    cin>>b;
    int c = a/b;
    cout<<c;
    return 1;
}

int main(){
    char x;
    cout<<"enter op(+,-,*,/): ";
    cin>>x;
    switch (x) {
        case '+':{add();}break;
        case '-':{sub();}break;
        case '*':{mul();}break;
        case '/':{div();}break;
    }
    return 1;
}