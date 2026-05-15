#include <stdio.h>

int main(){
	int arr[10];
	int n, i;
    int *ptr;
	 
	  printf("Enter the array size: ");
	  scanf("%d", &n);
	  
	  printf("Enter %d elements: ", n);
	   for(int i = 0;i<n;i++){
	   
	  scanf("%d", &arr[i]);}
	  
	  ptr = arr + n - 1; //taking away the last value
	  
	  printf("Reversed array: ");
	  
	  for(int i = 0;i<n;i++){
	  	printf("%d " ,*ptr);
	  	ptr--;
	  }
	  
	  return 0;
	   
	  
	  
	
}