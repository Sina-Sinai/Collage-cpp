#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int count;
    cin>>count;
    int x[count];
    int max = 0;
    for(int i = 0; i<count; i++){
        cin>>x[i];
    }

    for (int i = 0; i<count; i++){
        for (int j = 0; j<count; j++){
            if ((x[i] - x[j]) > max){
                max = abs(x[i] - x[j]);
            }
        }
    }
    cout<<max;
}