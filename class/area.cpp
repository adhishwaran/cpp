#include<iostream>
using namespace std;

class Areaofshapes{
    public:
    int side,length,breath,hight,base,radius;
    void Area(){
        cout<<"enter side: ";
        cin>>side;
        cout<<"enter length: ";
        cin>>length;
        cout<<"enter breath: ";
        cin>>breath;
        cout<<"enter hight: ";
        cin>>hight;
        cout<<"enter base: ";
        cin>>base;
        cout<<"enter radius: ";
        cin>>radius;
    }
    int constan(){
        int x;
        cout<<"enter x: ";
        cin>>x;
        switch(x){
            case 1:{
                int c = side*side;
                cout<<"The area of square is : "<<c<<endl;
                return 1;
            }
            case 2:{
                int c = length * breath;
                cout<<"the area of rectangle is : "<<c<<endl;
                return 1;
            }
            case 3:{
                float s = 3.14*(radius*radius);
                cout<<"the area of circle is : "<<s<<endl;
                return 1;
            }
            case 4 :{
                float t = 0.5*base*hight;
                cout<<"the area of triangle is : "<<t<<endl;
                return 1;
            }
            default: {
                cout << "Invalid option selected!" << endl;
                return 0;
            }
        }  
    }
};

int main(){
    Areaofshapes s1;
    s1.Area();
    s1.constan();
    return 0;
}