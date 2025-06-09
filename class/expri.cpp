#include<iostream>
using namespace std;

class Student{
    public:
    string name;
    int age;
    private:
    float mark;
    float atten;
    protected:
    float fee;
    Student(){
        string name;
        cout<<"enter stu name: ";
        cin>>name;
        int age ;
        cout<< "enter stu age: ";
        cin>>age;
        float mark ,atten ,fee;
        cout<< "enter stu mark: ";
        cin>>mark;
        cout<< "enter stu atten: ";
        cin>>atten;
        cout<< "enter stu fee: ";
        cin>>fee;
    }
    int display(){
        
    }
};