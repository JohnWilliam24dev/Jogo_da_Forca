#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "pato.c"
#include "crud.c"


int main() {
    apresentacao();
	char palavraSecreta[100], palavraExibida[100], letraDigitada;
	int quantidadeCaracter, i, x, quantidadeErros = 0, vidas=4;
	
	crud();
    
    FILE *file=fopen("palavra_escolhida.txt","r");
    fgets(palavraSecreta,20,file);
    printf("%s",palavraSecreta);

	
	quantidadeCaracter = strlen(palavraSecreta)-1;
	strcpy(palavraExibida, palavraSecreta);
	system("cls");
	
	printf("A palavra Secreta possui %d letras: ", quantidadeCaracter);
	for(i = 0; i < quantidadeCaracter; i++) {
		palavraExibida[i] = '_';
	}
	printf("\nAdvinhe a palavra: ");
	do {
		int palavraErrada = 1;
		
		printf("\n\nDigite uma letra:\n-->");
		scanf(" %c", &letraDigitada);
		
		for(i = 0; i < quantidadeCaracter; i++) {
			if(letraDigitada == palavraSecreta[i]) {
				palavraExibida[i] = letraDigitada;
				palavraErrada = 0;
			} 	
		}
		
		if(palavraErrada == 1) {
			quantidadeErros++;
			vidas--;
		} 
		system("cls");
		patoDeSchrodinger(vidas);
		printf("\n\nPalavra Exibida = %s", palavraExibida);	
		
		if(strcmp(palavraExibida, palavraSecreta)==0) {
			system("cls");
			patoFeliz();
			
			
		} else if(quantidadeErros == 4) {
			system("cls");
			patoMorto();
			patoMortoEpilogo();
		}	

	} while(quantidadeErros < 4);
	
	system("pause");
	return 0;		
}