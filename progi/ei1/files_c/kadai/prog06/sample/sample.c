#include <stdio.h>
#include <hamako.h>

//自然数ｎ以下の素数を求める
main()
{
    int i, n, j;
    //1. 自然数ｎを入力する
    n = getint("Enter a number 'n' : ");
    //2. 素数２をそのまま表示する
    printf("%d\n", 2);
    //3. n以下の奇数を素数かどうか順に調べ、素数なら表示する
    for (i = 3; i <= n; i += 2) {
        //3.1 奇数iが素数がどうか調べる
        j = 3;
        while ((/*3.1.1 jがiより小さい*/j < i) && (/*3.1.2 iがjで割り切れない*/i % j != 0)) {
            j = j + 2;
        }
        //3.2 奇数iが素数なら表示する
        if (i == j) {
            //3.3 素数を表示する
            printf("%d\n", i);
        }
    }

    return (0);
}