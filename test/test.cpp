#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {

        string result = "";
        // ta logique ici
        for(int i = 0; i < word1.size() || i < word2.size(); i++){
            if(i < word1.size()){
                result += word1[i];
            }
            if(i < word2.size()){
                result += word2[i];
            }
        }

        return result;
    }
};

int main() {

    Solution s;

    string word1 = "abc";
    string word2 = "pqr";

    cout << s.mergeAlternately(word1, word2);

    return 0;
}