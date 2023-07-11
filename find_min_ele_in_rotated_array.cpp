#include <iostream>
#include<algorithm>
#include<vector>
#include<climits>


using namespace std;
int findMin(vector<int>& nums) {
        int n=nums.size();
        if(nums[0]<nums[n-1]) return nums[0];
        if(n==1) return nums[0];
        int lo=0;
        int hi=n-1;
        int ans=INT_MAX;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(nums[mid]>=nums[0]){ //it means mid is at first half
                                     // so we need to move to second half
               lo=mid+1;            //bezoc minimum ele present at start of
                                     //second half.
            }
            else{ //it means we are at second half.
                ans=min(ans,nums[mid]);  //ans can we the mid as well
                hi=mid-1;
            }
        }
        return ans;  
    }




int main()
 {    //find minimum ele in rotated  array in in O(logn) 
     vector<int> nums={3,4,5,6,7,0,1,2};
     cout<<findMin(nums);
    
     return 0;
}
