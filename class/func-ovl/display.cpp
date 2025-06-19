#include <iostream>
using namespace std;

class Random {
public:
    string name;
    int age;
    float salary;

    void input() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter salary: ";
        cin >> salary;
    }

    
    void input(string n) {
        name = n;
        age = 0;
        salary = 0.0;
    }

   
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Salary: " << salary << endl;
    }

    
    void display(string dummy) {
        cout << "Name: " << name << endl;
    }
};

int main() {
    Random r1, r2;

    cout << "Using full input() " << endl;
    r1.input();        
    r1.display();      

    cout << " Using overloaded input(string) " << endl;
    r2.input("Alice"); 
    r2.display("only"); 

    return 0;
}