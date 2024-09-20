/* Find Next Greatest Integer with TC: O(n)

Sample input:
6
4 5 2 25 7 8

Sample Output:
5 25 25 -1 8 -1  

*/

#include <bits/stdc++.h>
using namespace std;

vector<int> NGE(vector<int> v){
	stack<int> st;
	vector<int> nge(v.size());
	for(int i=0;i<v.size();i++){
		while(!st.empty() && v[i]>v[st.top()]){
			nge[st.top()]=i;
			st.pop();
		}
		st.push(i);
	}
	while(!st.empty()){
		nge[st.top()]=-1;
		st.pop();
	}
	return nge;
} 

int main(){
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	vector<int> nge=NGE(v);
	for(int i=0;i<n;i++){
		cout<<((nge[i]==-1) ? -1 : v[nge[i]])<<" ";
	}
}