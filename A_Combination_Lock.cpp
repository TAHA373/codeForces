// #include <iostream>
// #include <vector>

// using namespace std;

// int main()
// {
//     int n, num;
//     cin >> n;
//     vector <int> v1;
//       vector <int> v2;
//     int i = 0;
//     num = 0;
//     int num2 = 0;
//     int count = 0;
//    // Lire l'entrée pour v1
//    i = -1;
//     while(++i < n) 
//     {
//         int num;
//         cin >> num;
//         v1.push_back(num); // Ajouter chaque nombre à v1
//     }
//     i = -1;
//     // Lire l'entrée pour v2
//     while (++i < n) {
//         int num;
//         cin >> num;
//         v2.push_back(num); // Ajouter chaque nombre à v2
//     }

//     i = -1;
//     while (++i < n)
//     {
//         num = abs(v1[i] - v2[i]);
//         if (num > 5)
//             {
//                 num2 = 10 - num;
//               //  cout <<  "{"<< num2 << "}";
//                 count += num2 ;
//             }
//         else
//             count += num;
//         num = 0;
//        // cout << count << endl;
//     }
//    cout << count << endl;
    
// }

#include <iostream>
#include <vector>
#include <cmath> // Pour la fonction abs
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n; // Lire le nombre d'éléments
    string s1,s2;
    cin >> s1 >> s2;
    vector<int> v1; // Vecteur pour le premier ensemble de nombres
    vector<int> v2; // Vecteur pour le second ensemble de nombres

    // Lire l'entrée pour v1
    for (int i = 0; i < n; i++) {
        v1.push_back(s1[i]); // Ajouter chaque nombre à v1
    }

    // Lire l'entrée pour v2
    for (int i = 0; i < n; i++) {
        v2.push_back(s2[i]); // Ajouter chaque nombre à v2
    }

    int count = 0;

    // Parcourir les deux vecteurs pour calculer le total
    for (int i = 0; i < n; i++) {
        int num = abs(v1[i] - v2[i]); // Calculer la différence absolue
        if (num > 5) {
            count += (10 - num); // Ajuster le total si la différence est supérieure à 5
        } else {
            count += num; // Sinon, ajouter simplement la différence
        }
    }

    cout << count << endl; // Afficher le total final

    return 0;
}
