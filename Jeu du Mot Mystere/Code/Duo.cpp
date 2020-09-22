#include <string>
#include <iostream>

#include "MelangerString.h"
#include "MENU.h"

using namespace std;


void DUO(string reponse) {

	string msg;

	do {

		cout << "Choissisez un mot Mystere : ";
		cin >> msg;
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n PARTIE COMMENCER !\n-------------------\n";

		if (msg.empty()) {

			cout << "Vous n'avez pas entre de mot !\n";
			cin >> msg;

		}


		if (!msg.empty()) {

			cout << "Devinez Quel est le mot mystere : " << MelangerString(msg) << "\n";
			cin >> reponse;

			while (reponse != msg) {

				cout << "Ce n'est pas le mot ! Reessayer !\n";
				cin >> reponse;

			}

			if (reponse == msg) {

				cout << "\n\nPARTIE FINIE !\n---------------\n\n";
				cout << "Bravo ! Vous Avez Trouver le mot Mystere !\n\n";
				cout << "Voulez vous rejouer ? (entrer oui pour rejouer ou n'importe quel autre mot pour revenir au menu !) : \n";
				cin >> msg;

			}

		}

	} while (msg == "oui");

	if (msg != "oui") {

		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
		MENU();

	}

}