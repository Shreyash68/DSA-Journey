#include<iostream>
#include<string>

using namespace std;



string solve(int i,int n,int &k,string &s){
        
        
        if(i>=n){
            k--;
            if(k==0){
                cout<<s;
                return s;
            }
        }
        
        
        for(int j=i;j<n;j++){
        swap(s[i],s[j]);
        string res = solve(i+1,n,k,s);
        if(res!="") return res;
        swap(s[i],s[j]);
        }
        return "";
    }


string getPermutation(int n, int k) {
        string s="";

        for(int i=1;i<=n;i++){
            
            s=s+to_string(i);
        }

        return solve(0,n,k,s);
}

int main(){
    getPermutation(3,3);
    return 0;
}