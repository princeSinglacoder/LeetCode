#include<bits/stdc++.h>
using namespace std;
int longest_palindrome(string s){
	vector<int>upper_case(26,0);
	vector<int>lower_case(26,0);
	for(int i=0;i<26;i++){
		if(s[i]>=65 && s[i]<=90)){
			lower_case[s[i]-65]++;
		}
		else if(s[i]>=90 && s[i]<=120){
			upper_case[s[i]-90]++;
		}
	}
	int count=0;
	bool flag=false;
	for(int i=0;i<26;i++){
		if(lower_case[i]%2==0){
			count=lower_case[i];
		}
		else{
			count=lower_case[i]-1;
			flag=true;
		}
		if(upper_case[i]%2==0){
			count=upper_case[i];
		}
		else{
			count=upper_case[i]-1;
			flag=true;
		}
	}
	if(flag){
		count+=1;
	}
	return count;
}
int main(){
	string s="aBccccdd";
	int sum=longest_palindrome(s);
	cout<<sum;
}
