#include <string>
#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>

#include "MelangerString.h"
#include "MENU.h"
#include "ReadLine.h"
#include "GetNumberLineTXT.h"

using namespace std;


string DictionnairePath("../Data/Dictionnaire.txt");
ifstream DictionnaireGet(DictionnairePath);

void SOLO(std::string reponse) {

	string motMystere;

	do {

		srand(time(0));

		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n PARTIE COMMENCER !\n-------------------\n";

		string DictionnairePath("../Data/Dictionnaire.txt");
		ifstream DictionnaireGet(DictionnairePath);

		int NumberLineDictionnaire = GetNumberLineTXT(DictionnaireGet);
		int RandomLineDictionnaire = rand() % NumberLineDictionnaire;
		if (DictionnaireGet) string error = ReadLine(DictionnaireGet, 1); else {

			DictionnaireGet.open(DictionnairePath);
			motMystere = ReadLine(DictionnaireGet, RandomLineDictionnaire);

		}
		DictionnaireGet.open(DictionnairePath);
		motMystere = ReadLine(DictionnaireGet, RandomLineDictionnaire);


		if (!motMystere.empty()) {

			cout << "Devinez Quel est le mot mystere : " << MelangerString(motMystere) << "\n";
			cin >> reponse;

			while (reponse != motMystere) {

				cout << "Ce n'est pas le mot ! Reessayer !\n";
				cin >> reponse;

			}

			if (reponse == motMystere) {

				cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
				cout << "\n\nPARTIE FINIE !\n---------------\n\n";
				cout << "Bravo ! Vous Avez Trouver le mot Mystere !\n\n";
				cout << "Voulez vous rejouer ? (entrer oui pour rejouer ou n'importe quel autre mot pour revenir au menu !) : \n";
				cin >> motMystere;

			}

		}

	} while (motMystere == "oui");

	if (motMystere != "oui") {

		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
		MENU();

	}



}