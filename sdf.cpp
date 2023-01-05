#include <iostream>
#include <conio.h> 
#include <cstdlib> 

using namespace std;

int main (){
    char x;
    int i=0,j=0;
    while(1==1){
        for(int k = 0;k<5;k++){
            for (int t=0; t<5; t++){
                if(k==j && t==i){
                    cout<<"O ";
                }else{
                    cout<<"X ";
                }
               
            }
            cout<<endl;
        }
        x = getch();
        system("cls");
        switch(x){
            case 'w':
                j -= 1;
                break;
            case 's':
                j += 1;
                break;
            case 'a':
                i -= 1;
                break;
            case 'd':
                i += 1;
                break;
        }
        // if(x=='w'){
        //     j -= 1;
        // }else if(x=='s'){
        //     j += 1;
        // }else if(x=='a'){
        //     i -= 1;
        // }else if(x=='d'){
        //     i += 1;
        // }
        cout<<i<<endl<<j<<endl<<x<<endl;
        
    }
}