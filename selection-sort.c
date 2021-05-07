#include <stdio.h>
#include <stdlib.h>

void swap(int* a, int* b);
void selectionSort(int* A, int n);

int main(){

	int number, iter =0;
	int* Arr;

	Arr = (int *)malloc( number * sizeof(int));

	scanf("%d", &number);

	for(; iter<number; iter++){
		scanf("%d", &Arr[iter]);
	}

	selectionSort(Arr, number);

	for(int iter=0; iter<number;iter++){
		printf("%d ", Arr[iter]);
	}

	return 0;
}

void selectionSort(int* A, int n){

	for(int startpos =0; startpos < n; startpos++){
		int maxpos = startpos;
		for(int i=startpos +1; i< n; ++i){
			if(A[i] < A[maxpos]){
				maxpos = i;
			}
		}
		swap(&A[startpos], &A[maxpos]);
	}
}

void swap(int* a, int* b){
	int temp = *a;
	*a = *b;
	*b = temp;
}