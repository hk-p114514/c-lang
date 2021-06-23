#include <hamakou.h>
#include <stdio.h>

void swap(int *p, int *q);

main() {
	int x, y;

	x = getint("x: ");
	y = getint("y: ");
	printf("交換前: x = %d, y = %d\n", x, y);

	swap(&x, &y);

	printf("交換後: x = %d, y = %d\n", x, y);

	return (0);
}

void swap(int *p, int *q) {
	int work; // 作業用変数

	work = *p; // -+
	*p = *q;   //  |- 入れ換え処理
	*q = work; // -+

	return;
}
