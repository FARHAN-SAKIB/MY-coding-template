#include<bits/stdc++.h>
using namespace std;
#define fast {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
typedef long long int ll;
typedef string S;
#define M 1e18
#define AS 250005
#define sp cout<<' '
#define nw cout<<endl
#define rt return
#define __ template<typename T, typename... Types>
void in() {rt;} __ void in(T &a, Types&... b){cin>>(a); in(b...);}
void o() {rt;}  __ void o(T a, Types... b){cout<<(a);sp; o(b...);}
#define fr(Hi,a,n) for(ll Hi=a;Hi<=n;Hi++)
#define frm(Hi,a,n) for(ll Hi=n;Hi>=a;Hi--)
#define P pair<ll,ll>
#define vc vector<ll>
#define pb push_back
#define MP map<ll,ll>
bool sortin(const pair<ll,ll> &e,const pair<ll,ll> &f){return (e.first<f.first);}
bool POT(ll x){return x && (!(x&(x-1)));}
ll i,j,k,l,m,n,p,q,r,a,b,c,x,y,z,ts,mn=M,mod=1e9+7;
ll ar[AS],br[AS],xr[AS],tem[AS];
int main()
{
    fast;
    //https://cses.fi/problemset/task/2183
    c=1;
    in(n);
    fr(i,0,n-1)
    {
        in(ar[i]);
    }
    sort(ar,ar+n);
    fr(i,0,n-1)
    {
        if(c<ar[i])break;
        c+=ar[i];
    }
    o(c);
    /*
    if you have the current answer ans, and a number you didn't use yet x that is not larger that it, you can generate
    all numbers from 1 to ans+x-1 because you can use x with 1 to ans-1.
     from before to generate x+1 to ans+x-1 and just used 1 to x from before for the rest. so ans += x.
     If all the numbers are larger than ans, you're stuck.
     and the cleanest way to check that is to sort the elements and loop from the smallest to the largest
    */
}


