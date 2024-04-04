#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include<locale.h>
#include<stdbool.h>
int vida=4;
char nomeJogador[50];
bool status_pato;
void patoVivo (){
	
	
		printf("    ____\n");
    printf("   /    \\ \n");
    printf("__/______\\__ \n");
    printf(" *  0    *\n");
    printf("*        *\n");
    printf(" **      *\n");
    printf("   *     *\n");
    printf("   *     *\n");
    printf("   *     *\n");
    printf("  *      *\n");
    printf(" *        *   *\n");
    printf(" *         ****\n");
    printf(" *            *\n");
    printf(" *           *\n");
    printf("  *         *\n");
    printf("   *       *\n");
    printf("    *******\n");
    printf("     | | \n");
    printf("     | | \n");
    printf("    / /\n");
 
}
void patoDeSchrodinger(int vidas){
	setlocale(LC_ALL,"portuguese");
	if (vidas==4){
		patoVivo();
	}
	if(vidas==3){
		
	printf("    ____\n");
    printf("   /    \\ \n");
    printf("__/______\\__ \n");
    printf(" *  0    *\n");
    printf("*    °   *\n");
    printf(" **      *\n");
    printf("   *     *\n");
    printf("   *     *\n");
    printf("   *     *\n");
    printf("  *      *\n");
    printf(" *        *   *\n");
    printf(" *         ****\n");
    printf(" *            *\n");
    printf(" *           *\n");
    printf("  *         *\n");
    printf("   *       *\n");
    printf("    *******\n");
    printf("     | | \n");
    printf("     | | \n");
    printf("    / /\n");
    
    printf("O senhor pato se sente angustiado, mas ele acredita em voce! %s\n", nomeJogador);
    system("pause");
	}
	
	if(vidas==2){
		
	printf("    ____\n");
    printf("   /    \\ \n");
    printf("__/______\\__ \n");
    printf(" *  Q    *\n");
    printf("*   ,    *  __________|\\ \n");
    printf(" **      *  \\_________|=======o \n");
    printf("   *     *            |/ \n");
    printf("   *     *\n");
    printf("   *     *\n");
    printf("  *      *\n");
    printf(" *        *   *\n");
    printf(" *         ****\n");
    printf(" *            *\n");
    printf(" *           *\n");
    printf("  *         *\n");
    printf("   *       *\n");
    printf("    ******\n");
    printf("     | | \n");
	printf("     | | \n");
    printf("    / /\n\n");
    
    printf("O senhor pato te observa com um olhar melacolico \n");
    system("pause");
	}
	
	if(vidas==1){
		   
	 printf("    ____\n");
    printf("   /    \\ \n");
    printf("__/______\\__ \n");
    printf(" *  #    *\n");
    printf("*   '    *__________|\\ \n");
    printf(" **      *\\_________|=======o \n");
    printf("   *     *          |/ \n");
    printf("   *     *\n");
    printf("   *     *\n");
    printf("  *      *\n");
    printf(" *        *   *\n");
    printf(" *         ****\n");
    printf(" *            *\n");
    printf(" *           *\n");
    printf("  *         *\n");
    printf("   *       *\n");
    printf("    ******\n");
    printf("     | | \n");
	printf("     | | \n");
    printf("    / /\n\n");
    
    printf("O senhor pato sente a fria lamina na espada encostando em seu pescoço, ele fecha os olhos. Talvez com a esperança da nao sentir dor\n");
    system("pause");
	}
}

void patoMorto(){
	setlocale(LC_ALL,"portuguese");
	
    printf("  *      *   |___   \n");
    printf(" *  X    *   |   \\ \n");
    printf("*        *   |___/   \n");
    printf(" **      *   |      \n");
    printf("   *____*        \n \n");
    
    printf("__________|\\ \n");
    printf("\\_________|=======o \n");
    printf("          |/ \n\n"); 
    
    printf("    _____\n");
    printf("   *     *\n");
    printf("   *     *\n");
    printf("  *      *\n");
    printf(" *        *   *\n");
    printf(" *         ****\n");
    printf(" *            *\n");
    printf(" *           *\n");
    printf("  *         *\n");
    printf("   *       *\n");
    printf("    ******\n");
    printf("     | | \n");
	printf("     | | \n");
    printf("    / /\n\n");
    
}



