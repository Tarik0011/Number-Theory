/*		Touple


bool cmp(tuple<int,int,int>&a,tuple<int,int,int>&b){
	return get<0>(a)<get<0>(b);
}

vector<tuple<int,int,int>>t;
	for(int i=1;i<=m;i++){
		int u,v,w;
		cin>>u>>v>>w;
		t.pb({w,u,v});
	}
	
	for(auto x:t){
		int w=get<0>(x);
		int u=get<1>(x);
		int v=get<2>(x);
		cout<<u<<" "<<v<<" "<<w<<endl;
	}
	 for (int i = 1; i < n;i++){
		int u=get<0>(t[i]);
	        int v=get<0>(t[i-1]);
		 int idx1=get<2>(t[i]);
		 int idx2=get<2>(t[i-1]);
		 tmp.pb({u-v,idx1,idx2});
    }


*/






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


			//special binary search for within a range
/*

 //https://leetcode.com/problems/find-the-longest-equal-subarray/
//https://codeforces.com/contest/180/problem/E



int bs(int i,vector<int>&v,int k){
	int l=i,r=v.size()-1,ans=-1;
	while(l<=r){
		int m=(l+r)>>1;
		int size=v[m]-v[i]+1;
		int equal=m-i+1;
		if(size-equal<=k){
			l=m+1;
			ans=equal;
		}else{
			r=m-1;
		}
	}
	return ans;

}
*/

