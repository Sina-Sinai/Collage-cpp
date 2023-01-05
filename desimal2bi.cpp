#include<iostream>
using namespace std;

int main(){
    long long int a=0,b=0,c=1;
    cin>>a;
    while(a!=0){
        b += (c*(a%2));
        a /= 2;
        c *= 10;
    }
    cout<<b;

}