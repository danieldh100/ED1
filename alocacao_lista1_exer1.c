#include<stdio.h>
#include<stdlib.h>

int main (){
	int n, aux, bytes=5, i ,j, stop=1;
	int *nums = (int*) malloc(200);
	char r;
		
	for (i=0; i<bytes;i++){
		aux = scanf("%d",&nums[i]);		
		
		if (i==bytes-2){
	     bytes+=5;
		 nums = (int *) realloc(nums, bytes*sizeof(int));  // Realocar
		}
		if(stop % 5 == 0){
			printf("Deseja parar ? s ou n: ");  // Alocar mais 5 ou não ?
			scanf("%s",&r);
				if(r == 's') break;
		}
		stop++;
	}	
	for (j=0; j<=i; j++) printf("%d  ",nums[j]); //Imprimir
}
