#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n][n];
	int sum = 0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin >> a[i][j];
			if(a[i][j] > 0){
				sum += a[i][j];
			}
		}
	}
	cout << sum;
	return 0;
}
