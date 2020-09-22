#include <string>
#include <iostream>

#include "Duo.h"
#include "Solo.h"

using namespace std;

string msgPlayer;


void MENU() {

	do {

		if (msgPlayer != "DUO" && msgPlayer != "SOLO" && msgPlayer != "") {

			cout << "ERREUR : REPONSE INVALIDE !\n\n";
			cin >> msgPlayer;

		}

		cout << " MENU :\n------- \n\nchoissisez le mode de jeu (SOLO / DUO) : ";
		cin >> msgPlayer;

		if (msgPlayer == "DUO") DUO(msgPlayer);
		if (msgPlayer == "SOLO") SOLO(msgPlayer);

	} while (msgPlayer != "DUO" && msgPlayer != "SOLO");

}