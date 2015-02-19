#include<stdio.h>
int main()
{
		long long int a,b,fb=1,n;
			int i,j,N;
				scanf("%d",&N);
					for (j=0;j<N;j++)
							{
										scanf("%lld",&n);
												a=0;b=1;i=0;
														while(i<n)
																	{
																					fb=a+b;
																								a=b;
																											b=fb;
																														i++;
																																}
																printf("%lld\n",fb);
																	}

					return 0;
}   
