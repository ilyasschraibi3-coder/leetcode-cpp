#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    string gcdOfStrings(string str1, string str2) {

        // 1. On cherche la plus grande taille possible pour le candidat.
        // Exemple : str1 taille 6, str2 taille 4 -> tailles possibles : 2, 1
        int pgcd = 0;

        for (int i = min(str1.length(), str2.length()); i > 0; i--) {

            // On veut que i divise parfaitement les deux tailles.
            // Exemple : 6 % 2 == 0 et 4 % 2 == 0
            if (str1.length() % i == 0 && str2.length() % i == 0) {
                pgcd = i;
                break; // comme on descend, le premier trouvé est le plus grand
            }
        }

        // 2. On prend les pgcd premiers caractères de str1.
        // Exemple : "ABABAB", pgcd = 2 -> "AB"
        string candidate = str1.substr(0, pgcd);

        // 3. On vérifie si candidate reconstruit str1.
        string test = "";

        for (int i = 0; i < str1.length() / pgcd; i++) {
            test += candidate;
        }

        bool dividesStr1 = (test == str1);

        // 4. On vide test avant de tester str2.
        test = "";

        // 5. On vérifie si candidate reconstruit str2.
        for (int i = 0; i < str2.length() / pgcd; i++) {
            test += candidate;
        }

        bool dividesStr2 = (test == str2);

        // 6. Si candidate divise les deux strings, on le retourne.
        if (dividesStr1 && dividesStr2) {
            return candidate;
        }

        // 7. Sinon, il n’y a pas de diviseur commun.
        return "";
    }
};

int main() {
    Solution s;

    string str1 = "AAAAAB";
    string str2 = "AAA";

    cout << s.gcdOfStrings(str1, str2);

    return 0;
}