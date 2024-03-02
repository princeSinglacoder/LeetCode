#include<bits/stdc++.h>
using namespace std;
void reverse(vector<string> &s){
	int start=0,end=s.size()-1;
	while(start<=end){
		string temp=s[start];
		s[start]=s[end];
		s[end]=temp;
		start++;
		end--;
	}
}
int main(){
	vector<string>s={"Prince","r","i","n","c","e"};
	reverse(s);
	for(int i=0;i<s.size();i++){
		cout<<s[i]<<" ";
	}
	return 0;
}
