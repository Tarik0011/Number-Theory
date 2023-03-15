/*
*   -------------- ?*?*? --------------
* |         In The Name of *Allah*     |
* |             Author : Tarik         |
* |                                    |
*  -------------- ?*?*? ---------------
*/
 
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
#define  pb        push_back
#define  all(v)    v.begin(),v.end()
#define  endl       '\n'  
#define  uint       long long
#define  int        long long
#define  fastio    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL) 
typedef tree<int,null_type,less_equal<int>,rb_tree_tag,tree_order_statistics_node_update>ordered_set; 

const int mxn=1e7+123;
bool is_prime[mxn];
vector<int>primes;

void sieve(int n){
	for(int i=1;i<=n;i++)is_prime[i]=1;
	for(int i=2;i<=n;i++){
		if(is_prime[i]){
			primes.push_back(i);
			for(int j=i*i;j<=n;j+=i){
				is_prime[j]=0;
			}
		}
	}
}
int phi(int n){
	int ans=n;
	for(auto x:primes){
		if(1ll*x*x>n || n==0)break;
		if(n%x==0){
			ans/=x;
			ans*=(x-1);
			while(n%x==0){
				n/=x;
			}
		}
	}
	if(n>1){
		ans/=n;
		ans*=(n-1);
	}
	return ans;
}
void solve(){
   int n;
   cin>>n;
   cout<<phi(n)<<endl;
}
signed main(){ 
    fastio; 
    sieve(1e7);
    int t=1;
    cin>>t;
    while(t--){
       solve();
    }
}
