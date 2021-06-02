#include <stdio.h>

int up(void);   // 関数プロトタイプ宣言
int down(void); // 関数プロトタイプ宣言

int main() {
	int up_dat, down_dat;

	up_dat = up();
	up_dat = up();

	down_dat = down();
	down_dat = down();

	printf("up_dat   = %2d回\n", up_dat);
	printf("down_dat = %2d回\n", down_dat);

	return (0);
}

int up(void) {
	static int x = 0; //　static変数
	x++;

	return (x);
}

int down(void) {
	static int y = 0; //　static変数
	y--;

	return (y);
}
