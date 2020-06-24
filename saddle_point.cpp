#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,i,j,k,min,max,c=0;
	cin >> n >> m;
	int a[n][m],pos[2][2];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin >> a[i][j];
		}
	}
	for (i = 0; i < n; i++)
    {
        min = a[i][0];
        for (j = 0; j < m; j++)
        {
            if (min >= a[i][j])
            {
                min = a[i][j];
                pos[0][0] = i;
                pos[0][1] = j;
            }
        }
        j = pos[0][1];
        max = a[0][j];
        for (k = 0; k < m; k++)
        {
            if (max <= a[k][j])
            {
                max = a[i][j];
                pos[1][0] = k;
                pos[1][1] = j;
            }
        }
        if (min == max) {
            if (pos[0][0] == pos[1][0] &&pos[0][1] == pos[1][1])
            {
                c++;
            }
        }
    }
    cout << c;
	return 0;
}
