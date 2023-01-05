#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    double max=0,min=-1,a=0,sum=0,i=0.0;
    while(1==1){
       cin>>a;
       if (a != -1){
        if (a<0 || a>100){
            ;
        }else{
            if(min==-1){
                min = a;
            }
            i++;
            if(a>max){
                max = a;
            }else if (a<min){
                min = a;
            }
            sum += a;
        }
       }else{
        break;
       }
    }
    if (min==-1 && max==0 && sum==0){
        cout<<"no percentage is entered!";
    }else{
        cout << fixed << setprecision(2) <<"max: "<<max<<"%"<<endl<<"min: "<<min<<"%"<<endl<<"average: "<<(sum/i)<<"%";
    }
}