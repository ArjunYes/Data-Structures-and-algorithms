// PROGRAM TO PERFORM BINARY SORT USING RECURSION
// AUTHOR ARJUN S arjunyes1998@gmail.com

#include<stdio.h>

int binary_search(int low,int high,int array[],int element){
	
	int mid;
	mid = (high+low)/2;
	
	if(element == array[mid]){
		return mid;
		
	}else if(element < array[mid] ){
		puts("LEFT");
		binary_search(low,mid,array,element);
		
	}else if(element > array[mid] ){
		puts("RIGHT");
		binary_search(mid,high,array,element);
	}
	
}

int main(){
	
	int number,array[100],element,i,low=1;
	
	puts("BINARY SEARCH \n");
	
	printf("Enter the no of elements : ");
	scanf("%d",&number);
	
	
	printf("Enter the various elements :");
	for(i=1;i<=number;i++){
		scanf("%d",&array[i]);
	}
	
	puts("Enter the element to be searched : ");
	scanf("%d",&element);
	
	if(element < array[1] || element > array[number] ){
		printf("Element not found.");
	}
	else{
		printf("The searched element found at position : %d",binary_search(low,number,array,element));
		
	}
	
	
	
	return(0);
}
