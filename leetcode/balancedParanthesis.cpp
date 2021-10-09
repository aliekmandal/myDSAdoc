#include<bits/stdc++.h>

using namespace std;

bool sol(string s){
	stack<char> st;
	
	map<char , char> mapStr;
	
	mapStr[')']='(';
	mapStr['}']='{';
	mapStr[']']='[';
	
	for(int i=0;i<s.length();i++){
		if(s[i]=='('  || s[i]=='{'   ||  s[i]=='['){
			st.push(s[i]);
		}
		
		if(s[i]==')'||  s[i]=='}'   ||  s[i]==']'){
			if(st.empty()){
				return false;
			}
			
			else if(st.top()==mapStr[s[i]]){
				st.pop();
			}
			
			else{
				return false;
			}
		}
	}
	return (st.empty());
}

int main(){
	
	string str= "(])";
	
	cout<<sol(str);
	
	return 0;
}
