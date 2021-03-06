#include <stdio.h>

#define DATA_SIZE 20  //  データの個数の定義
#define BUFF_SIZE 100 //  fgets()で使う文字配列の大きさの定義

int main() {
	int data[ DATA_SIZE ]; //  データを格納する配列
	int max_idx;           //  最大値の番号を格納する変数

	char line[ BUFF_SIZE ]; //  fgets()で使う文字配列
	int i, j, work;

	/*============ データの入力 ============*/
	printf("\n＜＜%d個のデータを入力してください＞＞\n", DATA_SIZE);
	for (i = 0; i < DATA_SIZE; i++) {
		printf("data[%2d] = ", i);        // 入力要求のメッセージ
		fgets(line, sizeof(line), stdin); // データを文字で入力
		sscanf(line, "%d", &data[ i ]);   // データを10進数に変換
	}

	/*========== データの並べ換え ==========*/
	for (i = 0; i < DATA_SIZE - 1; i++) {
		max_idx = i; // 仮の最大値の番号を保存
		for (j = i + 1; j < DATA_SIZE; j++) {
			if (data[ max_idx ] < data[ j ]) { // 並べ換えの必要があるか
				max_idx = j;                   // 最大値の番号を保存
			}
		}
		if (max_idx != i) {              // max_idx が変化しているか
			work = data[ i ];            // -+
			data[ i ] = data[ max_idx ]; //  |- 入れ替え処理
			data[ max_idx ] = work;      // -+
		}
	}
	/*============ 結果の出力 =============*/
	printf("\n** 降順に並べ換えた結果 **\n");
	for (i = 0; i < DATA_SIZE; i++) {
		printf("%2d番目＝%d\n", i + 1, data[ i ]); //  ソート後のデータ表示
	}

	return (0);
}
