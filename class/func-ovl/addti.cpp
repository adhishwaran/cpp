#include <iostream>
using namespace std;

class Addtion{
    public:
    int a,b,c;
    float a1,b1,c1;
    void input(){
        cout<<"enter a: ";
        cin>>a;
        cout<<"enter b:";
        cin>>b;
        cout<<"enter c:";
        cin>>c;
        cout<<"enter a1: ";
        cin>>a1;
        cout<<"enter b1:";
        cin>>b1;
        cout<<"enter c1:";
        cin>>c1;
    }

    int addtwo(){
        return a+b;
    }
    float addtwof(){
        return a1+b1;
    }  
    int addthree(){
        return a+b+c;
    }  
    float addthreef(){
        return a1+b1+c1;
    }
};

int main(){
    Addtion x;
    x.input();
    cout<<"the sum is "<<x.addtwo()<<endl;
    cout<<"the sum is "<<x.addtwof()<<endl;
    cout<<"the sum is "<<x.addthree()<<endl;
    cout<<"the sum is "<<x.addthreef()<<endl;
    return 0;
}