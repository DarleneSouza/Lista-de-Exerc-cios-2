/*8.  Ler  N  elementos   de  um  vetor    A  e  um  valor  X.  Criar  o  vetor  B  contendo  os    elementos  do  vetor  A multiplicados por  X. */
#include<stdio.h>
int main(){
	int N,X;
	scanf("%d",&N);
	scanf("%d",&X);
	int i,A[N],B[N];
	for(i=0;i<N;i++){
		scanf("%d",&A[i]);
		B[i]=A[i]*X;
	}
	for(i=0;i<N;i++){
		printf("%d * %d = %d\n",A[i],X,B[i]);
	}
	return 0;
}

