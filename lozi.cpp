#include<iostream>
using namespace std;

int main(){
    int a,b,q=1;
    cin>>a;
    b = a;
    for(int i=1; i<=a+1;i++){
        for(int j=1;j<=b;j++){
            cout<<" ";
        }
        b--;
        for(int j=1;j<=q;j++){
            cout<<"*";
        }
        cout<<endl;
        q += 2;
    }

    b = 1;
    for(int i = 1; i<=(a); i++){
        for(int j = 1; j<=b; j++){
            cout<<" ";
        }
        b++;
        for(int t=1; t<=(2*(a-i)+1); t++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
}