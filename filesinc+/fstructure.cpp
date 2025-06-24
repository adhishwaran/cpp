#include<iostream>
#include<fstream>
using namespace std;

struct Fstructure{
    string name;
    int age;
    float mark;
};

int main(){
    ofstream fout("fstructure.txt");
    struct Fstructure structure1;
    cout<<"enter the required: ";
    cin>>structure1.name;
    cin>>structure1.age;
    cin>>structure1.mark;
    fout<<structure1.name<<" "<<structure1.age<<' '<<structure1.mark<<' ';
    fout.close();
    ifstream fin("fstructure.txt");
    string line;
    getline(fin,line);
    cout<<line;
    fin.close();
    return 0;
}