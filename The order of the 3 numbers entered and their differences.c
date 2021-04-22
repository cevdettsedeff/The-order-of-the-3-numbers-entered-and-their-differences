#include <stdio.h>
#include <stdlib.h>

//cevdettsedeff

int main(int argc, char *argv[]) {
	
 	float a,b,c;
 	
 	printf(" 1.sayiyi giriniz: ");
 	scanf("%f",&a);
 	
 	printf(" 2.sayiyi giriniz: ");
 	scanf("%f",&b);
 	
 	printf(" 3.sayiyi giriniz: ");
 	scanf("%f",&c);
 	
 	
 	if(a==b||b==c||a==c||a==b==c)
 	{
 		if(a==b&&b!=c&&a!=c)
 		{
 			if(b>c)
 			{
 				printf(" %f < %f = %f",c,b,a);
 				printf("\n Aradaki fark esit degil :(");
			 }
			 else
			 {
			 	printf(" %f = %f < %f",a,b,c);
			 	printf("\n Aradaki fark esit degil :(");
			 }
		 }
		 
		 
		if(a==c&&a!=b&&c!=b)
		{
			if(a>b)
			{
				printf(" %f < %f = %f",b,c,a);
 				printf("\n Aradaki fark esit degil :(");
				
			}
			else
			{
				printf(" %f = %f < %f",c,a,b);
 				printf("\n Aradaki fark esit degil :(");
			}
		}
		 
		 if(b==c&&b!=a&&c!=a)
		 {
		 	if(b>a)
		 	{
		 		printf(" %f < %f = %f",a,c,b);
 				printf("\n Aradaki fark esit degil :(");
		 	
			 }
			 else
			 {
			 	printf(" %f = %f < %f",b,c,a);
 				printf("\n Aradaki fark esit degil :(");
			 }
		}
		
		 
		 if(a==b&&b==c&a==c)
		 {
		 	printf(" %f = %f = %f",a,b,c);
		 	printf("\n Aradaki fark esit :)");
		 }
	}
		  
	else
	{
 	if(a>b)
 	{
 		if(a>c)
		 {
		 	if(b>c)
		 	{
		 		printf(" %f < %f < %f",c,b,a);
		 		
		 		if(a-b==b-c)
					{
						printf("\n\n Aradaki fark esit :)");	
					}
				else
					{
						printf("\n\n Aradaki fark esit degil :(");
					}
			 }	
		else
			{
			printf(" %f < %f < %f",b,c,a);
			
			if(a-c==c-b)
				{
					printf("\n\n Aradaki fark esit :)");	
				}
			else
				{
					printf("\n\n Aradaki fark esit degil :(");
				}
			 }	 	
		 }
		 
		else
		{
			printf("\n %f < %f < %f",b,a,c);		
			if(c-a==a-b)
			{
				printf("\n\n Aradaki fark esit :)");	
			}
			else
			{
			printf("\n\n Aradaki fark esit degil :(");
			}		
		} 
		 
	 }
 	else
 	{
 		if(a>c)
		 {
		 	printf("\n %f < %f < %f",c,a,b);
		 	
		 	if(b-a==a-c)
			{
				printf("\n\n Aradaki fark esit :)");	
			}
			else
			{
				printf("\n\n Aradaki fark esit degil :(");
			}
		 }
		 else
		 {
		 	if(b>c)
			 {
		 		printf("%f < %f < %f",a,c,b);
		 			if(b-c==c-a)
					{
						printf("\n\n Aradaki fark esit :)");	
					}
					else
					{
						printf("\n\n Aradaki fark esit degil :(");
					}	
			}
			else
			{
				printf("%f < %f < %f",a,b,c);
				if(c-b==b-a)
				{
					printf("\n\n Aradaki fark esit :)");	
				}
				else
				{
					printf("\n\n Aradaki fark esit degil :(");
				}
			}
		 }	
	}	
}	
	return 0;
}
	
	
	
	
	
	

