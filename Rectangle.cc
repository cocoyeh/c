#include <iostream>
using namespace std;

class Rectangle {
private:
	double largeur;
	double longueur;
public:
	void setLargeur(double la) {
		largeur = la;
	}
	void setLongeur(double lo) {
		longueur = lo;
	}
	double surface() const {
		return largeur * longueur;
	}
};

int main() {
	Rectangle rect;
	rect.setLargeur(3);
	rect.setLongeur(4);
	cout << "Surface: " << rect.surface() << endl;
	return 0;
}
