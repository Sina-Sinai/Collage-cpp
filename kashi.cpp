#include <iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    for(int i = 1;i<=a;i++){
        for (int j = 1;j<=b;j++){
            if(i%2==1){
                if(j%2==1){
                cout<<"X";
                }else{
                    cout<<"O";
                }
            }else{
                if(j%2==1){
                cout<<"O";
            }else{
                cout<<"X";
            }
            }
        }
        cout<<endl;
    }
}