/*2.  Dado um  vetor  A  de  n  números  reais,  faça  um  programa  para  obter  o  maior  e  o  menor  elemento  do  vetor, 
apresente  o  vetor,  maior  e  menor  valor. */
#include<stdio.h>
int main(){
	int n,i;
	scanf("%d",&n);
	float A[n],maior,menor;
	for(i=0;i<n;i++){
		scanf("%f",&A[i]);
	}
	maior=A[0];
	menor=A[0];
	for(i=0;i<n;i++){
		if(A[i]<menor){
			menor=A[i];
		}if(A[i]>maior){
			maior=A[i];
		}
	}
	printf("O menor elemento: %.2f\n",menor);
	printf("O maior elemento: %.2f\n",maior);
	return 0;
}
