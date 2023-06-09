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
int phi[mxn];
int pre[mxn];

void phii(int n){
	for(int i=1;i<=n;i++)phi[i]=i;
	for(int i=2;i<=n;i++){
		if(phi[i]==i){
			for(int j=i;j<=n;j+=i){
				phi[j] *= (i-1);
                phi[j] /= i;
			}
		}
	}
	for(int i=1;i<=n;i++){
		pre[i]=pre[i-1]+phi[i];
	}
}
void solve(){
   int n,p;
   cin>>n>>p;
   int l=1,ans=-1,r=n;
   while(l<=r){
   	int mid=(l+r)>>1;
   	if(pre[mid]>=p){
   		ans=mid;
   		r=mid-1;
   	}else{
   		l=mid+1;
   	}
   }
   if(ans==-1)cout<<ans<<endl;
   else cout<<n/ans<<endl;
}
signed main(){ 
    fastio; 
    phii(1e7);
    int t=1;
    cin>>t;
    for(int i=1;i<=t;i++){
    	 cout << "Case " << i << ": ";
    	 solve();
    }
}
