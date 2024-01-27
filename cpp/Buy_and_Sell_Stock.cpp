#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int diff = 0, profit = 0, min = INT_MAX;
        for (unsigned int i = 0; i < prices.size(); i++)
        {
            if (prices[i] < min)
            {
                min = prices[i];
            }
            profit = prices[i] - min;
            if (profit > diff)
            {
                diff = profit;
            }      
        }
        return (diff);
    }
};

int main() {
    Solution s;
    vector<int> prices = {2,1,2,0,1};
    cout << s.maxProfit(prices);
}
