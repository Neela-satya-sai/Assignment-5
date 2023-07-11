#include <iostream>
#include <vector>
#include<algorithm>
#include<stack>

using namespace std;
int arrangeCoins(int n) {   // lower bound question
       int lo=0;
       int hi=n;
       while(lo<=hi)
       {
           long long mid=lo+(hi-lo)/2;
           long long sum=mid*(mid+1)/2;
           if(sum>(long long)n) {
            
               hi=mid-1;
           }
           else lo=mid+1;
           
       } 
       return hi;
    }


int main()
 {      int n=6;
//       int m=n; 
//       int steps=0;
//       for(int i=1;i<=n;i++){
//           if(m>i){
//               steps++;
//               m-=i;
//           }
//           else break;
//       }
//       cout<<steps;
   cout<<arrangeCoins(n);
       return 0;
}
