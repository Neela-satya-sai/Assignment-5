#include <iostream>
#include<algorithm>
#include<vector>
#include<climits>


using namespace std;



int main()
 {   vector<int> arr1={1,6,3,8,4,5,7,89};
     int m=arr1.size();
     vector<int> arr2={6,3,2,4,10,3,9};
     int n=arr2.size();
     
     vector<vector<int>> ans(2);
     vector<int> :: iterator it;
     vector<int> temp;
     
     for(int i=0;i<m;i++){
         it=find(arr2.begin(),arr2.end(),arr1[i]);
         if(it==arr2.end()){
              temp.push_back(arr1[i]);
         }
     }
     ans[0]=temp;
     for(int i=0;i<temp.size();i++){
         cout<<temp[i]<<" ";
     }
     cout<<endl;
     temp.clear();
     for(int i=0;i<n;i++){
             it=find(arr1.begin(),arr1.end(),arr2[i]);
             if(it==arr1.end()){
                  temp.push_back(arr2[i]);
             }
         }
     ans[1]=temp;  
     
      for(int i=0;i<ans.size();i++){
      for(int j=0;j<ans[i].size();j++){
          cout<<ans[i][j]<<" ";
      }
      cout<<endl;
      }
     
     return 0;
}
