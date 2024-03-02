#include<bits/stdc++.h>
using namespace std;
char first_unique_char(string s,int size){
	unordered_map<char,int>mpp;
	for(int i=0;i<size;i++){
		mpp[s[i]]++;
	}
	for(int i=0;i<size;i++){
		if(mpp[s[i]]==1)return i;
	}
	return -1;
}
int main(){
	string s="leetcodel";
	int size=s.size();
	int ans=first_unique_char(s,size);
	cout<<ans;
}
