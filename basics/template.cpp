#include<iostream>
using namespace std;

template <typename S>  
S add(){
    S a,b;
    cout<<"enter a: ";
    cin>>a;
    cout<<"enter b: ";
    cin>>b;
    S c =  a +  b;
    return c; 
}

template <typename S>
S sub(){
    S a,b;
    cout<<"enter a: ";
    cin>>a;
    cout<<"enter b: ";
    cin>>b;
    S c =  a -  b;
    return c;
}

template <typename S>
S muti(){
    S a,b;
    cout<<"enter a: ";
    cin>>a;
    cout<<"enter b: ";
    cin>>b;
    S c =  a *  b;
    return c;
}

template <typename S>
S divid(){
    S a,b;
    cout<<"enter a: ";
    cin>>a;
    cout<<"enter b: ";
    cin>>b;
    try{
        if(b==0){
            throw runtime_error("Denominator is zero");
        }
        S c =  a /  b;
        cout<<"result is: "<<c<<endl;
        return c;
    }
    catch(runtime_error &msg){
        cout<< "Exception: " << msg.what();
        return 0;
    }    
}

int main(){
    char x;
    cout<<"enter x op is +,-,*,/ : ";
    cin>>x;
    switch (x){
        case '+':{
            float o = add<float>();
            cout<<o;
            break;
        }
        case '-':{
            float p = sub<float>();
            cout<<p;
            break;
        }
        case '*':{
            float i = muti<float>();
            cout<<i;
            break;
        }
        case '/':{
            float u = divid<float>();
            if(u!=0){
                cout<<u;
            }
            break;
        }
        default : cout<<"invalid operator given";
    }   
    return 0; 
}