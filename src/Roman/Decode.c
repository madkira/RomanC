#include "Decode.h"

int roman_caractere(char in){
	int valeur = 0;

	switch (in) {
	case 'I': return valeur + 1;
	case 'V': return valeur + 5; 
	case 'X': return valeur + 10; 
	case 'L': return valeur + 50; 
	case 'C': return valeur + 100; 
	case 'D': return valeur + 500; 
	case 'M': return valeur + 1000;
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


