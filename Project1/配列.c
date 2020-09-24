#include<stdio.h>

void main(void) {


	int data[] = { 1,20,30,4,2,9,53,21,11,49 };
	int i;	//for文用
	int search;	//入力用
	int ans = -1;	//要素数には入らないので

	scanf("%d", &search);

	for (i = 0;i < 10;i++)
	{
		if (data[i] == search) 
		{
			ans = search;
			printf("data[ %d ]",i );
			break;
		}
	}

	if (ans == -1)
		printf("NOT FOUND!");
	




	//int data[] = { 1,20,30,4,2,9,53,21,11,49 };	//ランダムの1次元配列データ
	//int i,k,j,buff;									//バブルソートで昇順に並べる

	////buffに一時格納。大きいものが最後に来るように並べます。
	////for文用のi,k　iが左、kが右とする。jは表示用



	//for (i = 0;i < 9;i++) {

	//	for (k = i+1;k < 10;k++) {
	//		if (data[i] > data[k]) {

	//			buff = data[k];
	//			data[k] = data[i];
	//			data[i] = buff;
	//		}
	//	}

	//}

	//for (j = 0;j < 10;j++) {
	//	printf("%d\n", data[j]);

	//}



	/*int data[10] = { 1,20,30,4,2,9,53,21,11,49 };
	int i;
	int max;

	max = 0;

	for (i = 0;i < 10;i++)
	{
		if (max < data[i]) 
		{
			max = data[i];
		}
	}
	printf("max = %d", max);*/

	//int a[10];				//配列
	//int i;					//繰り返し用の変数

	//for (i = 0;i < 10;i++) {

	//	scanf("%d",&a[i]);

	//}
	//printf("%d", a[5]);

	/*int data[10] = { 1,20,31,4,2,9,53,100,24,41 };
	int i;

	for (i = 0;i < 10;i++)
	{

		if (!(data[i]%2))
		{
			printf("%d\n", data[i]);
		}
	}*/
	



}