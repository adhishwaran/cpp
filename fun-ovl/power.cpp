#include <iostream>
using namespace std;

int multi(int bas,int exp){
    if (exp==0) return 1;
    return bas * multi(bas,exp-1);
}

float multi(float base,int exp){
    if (exp==0) return 1;
    return base * multi(base,exp-1);
}

float multi(int bas,float expo){
    if (expo==0) return 1;
    if (expo <0) return 1;
    return bas * multi(bas,expo-1);
}

float multi(float base,float expo){
    if (expo==0) return 1;
    if (expo< 0) return 1;
    return base * multi(base,expo-1);
}

int main(){
    int bas,exp;
    cout<<"enter bas: ";
    cin>>bas;
    cout<<"enter exp: ";
    cin>>exp;
    float base,expo;
    cout<<"enter base: ";
    cin>>base;
    cout<<"enter expo: ";
    cin>>expo;
    int w = multi(bas,exp);
    cout<<"the ans is: "<<w<<endl;
    float x = multi(bas,expo);
    cout << "the ans is: "<<x<<endl;
    float y = multi(base,exp);
    cout <<"the ans is: "<<y<<endl;
    float z = multi(base,expo);
    cout<<"the ans is: "<<z;
    return 1;
}