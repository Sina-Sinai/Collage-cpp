#include <iostream>
#include<iomanip>
using namespace std;
int main(){
    double a,b,res;
    char f;
    // cout<<"Enter the first number: ";
    cin>>a;
        // cout<<"Enter the second number: ";
    cin>>f;
    // cout<<"Enter the function: ";
    cin>>b;
    switch(f){
        case '+':
            res = a + b;
            cout << fixed << setprecision(2) << res;
            break;
        case '-':
            res = a - b;
            cout << fixed << setprecision(2) << res;
            break;
        case '*':
            res = a * b;
            cout << fixed << setprecision(2) << res;
            break;
        case '/':
            res = a / b;
            cout << fixed << setprecision(2) << res;
            break;
        }
}