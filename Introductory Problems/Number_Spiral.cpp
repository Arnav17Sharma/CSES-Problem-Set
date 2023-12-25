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
    ll t;
    cin >> t;
    while(t--){
        ll y, x, h, s;
        cin >> y >> x;
        ll m = max(x, y);
        if(m == y){
            if(m%2==0){s = y*y;h = s-(x-1);}
            else{s = (y-1)*(y-1) + 1; h = s+(x-1);}
        }
        else{
            if(m%2==0){s = (x-1)*(x-1) + 1; h = s+(y-1);}
            else{s = x*x; h = s-(y-1);}
        }
        cout << h << endl;
    }
}


int32_t main()
{
fastio()
answertoProb();
return 0;
}