#include<iostream>


using namespace std;

void printDigits(int num){
    if(num==0){
        return;
    }

    int digit=num%10;
    num=num/10;

    printDigits(num);
    cout<<digit<<endl;
}

int main(){

    printDigits(123);

    return 0 ;
}