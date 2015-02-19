#include<stdio.h>
#include<math.h>

int main()
{
	long int N,a,b,d1,d2,m1,m2,y1,y2,n;

	int days[]={29,31,28,31,30,31,30,31,31,30,31,30,31};
	scanf("%ld",&N);

	while(N>0)
	{	
		scanf("%ld%ld%ld%ld%ld%ld",&d1,&m1,&y1,&d2,&m2,&y2);
		if(y1>y2)
		{
			long int t=y1;
			y1=y2;
			y2=t;
			t=m1;
			m1=m2;
			m2=t;
		}
		if(y1==y2 && m1>m2)
		{ 
			long int t=y1;
			y1=y2;
			y2=t;
			t=m1;
			m1=m2;
			m2=t;
		}
		if(y1==y2 && m1==m2 && d1>d2)
		{

			long int t=y1;
			y1=y2;
			y2=t;
			t=m1;
			m1=m2;
			m2=t;
		}
		n=0;
		if(y1==y2 && m1==m2 && d1==d2)
			printf("1\n");
		else if(y1==y2 && m1==m2)
		{
			long int d = d2-d1 + 1;
			printf("%ld\n",d);
		}
		else if(y1==y2)
		{	
			if(y1%400==0 || (y1%100!=0 && y1%4==0 ))
			{
				days[2]=days[0];
			}

			n = ( days[m1]-d1 +d2 + 1);

			long int i = (m2-m1-1);
			long int m = (m1+1);
			while(i>0)
			{	


				n = (n + days[m]);
				m++;
				i--;
			}
			days[2]=28;
			printf("%ld\n",n);
		}
		else
		{
			if(y1%400==0 || (y1%100!=0 && y1%4==0) )
			{
				days[2]=days[0];
			}	
			n = abs(days[m1]-d1) +d2 + 1;


			long int m=m1+1;
			while(m<=12)
			{
				n = n + days[m];
				m++;
			}
			days[2]=28;
			int ye;
			int y=y2-y1-1;

			ye=y1+1;
			while(y>0)
			{	

				if(ye%400==0 || (ye%100!=0 && ye%4==0) )
					n = n+366;
				else
					n=n+365;
				ye++;				
				y--;
			}
			int k=1;
			while(k<m2)
			{	
				if(y2%400==0 || (y2%100!=0 && y2%4==0) )
				{	if(k==2)
					{
						n = n + 29;
						k++;
					}
					else
					{
						n = n + days[k];
						k++;
					}
				}
				else
				{
					n = n + days[k];
					k++;
				}
			}



			printf("%ld\n",n);
		}
		N--;
	}
	return 0;
}


