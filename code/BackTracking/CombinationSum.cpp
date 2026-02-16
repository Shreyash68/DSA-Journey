#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> solve(vector<int> &candidates, int target, int i, vector<int> &ans, vector<vector<int>> &res)
{

    if (target < 0)
    {

        return {};
    }

    if (target == 0)
    {
        // store

        res.push_back(ans);
        return {};
    }

    for (int j = i; j < candidates.size(); j++)
    {
        ans.push_back(candidates[j]);
        solve(candidates, target - candidates[j], j+1, ans, res);
       
        ans.pop_back();
    }

    // target se minus

    // recursion

    // backtracking

    return res;
}

vector<vector<int>> combinationSum(vector<int> &candidates, int target)
{
    vector<vector<int>> res;
    vector<int> ans;

    int j = 0;
    res = solve(candidates, target, 0, ans, res);
    return res;
}

int main()
{
    vector<int> candidates = {10,1,2,7,6,1,5};
    int target = 8;
    sort(candidates.begin(),candidates.end());
    vector<vector<int>> res = combinationSum(candidates, target);
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