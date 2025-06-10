#include<iostream>
using namespace std;

class Student{
    public:
    string name;
    int age;
    private:
    int father;
    int mother;
    protected:
    int sibling;
    Student(){
        string name;
        cout<<"enter your name: ";
        cin>>name;
        int age ;
        cout<< "enter stu age: ";
        cin>>age;
        int father , mother;
        cout<<"enter your father name: ";
        cin>>father;
        cout<<"enter your mother name: ";
        cin>>mother;
        int sibling;
        cout<<"enter no of sibling: ";
        cin>>sibling;
    }
    int display(){
        
    }
};