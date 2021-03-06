#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define endl "\n"
#define n 6
using namespace std;

// --------------------------------------------------------------------------------------------------------
void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif
// --------------------------------------------------------------------------------------------------------


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    vector<int> arr(n);
    for (int i=0;i<=n-1;i++)
    {
        cin >> arr[i];
    }

    for (int count=n;count<=2019;count++)
    {
        int size=arr.size();
        int last=arr[size-1];
        int slast=-1;

        for (int i=size-2;i>=0;i--)
        {
            if (arr[i]==last)
            {
                slast=size-i-1;
                break;
            }
        }

        if (slast==-1)
        {
            arr.push_back(0);
        }
        else
        {
            arr.push_back(slast);
        }
    }

    cout << *prev(arr.end()) << endl;
    return 0;
}