#include <iostream>
using namespace std;

int multi(int n,int m){
    if (m==0) return 1;
    return n * multi(m-1,n);
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