#include <stdio.h>
#include <hamako.h>

main()
{
    int n, i, j;
    //自然数nの入力
    n = getint("Enter a number 'n' : ");

    //1を除くn以下の自然数を用意する
    int natural[1000000];
    for (i = 2; i <= n; i ++) {
        natural[i] = 1;
    }

    //倍数を次々に消去していく
    //倍数を消去していない自然数iが残っている
    i = 0;
    while(i <= n) {
        //自然数iの倍数をまだ消去していない
        if (natural[i] == 1) {
            // j = iの倍数で最初に消去する自然数
            j = i * 2;
            while (j <= n) {
                natural[j] = 0;
                //次に消去するiの倍数
                j += i;
            }
        }
        //次の自然数iを選ぶ
        i ++;
    }

    for (i = 2; i <= n; i ++) {
        if (natural[i] == 1) {
            printf("%d\n", i);
        }
    }

    return (0);
}