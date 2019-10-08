#include <stdio.h>
#include <math.h>
void bin2dec();
void dec2bin();
int option;
void main()
{
	printf("\n1.Decimal to Binary.\n2.Binary to Decimal.\n3.EXIT\n");
	scanf("%d",&option);
switch(option)
{
	case 1: dec2bin(); main(); break;
	case 2: bin2dec(); main(); break;
	case 3: printf("\nPress any key to exit!\n"); break;
	default: printf("\nINVALID RESPONSE!\n"); main();
}
}
void dec2bin()
{
	int n,c=0,ch[1000],j;
	printf("	->Enter a decimal number:");
	scanf("%d",&n);
	while(n!=1)
	{
		ch[c]=n%2;
		n=n/2;
		c++;
	}
	ch[c]=1;
	printf("	->Binary form = ");
	for(j=c;j>=0;j--)
	printf("%d",ch[j]);
	printf("\n");

	
	
}
void bin2dec()
{
		int n,e=0,dec=0,temp=0,dig=0;
	printf("	->Enter a binary number(Use combination of 0 and 1 only):");
	scanf("%d",&n);
	
	while(n>0)
	{
	dec+=(n%10)*pow(2,e);
	n/=10;
	e++;
	
	}
		printf("	->Decimal Value= %d\n",dec);dec=0;

}
