#include <stdlib.h>
#include <iostream>
using namespace std;
int main(){
    long int a;
    int w1=0,w2=0,w3=0,w4=0,w5=0,w6=0,w7=0;
    for(int i = 1;i<=1000;i++){
        a = rand();
        while(a>6){
            a -= 7;
        }
        switch(a){
            case 0:
                cout<<"Saturday"<<"\n";
                w1 += 1;
                break;
            case 1:
                cout<<"Sunday"<<"\n";
                w2 += 1;
                break;
            case 2:
                cout<<"Monday"<<"\n";
                w3 += 1;
                break;
            case 3:
                cout<<"Tuesday"<<"\n";
                w4 += 1;
                break;
            case 4:
                cout<<"Wednesday"<<"\n";
                w5 += 1;
                break;
            case 5:
                cout<<"Thursday"<<"\n";
                w6 += 1;
                break;
            case 6:
                cout<<"Friday"<<"\n";
                w7 += 1;
                break;
        }
    }
    
    cout<<"Saturday: "<<(w1/10.0)<<"%"<<"\n";
    cout<<"Sunday: "<<(w2/10.0)<<"%"<<"\n";
    cout<<"Monday: "<<(w3/10.0)<<"%"<<"\n";
    cout<<"Tuesday: "<<(w4/10.0)<<"%"<<"\n";
    cout<<"Wednesday: "<<(w5/10.0)<<"%"<<"\n";
    cout<<"Thursday: "<<(w6/10.0)<<"%"<<"\n";
    cout<<"Friday: "<<(w7/10.0)<<"%"<<"\n";
    // ---------------------------------------
    // cout<<"Saturday: "<<(w1/5.0)*100<<"%"<<"\n";
    // cout<<"Sunday: "<<(w2/5.0)*100<<"%"<<"\n";
    // cout<<"Monday: "<<(w3/5.0)*100<<"%"<<"\n";
    // cout<<"Tuesday: "<<(w4/5.0)*100<<"%"<<"\n";
    // cout<<"Wednesday: "<<(w5/5.0)*100<<"%"<<"\n";
    // cout<<"Thursday: "<<(w6/5.0)*100<<"%"<<"\n";
    // cout<<"Friday: "<<(w7/5.0)*100<<"%"<<"\n";
    return 0;
}