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

const int mx=1e6+123;
int mod=1e9+7;
int fact[mx],inv[mx];

int modPow(int n,int k){
	int ans=1;
	while(k>0){
		if(k%2==1){
			ans*=n;
			ans%=mod;
		}
		k/=2;
		n*=n;
		n%=mod;
	}
	return ans;
}
void pre(){
   fact[0]=1;
   inv[0]=modPow(fact[0],mod-2);
   for(int i=1;i<=mx-1;i++){ 
       fact[i]=fact[i-1]*i%mod;
       inv[i]=modPow(fact[i],mod-2); 
   }
} 
int add(int a,int b){ 
    return ((a%mod)+(b%mod))%mod;
}
int mul(int a,int b){ 
    return ((a%mod)*(b%mod))%mod;
}
int sub(int a,int b){ 
    return ((a%mod)-(b%mod)+mod)%mod;
}
int nCr(int n,int k){ 
   return ((fact[n]*inv[k])%mod*inv[n-k])%mod;  
}
int nPr(int n,int k){ 
   return mul(fact[n],inv[n-k]);  
}
void solve(){
	//cout<<fact[5]<<endl;
}
signed main(){ 
    fastio; 
    pre();
    int t=1;
   // cin>>t;
    while(t--){
       solve();
    }
}
