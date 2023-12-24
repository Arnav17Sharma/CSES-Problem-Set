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
    ll n;
    cin >> n;
    while(n!=1){
        cout << n << " ";
        if(n%2==0){n = n/2;}
        else{n = 3*n + 1;}
    }
    cout << 1;
}


int32_t main()
{
fastio()
answertoProb();
return 0;
}