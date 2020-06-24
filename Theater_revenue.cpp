#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin >> n >> m;
	int a[n][m],b[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin >> a[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin >> b[i][j];
		}
	}
	int sum = 0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(b[i][j] == 1){
				sum += a[i][j];
			}
		}
	}
	cout << sum;
	return 0;
}
