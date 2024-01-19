#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template<class T> using ordered_set =tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update> ;
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
    in(ts);
    for(ll test=1;test<=ts;test++)
    {
        S s;
        in(s);
        cout << "Case #" << test << ": ";
        vector <pair <char, ll>> A;
         char ch = s[0]; ll len = 1;
        ll szs=s.size();
         fr(i,1,szs-1)
         {
             if(s[i]!=ch)
             {
                 A.pb({ch,len});
                 ch=s[i];
                 len=1;
             }
             else len++;
         }
         A.pb({ch,len});
         ll szA=A.size();
         if(szA==1)
         {
             cout << (szs + 1) / 2 << endl;continue;
         }
        if (A[0].first == A.back().first)
        {
            A[0].second += A.back().second;
            A.pop_back();
        }
        ll ans=0;
        for(auto i:A)ans+=i.second/2;
        cout << ans << endl;
    }
}

