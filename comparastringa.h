#ifndef COMPARASTRINGA_H_INCLUDED
#define COMPARASTRINGA_H_INCLUDED

void comparastringa(char *a, char *b); //Prototipo funzione tipo void

void comparastringa(char *a, char *b){ //Inizio Funzione tipo void
	int i, cont, len1, len2; //Dichiarazione variabili
	
	for(i = 0; a[i] != 0; i++) //Verifica lunghezza stringa 1
		len1++;
	for(i = 0; b[i] != 0; i++) //Verifica lunghezza stringa 2
		len2++;
	
	if(len1 < len2 && len1 != len2){ //Verifica se la prima stringa è più piccola della seconda
		printf("Le stringhe sono diverse (La prima e' minore della seconda)\n"); //Se vero: Output seguente frase		
	}
	else{ //Se falso
		if(len1 > len2 && len1 != len2){ //Verifica se la prima stringa è più grande della seconda
			printf("Le stringhe sono diverse (La prima e' maggiore della seconda)\n"); //Se vero: Output seguente frase		
		}
	}
	if(len1 == len2){ //Verifica se le strighe hanno lunghezza uguale
		for(i = 0; i < len1; i++){ //Se vero, il programma verifica se le stringhe sono uguali anche nel contenuto
			if(a[i] == b[i]){ //se il carattere è uguale
				cont++; //incrementa cont
			}
		}
		if(cont == len1){ //Se cont è uguale alla lunghezza del vettore
			printf("Le stringhe sono uguali"); //Output frase seguente
		}
		else{ //Se falso
			printf("Le stringhe sono diverse (lunghezza uguale ma contenuto differente)"); //Output frase seguente
		}
	}
}
#endif //Fine funzione
