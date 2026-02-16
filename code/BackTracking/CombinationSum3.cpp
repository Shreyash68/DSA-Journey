#include<iostream>
#include<vector>
#include<bits/stdc++.h> 

using namespace std;


vector<vector<int>> solve(int target,int k, int i, vector<int> &ans, vector<vector<int>> &res)
{

    if (target < 0)
    {

        return {};
    }

    if (target == 0 && k==0)
    {
        // store

        res.push_back(ans);
        return {};
    }

    

    // target se minus
    while(i<10 && (target)>=i && k!=0){ 
        ans.push_back(i);
        solve(target-i,k-1,i+1,ans,res);
        ans.pop_back();
        i++;
    }
    // recursion

    // backtracking

    return res;
}

vector<vector<int>> combinationSum(int k, int n)
{
    vector<vector<int>> res;
    vector<int> ans;

    int j = 0;
    res = solve(n,k, 1, ans, res);
    return res;
}

int main()
{
    int k=4;
    int n = 1;
    
    vector<vector<int>> res = combinationSum(k, n);
    for (auto vec : res)
    {
        for (auto val : vec)
        {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}