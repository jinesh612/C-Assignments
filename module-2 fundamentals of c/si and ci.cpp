//MODULE: 2 (C Language - Fundamentals)

//• Write a program to find the simple Interest & Compound Interest.

#include<stdio.h>
#include<math.h>

int main()

{ printf("\nfind simple interest and compound interest\n");
	float p,t,r,si,ci;
	
	printf("\nenter principal amount (p): ");
	scanf("%f",&p);
	
	printf("\nenter time in year (t): ");
		scanf("%f",&t);
		
	printf("\nenter rate in percent (r): ");
		scanf("%f",&r);
		
//		Simple interest formula:
 si = (p * t * r)/100.0;
 
  /* Calculating compound interest */
	 ci = p * (pow(1+r/100, t) - 1);
	 
	  printf("\nSimple Interest = %f\n", si);
	  
	 printf("\nCompound Interest = %f", ci);
			
	
	
	return 0;
	
}