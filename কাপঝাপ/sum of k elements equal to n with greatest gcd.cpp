//https://codeforces.com/contest/803/problem/C
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

set<int>divisor(int n){
  set<int>s;
  for(int i=1;i*i<=n;i++){
   	if(i*i==n)s.insert(i);
   	else if(n%i==0){
   		s.insert(i);
   		s.insert(n/i);
   	}
   }
   return s;
}
void solve(){
   int n,k;
   cin>>n>>k;
   if(k>=1e7){
   	cout<<"-1"<<endl;
   	return;
   }
   int mx=(k*(k+1))/2;
   set<int>s=divisor(n);
   auto it=s.lower_bound(mx);
   if(it==s.end()){
   	cout<<"-1"<<endl;
   	return;
   }
   int x=*it,sum=0;
   for(int i=1;i<k;i++){
   	cout<<n/x*i<<" ";
   	sum+=n/x*i;
   }
   cout<<n-sum<<endl;
}
signed main(){ 
    fastio; 
    int t=1;
    //cin>>t;
    while(t--){
       solve();
    }
}
