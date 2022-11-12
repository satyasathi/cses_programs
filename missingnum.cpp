#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n;
	cin >> n;
	vector<long long> arr;
	int j=0;
	for(long long i=0;i<n-1;i++){
		cin >> j;
		arr.push_back(j);
	}
	long long x=0 ;
	x=(n*(n+1))/2 ;
	long long s=0;
	for(long long i=0;i<n-1;i++){
		s+=arr[i];
	}
	cout << x-s;
}
