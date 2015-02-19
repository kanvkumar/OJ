#include <stdio.h>
int main()
{
		int T,i;
			scanf("%d",&T);
					for(i=0;i<T;i++)
								{
												double x1,y1,x2,y2,x3,y3,x4,y4,A1,A2,A3,A,x,y;
															scanf("%lf %lf\n %lf %lf\n %lf %lf\n",&x1,&y1,&x2,&y2,&x3,&y3);
																		A=1/2*((x1*y2-x2*y1)+(x3*y2-x2*y2)+(x1*y3-x3*y1));
																					A1=1/2*((x*y1-x1*y)+(x*y2-x2*y)+(x1*y2-x2*y1));
																								A2=1/2*((x*y2-x2*y)+(x*y3-x3*y)+(x2*y3-x3*y2));
																											A3=1/2*((x*y3-x3*y)+(x*y1-x1*y)+(x3*y1-x1*y3));
																														if(A=A1+A2+A3)
																																			printf("YES\n");
																																	else
																																						printf("NO\n");
																																			}
								return 0;
}
