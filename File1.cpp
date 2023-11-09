#include <iostream>
#include <fstream>
#include <ctime>
#include <sstream>
#include "IRClientTCP.h"
#include "DMXTCP.h"
#include<windows.h>

using namespace std;

int main()
{
	IRClientTCP monClient;
	DMXTCP Dmx;
	unsigned char trame[512];
	int pan;
	int choice;
	int channelchoice;
	while (1){
		cout << "MANUEL (1), FULLON(2), FULLOFF(3), DEMO(4)" << endl;
		cin >> choice;

		if (choice == 1) {
			cout << "Saisir le cannal (0/512):" << endl;
			cin >> channelchoice;
			cout << "Saisir une valeur :" << endl;
			cin >> pan;
			Dmx.ModifierCanal(pan, channelchoice);

			cout << "Deuxieme effet" << endl;
			cout << "Saisir le cannal (0/512):" << endl;
			cin >> channelchoice;
			cout << "Saisir une valeur :" << endl;
			cin >> pan;
			Dmx.ModifierCanal(pan, channelchoice);
			
			Dmx.Envoyer("172.20.21.17", 4123);	
		}
		if (choice == 2) {
			Dmx.FullON();
			Dmx.Envoyer("172.20.21.17", 4123);
		}
		if (choice == 3) {
			Dmx.FullOFF();
			Dmx.Envoyer("172.20.21.17", 4123);
		}
		if (choice == 4) {
			while (1) {
				Dmx.Demonstration();
				Dmx.Envoyer("172.20.21.17", 4123);
				Sleep(1000);
			}
		}

		/*
		// Ne veut pas marcher pour quelconque raison
		switch ( choice ) {
			case '1':
				cout << "Saisir le cannal (0/512):" << endl;
				cin >> channelchoice;
				cout << "Saisir une valeur :" << endl;
				cin >> pan;
				Dmx.ModifierCanal(pan, channelchoice);
				Dmx.Envoyer("172.20.21.17", 4123);
				break;
			case '2':
				Dmx.FullON();
				Dmx.Envoyer("172.20.21.17", 4123);
				break;
			case '3':
				Dmx.FullOFF();
				Dmx.Envoyer("172.20.21.17", 4123);
				break;
			case '4':
				Dmx.Demonstration();
				Dmx.Envoyer("172.20.21.17", 4123);
				break;
			default:
				cout << "Aucun mode selectionner" << endl;
		}
		*/


		// Cot�e TCP
		/*
		cout << "Attent du serveur ..." << endl;
		monClient.SeConnecterAUnServeur("172.20.21.17", 4123);
		monClient.Envoyer(trame,512);
		cout << "Envoyer avec succes !" << endl;
		*/
	}
}
