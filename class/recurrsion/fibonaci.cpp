#include <iostream>
using namespace std;

class fibonaci{
    public :
    int number;
    void input(){
        cout<<"enter number :";
        cin>>number;
    }
    int calculation(int number){
        if (number==0) return 0;
        if (number==1) return 1;
        return calculation(number-1) + calculation(number-2);
    }
    void Result(){
        cout << "Fibonaci of " << number << " is " << calculation(number) << endl;
    }
};

int main(){
    fibonaci f;
    f.input();
    f.Result();
    return 0;
}