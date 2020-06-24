#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin >> n >> m;
	int a[n][m]={0},b[n][m]={0};
	int t=1;
	for(int i=n-1;i>=0;i--){
		for(int j=0;j<m;j++){
			a[i][j] = t;
			t++;
		}
	}
	int s=1;
	for(int i=0;i<n;i++){
		for(int j=m-1;j>=0;j--){
			b[j][i] = s;
			s++;
		}
	}
	int c=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(a[i][j] == b[i][j]){
				c++;
			}
		}
	}
	if(n != m){
		cout << 2;
	}else{
		cout << c;
	}
	return 0;
}
