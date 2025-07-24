#include<iostream>
#include<string>

using namespace std;

class Solution {
public:
   

    int solve(string& str,char x,int index){
        if(index < 0) return -1;
       
        int ans = solve(str,x,index-1);
        
        

        if(str[index]==x){
            return index;
        }
        return ans;
    }

    int lastIndex(string str, char x) {
        
        return solve(str,x,str.length()-1);
    }
};