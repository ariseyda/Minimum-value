#include<stdio.h>

// A computer program receives three integers as input, finds the minimum and displays its value. 

int main(){
	
	int array[3];
	int min;
	int max;
	int i;
	int k;
	
	for(i=0;i<3;i++){
		
		printf("Enter the %dst number:",i+1);
		scanf("%d",&array[i]);
	}
	
	min=array[0];
	max=array[0];
	
	for(k=0;k<3;k++){
		
		 if(array[k]<min)
		    min=array[k];
		 else if(array[k]>max)
		    max=array[k];
	}
	   
    printf("Minimum value:%d",min);
		
	
	
	return 0;
	
}
