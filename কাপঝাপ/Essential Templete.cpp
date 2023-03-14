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
 /*
	multiset<pair<int,int>>ms;
	auto it=ms.lower_bound({8,0});
	if (it != ms.end()) {
		//cout<<it->first<<" "<<it->second<<endl;
		//ms.erase(it);

    }
    /*

 	/*
 	vector<int>prefix(n+1,0),suffix(n+1,0);
 	int k=0;
 	for(int i=0;i<n;i++){
 		k=(k*10+(s[i]-'0'))%a;
 		prefix[i]=k;
 	}
 	int pw=1,sum=0;
 	for(int i=n-1;i>=0;i--){
 		sum=(sum+(s[i]-'0')*pw)%b;
 		suffix[i]=sum;
 		pw=(pw*10)%b;
 	}
 	*/

}
signed main(){ 
    fastio; 
    int t=1;
   // cin>>t;
    while(t--){
       solve();
    }
}
