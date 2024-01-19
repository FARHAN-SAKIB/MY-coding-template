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
    in(n);
    bitset<10005>bit;//size determine maximum value can be built
    bit[0]=1;
    fr(i,1,n)
    {
        in(a);
        bit|=(bit<<a);
    }
    while(1)
    {
        in(x);o(bit[x]);nw;
    }

}


