#include<stdio.h>
int find_max_index(int arr[]);
int main(){
	int ng[10], ng_d[10];
	int s[10];
	printf("Enter number of gifts for students: \n");
	for(int i=0; i<10; i++){
		printf("S[%d] : ",i+1);
		scanf("%d",&ng[i]);
		ng_d[i] = ng[i];
	}
	
	for(int i=0; i<10 ; i++){
		int max_index = find_max_index(ng);
		s[i] = max_index+1;
		ng[max_index] = -1;
	}
	printf("\nOrder of billing is: \n");
	for(int i=0; i<10; i++){
		printf("S[%d]  -  %d\n",s[i], ng_d[s[i]-1]);
	}
	printf("\n");
	return 0;
}
int find_max_index(int arr[]){
	int max=arr[0]; int max_i = 0;

	for(int i=0; i<10; i++){
		if(arr[max_i] < arr[i]){
			max_i = i;
		}
	}
	return max_i;
}
