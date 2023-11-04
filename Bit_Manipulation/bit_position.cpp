//https://www.hackerearth.com/challenges/competitive/november-easy-23/algorithm/range-queries-7-0a9ff8eb/
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
 
const int mxn=2e6+123;
int a[mxn],b[mxn];
int bit[mxn][32];

void fun(){
	for(int i=1;i<=1e5;i++){
		for(int mask=0;mask<=31;mask++){
			if(i&(1<<mask)){
				bit[i][mask]=1;
			}
		}
	}
	for(int i=1;i<=1e5;i++){
		for(int j=0;j<32;j++){
			bit[i][j]+=bit[i-1][j];
		}
	}
}
void solve(){
	int l,r,x;
	cin>>l>>r>>x;
	int ans=bit[r][x-1]-bit[l-1][x-1];
	cout<<ans<<endl;
}
signed main(){ 
    fastio; 
    int t=1;
    fun();
    cin>>t;
    for(int i=1;i<=t;i++){
      // cout<<"Case "<<i<<": ";
       solve();
    }
}
