//#include<stdio.h>
//
//void main(void) {
//
//	int i, j;
//
//	for (i = 10; i >= 0; i--) {					//ひし形上辺
//		for (j = 1; j <= i; j++) {
//			printf(" ");						//空白生成
//		}
//		for (j = 1; j <= 20 - i * 2 + 1; j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 10; i >= 0; i--) {					//ひし形下辺
//		for (j = 10; j >= i; j--) {
//			printf(" ");
//		}
//		for (j = 20; j >= 21 - i * 2 + 1; j--) {
//			printf("*");
//		}
//		printf("\n");
//	}
//
//}