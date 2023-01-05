#include <iostream>

using namespace std;

int main(){
    int a,w1=0,w2=0,w3=0,w4=0,w5=0,w6=0,w7=0;
    for (int i = 0;i<1000;i++){
        cin>>a;
        while(a>6){
            a -= 7;
        }
        switch(a){
            case 0:
                cout<<"Saturday";
                w1 += 1;
                break;
            case 1:
                cout<<"Sunday";
                w2 += 1;
                break;
            case 2:
                cout<<"Monday";
                w3 += 1;
                break;
            case 3:
                cout<<"Tuesday";
                w4 += 1;
                break;
            case 4:
                cout<<"Wednesday";
                w5 += 1;
                break;
            case 5:
                cout<<"Thursday";
                w6 += 1;
                break;
            case 6:
                cout<<"Friday";
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
    return 0;
}