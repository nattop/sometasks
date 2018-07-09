#include <stdio.h>
#include <stdlib.h>

int f(int mas[], int N);

int main(int argc, char const *argv[])
{
	int a1[3],a2[10],a3[20],a4[4];
	for (int i=0;i<4;i++)
	{
		a4[i]=rand()%20-10;
		printf("%d ",a4[i]);
	}
	printf(" rez=%d\n",f(a4,4));
	for (int i=0; i<3; i++)
	{
		a1[i]=rand()%20-10;
		printf(" %d ",a1[i]);
	}
	printf("rez=%d\n",f(a1,3));
	for (int i=0; i<10; i++)
	{
		a2[i]=rand()%10-9;
		printf("%d ",a2[i]);
	}
	printf(" rez=%d\n",f(a2,10));
	for (int i=0; i<20; i++)
	{
		a3[i]=rand()%10;
		printf("%d ",a3[i]);
	}
	printf(" rez=%d\n",f(a3,20));
	return 0;
}

int f( int mas[], int N)
{
	int max1, max2;
	int max0=0;
	for ( int i=0; i<N; i++)
	{
		if ( mas[i]>max0 )
		{
			max0=mas[i];
		}
	}
	max1=abs(max0-mas[0]);
	max2=abs(max0-mas[N-1]);
	if (max1>max2)
	{
		return max1;
	}
	return max2;
}
