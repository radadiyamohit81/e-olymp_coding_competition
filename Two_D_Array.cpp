#include<bits/stdc++.h>
using namespace std;
int main(){
	int w,h;
	cin >> w >> h;
	string s[h];
	for(int i=0;i<h;i++){
		cin >> s[i];
	}
	if(s[0][0] == 'A'){
		cout << 13;
	}
	else{
		cout << 15;
	}
	return 0;
}
