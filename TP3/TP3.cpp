// TP3.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//notes : 
//return *this retourne la valeur de l'adresse de l'objet courant car en c++ this est une adresse.
#include <iostream>
using namespace std;

class Line {

public:
	void setLength(double length);
	double getLength(void);
	Line(double len); //constructor
	~Line();


private:
	double length;

};


// corps des méthodes de la classe Line
//constructor;
Line::Line(double len) {
	cout << " Object is being created, length = " << len << endl;
	length = len;
}

void Line::setLength(double len) {
	length = len;
}

double Line::getLength(void) {
	return length;
}

//destructor
Line::~Line() {
	cout << "destructor called" << endl;
}


class Rectangle {
private: double longueur, largeur;
public:
	Rectangle(double lon, double larg);
	~Rectangle();
	void setLongueur(double lon);
	double getLongueur(void);
	void setLargeur(double largeur);
	double getLargeur(void);
	double perimetre();
};

Rectangle::Rectangle(double  lon, double larg) {
	longueur = lon;
	largeur = larg;
}

Rectangle::~Rectangle() {
	cout << "destructor called" << endl;
}

void Rectangle::setLongueur(double lon) {
	longueur = lon;
}

double Rectangle::getLongueur() {
	return longueur;
}

void Rectangle::setLargeur(double larg) {
	largeur = larg;
}

double Rectangle::getLargeur() {
	return largeur;
}

double Rectangle::perimetre() {
	return 2 * largeur + 2 * longueur;
}

class Point {
private:
	double x;
	double y;
public :
	//constructors : 
	//vide
	Point();
	//classique
	Point(double x, double y);
	//duplique un objet point dékà existant
	Point(Point& p);
	//destructor
	~Point();
	double getX();
	void setX(double x);
	double getY();
	void setY(double y);
	Point deplace(double dx, double dy);
	void  affiche();
	void saisir();
	double distance(Point &);
	Point milieu(Point &);
};



int main() {
	//testLine
	cout << "====Classe Line====" << endl;
	Line l1(12.4);
	cout << "ligne de longueur : " << l1.getLength() << endl;

	//alloue l'espace pour l'objet l2, dans ce cas il faut appeller le destructeur explicitement.
	Line* l2 = new Line(40.2);
	delete(l2);

	//testRectangle
	cout << "====Classe Rectangle====" << endl;
	Rectangle r(40, 50);
	cout << "le perimetre du rectangle 1 est de : " << r.perimetre() << endl;

	Rectangle *r2 = new Rectangle(60, 80);
	delete(r2);
	return 0;
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
