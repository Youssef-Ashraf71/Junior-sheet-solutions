/*
       ____            ___________
      /\   \          |
     /  \   \         |
    /    \   \        |___________
   /______\   \                  |
  /        \   \                 |
 /          \  /       __________|
/            \/

 ___  ___              F
|\  \|\   \            F
\ \  \_\   \           F
 \ \ ___    \          F
  \  \ \\ \  \         F
   \  \__\\ \_\        F
    \ |__| \|__|       F

 */
#include <bits/stdc++.h>
#include <unordered_map>
#include<unordered_set>
#define ll long long
#define fast ios_base::sync_with_stdio(0); cin.tie(0);  cout.tie(0);
using namespace std;
#define REPi(a,b) for (int i = a; i <= b; i++)
#define REPj(a,b) for (int j = a; j <= b; j++)
#define genMod(x,Mod) (x<0)?(x % Mod + Mod) : (x % Mod)
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define all(v) v.begin(),v.end()
#define sz(v) (int) v.size()
const int N = 1e6 + 50,NN = 105, mod = 1e9 + 7;
ll REMINDER = 1000000007;
/*
int n, m;
char grid[1001][1001];
int vis[1001][1001];
1
int di[] = {0, 0, 1, 1, 1, -1, -1, -1};
int dj[] = {1, -1, 0, 1, -1, 0, 1, -1};
*/
void solve() {
   ll n,k;
    cin>>n>>k;
    vector<int> mama;
    for(int i=0;i<n;i++)
    {
        mama.push_back(i);
    }
    if( k==3 &&   n==4)
    {
        cout<<-1<<endl;
        return;
    }
    else if( k==0)
    {
        cout<<0<<" "<<n-1<<endl;
        mama[0]=-1;
        mama[n-1]=-1;
    }
    else if(k==n-1)
    {
        mama[n-1]=-1;
        mama[n-2]=-1;
        mama[n-3]=-1;
        mama[1]=-1;
        cout<<n-3<<" "<<1<<endl;
        mama[2]=-1;

        cout<<2<<" "<<0<<endl;
        mama[0]=-1;
        cout<<n-1<<" "<<n-2<<endl;
    }
    else
    {
        cout<<k<<" "<<n-1<<endl;
        cout<<n-1-k<<" "<<0<<endl;
        mama[n-1-k]=-1;
        mama[0]=-1;
        mama[k]=-1;
        mama[n-1]=-1;
    }

    for(int y=0;y<n;y++)
    {
        if(mama[y]!=-1)
        {
            mama[y]=-1;
            mama[n-1-y]=-1;
            cout<<y<<" "<<n-1-y<<endl;
        }
    }
}

int main()
{
    fast; // ashf gamed tenen
    //freopen("window.in", "r", stdin);   // for file reading
    ll test_case=1 ; cin >> test_case;
    while (test_case--)
    {
        solve();
    }
    return 0;
}
