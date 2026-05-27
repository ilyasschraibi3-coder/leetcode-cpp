
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int compteur = 0;
        for (size_t i = 0; i < flowerbed.size(); i++)
        {
            bool emptyLeft = (i == 0 || flowerbed[i - 1] == 0);
            bool emptyRight = (flowerbed[i + 1] == 0 || flowerbed.size() - 1 == 0);
            bool currentEmpty = (flowerbed[i] == 0);
            if (emptyLeft && emptyRight && currentEmpty)
            {
                /* code */
                flowerbed[i] = 1;
                compteur++;
            }
        }
        if (compteur >= n)
        {
            /* code */
            return true;
        }
        return false;

    }
};

int main() {

    Solution s;

    vector<int> flowerbed = {1,0,0,0,1};
    int n = 1;
    if (s.canPlaceFlowers(flowerbed,n))
    {
        /* code */
        cout << "true";
    }else{
         cout << "false";
    }

    return 0;
}