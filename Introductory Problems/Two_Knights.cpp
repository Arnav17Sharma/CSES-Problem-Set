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
    for(int k=1; k<=t; k++){
        ll d = k*k, h = d*(d-1)/2;
        if(k>2){
            h -= 4*(k-1)*(k-2);
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