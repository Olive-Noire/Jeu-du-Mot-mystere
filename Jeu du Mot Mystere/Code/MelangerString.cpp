#include <string>
#include <ctime>
#include <cstdlib>

#include "MelangerString.h"

using namespace std;

std::string MelangerString(std::string mot) {

	srand(time(0));

	string result;

	while (mot.size() > 0) {

		int randomLetter = rand() % mot.size();
		result += mot[randomLetter];
		mot.erase(randomLetter, 1);

	}

	return result;

}