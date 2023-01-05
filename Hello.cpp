#include <iostream>
using namespace std;
int main(){
    double a,b,c;
    cin>>a>>b>>c;
    if (int(a*a) == (int(b*b) + int(c*c)))
    {
        cout<<"YES";
    }
    else if (int(b*b) == (int(c*c) + int(a*a)))
    {
        cout<<"YES";
    }
    else if (int(c*c) == (int(a*a) + int(b*b)))
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}