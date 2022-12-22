#include<iostream>
using namespace std;

/*
1 2 3
4 5 6
7 8 9

01 02 03 04 05
06 07 08 09 10
11 12 13 14 15
16 17 18 19 20
21 22 23 24 25
*/

int main()
{
    int n;
    cin>>n;
    int rows = 1;
    int cols;
    int count = 1;

    while(rows <= n){
        cols = n;
        while(cols>0){
            cout<<count<<"  ";
            count++;
            cols--;
        }
        cout<<endl;
        rows++;
    }
}