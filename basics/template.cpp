#include<iostream>
using namespace std;

template <typename S>  
float add(){
    S a,b;
    cout<<"enter a: ";
    cin>>a;
    cout<<"enter b: ";
    cin>>b;
    S c =  a +  b;
    return c; 
}

template <typename S>
float sub(){
    S a,b;
    cout<<"enter a: ";
    cin>>a;
    cout<<"enter b: ";
    cin>>b;
    S c =  a -  b;
    return c;
}

template <typename S>
float muti(){
    S a,b;
    cout<<"enter a: ";
    cin>>a;
    cout<<"enter b: ";
    cin>>b;
    S c =  a *  b;
    return c;
}

template <typename S>
float divid(){
    S a,b;
    cout<<"enter a: ";
    cin>>a;
    cout<<"enter b: ";
    cin>>b;
    try{
        cout<<divid()<<endl;
    }
    catch(const char*msg){
        cout<<"exception"<<msg<<endl;
    }
    S c =  a /  b;
    cout<<"result is: "<<c<<endl;
    return c;
}

int main(){
    char x;
    cout<<"enter x op is +,-,*,/ : ";
    cin>>x;
    switch (x){
        case '+':{
            int o = add<float>();
            cout<<o;
            break;
        }
        case '-':{
            int p = sub<float>();
            cout<<p;
            break;
        }
        case '*':{
            int i = muti<float>();
            cout<<i;
            break;
        }
        case '/':{
            int u = divid<float>();
            cout<<u;
            break;
        }
        default : cout<<"invalid operator given";
    }   
    return 0; 
}