#include <cstdlib>
#include "IRClientTCP.h"

class DMXTCP
{	private :
	unsigned char trame[512];
	IRClientTCP monClient;

	public:
	DMXTCP();
	void ModifierCanal(unsigned short canal, unsigned short valeur);
	void Envoyer(char IP[16], unsigned short port);
	void FullON();
	void FullOFF();
	void Demonstration();
};

