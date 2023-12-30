#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

//Macros
#define f(i,j) for(int i=0;i<j;i++)
#define rf(i,j) for(int i=j-1;i>=0;i--)
#define all(x) x.begin(), x.end()

//Typedef
typedef long long ll;
typedef pair<int, int> pi;
typedef vector<int> vi;
typedef map<int,int> mii;

void answertoProb()
{
    ll t;cin >> t;
    while(t--){
        ll x, y;cin>>x>>y;
        if(2*x-y>=0 && (2*x-y)%3==0 && 2*y-x>=0 && (2*y-x)%3==0){
            cout << "YES\n";
        }else{cout << "NO\n";}
    }
}


int32_t main()
{
fastio()
answertoProb();
return 0;
}