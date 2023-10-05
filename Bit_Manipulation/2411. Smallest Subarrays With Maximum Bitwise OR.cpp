//https://leetcode.com/problems/smallest-subarrays-with-maximum-bitwise-or/

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


/*9  ->  0 0 1 0 0 1
13 ->    0 0 1 1 0 1
55 ->    1 1 0 1 1 1
48 ->    1 1 0 0 0 0
56 ->    1 1 1 0 0 0


ith bit   idx
0->       0,1,2
1->       2
2->       1,2
3->       0,1,4
4->       2,3,4
5->       2,3,4 

*/

	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	vector<queue<int>>loc(30);
	for(int i=0;i<n;i++){
		for(int j=0;j<4;j++){
			if(a[i]&(1<<j)){
				loc[j].push(i);
			}
		}
	}
	vector<int>ans(n+1,1);
	for(int i=0;i<n;i++){
		int hi=i;
		for(auto &x:loc){//0-32 bit(just check front)
			if(x.size() and i>x.front())x.pop();
			if(x.size())hi=max(hi,x.front());
		}
		ans[i]=hi-i+1;
	}
	for(int i=0;i<n;i++)cout<<ans[i]<<" ";
	cout<<endl;


	

}
signed main(){ 
    fastio; 
    int t=1;
   // cin>>t;
    for(int i=1;i<=t;i++){
       // cout<<"Case #"<<i<<": ";
       solve();
    }
}
