#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:

    // Fonction qui trouve le plus grand nombre de bonbons
    int maximum(vector<int>& candies) {

        // IMPORTANT :
        // Au début tu avais :
        // int max = 0;
        //
        // Ça peut fonctionner ici parce que les nombres sont positifs,
        // MAIS en général c'est une mauvaise habitude.
        //
        // Pourquoi ?
        // Si un jour les nombres sont négatifs :
        // [-5, -2, -8]
        //
        // max resterait 0 -> faux résultat.
        //
        // Bonne pratique :
        // commencer avec le premier élément du tableau.

        int max = candies[0];

        // On parcourt tout le vector
        for (size_t i = 0; i < candies.size(); i++)
        {

            // Si l'élément actuel est plus grand que max
            if (candies[i] > max)
            {
                // On met max à jour
                max = candies[i];
            }
        }

        // Une fonction qui retourne un int
        // doit RETURN et non cout.
        return max;
    }

    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {

        // On récupère le maximum grâce à notre fonction
        int maxCandies = maximum(candies);

        // Vector qui contiendra les true/false
        vector<bool> tabBool;

        // On teste chaque enfant
        for (size_t i = 0; i < candies.size(); i++)
        {

            // IMPORTANT :
            // Au début tu faisais :
            //
            // tabBool[i] = true;
            //
            // MAIS le vector était vide.
            //
            // Donc l'index i n'existait pas encore.
            //
            // Solution :
            // push_back ajoute un élément à la fin du vector.

            if (candies[i] + extraCandies >= maxCandies)
            {
                tabBool.push_back(true);
            }
            else
            {
                tabBool.push_back(false);
            }
        }

        // On retourne le vector final
        return tabBool;
    }
};

int main() {

    Solution s;

    vector<int> candies = {2,3,5,1,3};
    int extraCandies = 3;

    // IMPORTANT :
    // La fonction retourne un vector<bool>
    // donc on ne peut PAS faire :
    //
    // cout << s.kidsWithCandies(...)
    //
    // car cout ne sait pas afficher un vector directement.

    vector<bool> result = s.kidsWithCandies(candies, extraCandies);

    // boolalpha permet d'afficher :
    // true false
    // au lieu de :
    // 1 0
    cout << boolalpha;

    // On parcourt le vector pour afficher chaque valeur
    for (bool value : result)
    {
        cout << value << " ";
    }

    return 0;
}