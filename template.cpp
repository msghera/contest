/*
****Mohammad Sheikh Ghazanfar****
	Competitive Programmer,
	Machine Learning Team, Nascenia,
	Former Programmer, Chief ERP,
	Bachelor of  Engineering in Computer Science and Engineering,
	Department of Computer Science and Engineering,
	International Islamic University Chittagong
	Email : skghazanfar@gmail.com
*/

 /*Header file starts here*/

//#include <bits/stdc++.h>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <bitset>
#include <algorithm>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cmath>
#include <iterator>
#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <climits>
#include <string>
#include <sstream>
#include <cstring>
#include <ctime>

/*Header File ends here*/

/*Macro starts here*/

#define f(i,j,n) for(int i=j; i<n; i++)
#define fu(i,j,n) for(int i=j; i>n; i--)
#define c(x, n) x n; cin>>n
#define in(name, n) for(int ___i=0;___i<n;___i++) { cin >> name[___i];}
#define vin(type, name, n) for(int ___i=0;___i<n;___i++) { type x; cin >> x; name.push_back(x); }
#define ft int t; scanf("%d", &t); for(int c=1; c<=t; c++)
#define w(n) while(n--)
#define visited 1
#define unvisited -1
#define debug printf("\n<<CameHere<<\n")
#define mem(x,y) memset(x, y, sizeof(x))
#define pal(temp) pali(temp, 0, temp.size()-1)
#define nl printf("\n")
#define space printf(" ");
#define eps 1e-9
#define inf 1<<28
#define cases printf("Case %d:", c);
#define all(v) (v).begin(), (v).end()
#define pb push_back
#define mii make_pair
#define min3(a,b,c) min(min(a,b),c)
#define min4(a,b,c,d) min(min(a,b),min(c,d))
#define max3(a,b,c) max(max(a,b),c)
#define max4(a,b,c,d) max(max(a,b),max(c,d))
#define fin freopen("in.txt", "r", stdin)
#define fout freopen("out.txt", "w", stdout)
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
#define MOD (ll)1e9+7
#define gamma 0.57721566490153286060651209008240243
#define PI acos(-1)
#define pi 2*acos(0)
#define cos(a) cos(a*pi/180)
#define sin(a) sin(a*pi/180)
#define tan(a) tan(a*pi/180)
#define cosi(a) acos(a)/(pi/180)
#define sini(a) asin(a)/(pi/180)
#define tani(a) atan(a)/(pi/180)
#define tanii(a,b) atan2(a,b)/(pi/180)//tan(90) = Infinity or a/0
// log(a)=ln(a) base 2.718281828459044979,, log10(a) base 10;
#define powe(a) exp(a)//e^a
//Extended Geometry
#define dis(x1,y1,x2,y2) ((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2))
#define t_area(a,b,c,s) sqrt(s*(s-a)*(s-b)*(s-c))
#define t_angle(a,b,c) cosi((b*b+c*c-a*a)/(2*b*c))

#define deb(x) cerr<< #x <<"="<<x<<endl;

#define si(a) int a; scanf("%d", &a);
#define sll(a) ll a; scanf("%lld", &a);
#define sllu(a) unsigned ll a; scanf("%llu", &a);
#define sd(a) double a; scanf("%lf", &a);
#define sc(a) char a; scanf("%c", &a);

//#define p printf
/*Macro Ends here*/

using namespace std;

/*typedef start here*/

typedef string st;
typedef long long ll;
typedef vector <int> vi;
typedef vector <ll> vll;
typedef vector <string> vs;
typedef pair <int, int> ii;
typedef vector < pair <int, int> > vii;
typedef priority_queue<int,vector<int>,greater<int> > min_heap;

/*typedef ends here*/

/*Important functions starts here */

template <class T> T abs (T a, T b=0)
{
    if(b==0) return (a<0) ? -a : a;
    return (a>b) ? (a-b) : (b-a);
}

ll xp(ll b, ll n, ll m) {
	ll r = 1;
	while(n > 0) {
		if(n & 1) {
			r = r * b;
			if(r >= m) r %= m;
		}
		n >>= 1;
		b = b * b;
		if(b >= m) b %= m;
	}
	return r % m;
}

ll inv(ll a, ll m){
    return xp(a, m-2, m);
}

/*Important functions ends here*/

/*Debug Extension starts here*/

template <typename F, typename S>
ostream& operator << (ostream& os, const pair< F, S>& p)
{
    return os<<"(" <<p.first<<", "<<p.second<<")";
}

template<typename T> ostream &operator << (ostream &os, const vector<T> &v)
{
    os<<"{";
    typename vector<T> :: const_iterator it;
    for(it= v.begin(); it!=v.end(); it++)
    {
        if(it!=v.begin()) os<<",";
        os<<*it;
    }
    return os<<"}";
}

template <typename T> ostream &operator << (ostream & os, const set<T>&v)
{
    os<<"[";
    typename set<T> :: const_iterator it;
    for(it=v.begin(); it!=v.end(); it++)
    {
        if(it!=v.begin()) os<<",";
        os<<*it;
    }
    return os<<"]";
}

template <typename F, typename S> ostream &operator << (ostream & os, const map<F,S>&v)
{
    os<<"[";
    typename map<F,S>::const_iterator it;

    for(it=v.begin(); it!=v.end(); it++)
    {
        if(it != v.begin()) os<<",";
        os<< it ->first<<"="<<it->second;
    }
    return os<<"]";
}

/*Debug Extension ends here*/

void precompute(){

}

void clear(){

}

int main(){

	precompute();

	ft{
		clear();
	}

return 0;}
