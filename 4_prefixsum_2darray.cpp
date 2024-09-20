/*
Given 2d array a of NxN integers. Given Q queries and 
in each query given a,b,c and d. Print the sum of
square represented by (a,b) as top left point 
and (c,d) as bottom right point.

Constraints:
1<=N<=10^3
1<=a[i][j]<=10^9
1<=Q<=10^5
1<=a,b,c,d<=N

Sample input:
3
3 6 2
8 9 2
3 4 1
2
1 1 2 2
1 2 3 3
*/

#include <bits/stdc++.h>
using namespace std;
const int N=1e3+1;
long long arr[N][N];
long long hsh[N][N];
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>arr[i][j];
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			hsh[i][j]=arr[i][j]+hsh[i-1][j]+hsh[i][j-1]-hsh[i-1][j-1];
		}
	}
	int q;
	cin>>q;
	while(q--){
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		cout<<hsh[c][d]-hsh[a-1][d]-hsh[c][b-1]+hsh[a-1][b-1]<<endl;
	}
}

// TC: O(N^2)+O(N^2)+O(10^5) ~ O(N^2)
