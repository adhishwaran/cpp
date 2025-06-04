#include <iostream>
using namespace std;

int multi(int n,int m){
    if (n==0) return 1;
    return m * multi(n-1,m);
}

int main(){
    int n,m;
    cout<<"enter n: ";
    cin>>n;
    cout<<"enter m: ";
    cin>>m;
    if (n==m){cout<<multi(n,n);}
    else {cout<<multi(n,m);}
    return 0;
}