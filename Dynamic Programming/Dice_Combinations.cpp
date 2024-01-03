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

const int mxN = 1e6, M = 1e9+7;
ll dp[mxN+1];

void answertoProb()
{
    int t;cin>>t;
    dp[0] = 1;
    for(int i=0; i<=t; i++){
        for(int j=1; j<=min(i, 6); j++){
            dp[i] = (dp[i] + dp[i-j])%M;
        }
    }
    cout << dp[t];
}

int32_t main()
{
fastio()
answertoProb();
return 0;
}