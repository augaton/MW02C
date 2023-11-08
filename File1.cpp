#include <iostream>
#include <fstream>
#include <ctime>
#include <sstream>
#include "IRClientTCP.h"

using namespace std;

int main()
{
	IRClientTCP monClient;
	unsigned char trame[512];
	int pan;
	int choice;
	while (1){
		cout << "Saisir le cannal (0/512):" << endl;
		cin >> choice;
		cout << "Saisir une valeur dans la trame choisis:" << endl;
		cin >> pan;

		trame[choice] = pan;

		cout << "Attent du serveur ..." << endl;
		monClient.SeConnecterAUnServeur("172.20.21.17", 4123);
		monClient.Envoyer(trame,512);
		cout << "Envoyer avec succes !" << endl;
	}
}
