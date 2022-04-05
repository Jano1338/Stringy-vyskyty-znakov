#include <iostream>
#include <string>


using namespace std;

int main() {

	string Veta = "Mas rad 2 pomarance ?";
	string samohlasky = "aeiouyAEIOUY";
	string spoluhlasky = "bcdfghjklmnpqrstvwxzBCDFGGJKLMNPQRSTVWXZ";
	string cisla = "0123456789";
	string znaky = " ";

	cout << "Povodna Veta: " << Veta << endl;
	int pocitadlosamohlasky = 0;

	for (int i = 0; i < Veta.length(); i++) {

		if (samohlasky.find(Veta[i]) < samohlasky.length()) {
			pocitadlosamohlasky++;
		}
	}
	cout << "Pocet samohlasok: " << pocitadlosamohlasky << endl;

	int pocitadlospoluhlasky = 0;

	for (int j = 0; j < Veta.length(); j++) {

		if (spoluhlasky.find(Veta[j]) < spoluhlasky.length()) {
			pocitadlospoluhlasky++;
		}
	}
	cout << "Pocet spoluhlasok: " << pocitadlospoluhlasky << endl;

	int pocitadlocisla = 0;

	for (int k = 0; k < Veta.length(); k++) {

		if (cisla.find(Veta[k]) < cisla.length()) {
			pocitadlocisla++;
		}
	}
	cout << "Pocet cisiel: " << pocitadlocisla << endl;

	int pocitadloznaky = 0;

	for (int l = 0; l < Veta.length(); l++) {

		if (znaky.find(Veta[l]) < znaky.length()) {
			pocitadloznaky++;
		}
	}
	cout << "Pocet znakov: " << pocitadloznaky << endl;


	return 0;
}