#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    if(a>b){
        if((a-b)%2==0){
            // for(int i = 1; i<=a; i++){
                for(int j=1; j<=((a-b)/2);j++){
                    for(int t=1; t<=a; t++){
                        cout<<"* ";
                    }
                    cout<<endl;
                }
                // cout<<endl;
                for (int j=1; j<=b; j++){
                    for (int t=1; t<=((a-b)/2); t++){
                        cout<<"* ";
                    }
                    for (int t=1; t<=(a-b); t++){
                        cout<<" ";
                    }
                    cout<<"  ";
                    for (int t=1; t<=((a-b)/2); t++){
                        cout<<"* ";
                    }
                    cout<<endl;
                }
                for(int j=1; j<=((a-b)/2);j++){
                    for(int t=1; t<=a; t++){
                        cout<<"* ";
                    }
                    cout<<endl;
                }
            // }
        }else{
            cout<<"Wrong difference!";
        }
    }else{
        cout<<"Wrong order!";
    }
}