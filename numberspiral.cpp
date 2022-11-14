#include<bits/stdc++.h>
using namespace std;
int main(){
	long long t;
	cin >> t;
	while(t--){
		long long x,y,z;
		cin >> x >> y;
		if(x<y){
			
			if((y-1)%2==0){
				z=(y)*(y)-(x-1) ;
			}
			else{
				z=(y-1)*(y-1)+(x-1)+1 ;
			}
			cout << z << "\n";
		}
		else{
			if((x-1)%2==0){
				z=(x-1)*(x-1)+(y-1)+1;
			}
			else{
				z=(x*x)-(y-1);
			}
			cout << z << "\n";
		}

}
}