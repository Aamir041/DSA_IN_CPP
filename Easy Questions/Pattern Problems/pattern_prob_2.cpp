#include<iostream>
using namespace std;
/*
1 1 1 1
2 2 2 2
3 3 3 3
4 4 4 4
*/

int main(){
    int n;
    cin>>n;
    int i;
    int count = 1;
    while(n>0){
        i=4;
        while(i>0){
            cout<<count<<" ";
            i--;
        }
        cout<<endl;
        n--;
        count++;
    }
}