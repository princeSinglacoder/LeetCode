#include<bits/stdc++.h>
using namespace std;
void find_diff(string s, string t){
	unordered_map<char,int>mpp;
	for(int i=0;i<s.size();i++){
		mpp[s[i]]++;
	}
	for(int i=0;i<t.size();i++){
		if(mpp.find(t[i])==mpp.end()){
			cout<<t[i];
			break;
		}
		else{
			mpp[t[i]]--;
			if(mpp[t[i]]==-1){
				cout<<t[i];
				break;
			}
		}
	}
}
int main(){
	string s="abcd";
	string t="bdcac";
	find_diff(s,t);
}
