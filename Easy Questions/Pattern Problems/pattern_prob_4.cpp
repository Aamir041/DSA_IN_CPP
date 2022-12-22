#include<iostream>
using namespace std;

/*

for n = 4
*
* *
* * *
* * * *

*/

int main(){
    int rows;
    cin>>rows;
    int count =1;
    int cols;
    while(rows>0)
    {
        cols=count;
        while(cols>0){
            cout<<"* ";
            cols--;
        }
        cout<<endl;
        count++;
        rows--;
    }
}