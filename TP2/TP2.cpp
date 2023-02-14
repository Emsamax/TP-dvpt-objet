// TP2.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
using namespace std;

int fct(int r) {
    return 2 * r;
}

int ex4(char p, string str) {
    int nbOcc = 0;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == p) {
            nbOcc++;
        }
    }

    return nbOcc;
}



int main()
{
    int a = 2;
    char b = 'd';
    float c = 7.5;

    int* iptr =(&a);
    char* cptr = (&b);
    float* fptr = (&c);

    cout << "a :" << sizeof(a) << " b :" << sizeof(b) << " c :" << sizeof(c) << endl;
    cout << "iptr :" << sizeof(iptr) << " cptr :" << sizeof(cptr) << " fptr :" << sizeof(fptr) << endl;

    int n, p = 5;

    n = fct(p);
    cout << "p = " << p << " n = " << n << endl;

    char occ;
    cout << "saisir une lettre." << endl;
    cin >> occ;

    cout << "dans le mon bojour il y a " << ex4(occ, "bonjour") << " fois la lettre "<< occ<< endl;


}
 


// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
