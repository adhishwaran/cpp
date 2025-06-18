#include <iostream>
using namespace std;

class Factorial{
    public :
    int number;
    void Facto(){
        cout<<"enter number :  ";
        cin>>number;
    }
    int calculation(int number){
         if (number == 0) return 1;
         if (number == 1)  return 1;
         return number * calculation(number - 1); 
    }
    void Result(){
        cout << "Factorial of " << number << " is " << calculation(number) << endl;
    }
};

int main(){
    Factorial f;
    f.Facto();
    f.Result();
    return 0;
}