#include<iostream>
using namespace std;

/*

for n = 4
1
2 1
3 2 1
4 3 2 1

*/

int main() 
{
    int rows;
    cin>>rows;
    int cols = 1;
    int temp;

    while(rows>0){
        temp = cols;
        while(temp>0){
            cout<<temp<<"  ";
            temp--;
        }
        cout<<endl;
        cols++;
        rows--;
    }
}