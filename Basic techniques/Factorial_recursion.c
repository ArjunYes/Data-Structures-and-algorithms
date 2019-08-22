// A PROGRAM TO FIND THE FACTORIAL OF A NUMBER USING RECURSIVE METHORD.
// AUTHOR ARJUN S

#include<stdio.h>


int factorial(int number){
	
	if(number <= 1){
		return 1;
	}else{
		return number * factorial(number-1);
	}
	
}


int main(){
	
	int number,temp;
	
	puts("Enter the number to find factorial : ");
	scanf("%d",&number);	
	
	printf("The factorail of the number is :  %d",factorial(number));
	
	return(0);
}
