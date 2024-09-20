/*
Given array a of N integers. Given Q queries and 
in each query given L and R. Print sum of array 
elements from index L to R (L, R included)

Constraints:
1<=N<=10^5
1<=a[i]<=10^9
1<=Q<=10^5
1<=L,R<=N

Sample input:
6
2 4 1 5 10 7
3
2 3
2 5
5 6
*/

#include <bits/stdc++.h>
using namespace std;
const int N=1e5+1;
long long arr[N];
long long sum[N];
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		long long x;
		cin>>x;
		arr[i]=x;
		sum[i]=sum[i-1]+x;
	}
	int q;
	cin>>q;
	while(q--){
		int L, R;
		cin>>L>>R;
		cout<<sum[R]-sum[L-1]<<endl;
	}
}

// TC: O(N)+O(N) ~ O(N)