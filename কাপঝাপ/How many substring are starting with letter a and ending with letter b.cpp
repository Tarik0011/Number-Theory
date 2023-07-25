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
int cnt[27][27];
int prefix[27];
void solve(){
	string s;
	cin>>s;
	for(int i=0;i<s.size();i++){
		int d=s[i]-'a';
		prefix[d]++;
		for(int j=0;j<26;j++){
			//startng with j and ending with d
			cnt[j][d]+=prefix[j];
		}
	}
	int q;
	cin>>q;
	while(q--){
		char a,b;
		cin>>a>>b;
		cout<<cnt[a-'a'][b-'a']<<endl;
	}
}
signed main(){ 
    fastio; 
    int t=1;
   // cin>>t;
    while(t--){
       solve();
    }
}

