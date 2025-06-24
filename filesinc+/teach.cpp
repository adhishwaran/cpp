#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream fout("teach.txt"); 
    fout<<"hello world ! ";
    fout.close();
    ifstream fin("teach.txt");
    string line;
    getline(fin,line);
    cout<<line;
    fin.close();
    return 0;
}