#include "Decode.h"

int roman_caractere(char in){
	int valeur = 0;

/*	switch ((int)in) {
	case 73: return valeur + 1; //I
	case 86: return valeur + 5; //V
	case 88: return valeur + 10; //X
	case 76: return valeur + 50; //L
	case 67: return valeur + 100; //C
	case 68: return valeur + 500; //D
	case 77: return valeur + 1000; //M
	default : return -1;
	}
*/

	switch (in) {
	case 'I': return valeur + 1; //I
	case 'V': return valeur + 5; //V
	case 'X': return valeur + 10; //X
	case 'L': return valeur + 50; //L
	case 'C': return valeur + 100; //C
	case 'D': return valeur + 500; //D
	case 'M': return valeur + 1000; //M
	default : return -1;
	}

}



int roman_decode(char* in){
	int indice = 1;
	int total =roman_caractere(in[0]);
	for (; in[indice] != '\0' ; indice = indice+1){
		if (roman_caractere(in[indice]) <= roman_caractere(in[indice - 1])) total = total + roman_caractere(in[indice]);
		else total = total - 2*roman_caractere(in[indice-1]) + roman_caractere(in[indice]);
	}
	return total;
}


