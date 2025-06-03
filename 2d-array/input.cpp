#include<iostream>
using namespace std;

int main(){
    int n,m;
    cout<<"enter n: ";
    cin>>n;
    cout<<"entrer m: ";
    cin>>m;
    int arr[n][m];
    cout<<"enter elements: ";
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cout<<' '<<arr[i][j];
        }
    }
}