#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	if(n==1){
		cout << 1;
	}
	else if(n<4){
		cout << "NO SOLUTION";
	}
	else if(n==4){
		cout << 2 << " " << 4 << " " << 1 << " " << 3;
	}
	else{
		int x;
	vector<int> arr;
	if(n%2==0){
		x=n/2;
	}
	else{
		 x=n/2+1;
	}
	for(int i=1;i<=x;i++){
		arr.push_back(i);
		if(i+x<=n){
			arr.push_back(i+x);
		}
	}
	for(int i=0;i<n;i++){
		cout << arr[i] << " " ;
	}
}
}