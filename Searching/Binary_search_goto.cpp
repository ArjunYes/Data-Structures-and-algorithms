#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int size,i,array[100],element;
	int start,end,mid;
	
	puts("Enter the array size that you want : ");
	scanf("%d",&size);
	
	
	puts("Enter each element into array asc : ");
	for(i=1;i<=size;i++){
		scanf("%d",&array[i]);
	}
	
	puts("Enter the element for searching : ");
	scanf("%d",&element);
	
	
	start = 1;
	end = size;
	
	label:	
	mid = ((int)(start+end)/2);
	
	
	if(element == array[mid]){
		printf("Element found at position : %d ",mid);
	
	}else if(element < array[mid]){
		
		puts("LEFT");
		end = mid;
		goto label;	
	
	}else if(element > array[mid]){
		
		puts("Right");
		start = mid;
		goto label;
	}	
	
	

	return(0);
}
