#include<stdio.h>

void main(void) {


	int data[] = { 1,20,30,4,2,9,53,21,11,49 };
	int i;	//for���p
	int search;	//���͗p
	int ans = -1;	//�v�f���ɂ͓���Ȃ��̂�

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
	




	//int data[] = { 1,20,30,4,2,9,53,21,11,49 };	//�����_����1�����z��f�[�^
	//int i,k,j,buff;									//�o�u���\�[�g�ŏ����ɕ��ׂ�

	////buff�Ɉꎞ�i�[�B�傫�����̂��Ō�ɗ���悤�ɕ��ׂ܂��B
	////for���p��i,k�@i�����Ak���E�Ƃ���Bj�͕\���p



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

	//int a[10];				//�z��
	//int i;					//�J��Ԃ��p�̕ϐ�

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