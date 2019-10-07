//Currency Denomination
#include<stdio.h>
int main()
	{
		int amount;
		int note_2000, note_500, note_100, note_50, note_20, note_10;
		//Initialize all uits to 0
		note_2000 = note_500 = note_100 = note_50 = note_20 = note_10;
		//Input amount from user
		printf("Enter amount:\n");
		scanf("%d",&amount);
		if(amount >= 2000)
		{
			note_2000= amount/2000;
			amount -= note_2000*2000;
		}
		if(amount >= 500)
		{
			note_500= amount/500;
			amount -= note_500*500;
		}
		if(amount >= 100)
		{
			note_100= amount/100;
			amount -= note_100*100;
		}
		if(amount >= 50)
		{
			note_50= amount/50;
			amount -= note_50*50;
		}
		if(amount >= 20)
		{
			note_20= amount/20;
			amount -= note_20*20;
		}
		if(amount >= 10)
		{
			note_10= amount/10;
			amount -= note_10*10;
		}
		printf("Total number of notes =\n");
		printf("2000 = %d\n",note_2000);
		printf("500 = %d\n",note_500);
		printf("100 = %d\n",note_100);
		printf("50 = %d\n",note_50);
		printf("20 = %d\n",note_20);
		printf("10 = %d\n",note_10);

		return 0;
	}
