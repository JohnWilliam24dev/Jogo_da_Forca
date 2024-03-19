#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
char *crud(){
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

    int x=rand()%30;
    char *palavra_escolhida=palavras[x];
    ///printf("%s debug 1",palavras[x]);
  
    fclose(arquivo);

    return (palavra_escolhida);
}
int main(){
    system("clear");
    char *Palavra_sorteada;
    Palavra_sorteada=crud();
    printf(" debug 2 %s",Palavra_sorteada);
}