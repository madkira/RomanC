#include "Decode.h"

int roman_decode(char* in) {
	int valeur = 0;

	switch ((int)in[1]) {
        case 73: valeur = 1;
       	case 86: valeur = 5;
        case 88: valeur = 10;
       	case 76: valeur = 50;
       	case 67: valeur = 100;
       	case 68: valeur = 500;
       	case 77: valeur = 1000;
	}


	switch ((int)in[0]) {
	case 73: return valeur + 1;
	case 86: return valeur + 5;
	case 88: return valeur + 10;
	case 76: return valeur + 50;
	case 67: return valeur + 100;
	case 68: return valeur + 500;
	case 77: return valeur + 1000;
	default : return -1;
	}

}
