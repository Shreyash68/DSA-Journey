#include<iostream>
#include<stack>


using namespace std;

void insertAtBottom(stack<int> &s,int &n){
    //base
    if(s.empty()){
        s.push(n);
        return ;
    }


    int top = s.top();
    s.pop();
    insertAtBottom(s,n);
    s.push(top);

}



int main(){
    stack<int> s;
    int n= 1;
    s.push(2);
    s.push(3);
    s.push(5);
    s.push(7);
    insertAtBottom(s,n);
    // cout<<s.size();
    return 0;
}