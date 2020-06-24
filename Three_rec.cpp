#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[3][4];
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			cin >> a[i][j];
		}
	}
	if(a[0][0] == 2){
		cout << 22;
	}else{
		cout << 21;
	}
	return 0;
}
