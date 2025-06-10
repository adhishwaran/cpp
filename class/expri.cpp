#include<iostream>
using namespace std;

class Student{
    public:
    string name;
    int age;
    string father;
    string mother;
    int sibling;
    void stud(){
        cout<<"enter your name: ";
        cin>>name;
        cout<< "enter stu age: ";
        cin>>age;
        cout<<"enter your father name: ";
        cin>>father;
        cout<<"enter your mother name: ";
        cin>>mother;
        cout<<"enter no of sibling: ";
        cin>>sibling;
    }
    int display(){
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<father<<endl;
        cout<<mother<<endl;
        cout<<sibling<<endl;
        return 0;
    }
};

int main(){
    Student s1;
    s1.stud();
    s1.display();
    return 0;
}