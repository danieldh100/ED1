#include <stdio.h>
#include <stdlib.h>

int* UN(int *v1,int n1,int *v2, int n2){
	int V[n1+n2];
	int *U;
	 
	U = (int *) malloc((n1+n2)*sizeof(int));
	int i,j;
	for(j=0;j<n1;j++)  V[j] =  v1[j];   
        for(i=0;i<n2;i++)  V[i+n1]=v2[i];
        for(i=0;i<(n1+n2);i++)U[i]= V[i];
        return U;	
}

int main(){	
	int n1, n2, i, j;
	int *v1,*v2, *uniao;
	printf("Digite o tamanho de cada vetor: ");
	scanf("%d %d",&n1, &n2);	
	
	v1 = (int *) malloc(n1*sizeof(int));
        v2 = (int *) malloc(n2*sizeof(int));    
    
        printf("Primeiro vetor: ");
        for(i = 0; i < n1; i++) scanf("%d",&v1[i]);
	printf("Segundo vetor: ");
        for(i = 0; i < n2; i++) scanf("%d",&v2[i]);
	uniao = UN(v1,n1,v2,n2);
	for(i=0;i<(n2+n1);i++) printf("%d\t",uniao[i]);   
 }
