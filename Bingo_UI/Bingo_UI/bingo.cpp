#include <random>
#include <sstream>
#include <string>
#include <atlstr.h>
#include <string>
using namespace std;
#include "bingo.h"
static bool card_1_tf[25]{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false
};

static bool card_2_tf[25]{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false
};
string used_values[75 * 8];
string used_values_card_1[25];
string used_values_card_2[25];
int generate_rand(int min, int max) {
	random_device rd;     // only used once to initialise (seed) engine
	mt19937 rng(rd());    // random-number engine used (Mersenne-Twister in this case)
	uniform_int_distribution<int> uni(min, max); // guaranteed unbiased
	return uni(rng);
}

namespace std {
	string player_1::card[25];

	int check::bingo() {
		//string plac_t = "true\n";
		//TCHAR tt[50];
		//_tcscpy_s(tt, CA2T(plac_t.c_str()));

		//string plac_f = "false\n";
		//TCHAR ff[50];
		//_tcscpy_s(ff, CA2T(plac_f.c_str()));


		

		for (int i = 0; i < (75 * 8); i++) {
			string placeholder = used_values[i];

			string card_1_matches[25];
			string card_2_matches[25];

			if (used_values[i] == "") {
				break;
			}

			for (int k = 0; k < 25; k++) {
				if (used_values[i] == player_1::card[k]) {
					for (int l = 0; l < 25; l++) {
						if (card_1_matches[l] == "") {
							card_1_matches[l] = player_1::card[k];
							card_1_tf[k] = true;

							//string plac_f = player_1::card[k] + " == " + used_values[i] + "btn: " + to_string(k) + "\n";
							//TCHAR ff[50];
							//_tcscpy_s(ff, CA2T(plac_f.c_str()));

							//OutputDebugString((LPCWSTR)ff);		
							break;
						}						
					}
					break;
				}
				else if (used_values[i] == player_2::card[k]) {
					for (int l = 0; l < 25; l++) {
						if (card_2_matches[l] == "") {
							card_2_matches[l] = player_2::card[k];
							card_2_tf[k] = true;
							//OutputDebugString(L"C2-T\n");
							break;
						}
					}
					break;
				}				
			}		
			
		}

		//colomns card_1
		if (card_1_tf[0] == true && card_1_tf[1] == true && card_1_tf[2] == true && card_1_tf[3] == true && card_1_tf[4] == true) {
			return 1;
		}
		else if (card_1_tf[5] == true && card_1_tf[6] == true && card_1_tf[7] == true && card_1_tf[8] == true && card_1_tf[9] == true) {
			return 1;
		}
		else if (card_1_tf[10] == true && card_1_tf[11] == true && card_1_tf[12] == true && card_1_tf[13] == true && card_1_tf[14] == true) {
			return 1;
		}
		else if (card_1_tf[15] == true && card_1_tf[16] == true && card_1_tf[17] == true && card_1_tf[18] == true && card_1_tf[19] == true) {
			return 1;
		}
		else if (card_1_tf[20] == true && card_1_tf[21] == true && card_1_tf[22] == true && card_1_tf[23] == true && card_1_tf[24] == true) {
			return 1;
		}
		//card_1 rows
		else if (card_1_tf[0] == true && card_1_tf[5] == true && card_1_tf[10] == true && card_1_tf[15] == true && card_1_tf[20] == true) {
			return 1;
		}

		else if (card_1_tf[1] == true && card_1_tf[6] == true && card_1_tf[11] == true && card_1_tf[16] == true && card_1_tf[21] == true) {
			return 1;
		}

		else if (card_1_tf[2] == true && card_1_tf[7] == true && card_1_tf[12] == true && card_1_tf[17] == true && card_1_tf[22] == true) {
			return 1;
		}

		else if (card_1_tf[3] == true && card_1_tf[8] == true && card_1_tf[13] == true && card_1_tf[18] == true && card_1_tf[23] == true) {
			return 1;
		}

		else if (card_1_tf[4] == true && card_1_tf[9] == true && card_1_tf[14] == true && card_1_tf[19] == true && card_1_tf[24] == true) {
			return 1;
		}

		//card_1 diagonals
		//left to right
		else if (card_1_tf[0] == true && card_1_tf[6] == true && card_1_tf[12] == true && card_1_tf[18] == true && card_1_tf[24] == true) {
			return 1;
		}

		else if (card_1_tf[4] == true && card_1_tf[8] == true && card_1_tf[12] == true && card_1_tf[18] == true && card_1_tf[20] == true) {
			return 1;
		}

		// card 2

		//colomns card_2
		else if (card_2_tf[0] == true && card_2_tf[1] == true && card_2_tf[2] == true && card_2_tf[3] == true && card_2_tf[4] == true) {
			return 2;
		}
		else if (card_2_tf[5] == true && card_2_tf[6] == true && card_2_tf[7] == true && card_2_tf[8] == true && card_2_tf[9] == true) {
			return 2;
		}
		else if (card_2_tf[10] == true && card_2_tf[11] == true && card_2_tf[12] == true && card_2_tf[13] == true && card_2_tf[14] == true) {
			return 2;
		}
		else if (card_2_tf[15] == true && card_2_tf[16] == true && card_2_tf[17] == true && card_2_tf[18] == true && card_2_tf[19] == true) {
			return 2;
		}
		else if (card_2_tf[20] == true && card_2_tf[21] == true && card_2_tf[22] == true && card_2_tf[23] == true && card_2_tf[24] == true) {
			return 2;
		}
		//card_2 rows
		else if (card_2_tf[0] == true && card_2_tf[5] == true && card_2_tf[10] == true && card_2_tf[15] == true && card_2_tf[20] == true) {
			return 2;
		}

		else if (card_2_tf[1] == true && card_2_tf[6] == true && card_2_tf[11] == true && card_2_tf[16] == true && card_2_tf[21] == true) {
			return 2;
		}

		else if (card_2_tf[2] == true && card_2_tf[7] == true && card_2_tf[12] == true && card_2_tf[17] == true && card_2_tf[22] == true) {
			return 2;
		}

		else if (card_2_tf[3] == true && card_2_tf[8] == true && card_2_tf[13] == true && card_2_tf[18] == true && card_2_tf[23] == true) {
			return 2;
		}

		else if (card_2_tf[4] == true && card_2_tf[9] == true && card_2_tf[14] == true && card_2_tf[19] == true && card_2_tf[24] == true) {
			return 2;
		}

		//card_2 diagonals
		//left to right
		else if (card_2_tf[0] == true && card_2_tf[6] == true && card_2_tf[12] == true && card_2_tf[18] == true && card_2_tf[24] == true) {
			return 2;
		}

		else if (card_2_tf[4] == true && card_2_tf[8] == true && card_2_tf[12] == true && card_2_tf[18] == true && card_2_tf[20] == true) {
			return 2;
		}
		else {
			return 0;
		}
	}

