/*13.  Dado  dois  vetores,  A  (N  elementos)  e  B  (M  elementos),
  faça  um  programa  em  C  que  apresente  todos  os elementos comuns aos dois vetores */
#include<stdio.h>
int main(){
	int N,M;
	printf("Digite o tamanho para o primeiro vetor: ",N);
	scanf("%d",&N);
	printf("Digite  o tamanho para o segundo vetor: ",M);
	scanf("%d",&M);
	int i,j,A[N],B[M],comuns=0;
	printf("Digite %d elementos para o primeiro vetor:\n",N);
	for(i=0;i<N;i++){
		scanf("%d",&A[i]);
	}printf("Digite %d elementos para o segundo vetor:\n",M);
	for(i=0;i<M;i++){
		scanf("%d",&B[i]);
	}
	printf("Os elementos comuns sao: ");
	for(i=0;i<N;i++){
		for(j=0;j<M;j++){
			if(A[i]==B[j]){
				comuns=1;
			}
		}
		if(comuns==1){
			printf("%d|",A[i]);
			comuns=0;
		}
	}
	return 0; 
}
