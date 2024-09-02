/*
1
1 0
1 0 1
1 0 1 0
1 0 1 0 1
*/
#include<stdio.h>
main()
{
	int r, c;
	
	r=1;
	while(r<=5)
	{
		c=1;
		while(c<=r)
		{
			if(c%2==0)
				printf(" 0 ");
			else
				printf(" 1 ");
			c++;
		}
		printf("\n");
		r++;
	}
	/*
A 
B C
D E F
G H I J
K L M N O 
*/

	int r1, c1;
	char ca;
	
	ca = 65;
	r1=1;
	while(r<=5)
	{
		c1=1;
		while(c<=r)
		{
			printf(" %c ",ca);
			ca++;
			c1++;
		}
		printf("\n");
		r++;
	}
    /* 
1
2  3
4  5  6
7  8  9  10
11 12 13 14 15
*/

	int a,q, n;
	
	n=1;
	a=1;
	while(a<=5)
	{
		q=1;
		while(q<=a)
		{
			printf(" %d ",n);
			q++;
			n++;
		}
		printf("\n");
		r++;
	}

   /* 
A
A B
A B C
A B C D
A B C D E
*/

	int p,z;
	char ch;
	
	
	for(p=1;p<=5;p++)
	{
		ch=65;
		for(z=1;z<=p;z++)
		{
			printf(" %c ",ch);
			ch++;
		}
		printf("\n");
	}
 /*
      *
    * * * 
  * * * * *
* * * * * * *
*/

	int o, e, n=5;
	
	for(o=1; o<=n; o++)
	{
		for(e=n; e>=1; e--)
		{
			if(o>=e)
				printf(" *  ");
			else
				printf("   ");
		}
		printf("\n");
	}

   /*
*
* * 
* * * 
* * * *
* * * * *
* * * *
* * *
* *
*
*/

	int i, l, n=5;
	
	for(i=1; i<=n; i++)
	{
		for(l=1; l<=i; l++)
		{
				printf("* ");
		}
		printf("\n");
	}
	for(i=n-1; i>=1; i--)
	{
		for(l=1; l<=i; l++)
		{
			printf("* ");
		}
		printf("\n");
	}

	int t, y, n=10,no;
	
	t=1;
	no=1;
	while(t<=10)
	{
		y=1;
		while(c<=10)
		{
			printf("%.2d ",no);
			y++;
			no++;
		}
		t++;
		printf("\n");
	}

}
