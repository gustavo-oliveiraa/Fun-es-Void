#include <stdio.h>
#include <stdlib.h>

// 2 - prototipa��o
int em_uma_decada(int minha_idade);

int main(){
	
	int idade_mais_10, idade = 0;
	
	printf("Informe a idade: ");
	scanf("%d", &idade);
	
// 3 - chamada da fun��o
	idade_mais_10 = em_uma_decada(idade);
	printf("%d\n",em_uma_decada(idade));
	printf("%d\n",idade_mais_10);
	printf("Valores acima de uma decada com base na idade informada: %d\n", idade);
	//em_uma_decada(idade);

	return 0;
	}
	


// 1 - declara��o
	int em_uma_decada(int minha_idade){
		
	return minha_idade + 10;
	}
	

/*
	Modulariza��o
	Subprogramas
	
	fun��es: return
	procedimentos: n�o tem retorno "void"
	
	3 momentos:
		declara��o
		prot�tipa��o
		chamada

	https://pastebin.com/CwayXPbU
	
*/
