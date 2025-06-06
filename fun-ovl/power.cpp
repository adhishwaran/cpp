#include <iostream>
using namespace std;

inline int multi(int n,int m){
    if (m==0) return 1;
    return n * multi(n,m-1);
}

int main(){
    int n,m;
    cout<<"enter n: ";
    cin>>n;
    cout<<"enter m: ";
    cin>>m;
    if (n==m){cout<<multi(n,n);}
    else {cout<<multi(n,m);}
    return 1;
}