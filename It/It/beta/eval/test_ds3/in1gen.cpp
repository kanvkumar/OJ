#include<iostream>
#include<time.h>
#include<stdlib.h>
#include<fstream>
using namespace std;
long long arr[1000000];
int main()
{
	
	FILE *fp=fopen("in1.txt","w");
	long long n;
	
	srand(time(NULL));
	
	int t=100000;
	long long curr=0;
	for(int i=0;i<100000;i++)
	{
curr+=((rand()%10 + 1)*100000000);
arr[i]=curr;
		
	}
	fprintf(fp,"%lld\n",arr[99999]);
	fprintf(fp,"100000\n");
	for(int i=0;i<50000;i++)
		fprintf(fp,"%lld\n%lld\n",arr[i],arr[99999-i]);
	

}
