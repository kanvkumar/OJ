#include<iostream>
#include<time.h>
#include<stdlib.h>
#include<fstream>
using namespace std;

int main()
{
	FILE *fp=fopen("in2.txt","w");
	srand(time(NULL));
	int t;
	t=10;

	fprintf(fp,"10");
	for(int i=0;i<10;i++)
	{
		fprintf(fp,"\n10000\n");
		for(int i=0;i<10000;i++)
		{
			fprintf(fp,"%d ",rand()%1000000000);
		}

	}
}
