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
#define fst first 
#define snd second 
#define mp make_pair    

#define fore(i,a,b) for(ll i = a; i < b; i++)
#define rfore(i, a, b) for(ll i = a - 1; i >= b; i--)
#define forev(a,b) fore(i,0,b)cout<<a[i]<<" "; 
#define mm(a,b) memset(a , b , sizeof a) 
#define ALL(a) a.begin(),a.end() 
#define SZ(n) ((ll) (n).size())

#define infll (long long)1e7
#define INF (long long)1e13
#define infi  (int)2e9
#define int long long
#define endl '\n'
const ld pi = 3.14159265258979222846;
const ll mod = 1e9+7;
const ld EPS = 1e-18;
const int MAXN = 1e6+10;


typedef pair<ll,ll> pr;

ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b,a%b); } 
ll lcm(ll a, ll b) { return a * (b / gcd(a, b));}


integer main(){
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k; k--; k=2*k; string s; cin>>s;
        vector<pair<int,int>> res;
        int need = n-k; int put=0;
        fore(i,0,n){
            if(k>0){
                if(i&1 && s[i]=='('){
                    fore(j,i+1,n){
                        if(s[j]==')'){
                            reverse(s.begin()+i,s.begin()+j+1);
                            res.pb({i+1,j+1});
                            reverse(s.begin()+i+1,s.begin()+j+1);
                            res.pb({i+2,j+1});
                            break;
                        }
                    }
                }else if(!(i&1) && s[i]==')'){
                    fore(j,i+1,n){
                        if(s[j]=='('){
                            reverse(s.begin()+i,s.begin()+j+1);
                            res.pb({i+1,j+1});
                            reverse(s.begin()+i+1,s.begin()+j+1);
                            res.pb({i+2,j+1});
                            break;
                        }
                    }
                }
                k--;
            }else{
                if(put<need/2 && s[i]==')'){
                    fore(j,i+1,n){
                        if(s[j]=='('){
                            reverse(s.begin()+i,s.begin()+j+1);
                            res.pb({i+1,j+1});
                            reverse(s.begin()+i+1,s.begin()+j+1);
                            res.pb({i+2,j+1});
                            break;
                        }
                    }
                }else if(put>=need/2 && s[i]=='('){
                    fore(j,i+1,n){
                        if(s[j]==')'){
                            reverse(s.begin()+i,s.begin()+j+1);
                            res.pb({i+1,j+1});
                            reverse(s.begin()+i+1,s.begin()+j+1);
                            res.pb({i+2,j+1});
                            break;
                        }
                    }
                }
                put++;
            }
        }
        //cout<<s<<endl;
        cout<<SZ(res)<<endl;
        for(auto x:res){
            cout<<x.fst<<" "<<x.snd<<endl;
        }
    }
    return 0;
}