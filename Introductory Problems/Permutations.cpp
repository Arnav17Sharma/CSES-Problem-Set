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
    int n;
    cin >> n;
    if(n==1){cout << 1;}
    else if(n==2 | n==3){cout << "NO SOLUTION";}
    else{
        if(n%2==0){
            for(int i=2; i<=n; i+=2){cout << i << " ";}
            for(int i=1; i<=n; i+=2){cout << i << " ";}
        }
        else{
            for(int i=n-1; i>0; i-=2){cout << i << " ";}
            for(int i=n; i>0; i-=2){cout << i << " ";}
        }
    }
}


int32_t main()
{
fastio()
answertoProb();
return 0;
}