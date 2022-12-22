#include<iostream>
using namespace std;

int main() {
    int n;
    int m;

    cout<<"Enter number of rows: ";
    cin>>n;

    while(n>0){
        m=5;
        while(m>0){
            cout<<"* ";
            m--;
        }
        cout<<endl;
        
        n--;
    }


}