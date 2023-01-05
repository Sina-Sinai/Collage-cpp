#include<iostream>
using namespace std;
int main(){
    int a,b,j=1,n=0;
    cin>>a>>b;
    for(int i=a+1;i<b;i++){
        for(int j=1;j<=i;j++){
            if(i%j==0){
                n++;
            }
        }
        if(n==2){
            cout<<i;
        }
        n = 0;
    }
    
}