#include <cstdlib>
#include <iostream>
#include <fstream>
#include <ctime>
#include <sstream>
#include "IRClientTCP.h"
#include "DMXTCP.h"

DMXTCP::DMXTCP()
{
	for (int i=0; i < 512; i++) {
		trame[i] = 0;
	}
}

void DMXTCP::ModifierCanal(unsigned short canal, unsigned short valeur)
{
	trame[canal-1] = valeur;
}

void DMXTCP::Envoyer(char IP[16], unsigned short port)
{
		cout << "Attent du serveur ..." << endl;
		monClient.SeConnecterAUnServeur(IP, port);
		cout << "Connecter au serveur :" << IP << endl;
		monClient.Envoyer(trame,512);
		cout << "Trame envoyer avec succes !" << endl;
}

void DMXTCP::FullON()
{
	for (int i=0; i < 512; i++) {
		trame[i] = 255;
	}
}

void DMXTCP::FullOFF()
{
	for (int i=0; i < 512; i++) {
		trame[i] = 0;
	}
}

void DMXTCP::Demonstration()
{
	for (int i=0; i < 512; i++) {
		srand(time(0));
		trame[i] = rand() % 256;
	}
}

