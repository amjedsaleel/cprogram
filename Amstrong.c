#include<stdio.h>
void main()
	{
		int arm=0;
		int a;
		int temp;
		printf("ENTER THE NUMBER");		
		scanf("%d",&a);
		int new=a;
	while(a>0)
		{
                 temp=a%10;
		 arm=(temp*temp*temp)+arm; 
		 a=a/10;
		}
if(new==arm)
printf("NUMBER IS ARMSTRONG");
else 
printf("\nNOT ARMSTRONG");
}
