#include<stdio.h>
#include<stdlib.h>

int main(void) {
  	int l, c, i, j;
  	int **M = NULL;
  	scanf("%d", &l);
  	scanf("%d", &c);	   
  	M = malloc (l * sizeof (int *));
	for (i = 0; i < c; i++){
   		M[i] = malloc (c * sizeof (int));
	}
  	for (i = 0; i < l; i++) {
		for (j = 0; j < c; j++){ 
			printf("%p", &M[i][j]);
  		}
  	}
	for (i=0; i<l; i++) free (M[i]);
  	free (M);
  	return 0;
}
