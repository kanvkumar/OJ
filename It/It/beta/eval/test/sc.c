#include<stdio.h>
#include<math.h>

struct point
{
  double x;
  double y;
};

double cross(struct point v, struct point w);
double dist(struct point p1, struct point p2);

int main(void)
{
 int test;
 scanf("%d",&test);
 while(test)
 {
  struct point p1,p2,p3,p4;
  struct point r,s,v; double t,u;

  scanf("%lf%lf%lf%lf%lf%lf%lf%lf",&p1.x,&p1.y,&p2.x,&p2.y,&p3.x,&p3.y,&p4.x,&p4.y);

  r.x = p2.x-p1.x; r.y = p2.y-p1.y;
  s.x = p4.x-p3.x; s.y = p4.y-p3.y;
  v.x = p3.x-p1.x; v.y = p3.y-p1.y;

  if(cross(r,s)==0)
  {
    if(cross(v,s)==0){
	    if(dist(p1,p4)>dist(p1,p2)+dist(p3,p4)||dist(p1,p3)>dist(p1,p2)+dist(p4,p3)||dist(p2,p4)>dist(p2,p1)+dist(p3,p4)||dist(p2,p3)>dist(p2,p1)+dist(p4,p3))
		    printf("NO\n");
	    else
	    printf("YES\n");
                     }
    else printf("NO\n");
  }
  else
  {
  t = cross(v,s)/cross(r,s); u = cross(v,r)/cross(r,s);
  

  if(t>=0 && t<=1 && u>=0 && u<=1) printf("YES\n");
  else printf("NO\n");
  }
test--;
 }
return 0;
}

double cross(struct point v,struct point w)
{

 return (((v.x)*(w.y)) - ((v.y)*(w.x)));

}

double dist(struct point p1, struct point p2)
{
 return pow((pow(p2.x-p1.x,2)+ pow(p2.y-p1.y,2)),0.5);
}
