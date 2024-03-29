#include <vector>
#include <bits/stdc++.h>
#include <string>
#include <cmath>

typedef long double ld;

#define fr(n) for (int i = 0; i < n; i++)
#define fe(x,n) for (int i = x; i < n; i++)
#define freq(x,n) for (int i = x; i <= n; i++)
#define ll long long int
#define endl "\n"
#define pb push_back
#define read(x) int x; cin >> x
#define readl(x) ll x; cin >> x
#define readvi(v,n) vector<int> v;fr(n){read(x);v.pb(x);}
#define readvl(v,n) vector<ll> v;fr(n){readl(x);v.pb(x);}
#define p(ans) cout << ans << endl
#define yes p("YES")
#define no p("NO")
const ld PI = 3.14159265358979323846L;
const ld E = 2.71828182845904523536L;
const ll mod = 1000000007;

using namespace std;
//solved

/* my code space complexity is more

checkout how to reduce it by tourist

    for (int i = 0; i < n; i++) {
      int h;
      cin >> h;
      if (h != H && h % k == H % k && abs(h - H) <= k * (m - 1)) {
        ans += 1;
      }
    }

https://chat.openai.com/share/529d2616-9045-42c1-90ee-dc1159127630

 */
void solve()
{
    read(n);
    read(m);
    read(k);
    read(h);
    vector<int> v(n);
    fr(n)
    {
        cin >> v[i];
        v[i] = abs(v[i] - h);
        // cout << v[i] << " ";
    }
    // p("");
    int ans = 0;
    fr(n){
        if(v[i]==0)
            continue;
        int x = v[i] % k;
        if(x==0){
            x = v[i] / k;
            if(x < m){
                ans++;
            }
        }
    }
    p(ans);
}

int main()
{
// #ifndef ONLINE_JUDGE

//     // For getting input from input.txt file
//     freopen("input.txt", "r", stdin);

//     // Printing the Output to output.txt file
//     freopen("output.txt", "w", stdout);

// #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout << fixed << setprecision(10);
    int t=1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    // fr(t){
    //     cout << "Case #" << i + 1 << ": ";
    //     solve();
    //     cout << endl;
    // }
    return 0;
}