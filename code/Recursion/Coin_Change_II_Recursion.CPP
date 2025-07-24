#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    int solve(vector<int> &coins, int index, int amount, int money )
    {
        if (money > amount || index >= coins.size())
        {
            return 0;
        }
        if (money == amount)
        {
            return 1;
        }
       

       
        
        int current_include = solve(coins, index, amount, money + coins[index]);
       
       

        
        int current_exclude = solve(coins, index + 1, amount, money);
       

        return current_include + current_exclude;
    }

    int change(int amount, vector<int> &coins)
    {
       
        int money = 0;
        
        return solve(coins, 0, amount, money);
    }
};

int main()
{

    Solution s;
    vector<int> vec = {1, 2, 5};
    cout << s.change(5, vec);

    return 0;
}