#include <iostream>
using namespace std;

int main(){
    int n, m;
    cin>>n;
    char arr[n];
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    cin>>m;
    int counter = 0;
    bool did = false; 
    for (int i = 0; i < n; i++){
        for (int t = 0; t < i; t++){
            if (arr[t] == arr[i]){
                did = true;
            }
        }
        if (!did){
            for (int j = i+1; j < n; j++){
                if (arr[i] == arr[j]){
                    counter++;
                }
            }
            if (counter == m){
                cout<<arr[i];
            }
            did = false;
            counter = 0;
        }
        
    }
}