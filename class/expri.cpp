#include<iostream>
using namespace std;

class Student{
    public:
    string name;
    int age;
    int father;
    int mother;
    int sibling;
    void stud(){
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
        cout<<name;
        cout<<age;
        cout<<father;
        cout<<mother;
        cout<<sibling;
        return 0;
    }
};

int main(){
    Student s1;
    s1.stud();
    
    return 0;
}