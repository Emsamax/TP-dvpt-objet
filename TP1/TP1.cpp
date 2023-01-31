// TP1.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <math.h>
#include <vector>
#include <deque>

using namespace std;

vector<int> ex1() {
	vector<int> vector;
	for (int i = 0; i< 100; i++ )
	{
		vector.push_back(rand() % 100 + 1);
	}
	return vector;
}

vector<int> ex2(vector<int> v) {
	int x(v.at(0)), y(v.at(1)), z(v.at(0));
	// on trie x y z avec fmax de la bibliotheque cmath
	int a(fmax(x, fmax(y, z))), b, c;
	c = fmin(x, fmin(y, z));
	b = (x + y + z) - (a + c);
	
	// parcour le vector
	for (int i = 0; i < v.size(); i++) {
		if (v.at(i) > a) {
			c = b;
			b = a;
			a = v.at(i);
		}
	}

	vector<int> res{ a, b, c };
	return res;
}

void afficheV(vector<int> v) {
	for (int entier : v) {
		cout << entier << endl;
	}
}

bool palyndromeVec(string str) {
	//initialisation du vector.
	vector<char> vector;
	for (char c : str) {
		vector.push_back(c);
	}
	//verification d'une lettre avec son symetrique.
	for (int i = 0; i < vector.size(); i++) {
		cout << vector.at(i) << "   " << vector.at((vector.size() - 1) - i) << endl;
		if (vector.at(i) != vector.at((vector.size()- 1) - i)) {
			return false;
		}
	}
	return true;
	
}

bool palyndromeDeq(string str) {
	// initialisation du decque de la gauche vers la droite.
	deque<char> deq;
	for (char c : str) {
		deq.push_back(c);
	}

	while (deq.front() == deq.back()) {
		deq.pop_front();
		if (!deq.empty()) {
			deq.pop_back();
		}
		if (deq.empty()) break;
	}

	if (deq.empty()) {
		return true;
	}
	return false;
}


int main()
{
	cout << "============ exercice 1 ============" << endl;
	afficheV(ex1());
	cout << "============ exercice 2 ============" << endl;
	afficheV(ex2(ex1()));

	string palyndrome;
	cout << "saisir un mot " << endl;
	cin >> palyndrome;

	if (palyndromeVec(palyndrome)) {
		cout << "EST UN PALYNDROME" << endl;
	}else cout << "N'EST PAS UN PALYNDROME" << endl;
	


	if (palyndromeDeq(palyndrome)) {
		cout << "EST UN PALYNDROME" << endl;
	}
	else cout << "N'EST PAS UN PALYNDROME" << endl;

	
	return 0;
}


