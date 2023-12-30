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
    string s, t;
    cin >> s;
    int d[26] = {};
    ll s1;
    for(char c: s){
        d[c-'A']++;
    }
    for(int i=0; i<26; i++){
        s1 += d[i]&1;
    }
    if(s1>1){cout << "NO SOLUTION";}
    else{
        for(int i=0; i<26; i++){
            if(d[i]&1^1){
                for(int j=0; j<d[i]/2; j++){t+=(char)('A'+i);}
            }
        }
        cout << t;
        for(int i=0; i<26; i++){
            if(d[i]&1){
                for(int j=0; j<d[i]; j++){cout << (char)('A'+i);}
            }
        }
        reverse(all(t));
        cout<<t;
    }
}


int32_t main()
{
fastio()
answertoProb();
return 0;
}