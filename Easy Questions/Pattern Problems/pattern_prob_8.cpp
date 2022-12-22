#include<iostream>
using namespace std;

/*

for n = 5
1 2 3 4 5 5 4 3 2 1
1 2 3 4 * * 4 3 2 1
1 2 3 * * * * 3 2 1
1 2 * * * * * * 2 1
1 * * * * * * * * 1

* *
*/

int main()
{
    int n;
    cin>>n;

    int right_numbers;

    int num_stars = 0;
    int j;

    int left_numbers;

    while(n>0){
        right_numbers = 1;

        // print right side
        while(right_numbers<=n){
            cout<<right_numbers<<" ";
            right_numbers++;
        }

        // printing stars
        j=num_stars;
        while(j>0){
            cout<<"*"<<" ";
            j--;
        }
        num_stars = num_stars + 2;

        // printing left side
        left_numbers = n;
        while(left_numbers>0){
            cout<<left_numbers<<" ";
            left_numbers--;
        }
        cout<<endl;
        n--;

    }


}