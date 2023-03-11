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
int divisor[mxn];

void divisor_cnt(int n){
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j+=i){
			divisor[j]++;
		}
	}
}
void solve(){
   int n;
   cin>>n;
   cout<<divisor[n]<<endl;

   //10=1,2,5,10==(4);
   //20=1,2,4,5,10,20=(6)
}
signed main(){ 
    fastio; 
    divisor_cnt(1e7);
    int t=1;
    //cin>>t;
    while(t--){
       solve();
    }
}
