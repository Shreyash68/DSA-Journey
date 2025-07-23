#include<iostream>

using namespace std;

int arr[5]={1,2,3,4,5};

// printing only by single parameter "size"

void print(int arr[],int size){
    if(size==0){
        cout<<arr[size]<<endl;
        return ;
    }
    
    print(arr,size-1);
    cout<<arr[size]<<endl;
    return;
}

int main(){
    print(arr,4);
    return 0;
}