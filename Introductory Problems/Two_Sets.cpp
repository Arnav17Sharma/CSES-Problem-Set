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
    if(n*(n+1)/2%2){cout << "NO";}
    else{
        vector<int> v1, v2;
        int j = 0;
        if(n%4){j = 3;}
        else{j = 4;}
        for(int i=0; i<(n-1)/4; i++){
            v1.push_back(4*i + 1 + j);
            v1.push_back(4*i + 4 + j);
            v2.push_back(4*i + 2 + j);
            v2.push_back(4*i + 3 + j);
        }
        if(n%4){
            v1.push_back(1);
            v1.push_back(2);
            v2.push_back(3);
        }else{
            v1.push_back(1);
            v1.push_back(4);
            v2.push_back(2);
            v2.push_back(3);
        }
        cout << "YES\n";
        cout << v1.size() << endl;
        for(int i: v1){
            cout << i << " ";
        }
        cout << endl << v2.size() << endl;
        for(int i: v2){
            cout << i << " ";
        }cout << endl;
    }
}


int32_t main()
{
fastio()
answertoProb();
return 0;
}