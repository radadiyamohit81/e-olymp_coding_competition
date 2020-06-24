#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n][n] ={0};
	int k = n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if ((i+j) < n){ 
                a[i][j] = 2; 
            } else{
				a[i][j] = 1;
			}
		}
		a[i][--k] = 0;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout << a[i][j];
		}
		cout << "\n";
	}
	return 0;
}
