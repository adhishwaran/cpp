#include<iostream>
using namespace std;

int add(int n,int m){ 
    int c = n+m;
    cout<<"the op is: "<<c<<endl;
    return 0;
}

float add(float a,int m){
    float d = a+m;
    cout << "the op is: "<<d<<endl;
    return 1;
}

float add(int n,float b){
    float e = n+b;
    cout <<"the op is: "<< e<<endl;
    return 1;
}

float add(float a,float b){
    float f = a+b;
    cout <<"the op is: "<< f<<endl;
    return 1;
}

int main(){
    int n,m;
    cout<<"enter n: ";
    cin>>n;
    cout<<"enter m: ";
    cin>>m;
    float a,b;
    cout<<"enter a: ";
    cin>>a;
    cout<<"enter b: ";
    cin>>b;
    int c = add(n,m);
    float d = add(a,m);
    float e = add(n,b);
    float f = add(a,b);
    return 0;
}