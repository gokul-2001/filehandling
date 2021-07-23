#include<stdio.h>
#include<conio.h>
main()
{
	FILE *fp;
	char ch,fname[30],newch[100];
	int i=0,j,COUNT=0;
	fp=fopen("string.txt","r");
	printf("input the reverse function:");
	ch=getc(fp);
	while(ch!=EOF)
	{
		COUNT++;
		putchar(ch);
		newch[i]=ch;
		i++;
		ch=getc(fp);
	}
	printf("\n");
	printf("output:");
	for(j=(COUNT-1);j>=0;j--)
	{
		ch=newch[j];
		printf("%c",ch);
	}
	getch();
	return 0;
}
