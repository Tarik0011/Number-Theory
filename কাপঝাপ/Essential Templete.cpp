#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
all comperator function{
/*
// #include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
all comperator function{
/*
// #include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
all comperator function{
/*
// priority_queue<pair<int,int>,vector<pair<int,int>>,cmp>pq;
// set<pair<int,int>,cmp>s;
// cmp function
struct cmp{
	constexpr bool operator()(pair<int,int>const& a,pair<int,int>const&b)
              const noexcept{
		if(a.first==b.first)return a.second>b.second;
               	return a.first<b.first;
	}
};
//priority_queue<vector<int>,vector<vector<int>>,comp>pq;
struct comp {
        bool operator()(vector<int>p1,vector<int>p2) {
            return p1[1]>p2[1];
        }
 };
					//Clockwise shifted k times
					// string tmp=s;
					// for(int i=0;i<n;i++){
					// 	tmp[(i+k)%n]=s[i];
					// }



 

//Lexicographically check
//pos[27]
// for(int i=0;i<s.size();i++){
// 	pos[s[i]-'a']=i;
// }
bool cmp(string a,string b){
	int p=a.size();
	int q=b.size();
	for(int i=0;i<min(p,q);i++){
		if(a[i]!=b[i]){
			return pos[a[i]-'a']<pos[b[i]-'a'];
		}
	}
	return p<q;
}





}
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

//Binary string to decimal
/*

	int ss=0;
	for(int i=0;i<s.size();i++){
		ss=ss*2+(s[i]-'0');
	}
	cout<<ss<<endl;

*/


