#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxCandies = maximum(candies);
        vector<bool> tabBool;
        for (size_t i = 0; i < candies.size(); i++)
        {
            /* code */
            if (candies[i] + extraCandies >= maxCandies)
            {
                /* code */
                tabBool.push_back(true);
            }
            else{
                tabBool.push_back(false);
            }    
        }
        return tabBool;
    }

    int maximum(vector<int>& candies){
     int max = 0;
        for (size_t i = 0; i < candies.size(); i++)
        {
            /* code */
           if (candies[i] > max)
           {
            /* code */
            max = candies[i];
           }
        }
        return max;
    }
};

int main() {
    Solution s;
    vector<int> candies = {12,1,12};
    int extraCandies = 10;

    vector<bool> result = s.kidsWithCandies(candies, extraCandies);

    for (bool value : result) {
        cout << value << " ";
    }

    return 0;
}