#include <stdio.h>

main()
{
  int i;                               // カウンタ用変数    
  char a[5] = {'a','b','c','d','\0'};  // a[]の宣言と初期化 
  char b[4] = {'e','f','g','h'};       // b[]の宣言と初期化 
  char c[]  = "ijkl";                  // c[]の宣言と初期化 
  
  for (i = 0; i < 5; i++) {  // 配列 a を１文字づつ表示 
    printf("変数 a[%d]の内容は %c です。\n",i, a[i]);
  }
  
  for (i = 0; i < 4; i++) {  // 配列 b を１文字づつ表示 
    printf("変数 b[%d]の内容は %c です。\n",i, b[i]);
  }
  
  for (i = 0; i < 5; i++) {  // 配列 c を１文字づつ表示 
    printf("変数 c[%d]の内容は %c です。\n",i, c[i]);
  }
  
  printf("配列 a の内容は %s です。\n",a);   // 配列 a を文字列として表示 
  printf("配列 b の内容は %s です。\n",b);   // 配列 b を文字列として表示 
  printf("配列 c の内容は %s です。\n",c);   // 配列 c を文字列として表示 
  
  return(0);
}
