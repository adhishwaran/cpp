#include<iostream>
using namespace std;

class Areaofshapes{
    public:
    int side,length,breath,hight,base,radius;
    void Area(){
        int x;
        cout<<"enter x: ";
        cin>>x;
        switch(x){
            case 1:{
                int c = side*side;
                cout<<"The area of square is : "<<c;
            }
            case 2:{
                int c = length * breath;
                cout<<"the area of rectangle is : "<<c;
            }
            case 3:{
                float s = 3.14*(radius*radius);
                cout<<"the area of circle is : "<<s;
            }
            case 4 :{
                float t = 0.5*base*hight;
                cout<<"the area of triangle is : "<<t;
            }
        }       
    }
    int cnons(){
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
        return 0;
    }
};

int main(){
    Areaofshapes s1;
    s1.Area();
    s1.cnons();
    return 0;
}