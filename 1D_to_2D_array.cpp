#include <iostream>
#include<algorithm>
#include<vector>
#include<climits>


using namespace std;
vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
       if (m * n != original.size()) return {};
        
        vector<vector<int>> res;
        for (int i = 0; i < m*n;) {
            vector<int> tmp;
            for (int j = 0; j < n; j++) tmp.push_back(original[i++]);
            res.push_back(tmp);
        }

        return res;
       
    }



int main()
 {   
     vector<int> arr={1,2,3,4,5,6,7,8,9};
     vector<vector<int>> ans=construct2DArray(arr,3,3);
     for(int i=0;i<ans.size();i++){
         for(int j=0;j<ans[i].size();j++){
             cout<<ans[i][j]<<" ";
         }
         cout<<endl;
     }
     return 0;
}
