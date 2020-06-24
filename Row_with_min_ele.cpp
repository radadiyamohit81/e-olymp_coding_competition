#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin >> n >> m;
	int a[n][m];
	int min = 1e4;
	for(int i=0;i<n;i++){
		int sum = 0;
		for(int j=0;j<m;j++){
			cin >> a[i][j];
			sum += a[i][j];
		}
		if(sum <= min){
			min = sum;
		}
	}
	for(int i=0;i<n;i++){
		int sum = 0;
		for(int j=0;j<m;j++){
			sum += a[i][j];
		}
		if(sum == min){
			cout << i+1 << " ";
		}
	}
	return 0;
}
