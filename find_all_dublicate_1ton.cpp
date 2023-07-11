#include <iostream>
#include<algorithm>
#include<vector>
#include<climits>


using namespace std;
vector<int> findDuplicates(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans;
        int i=0;
        while(i<n)
        {   int correctidx=nums[i]-1;
            if(nums[i]==i+1 || nums[i]==nums[correctidx]) i++;
            else{
                swap(nums[i],nums[correctidx]);
            }
        }
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=i+1){
               ans.push_back(nums[i]);
            }
        }
        return ans;
    }




int main()
 {   //find all dublicate elements
     vector<int> nums={4,3,2,7,8,2,3,1};
     vector<int> ans=findDuplicates(nums);
     for(int ele:ans){
         cout<<ele<<" ";
     }
    
    
     return 0;
}
