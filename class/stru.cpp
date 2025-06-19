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
        cout<<"enter address: ";
        cin>>address1;
   }
};
