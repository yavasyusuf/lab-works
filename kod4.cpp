#include <stdio.h>
#include <stdlib.h>
struct Complex{
	float real;
	float imaginary;
};
 struct Complex addComplex(struct Complex *c1, struct Complex *c2){
 	struct Complex result;
 	
 	result.real = c1->real + c2->real;
 	result.imaginary = c1->imaginary + c2->imaginary;
 	 return result;
 }
 struct Complex subtractComplex(struct Complex *c1, struct Complex *c2){
 	struct Complex result;
 	 
 	result.real = c2->real - c1->real;
 	result.imaginary = c2->imaginary - c1->imaginary;
      return result;
 }
 
 int main()
 {
 	struct Complex *c1, *c2; 
	struct Complex sum, subtraction;
	
	FILE *file;
	
	c1 = (struct Complex*)malloc(sizeof(struct Complex));
	c2 = (struct Complex*)malloc(sizeof(struct Complex));
	
	file = fopen("result.txt", "w");
	
	if(file == NULL){
		printf("File open unsucessful");
	free(c1);
	free(c2);
	 return 1;
	}
	printf("Enter the first complex numbers: ");
 	 scanf("%f %f", &c1->real, &c1->imaginary);
 	
 	printf("Enter the second complex numbers: ");
 	 scanf("%f %f", &c2->real, &c2->imaginary);
 	 
 	sum = addComplex(c1,c2);
 	 subtraction = subtractComplex(c1,c2);
 	 
 	 fprintf(file,"Sum of these two complex numbers: %.2f + %2.fi\n", sum.real, sum.imaginary);
 	 fprintf(file,"Subtraction of these two complex numbers: %.2f + %.2fi", subtraction.real, subtraction.imaginary);
 	  printf("File was written successfuly.");
 	  
 	  free(c1);
 	  free(c2);
 	  fclose(file);
 	 
 	  return 0;
 }