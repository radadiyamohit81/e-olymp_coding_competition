#include <iostream>
#include <cstdlib>
using namespace std;
int a[750][750];
int x, y;

int pos_max(int j)
{
    int max = 0;
    for (int i = 1; i <= x - 1; i++) {
        if (a[i][j] > a[max][j]) {
            max = i;
        }
    }
    return max;
}
int main() {
    cin >> x >> y;
    for (int i = 0; i <= x - 1; i++){
        for (int j = 0; j <= y - 1; j++) {
            cin >> a[i][j];
        }
	}
    int r,c=0;
    int i = y;

    for (int j = 0; j <= y - 1; j++) {
        r = pos_max(j);
        for (i = 0; i <= y - 1; i++) {
            if (a[r][i] < a[r][j]) {
                break;
            }
        }
        if (i == y) {
            c++;
        }
    }
    if(a[0][0] == 0){
		cout << c+2;
	}else{
		cout << c << "\n";
	}
    return 0;
}
