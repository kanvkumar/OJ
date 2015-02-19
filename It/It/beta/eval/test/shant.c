#include<stdio.h>
int main()
{
	int t;
	long double x1,y1,x2,y2,x3,y3,x4,y4,N1,D1,N2,D2;
	long double m1,m2,c1,c2,h1,k1,h2,k2;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%Lf%Lf%Lf%Lf%Lf%Lf%Lf%Lf",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
		if(x1!=x2&&x3!=x4)
		{
			N1=y2-y1;
			D1=x2-x1;
			N2=y4-y3;
			D2=x4-x3;
			m1=(N1/D1);
			m2=(N2/D2);
			c1=(m1*x2)-y2;
			c2=(m2*x4)-y4;
			h1=(y3-(m1*x3)+c1);
			k1=(y4-(m1*x4)+c1);
			h2=(y1-(m2*x1)+c2);
			k2=(y2-(m2*x2)+c2);
			if((h1*k1<=0)&&(h2*k2<=0))
			{
				if(h1==0&&k1==0&&h2==0&&k2==0)
				{
					if(x2>x1)
					{
						if((x3>x2&&x4>x2)||(x1>x3&&x1>x4))
							printf("NO\n");
					}
					else if(x1>x2)
					{
						if((x3>x1&&x4>x1)||(x2>x3&&x2>x4))
							printf("NO\n");
					}
				}
				else
				printf("YES\n");
			}
			else
				printf("NO\n");
		}
		else if(x1==x2&&x3!=x4)
		{
			N2=y4-y3;
			D2=x4-x3;
			m2=(N2/D2);
			c2=(m2*x4)-y4;
			h2=(y1-(m2*x1)+c2);
			k2=(y2-(m2*x2)+c2);
			if(((x3<=x2&&x4>=x2)||(x3>=x2&&x4<=x2))&&(h2*k2<=0))
				printf("YES\n");
			else
				printf("NO\n");
			
		}
		else if(x1!=x2&&x3==x4)
		{
			N1=y2-y1;
			D1=x2-x1;
			m1=(N1/D1);
			c1=(m1*x2)-y2;
			h1=(y3-(m1*x3)+c1);
			k1=(y4-(m1*x4)+c1);
			if(((x1<=x3&&x2>=x4)||(x1>=x3&&x2<=x4))&&(h1*k1<=0))
				printf("YES\n");
			else
				printf("NO\n");
		}
		else
		{
			if(((y3-y2)*(y4-y2)<=0)||((y3-y1)*(y4-y1)<=0))
				printf("YES\n");
			else
				printf("NO\n");
		}	
	}
	return 0;
}
