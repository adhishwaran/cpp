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
    int r,c;
    cout<<"enter .. ro.no:";
    cin>>r;
    cout<<"enter co.no:";
    cin>>c;
    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            cout<<arr[i][j];
        }
    }
    return 0;
}