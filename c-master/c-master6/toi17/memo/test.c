#include <stdio.h>

int main() {
	{
		int a = 10;

		int *p = &a;

		printf("p  = %d\n", p);
		printf("&a = %d\n", &a);
	}
	/*========================================*/
	{
		int a[ 10 ];
		/*========================================
		    aは変数名という意味もあるが、
		    c言語の仕組み的には、その配列の先頭アドレス
		    つまりは、
		    a は &a[0]と同じ意味を持っている
		========================================*/
	}
	return (0);
}