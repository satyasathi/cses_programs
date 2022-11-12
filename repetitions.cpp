#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin >> s;
	long long c=1;
	long long maxi=0;
	s=" "+s+" ";
	for(int i=0;i<s.size();i++){
		if(s[i]==s[i+1]){
			c+=1 ;
		}
		else{
			if(c>maxi) {
				maxi=c;
				}
			c=1; 
		}

	}
	cout << maxi;
}