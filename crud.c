#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
void crud(){
    system("clear");
    setlocale(LC_ALL, "portuguese");
    FILE *arquivo = fopen("palavras.txt","r");
    if (arquivo == NULL){
        printf("Não foi possivel encontrar arquivo de geração ");

    }
    char palavras[50][50];
    int cont=0;
    srand( (unsigned)time(NULL) );


    while(fgets(palavras[cont],50,arquivo) !=NULL){
        cont++;

    }

    int x=rand()%50;
   
    printf("debug 1: %s ",palavras[x]);
    
    fclose(arquivo);
    FILE *palavra_escolhida=fopen("palavra_escolhida.txt","w");
    fprintf(palavra_escolhida,("%s",palavras[x]));
    fclose(palavra_escolhida);
    
}