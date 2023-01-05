#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int counter = 0;
    int height[n];
    for(int i = 0; i < n; i++){
        cin>>height[i];
    }
    for (int i = 0; i < (n/2.0); i++){
        if (height[i] < height[i+1]){
            counter++;
        }else{
            counter--;
        }
        // cout<<counter<<endl;
    }
    if(abs(counter) == (n/2)){
        for (int i = (n/2); i < n; i++){
            if (height[i] < height[i+1]){
                counter++;
            }else{
                counter--;
            }
            // cout<<counter<<endl;
        }
        if (counter == n){
            cout<<"Yes";
        }
        else{
            cout<<"No";
        }
    }else{
        cout<<"No";
    }
    
}