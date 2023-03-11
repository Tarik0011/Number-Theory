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
void solve(){
   int n;
   cin>>n;
   vector<int>divisor;
   for(int i=1;i*i<=n;i++){
   	if(i*i==n)divisor.push_back(i);
   	else if(n%i==0){
   		divisor.push_back(i);
   		divisor.push_back(n/i);
   	}
   }
   sort(divisor.begin(),divisor.end());
   for(auto x:divisor)cout<<x<<" ";
   cout<<endl;
}
signed main(){ 
    fastio; 
    int t=1;
    //cin>>t;
    while(t--){
       solve();
    }
}
