/*
https://www.acmicpc.net/problem/10214

&Title
Baseball
&Question
경근이는 수업 과제의 일환으로 연세대학교의 역사를 조사하고 있었다. 케케묵은 도서관 구석에서 경근이가 발견한 것은 역대 연고전의 야구경기 실황 기록문서였다.
하지만 문서를 가지고 있음에도 불구하고 한 눈에 당시의 경기 승패를 파악하기에는 어려움이 많았는데, 문서에는 회차별 양 팀 획득 점수만이 적혀져 있기 때문이었다.

경근이는 주어진 방대한 자료를 해석하는것이 귀찮았기 때문에 절친한 프로그래머 친구인 당신에게 도움을 요청했다.

주어진 실황 기록문서에서 어떤 팀이 이겼는지를 알아내 경근이를 도와주자!
&Input
입력 파일의 첫 번째 줄에 테스트 케이스의 수를 의미하는 자연수 T가 주어진다. 그 다음에는 T개의 테스트 케이스가 주어진다.

각 테스트 케이스는 9줄에 걸쳐서 입력되며, 매 줄마다 해당 회의 연세대 득점 Y와 과 고려대 득점 K가 공백으로 구분되어 주어진다. 이 두 수는 0이상 9이하이다.
&Output
각각의 케이스마다 한 줄에 연세대가 이겼을 경우 "Yonsei", 고려대가 이겼을 경우 "Korea", 비겼을 경우 "Draw"를 출력한다.
&Example
-input
1
1 0
0 0
0 0
0 0
0 0
0 0
0 0
0 0
0 0
-output
Yonsei
*/

/*
#include <iostream>
using namespace std;

int main() {
	int N, a, b, A, B;
	cin >> N;
	for (int i = 0; i < N; i++) {
		A = B = 0;
		for (int j = 0; j < 9; j++) {
			cin >> a >> b;
			A += a;
			B += b;
		}
		if (A > B)cout << "Yonsei" << endl;
		else if (A == B)cout << "Draw" << endl;
		else cout << "Korea" << endl;
	}
	return 0;
}
*/