/*15. URI 1172- Substitui��o em Vetor
Fa�a um programa que leia um vetor X[10]. Substitua a seguir, todos os valores nulos e negativos do vetor X por 1. Em seguida mostre o vetor X.
Entrada: A entrada cont�m 10 valores inteiros, podendo ser positivos ou negativos.
Sa�da: Para cada posi��o do vetor, escreva "X[i] = x", onde i � a posi��o do vetor e x � o valor armazenado naquela posi��o.*/
#include<stdio.h>
int main(){
	int i,X[10];
	for(i=0;i<10;i++){
		scanf("%d",&X[i]);
		if(X[i]==0||X[i]<0){
			X[i]=1;
		}
	}
	for(i=0;i<10;i++){
		printf("X[%d]=%d\n",i,X[i]);
	}
	return 0;
}
