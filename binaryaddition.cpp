#include<iostream>
#include<math.h>
using namespace std;

static int bitodec(int num){
    long long power = 1,n1 = 0, res=0;
    while (num != 0){
        n1 = num % 10;
        res += n1 * (2 * power);
        power *= 2;
        num /= 10;
    }
    return res;
}

static int dectobi(int num){
    long long int b=0,c=1;
    while(num!=0){
        b += (c*(num%2));
        num /= 2;
        c *= 10;
    }
    return b;
}

static int intlength(int n){
    unsigned int number_of_digits = 0;
    do {
        ++number_of_digits; 
        n /= 10;
    } while (n);
    return number_of_digits;
}

int main(){
    int num1,num2,res;
    // cin>>num1>>num2;
    num1 = 00101010;
    num2 = 00001100;
    num1 = bitodec(num1);
    num2 = bitodec(num2);
    res = num1 + num2;
    res = dectobi(res);
    if ((pow(2, intlength(res))) - 1 <= 8){
        cout<<res;
    }else{
        cout<<"overflow";
    }
    // cout<<intlength(80000);
}

