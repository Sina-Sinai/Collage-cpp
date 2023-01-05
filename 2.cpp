#include<iostream>
using namespace std;
int main(){
    int g,s;
    cin>>g>>s;
    if (s>=0 && s<20){
        if (g == 1){
            cout<<"Dande Doroste!";
        }
        if (g > 1){
            cout<<"Dande Kam Kon!";
        }
    }
    if (s>=20 && s<50){
        if (g == 2){
            cout<<"Dande Doroste!";
        }
        if (g > 2){
            cout<<"Dande Kam Kon!";
        }
        if (g < 2){
            cout<<"Dande Bede!";
        }
    }
    if (s>=50 && s<70){
        if (g == 3){
            cout<<"Dande Doroste!";
        }
        if (g > 3){
            cout<<"Dande Kam Kon!";
        }
        if (g < 3){
            cout<<"Dande Bede!";
        }
    }
    if (s>=70 && s<90){
        if (g == 4){
            cout<<"Dande Doroste!";
        }
        if (g > 4){
            cout<<"Dande Kam Kon!";
        }
        if (g < 4){
            cout<<"Dande Bede!";
        }
    }
    if (s>=90){
        if (g == 5){
            cout<<"Dande Doroste!";
        }
        if (g < 5){
            cout<<"Dande Bede!";
        }
    }

    
}