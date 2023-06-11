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
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update>ordered_set; 
 
const int mxn=1e6+10;
int a[mxn];


bool cmp(int x,int y){
	return a[x]>a[y];//descending order
}
void solve(){
	int n;cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	vector<int>ind(n);
	for(int i=0;i<n;i++){
		ind[i]=i;
	}
	sort(ind.begin(),ind.end(),cmp);
	for(int i=0;i<n;i++)cout<<ind[i]<<" ";
	cout<<endl;
  
    
    3 5 2 1 9
ind=4 1 0 2 3 
  
}
signed main(){ 
    fastio; 
    int t=1;
    //cin>>t;
    while(t--){
       solve();
    }
}
