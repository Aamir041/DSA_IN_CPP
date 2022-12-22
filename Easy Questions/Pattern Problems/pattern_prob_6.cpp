#include<iostream>
using namespace std;

/*

for n = 4
1
2 2
3 3 3
4 4 4 4

*/

int main()
{
    int n;
    int rows = 1;
    int cols;
    cin>>n;

    int count = 1;
    int iterator;

    while(rows <= n){
        iterator = count;

        while(iterator>0){
            cout<<count<<"  ";
            iterator--;
        }
        cout<<endl;
        count++;
        rows++;

    }
}