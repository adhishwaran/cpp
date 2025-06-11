#include <iostream>
using namespace std;

class Assignment{
    public:
    int n;
    int arr[100];
    void Assign(){
        cout<<"enter n: ";
        cin>>n;
        cout<<"enter: ";
        for (int i=0;i<n;i++){
            cout<<"enter: ";
            cin>>arr[i];
        };
    }
    int avg(){
        int tot = 0;
        for (int i = 0;i<n;i++){
            tot += arr[i];
        }
        int avg = tot/n;
        return avg;
    }
};

int main(){
    Assignment s1;
    s1.Assign();
    cout<<"Average is: "<<s1.avg();
    return 0;
}