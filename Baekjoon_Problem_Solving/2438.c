/*
https://www.acmicpc.net/problem/2438

&Title
별찍기 - 1

&Question
첫째 줄에는 별 1개, 둘째 줄에는 별 2개, N번째 줄에는 별 N개를 찍는 문제

&Input
첫째 줄에 N (1<=N<=100)이 주어진다.

&Output
첫째 줄부터 N번째 줄 까지 차례대로 별을 출력한다.

&Example
-input
5
-output
*
**
***
****
*****

*/


/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int N;
	scanf("%d", &N);

	for (int i = 1; i <= N; i++) {
		for (int j = 0; j < i; j++) {
			printf("*");
		}
		puts("");
	}
	return 0;
*/