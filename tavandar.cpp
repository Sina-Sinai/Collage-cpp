#include <iostream>
#include <iomanip>

using namespace std;

long double mypow(long double base, unsigned int exp){
    if (exp == 0){
        return 1;
    }
    return base * mypow(base, exp - 1);
}

int main(){
    long double base;
    unsigned int exp;
    cin>> base;
    cin>> exp;
    long double x = mypow(base, exp);
    cout << fixed << setprecision(3) << x << endl;
}