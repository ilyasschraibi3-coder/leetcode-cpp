#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {

        string result = "";

        // On boucle tant qu'il reste des lettres
        // dans au moins une des deux strings
        for (int i = 0; i < word1.length() || i < word2.length(); i++) {

            // Vérifie si i existe encore dans word1
            if (i < word1.length()) {
                result += word1[i];
            }

            // Vérifie si i existe encore dans word2
            if (i < word2.length()) {
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