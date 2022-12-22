#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter number : ";
    cin >> num;

    int i = 2;

    int identifier = 0;

    while (i <= 10)
    {

        if (num != i)
        {
            if (num % i == 0)
            {
                identifier = 1;
                break;
            }
            
        }
        i++;
    }

        if (identifier == 0)
        {
            cout << "Number is a prime number" << endl;
            
        }
        else
        {
            cout << "Number is not a prime number" << endl;
        }
}