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
    ll n, b, m, h = 0;
    vi v;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> b;
        if(i==0){m = b;}
        else if(b < m){h += (m-b);}
        else{m = b;}
    }
    cout << h;
}


int32_t main()
{
fastio()
answertoProb();
return 0;
}