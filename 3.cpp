#include <iostream>
using namespace std;
int main(){
    int a,n1=0,n2=0,n3=0,n4=0;
    cin>>a;
    n1 = a % 10;
    a /= 10;
    n2 = a % 10;
    a /= 10;
    n3 = a % 10;
    a /= 10;
    n4 = a;
    if ((n4==n1 && n2==n3) || (n3==n1 && n4==0) || (n1==n2 && n3==0 && n4==0) || (n2==0 && n3==0 && n4==0)){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    
}