//https://cp-algorithms.com/sequences/mex.html#mex-with-array-updates

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

const int mxn=1e6+10;
int a[mxn];

class Mex {
private:
    map<int, int> frequency;
    set<int> missing_numbers;
    vector<int> A;

public:
    Mex(vector<int> const& A) : A(A) {
        for (int i = 0; i <= A.size(); i++)
            missing_numbers.insert(i);

        for (int x : A) {
            ++frequency[x];
            missing_numbers.erase(x);
        }
    }

    int mex() {
        return *missing_numbers.begin();
    }

    void update(int idx, int new_value) {
        if (--frequency[A[idx]] == 0)
            missing_numbers.insert(A[idx]);
        A[idx] = new_value;
        ++frequency[new_value];
        missing_numbers.erase(new_value);
    }
};
void solve(){
	int n;
	cin>>n;
	vector<int>v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	 Mex a(v);
	 int q;
	 cin>>q;
	 while(q--){
	 	int idx,val;
	 	cin>>idx>>val;
	 	cout<<a.mex()<<endl;
	 	a.update(idx,val);
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
