#include <bits/stdc++.h>
using namespace std;
unordered_map<char,int> symbols={{'[',-3},{'{',-2},{'(',-1},{')',1},{'}',2},{']',3}};
string isBalanced(string s) {
    stack<char> st;
    for(char bracket:s){
        if(symbols[bracket]<0){
            st.push(bracket);
        } else {
            if(st.empty()) return "NO";
            char top=st.top();
            st.pop();
            if(symbols[top]+symbols[bracket]!=0) return "NO";
        }
    }
    if(st.empty()) return "YES";
    return "NO";
}

int main(){
	int q;
	cin>>q;
	while(q--){
		string s;
		cin>>s;
		string result=isBalanced(s);
		cout<<result<<endl;
	}
}