#include <iostream>
using namespace std;

int searchele(int arr[],int n,int ind,int m){
    if(arr[ind]==m) return ind+1;
    else return searchele(arr,n,ind+1,m);
    return 0;
}

int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int m;
    cout<<"enter m: ";
    cin>>m;
    
    int x = searchele(arr,n,0,m);
    cout<<"the ele is found "<< x;
    return 0;
}