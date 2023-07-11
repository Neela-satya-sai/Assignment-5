#include <iostream>
#include<algorithm>


using namespace std;



int main()
 {   //get squre of each number in sorted order  
     int arr[]={-4,-1,0,3,10};
     int n=sizeof(arr)/sizeof(arr[0]);
     for(int i=0;i<n;i++){
         arr[i]=arr[i]*arr[i];
     }
     sort(arr,arr+n);
     for(int i=0;i<n;i++){
         cout<<arr[i]<<" ";
     }
       
       return 0;
}
