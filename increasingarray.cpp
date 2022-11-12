#include<bits/stdc++.h>
using namespace std;
int main(){
	typedef long long ll;
	ll n;
	cin >> n;
	vector<ll> arr;
	int j=0;
	for(ll i=0;i<n;i++){
		cin >> j;
		arr.push_back(j);
	}
	ll c=0;
	for(ll i=1;i<n;i++){
		if(arr[i-1]>arr[i]){
			c+=(arr[i-1]-arr[i]);
			arr[i]+=abs(arr[i-1]-arr[i]);
		}
	}
	cout << c;
}