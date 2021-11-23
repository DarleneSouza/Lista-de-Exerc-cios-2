/*7.  Escreva  um  programa  que  leia  ou  gere  dois  vetores  de  N  posições  e  faça  a  multiplicação  dos  elementos  de mesmo índice,
colocando  o  resultado  em  um  terceiro  vetor.  Mostre  o  vetor  resultante.*/
#include<stdio.h>
int main(){
	int N;
	scanf("%d",&N);
	int i,vet1[N],vet2[N],vet3[N];
	srand(time(NULL));
	for(i=0;i<N;i++){
		vet1[i]=rand()%N;
		vet2[i]=rand()%N;
		vet3[i]=vet1[i]*vet2[i];
		printf("%d * %d = %d\n",vet1[i],vet2[i],vet3[i]);
	}
	return 0;
}   
