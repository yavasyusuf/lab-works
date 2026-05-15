#include <stdio.h>
#define SIZE 7
void replaceMin(int *temp){
	printf("Enter 7 temperature values: ");
		int min = *temp;
		int i;
		scanf("%d", temp);  //u should give the first value unless it can be a garbage value
	for(i = 1;i<SIZE;i++){
		scanf("%d", temp + i);
		
		 min = *temp;
		
		if(*(temp+i) < min){
			min = *(temp + i);
		}
		
		}
	for(i = 0;i<SIZE;i++){
		if(*(temp + i) == min)
		{
			 *(temp + i) = -1;
		}
	}
}

 int main(){
   int temp[SIZE];
   int i;
     
     replaceMin(temp);
      printf("Updated temperatures:\n");
      
       for(i = 0;i<SIZE;i++){
       	printf(" %d",*(temp + i));
	   }
   return 0;
 }
