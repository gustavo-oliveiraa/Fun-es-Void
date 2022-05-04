//Função
#include <stdio.h>
#include <stdlib.h>

// 2 - prototipação
int em_uma_decada(int minha_idade);

int main(){
	
	int idade_mais_10, idade = 0;
	
	printf("Informe a idade: ");
	scanf("%d", &idade);
	
// 3 - chamada da função
	idade_mais_10 = em_uma_decada(idade);
	printf("%d\n",em_uma_decada(idade));
	printf("%d\n",idade_mais_10);
	printf("Valores acima de uma decada com base na idade informada: %d\n", idade);
	//em_uma_decada(idade);

	return 0;
	}
	


// 1 - declaração
	int em_uma_decada(int minha_idade){
		
	return minha_idade + 10;
	}
	

/*
	Modularização
	Subprogramas
	
	funções: return
	procedimentos: não tem retorno "void"
	
	3 momentos:
		declaração
		protótipação
		chamada

	https://pastebin.com/CwayXPbU
	
*/
