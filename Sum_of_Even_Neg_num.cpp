#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,sum = 0,c=0;
	cin >> n;
	int a[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin >> a[i][j];
			if(a[i][j] < 0 && abs(a[i][j])%2 == 0){
				sum += a[i][j];
				c += 1;
			}
		}
	}
	cout << c << " " << sum;
	return 0;
}
