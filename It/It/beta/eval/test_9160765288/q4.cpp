#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include<vector>
#include<stack>
#include<set>
#include<map>
#include<queue>
#include<deque>
#include<string>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cassert>
#include<cstdlib>
#include<cstdio>
#include<cmath>
#include<string>
#include<sstream>
#include<limits>

using namespace std;

#define s(n)					scanf("%d",&n)
#define sl(n) 					scanf("%lld",&n)
#define INF						(int)1e9
#define LINF					(long long)1e18
#define FOR(i,a,b)				for(int i=a;i<=(int)b;i++)
#define REP(i,n)				FOR(i,0,n-1)
#define foreach(v,c)            for( typeof((c).begin()) v = (c).begin();  v != (c).end(); ++v)
#define mp						make_pair
#define let(x,a) __typeof(a) x(a)
#define pb						push_back
#define fill(a,v) 				memset(a,v,sizeof a)
#define all(x)					x.begin(),x.end()
#define INDEX(arr,ind)			(lower_bound(all(arr),ind)-arr.begin())
#define debugger cerr
#define debug(args...)			{mdbg,args; debugger<<endl;}
#define PRINT_CONTAINER(o,v)    {if(v.size()==0) return o<<"{}"; o<<"{"; foreach(it,v) o<<*it<<" "; return o<<"\b}";}


struct multidebug
{
    template<typename T> multidebug& operator , (const T &v)
    {
        debugger<<v<<" ";
        return *this;
    }
} mdbg;
template<class T> ostream& operator << (ostream& o,const vector<T> &v) PRINT_CONTAINER(o,v)
template<class T> ostream& operator << (ostream& o,const set<T> &v) PRINT_CONTAINER(o,v)
template<class A,class B> ostream& operator << (ostream& o,const map<A,B> &v) PRINT_CONTAINER(o,v)
template<class A,class B> ostream& operator << (ostream& o,const pair<A,B> &p)
{
    o<<"("<<p.first<<","<<p.second<<")";
    return o;
}
template<class T> void debugarr(T* v,int n)
{
    debugger<<"{";
    for(int i=0; i<n; i++) debugger<<v[i]<<" ";
    debugger<<"\b}"<<endl;
}



typedef long long LL;
typedef pair<int,int> PII;
typedef pair<LL,LL> PLL;

typedef vector<int> VI;
typedef vector<LL> VL;
typedef vector<PII> VII;
typedef vector<PLL> VLL;

typedef vector<VI> VVI;
typedef vector<VL> VVL;
typedef vector<VII> VVII;
typedef vector<VLL> VVLL;

typedef vector<string> VS;
typedef vector<VS> VVS;
using namespace std;
#include<climits>
int comp(const void* e1, const void* e2) {
   char c1 = *(char*)e1;
   char c2 = *(char*)e2;
   return c1 - c2;
}

void swap (char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void permute(char a[1000], int i, int n)
{
    char b[11];
   int j;

   if (i == n && a[0]!='0')
    printf("%s\n", a);
   else
   {
        for (j = i; j <= n; j++)
       {

          swap((a+i), (a+j));
         // printf("%d %d %s\n",i,j,a);
         strcpy(b,a);
          qsort(a+i+1,(n+1)-(i+1),sizeof(char),comp) ;
         // printf("after sorting =%d %d %s\n",i,j,a);
          permute(a, i+1, n);
          strcpy(a,b);
          swap((a+i), (a+j)); //backtrack
       }
   }
}
int main()
{
    int t=10;
    s(t);

    while(t--)
    {
   char a[11];//="123456789";
   scanf("%s",a);
   char str[100];
   int arr[10]={0};
   REP(i,strlen(a))
   {
       arr[a[i]-'0']=1;
   }
   int j=0;
   REP(i,10)
   {
       if(arr[i]==1)
        {
            //printf("yes");
            str[j]=(char)(i+'0');
            j++;
        }
   }
   str[j]='\0';
   if(str[0]=='0')
    permute(str+1,0,strlen(str)-2);
   permute(str, 0, strlen(str)-1);
   //getchar();
    }
   return 0;

}

