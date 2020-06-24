#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,c=1;
	cin >> n;
	int a[n][n] = {0};
	int t = (n*n) - ceil((n*n)/2) + 1;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if((i+j)%2 == 0){
				a[i][j] = c++; 
			}else{
				a[i][j] = t++;
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}
	return 0;
}