void cabecalho(){
	
	setlocale(LC_ALL,"portuguese");
	
	printf("\t\t\t        ____\n ");
	printf("\t\t\t     __/____\\__                   \n ");
	printf("\t\t\t********************\t \n");
	printf("\t\t\t*  SALVE O PATO    *\t \n");
	printf("\t\t\t********************\t \n\n");
}
    
void patoFeliz(){
	
	setlocale(LC_ALL,"portuguese");
	
		printf("    ____\n");
    	printf("   /    \\ \n");
    	printf("__/______\\__ \n");
    	printf(" *  <    *\n");
    	printf("*  ~     *\n");
    	printf(" **      *\n");
    	printf("   *     *\n");
    	printf("   *     *\n");
    	printf("   *     *\n");
    	printf("  *      *\n");
    	printf(" *        *   *\n");
    	printf(" *         ****\n");
    	printf(" *            *\n");
  		printf(" *           *\n");
    	printf("  *         *\n");
  		printf("   *       *\n");
 		printf("    *******\n");
  		printf("     | | \n");
   		printf("     | | \n");
		printf("    / /\n");
		
		system("pause");
		system("cls");
		
		printf("O Pato quer te dar algo especial!\n");
		system("pause\n");
		system("cls");
		
		printf("   *   ____      \n");
    	printf("      /    \\   * \n");
    	printf("*  __/______\\__   * \n");
    	
    	system("pause\n");
		system("cls");    	
    	
    
    	printf("    *****\n");
    	printf("   *     *\n");
    	printf(" *  <    *\n");
    	printf("*  ~     *\n");
    	printf(" **      *\n");
    	printf("   *     *\n");
    	printf("   *     *\n");
    	printf("   *     *\n");
    	printf("  *      *\n");
    	printf(" *        *   *\n");
    	printf(" *         ****\n");
    	printf(" *            *\n");
  		printf(" *           *\n");
    	printf("  *         *\n");
  		printf("   *       *\n");
 		printf("    *******\n");
  		printf("     | | \n");
   		printf("     | | \n");
		printf("    / /\n\n");
		
		printf("O Pato disse: \n O chapeu ficou otimo em voce!!\n");
		system("pause\n");
		abort();
		
}

void apresentacao(){
	
	setlocale(LC_ALL,"portuguese");
	
	printf("Insira seu nome: \n");
	gets(nomeJogador);
	
	system("cls");
	
	printf("Bem vindo, %s!!!", nomeJogador);
	printf("Esse e o seu amigo senhor pato\n");
	patoVivo ();
	system("pause");
	system("cls");
	printf("O senhor pato e muito curioso, e por causa dessa curiosidade ele acabou encrencado...\n");
	system("pause");
	system("cls");
	printf("Acerte a palavra para salvar seu amigo :)\n");
	system("pause");
	system("cls");
	printf("NAO FALHE!!!\n");
	system("pause");
	system("cls");	
	
}

void patoMortoEpilogo(){
	
	int chuvaPatos=0;
	setlocale(LC_ALL,"portuguese");
	
	system("pause");
	system("cls");
	printf("Voce falhou em salvar o senhor pato...\n");
	system("pause");
	system("cls");
	printf("Como voce se sente?\n");
	system("pause");
	system("cls");
	printf("Nao precisa ficar triste, nos podemos jogar de novo!!!\n");
	system("pause");
	system("cls");
	printf("O senhor pato? EU nao posso trazer ele de volta, mas posso criar um novo para voce!\n");
	system("pause");
	system("cls");
	patoVivo();
	printf("Esta feliz, nos podemos fazer isso PARA TODO O SEMPRE!\n");
	system("pause");
	system("cls");
	for(chuvaPatos=0;chuvaPatos<314159265359;chuvaPatos++){
	patoVivo();	
	}
	
}