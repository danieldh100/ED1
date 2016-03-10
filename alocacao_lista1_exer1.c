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
		if(aux == 0){
			free(nums);
			return 0;
		}
	}
}
