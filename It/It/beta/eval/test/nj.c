#include<stdio.h>
int main(){
	int a,b,c,d,e,f,z,r,x,y,g,h,k,i;
	scanf("%d",&z);
	while(z!=0){
		scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
		r=0;
		i=f-1;
		while(c<=i){
			if(i%4==0){
				if((i%100==0)&&(i%400==0)){
					r=r+366;
				}
				else if((i%100==0)&&(i%400!=0)){
					r=r+365;
				}
				else{
					r=r+366;
				}
			}
			else{
				r=r+365;
			}
			i=i-1;
		}
		x=b-1;
		y=e-1;
		g=0;
		h=0;
		while(x!=0){
			if((1<=x<=7)&&(x!=2)&&(x%2==0)){
				g=g+30;
			}
			else if((1<=x<=7)&&(x!=2)&&(x%2!=0)){
				g=g+31;
			}
			else if((x==2)&&(c%4!=0)){
				g=g+28;
			}
			else if((x==2)&&(c%4==0)){
				if((c%100==0)&&(c%400==0)){
					g=g+29;
				}
				else if((c%100==0)&&(c%400!=0)){
					g=g+28;
				}
				else{
					g=g+29;
				}
			}
			else if((8<=x<=12)&&(x%2==0)){
				g=g+31;
			}
			else{
				g=g+30;
			}
			x=x-1;
		}
		while(y!=0){
			if((1<=y<=7)&&(y!=2)&&(y%2==0)){
				h=h+30;
			}
			else if((1<=y<=7)&&(y!=2)&&(y%2!=0)){
				h=h+31;
			}
			else if((y==2)&&(f%4!=0)){
				h=h+28;
			}
			else if((y==2)&&(f%4==0)){
				if((f%100==0)&&(f%400==0)){
					h=h+29;
				}
				else if((f%100==0)&&(f%400!=0)){
					h=h+28;
				}
				else{
					h=h+29;
				}
			}
			else if((8<=y<=12)&&(y%2==0)){
				h=h+31;
			}
			else{
				h=h+30;
			}
			y=y-1;
		}
		k=r+h+d-g-a+1;
		printf("%d\n",k);
		z=z-1;
	}
	return 0;
}






