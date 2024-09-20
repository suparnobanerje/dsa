/*
Starting with a 1-indexed array of zeros and a list of
operations, for each operation add a value to each the 
array element between two given indices, inclusive. 
Once all operations have been performed, 
return the maximum value in the array.

Constraints :
3 <= n <= 10^7
1 <= m <= 2*10^5
1 <= a <= b <= n
0 <= k <= 10^9

Sample Input :
5 3
1 2 100
2 5 100
3 4 100

Sample Output :
200

*/

// bruteforce approach :
#include <bits/stdc++.h>
using namespace std;
const int N=1e7+5;
long long arr[N];
// int main(){
//     int n,q;
//     cin>>n>>q;
//     while(q--){
//         int a,b,d;
//         cin>>a>>b>>d;
//         for(int i=a;i<=b;i++){
//             arr[i]+=d;
//         }
//     }
//     int max=-1;
//     for(int i=1;i<=n;i++){
//         if(max<arr[i]) max=arr[i];
//     }
//     cout<<max<<endl;
// }
// // TC: O(n*m + n) ~ O(10^7 * 10^5 + 10^7) ~ O(10^12) which cannot be executed in 1 sec

// most efficient :
int main(){
    int n,q;
    cin>>n>>q;
    while(q--){
        int a,b,k;
        cin>>a>>b>>k;
        arr[a]+=k;
        arr[b+1]-=k;
    }
    for(int i=1;i<=n;i++){
        arr[i]+=arr[i-1];
    }
    long long max=-1;
    for(int i=1;i<=n;i++){
        if(max<arr[i]) max=arr[i];
    }
    cout<<max<<endl;
}
// TC: O(n + n + n) ~ O(10^7) which can be executed in 1 sec
