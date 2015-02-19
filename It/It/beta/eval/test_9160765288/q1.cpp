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
// A structure to represent a node in adjacency list

int convert(int n)
{
    if(n == 0 || n == 1)                 //BaseCase
        return n;
    else
        return max(convert(n/2)+convert(n/3)+convert(n/5),n);  //Recursive Call
}
int main()
{
    int t;
    s(t);
   
    int n=2;
    while(t--)
    {
        s(n);
        cout<<convert(n)<<endl;
    //    n+=103542;
    }
}
