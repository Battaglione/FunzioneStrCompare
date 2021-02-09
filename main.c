#include <stdio.h>
#include <stdlib.h>
#include "comparastringa.h" //Inclusione del file comparatringa.h
int main() {
	char x[80], y[80]; //Dichiarazione stringhe
	printf("Inserire la prima stringa: "); //Output frase seguente
	gets(x); //Input stringa
	printf("Inserire la seconda stringa: "); //Output frase seguente
	gets(y); //Input stringa
	comparastringa(x,y); //Chiamata a comparatringa.h (passaggio 2 stringhe a funzione)
	system("pause"); //Premere un tasto per continuare
	return 0; //Fine
}
