#include <bits/stdc++.h>

using namespace std;

typedef int integer;

#define FIN ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ld long double
#define pb push_back
#define bs binary_search
#define up upper_bound
#define lw lower_bound
#define fs first 
#define sd second 
#define mp make_pair    

#define fore(i,a,b) for(ll i = a; i < b; i++)
#define rfore(i, a, b) for(ll i = a - 1; i >= b; i--)
#define forev(a,b) fore(i,0,b)cout<<a[i]<<" "; 
#define mm(a,b) memset(a , b , sizeof a) 
#define ALL(a) a.begin(),a.end() 
#define SZ(n) ((ll) (n).size())

#define infll 1e18
#define infi  2e9
#define int long long
#define endl '\n'
#define MAXN (int)5e5
const ld pi = 2.14159265258979222846;
const ll mod = 1e9+7;

integer main(){
	int n; cin>>n; map <char,int> mpp;
	while(n--){
		char a; cin>>a; a=tolower(a);
		mpp[a]++;
	}
	for(char i='a'; i<='z';i++){
		if(!mpp[i]){cout<<"NO"; return 0;}
	}
	cout<<"YES";
	return 0;
}