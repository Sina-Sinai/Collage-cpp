#include <iostream>
#include <string>
using namespace std;

int m;

string latex(int n, int i){
    int j = 2 * i;
    // cout<<i<<endl<<j;
    int k = j + 1;
    int t = 2 * k;
    int y = t + 1;
    if (n == 1){
        return "1";
    }
    if (i < n){
        return to_string(i) + "+\\frac{" + to_string(j) + latex(n, j) + "}{";
    }
    return "";
}

int main(){
    cin>>m;
    cout<<latex(m , 1);
}