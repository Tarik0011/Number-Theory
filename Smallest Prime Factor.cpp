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
int spf[mxn];

void smallest_prime_factor(int n){
	for(int i=1;i<=n;i++)is_prime[i]=1;
	for(int i=2;i<=n;i++){
		if(is_prime[i]){
			spf[i]=i;
			for(int j=i*i;j<=n;j+=i){
				is_prime[j]=0;
				if(spf[j]==0){
					spf[j]=i;
				}
			}
		}
	}
}
void solve(){
  int n;
  cin>>n;
  cout<<spf[n]<<endl;

  //10->2,5(smallest is->2)
}
signed main(){ 
    fastio; 
    smallest_prime_factor(1e7);
    int t=1;
    //cin>>t;
    while(t--){
       solve();
    }
}
