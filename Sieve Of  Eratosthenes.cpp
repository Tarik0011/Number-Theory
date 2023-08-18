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
bool is_prime[mxn];
vector<int>primes;

void sieve(int n){
	for(int i=1;i<=n;i++)is_prime[i]=1;
	for(int i=2;i<=n;i++){
		if(is_prime[i]){
			primes.push_back(i);
			for(int j=i*i;j<=n;j+=i){
				is_prime[j]=0;
			}
		}
	}
}
void solve(){
   for(int i=0;i<100;i++)cout<<primes[i]<<endl;
}
signed main(){ 
    fastio; 
    sieve(1e7);
    int t=1;
    //cin>>t;
    while(t--){
       solve();
    }
}

//up to 10^8

// /*
// *   -------------- ?*?*? --------------
// * |         In The Name of *Allah*     |
// * |             Author : Tarik         |
// * |                                    |
// *  -------------- ?*?*? ---------------
// */
 
// #include<bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// using namespace __gnu_pbds;
// using namespace std;
// #define  pb        push_back
// #define  all(v)    v.begin(),v.end()
// #define  endl       '\n'  
// #define  uint       long long
// #define  int        long long
// #define  fastio    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL) 
// typedef tree<int,null_type,less_equal<int>,rb_tree_tag,tree_order_statistics_node_update>ordered_set; 

// const int mxn=1e6+123;
// int a[mxn];

// vector<bool>is_prime(100000000,true);

// void sieve(int n){
// 	is_prime[0]=is_prime[1]=false;
// 	for(int i=2;i*i<=n;i++){
// 		if(is_prime[i]){
// 			for(int j=i*i;j<=n;j+=i){
// 				is_prime[j]=false;
// 			}
// 		}
// 	}
// }
// void solve(){

// 	int l,r;
// 	cin>>l>>r;
// 	int ans=0;
// 	for(int i=l;i<=r;i++){
// 	    if(is_prime[i]){
// 	        ans++;
// 	    }
// 	}
// 	cout<<ans<<endl;
	
// }
// signed main(){ 
//     fastio; 
//     int t=1;
//     sieve(100000000);
//     cin>>t;
//     for(int i=1;i<=t;i++){
//     	cout<<"Case "<<i<<": ";
//        solve();
//     }
// }
