#include <iostream>
#include <cstdlib>

/* Definicoes, funcao para desenhar o mapa */
 #define CHAO 0
 #define PAREDE 1
 #define ENTRADA 3
 #define SAIDA 4
 
 /* Definições tratamento de erros*/
 #define OK 1
 #define ERRO 2
 
 int    col_atual = 0,
    	lin_atual = 0;
    	
    	
/* O Mapa */
	int labirinto [10] [20] = {
	
0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,1,0,0,1,1,1,1,1,1,1,0,0,1,1,1,1,1,1,0,
0,1,0,0,1,0,0,0,0,1,0,0,0,0,1,0,0,0,1,0,
0,1,0,0,1,0,0,0,0,1,1,1,1,1,1,0,0,0,1,0,
0,1,0,1,1,1,1,0,0,0,0,0,1,0,0,0,1,0,1,0,
0,1,0,1,0,0,1,0,0,1,0,0,1,1,1,1,1,0,1,0,
0,1,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,1,0,
0,1,0,0,0,0,1,0,0,1,0,0,0,1,1,1,1,1,1,0,
0,1,1,1,1,1,1,1,1,1,0,0,0,1,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,4,0,0,0,0,0,0,


};
	
	
	
	/* Funcao para desenhar o Mapa */
	int desenhar_mapa()
 {
 	int lin,col;
 	for (lin=0;lin<10;lin++) {
       for (col=0;col<20;col++) {
          if ((lin == lin_atual) && (col == col_atual)) {
             printf(" ");
             continue;
          }
          if (labirinto[lin][col] == CHAO)
             printf("#");
          if (labirinto[lin][col] == PAREDE)
             printf(" ");
          if (labirinto[lin][col] == ENTRADA)
	      printf("E");
          if (labirinto[lin][col] == SAIDA)
	     printf("S");
    
		}
       printf("\n");
    }
    return OK;
 }      
			

int main()
{
	printf("\n L A B I R I N T O \n");
	
	
	desenhar_mapa();
	
	getchar();
       
}

	
