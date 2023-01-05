#include <iostream>
using namespace std;


string zirmajmoe(int arr[], int Index, int length){
    if(Index == length){
        return "";
    }
    string result = "";
    for (int i = Index; i < length ; i++) {
        result = " " + to_string(arr[Index]) + " " + zirmajmoe(arr, Index+1, length) + " ";
        return "{" + result + "} ";
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++){
        arr[i] = i+1;
    }
    cout<<zirmajmoe(arr, 0, n);

}