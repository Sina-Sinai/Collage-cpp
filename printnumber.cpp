#include <iostream>

void printnum (std::string num){
    int l = num.length() ;
    if (l != 0){
        std::cout<<num[0]<<": ";
        for (int j = 0; j < (int)num[0] - 48; j++){
            std::cout<<num[0];
        }
        if ( l != 1){
            std::cout<<std::endl;
        }
        printnum(num.substr(1, l));
    }
}

int main(){
    std::string number;
    std::cin>>number;
    printnum(number);
}