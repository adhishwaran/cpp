#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"give the year to check: ";
    cin>>n;
    if (n%4==0){cout<<"it is leap year";}
    else{cout<<"it is not a leap year";} 
    return 0;
}