	void player_1::card_arr_gen() {
		for (int i = 0; i < 25; i++) {
			string placeholder_str = generate::card(1);
			player_1::card[i] = placeholder_str;
		}
	}

	string player_2::card[25];

	void player_2::card_arr_gen() {
		for (int i = 0; i < 25; i++) {
			string placeholder_str = generate::card(2);
			player_2::card[i] = placeholder_str;
		}
	}

	string generate::card(int card_num) {	
		int number = generate_rand(1, 75); //BINGO typically has numbers 1-75 and letters BINGO duhh
		int letter_num = generate_rand(1, 5);
		string letter;
		switch (letter_num) {
		case 1:
			letter = "B " + to_string(number);
			break;

		case 2:
			letter = "I " + to_string(number);
			break;

		case 3:
			letter = "N " + to_string(number);
			break;

		case 4:
			letter = "G " + to_string(number);
			break;

		case 5:
			letter = "O " + to_string(number);
			break;

		default:
			return "ERROR";
		}

		if (card_num == 1) {

			for (int i = 0; i < 25; i++) {
				if (letter == used_values_card_1[i]) {
					return generate::ball(true);
				}
				else if (used_values_card_1[i] == "") {
					used_values_card_1[i] = letter;
					break;
				}
				//string placeholder = used_values_card_1[i] + "\n";
				//TCHAR texts[50];
				//_tcscpy_s(texts, CA2T(placeholder.c_str()));
				//OutputDebugString((LPCWSTR)texts);
			}
		}

		else if (card_num == 2) {
			for (int i = 0; i < 25; i++) {
				if (letter == used_values_card_2[i]) {
					return generate::ball(true);
				}
				else if (used_values_card_2[i] == "") {
					used_values_card_2[i] = letter;
					break;
				}
				//string placeholder = used_values_card_2[i] + "\n";
				//TCHAR texts[50];
				//_tcscpy_s(texts, CA2T(placeholder.c_str()));
				//OutputDebugString((LPCWSTR)texts);
			}
		}
		return letter;		
	};

	string generate::ball(bool card) {
		int number = generate_rand(1, 75); //BINGO typically has numbers 1-75 and letters BINGO duhh
		int letter_num = generate_rand(1, 5);
		string letter;
		switch (letter_num) {
		case 1:
			letter = "B " + to_string(number);
			break;

		case 2:
			letter = "I " + to_string(number);
			break;

		case 3:
			letter = "N " + to_string(number);
			break;

		case 4:
			letter = "G " + to_string(number);
			break;

		case 5:
			letter = "O " + to_string(number);
			break;

		default:
			return "ERROR";
		}

		if (card == false) {
			for (int i = 0; i < 600; i++) {				
				if (letter == used_values[i]) {
					return generate::ball(false);
				}
				else if (used_values[i] == "") {
					used_values[i] = letter;
					break;
				}
				//string placeholder = used_values[i];
				//TCHAR texts[50];
				//_tcscpy_s(texts, CA2T(placeholder.c_str()));
				//OutputDebugString((LPCWSTR)texts);
			}
			
			//OutputDebugString((LPCWSTR)"\n---------\n");
		}
		return letter;
	}	
}