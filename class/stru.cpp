#include <iostream>
using namespace std;

struct Address{
    int dr_no;
    string name;
    string street;
    string city;
    string district;
};

class Information{
    public :
    string s_name;
    int age;
    struct Address address1;
    void input(){
        cout<<"enter name: ";
        cin>>s_name;
        cout<<"enter age: ";
        cin>>age;
        cout<<"enter address.dr_no: ";
        cin>>address1.dr_no;
        cout<<"enter address.name: ";
        cin>>address1.name;
        cout<<"enter address.street: ";
        cin>>address1.street;
        cout<<"enter address.city: ";
        cin>>address1.city;
        cout<<"enter address.distrist: ";
        cin>>address1.district;
    }
    void result(){
        cout<<"the name is: "<<s_name;
        cout<<"The age is: "<<age;
        cout<<"The address is: "<<address1.dr_no<<"; "<<address1.name<<"; "<<address1.street<<"; "<<address1.city<<"; "<<address1.district<<endl;
    }
};

int main(){
    Information i;
    i.input();
    i.result();
    return 0;
}