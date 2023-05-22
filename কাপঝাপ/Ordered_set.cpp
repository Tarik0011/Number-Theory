/*
  Ordered_set Leetcode
*/

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

class Solution {
public:
typedef tree< int, null_type, less_equal<int>, rb_tree_tag,
tree_order_statistics_node_update > ordered_set; 

    vector<int> countSmaller(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n,0);
         ordered_set s;
         for(int i=n-1;i>=0;i--){
             int x=s.order_of_key(nums[i]);
             ans[i]=x;
             s.insert(nums[i]);
         }
         return ans;
       
    }
};
