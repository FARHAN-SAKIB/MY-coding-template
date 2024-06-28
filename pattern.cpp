#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    char T;
    cin>>N>>T;
    if(T=='a') {
        for(int i=0;i<N;i++)cout<<char(T+i);
        cout<<endl;
        string S(N,' ');
        for(int i=1;i<N-1;i++) {
            S[0]=char(T+i);
            S[N-1]=char(T+(N-i-1));
            cout<<S<<endl;
        }
        if(N>1) {
            for(int i=N-1;i>=0;i--)cout<<char(T+i);
            cout<<endl;
        }
    }
    else {
        for(int i=1;i<=N;i++)cout<<i;
        cout<<endl;
        int len=N+max(0,N-9);
        for(int i=2;i<N;i++) {
            string S(len,' ');
            int l=i,r=N-i+1;
            if(l<10)S[0]=char(l+'0');
            else {
                S[0]=char(l/10+'0');
                S[1]=char(l%10+'0');
            }
            if(r<10)S[len-1]=char(r+'0');
            else {
                S[len-1]=char(r%10+'0');
                S[len-2]=char(r/10+'0');
            }
            cout<<S<<endl;
        }
        if(N>1) {
            for(int i=N;i>=1;i--)cout<<i;
            cout<<endl;
        }
    }
}
