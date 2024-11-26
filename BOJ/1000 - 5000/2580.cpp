// 백트래킹 연습
#include <iostream>
using namespace std;

int board[10][10];
int r[10][10];
int c[10][10];
int sq[10][10];

void search(int a) {
    if (a == 81) {
        for (int i=0;i<9;i++) {
            for (int j=0;j<9;j++) {
                cout << board[i][j] << " ";
            }
            cout << "\n";
        }
        exit(0);
    }
    int x=a/9; int y=a%9;
    if (!board[x][y]) {
        for (int i=1; i<10; i++) {
            if (!r[x][i] && !c[y][i] && !sq[((x/3)*3+y/3)][i]) {
                r[x][i] = c[y][i] = sq[((x/3)*3+y/3)][i] = 1;
                board[x][y] = i;
                search(a + 1);
                board[x][y] = 0;
                r[x][i] = c[y][i] = sq[((x/3)*3+y/3)][i] = 0;
            }
        }
    }
    else search(a + 1);
}

int main(void) {
    for (int i=0; i<9; i++) {
        for (int j=0; j<9; j++) {
            cin >> board[i][j];
            if (board[i][j]) {
                r[i][board[i][j]] = 1;
                c[j][board[i][j]] = 1;
                sq[((i/3)*3+j/3)][board[i][j]] = 1;
            }
        }
    }
    search(0);
    return 0;
}
// 참고: https://kjwan4435.tistory.com/56