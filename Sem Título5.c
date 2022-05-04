// void
#include<stdio.h>

void soma_notas(float , float);

int main(){
	
	float n1, n2;
	
	
	printf("Digite a nota 1: ");
	scanf("%f", &n1);
	
	printf("Digite a nota 2: ");
	scanf("%f", &n2);
	
	soma_notas(n1, n2);
	
	}
	
	void soma_notas(float n1, float n2){
		printf("A soma das notas e %f", n1 + n2);
	}
