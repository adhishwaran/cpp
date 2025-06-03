#include<iostream>
using namespace std;

int display(string name,int ,float ,bool ){}

int main(){
    string name;
    cout<<"enter name: ";
    cin>>name;
    int age;
    cout<<"enter age: ";
    cin>>age;
    float marks;
    cout<<"enter marks: ";
    cin>>marks;
    bool result;
    cout<<"enter result";
    cin>>result;
    display(name,age,marks,result);
    return 1;
}