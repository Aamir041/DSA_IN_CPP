#include<iostream>
using namespace std;

/*
1 2 3 4
1 2 3 4
1 2 3 4
*/

int main(){
    int rows;
    cin>>rows;
    int i;
    int count;

    while(rows>0){
        i=4;
        count=1;
        while(i>0){
            cout<<count<<" ";
            count++;
            i--;
        }
        cout<<endl;
        rows--;
    }
}