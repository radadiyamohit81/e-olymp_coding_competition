#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,sum=0,rsum=0;
	cin >> n;
	int a[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin >> a[i][j];
			if(i == j){
				sum += a[i][j];
			}
		}
	}
	int k = n;
	for(int i=0;i<n;i++){
		rsum += a[i][--k];
	}
	cout << sum << " " << rsum;
	return 0;
}
