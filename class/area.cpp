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
            case 1:{}return 1;

        }       
    }
    int cnons(){
        cout<<" ";
        cin>>side;
        cout<<" ";
        cin>>length;
        cout<<" ";
        cin>>breath;
        cout<<" ";
        cin>>hight;
        cout<<" ";
        cin>>base;
        cout<<" ";
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