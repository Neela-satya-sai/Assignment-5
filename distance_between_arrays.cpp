#include <iostream>
#include<algorithm>
#include<vector>
#include<climits>


using namespace std;




int main()
 {   //distance value b/w the two arrays
     vector<int> arr1={4,5,8,13};
     vector<int> arr2={10,9,1,8};
     int d=2;
     int c=0;
     for(int i=0;i<arr1.size();i++){
         int flag=1;
         for(int j=0;j<arr2.size();j++){
             if(abs(arr1[i]-arr2[j])<=d){
                 flag=0;
                 break;
             }
             
         }
         if(flag) c++;

     }
     cout<<c;
     return 0;
}
