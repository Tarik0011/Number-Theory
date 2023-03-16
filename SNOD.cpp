//Reference:https://forthright48.com/divisor-summatory-function

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

const int mxn=1e6+123;
int a[mxn];
//0(N)
int SNOD(int n){
	int ans=0;
	for(int i=1;i<=n;i++){
		ans+=(n/i);
	}
	return ans;
}
//o(sqrt(n))
int SNOD(int n){
	int ans=0;
	for(int i=1;i<=sqrt(n);i++){
		ans+=(n/i)-i;
	}
	ans*=2;
	ans+=(sqrt(n));
	return ans;
}
void solve(){
	cout<<SNOD(5)<<endl;
}
signed main(){ 
    fastio; 
    int t=1;
   // cin>>t;
    while(t--){
       solve();
    }
}
