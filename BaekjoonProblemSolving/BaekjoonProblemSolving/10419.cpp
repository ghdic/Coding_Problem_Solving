/*
https://www.acmicpc.net/problem/10419

&Title
10419번 - 지각

&Question
창영이는 이번학기에 어떤 교양수업을 듣고 있다. 그런데, 그 
교수님은 매우 지각을 자주 하시고 게다가 수업에 지각을 하였을 
경우 수업을 일찍 마쳐 주기까지 하는 것을 발견하였다.창영이는 교수님의 
지각시간 t (t 는 0 이상의 정수) 와 수업을 
일찍 마쳐주는 시간 s 사이에 다음과 같은 관계가 있음을 
알았다.s = t2문득 창영이는 수업시간 d 가 주어졌을 때, 
교수님이 얼마나 지각을 할 수 있는지 궁금해졌고, 여러분은 창영이를 
도와서 교수님이 지각할 수 있는 최대의 시간을 알아보자. 물론, 
교수님이 도착하자마자 수업을 일찍 마쳐서 수업이 끝나는 것도 가능하다. 
예를 들어, 수업시간이 6분인 경우, 교수님이 2분 지각을 하면, 
4분간 수업을 일찍 마치게 되고 바로 수업을 끝낼 수 
있다. 또 다른 예로, 수업시간이 7분인 경우 교수님이 2분 
지각을 하면, 수업을 4분 일찍 마쳐줄 수 있고, 2+4≤7 
이므로 가능한 경우가 되고, 교수님이 3분 지각을 하게 되면, 
수업을 9분 일찍 마쳐야 되고, 3+9>7 이므로, 교수님이 3분 
지각을 하는 것은 불가능하다. 따라서, 교수님은 수업시간이 7분인 경우 
교수님은 최대 2분간 지각을 할 수 있다. 

&Input
창영이가 궁금한 경우의 수 T (1 ≤ T 
≤ 100) 가 첫번째 줄에 주어지고, 이어서 T 개의 
줄에 수업시간 d (1 ≤ d ≤ 10,000, d는 
정수) 가 차례대로 주어진다. 

&Output
수업시간에 따른 교수님이 지각할 수 있는 최대 시간 
t 를 정수로 구해서 출력한다. 

&Example
-input
5
1
2
5
6
7

-output
0
1
1
2
2


*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
using namespace std;

int main() {
	int T;
	scanf("%d", &T);
	while (T--) {
		int d;
		scanf("%d", &d);
		int i = 0;
		while (i + i * i <= d) {
			i++;
		}
		printf("%d\n", i - 1);
	}

	return 0;
}
*/