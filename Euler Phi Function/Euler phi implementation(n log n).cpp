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
}
void solve(){
   int n;
   cin>>n;
   cout<<phi[n]<<endl;
}
signed main(){ 
    fastio; 
    phii(1e7);
    int t=1;
    cin>>t;
    while(t--){
       solve();
    }
}
