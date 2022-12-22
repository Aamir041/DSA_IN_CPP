#include<iostream>
using namespace std;

int main() {
    float temp_f;

    cout<<"Enter temprature in Fahrenheit: ";

    cin>>temp_f;

    float temp_c;
    
    temp_c = ((temp_f-32)*(5))/9;

    printf("Temprature in Celsius is: %.2f",temp_c);
}