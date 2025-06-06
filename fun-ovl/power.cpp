#include <iostream>
using namespace std;

int multi(int bas,int exp){
    if (exp==0) return 1;
    return bas * multi(bas,exp-1);
}

// int multi(float base,int exp){
//     if (base==0) return 1;
//     return exp * multi(base,exp-1);
// }

// int multi(int bas,float expo){
//     if (bas==0) return 1;
//     return expo * multi(bas,expo-1);
// }

int multi(float base,float expo){
    if (base==0) return 1;
    return expo * multi(base,expo-1);
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
    int x = multi(bas,exp);
    cout<<"the ans is: "<<x;
    int y = multi(base,expo);
    cout<<"the ans is: "<<y;
    return 1;
}