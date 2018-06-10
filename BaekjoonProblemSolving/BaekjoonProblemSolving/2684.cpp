/*
https://www.acmicpc.net/problem/2684

&Title
2684번 - 동전 게임

&Question
동전게임은 주로 두 사람이 함께 즐기는 게임이다. 이 
중 3-동전게임은 여러 명이 할 수 있는 게임이다. 각 
사람은 각각 3-동전수열 중 하나를 선택한다. 3-동전수열이랑 앞 뒤 
앞과 같은 수열이고, 8가지(뒤뒤뒤,뒤뒤앞,뒤앞뒤,뒤앞앞,앞뒤뒤,앞뒤앞,앞앞뒤,앞앞앞)가 있다. 이제 심판은 동전 1개를 
40번 던진다. 그 다음 심판은 동전이 앞인지 뒤인지를 던진 
순서대로 종이에 적는다. 그 다음 3-동전수열이 각각 몇 번씩 
나왔는지 기록한다. 가장 많이 나온 수열을 선택한 사람이 이긴다. 
동전 40번 던진 결과가 주어졌을 때, 3-동전수열이 각각 몇 
번 나왔는지를 출력하는 프로그램을 작성하시오. 예를 들어, 40개의 동전이 
모두 앞면일 경우 앞앞앞은 38번 나타난다. 

&Input
첫째 줄에 테스트 케이스의 개수 P(1 ≤ P 
≤ 1000)가 주어진다. 각 테스트 케이스는 한 줄로 이루어져 
있고, 동전을 40번 던진 결과가 주어진다. 이 때, 앞면은 
H로, 뒷면은 T로 표현한다. 

&Output
각 테스트 케이스마다 3-동전수열이 몇 번 나타났는지를 출력한다. 
뒤뒤뒤, 뒤뒤앞, 뒤앞뒤, 뒤앞앞, 앞뒤뒤, 앞뒤앞, 앞앞뒤, 앞앞앞 순서대로 
공백으로 구분해서 출력한다. 

&Example
-input
4
HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH
TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT
HHTTTHHTTTHTHHTHHTTHTTTHHHTHTTHTTHTTTHTH
HTHTHHHTHHHTHTHHHHTTTHTTTTTHHTTTTHTHHHHT

-output
0 0 0 0 0 0 0 38
38 0 0 0 0 0 0 0
4 7 6 4 7 4 5 1
6 3 4 5 3 6 5 6


*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

int main() {
	int N;
	cin >> N;
	while (N--) {
		string s;
		cin >> s;
		int tmp, i = 0, cnt = 0;
		while ((tmp=s.find("TTT", i))!=-1) {
			i = tmp + 1;
			cnt++;
		}
		printf("%d ", cnt);
		i = cnt = 0;
		while ((tmp = s.find("TTH", i)) != -1) {
			i = tmp + 1;
			cnt++;
		}
		printf("%d ", cnt);
		i = cnt = 0;
		while ((tmp = s.find("THT", i)) != -1) {
			i = tmp + 1;
			cnt++;
		}
		printf("%d ", cnt);
		i = cnt = 0;
		while ((tmp = s.find("THH", i)) != -1) {
			i = tmp + 1;
			cnt++;
		}
		printf("%d ", cnt);
		i = cnt = 0;
		while ((tmp = s.find("HTT", i)) != -1) {
			i = tmp + 1;
			cnt++;
		}
		printf("%d ", cnt);
		i = cnt = 0;
		while ((tmp = s.find("HTH", i)) != -1) {
			i = tmp + 1;
			cnt++;
		}
		printf("%d ", cnt);
		i = cnt = 0;
		while ((tmp = s.find("HHT", i)) != -1) {
			i = tmp + 1;
			cnt++;
		}
		printf("%d ", cnt);
		i = cnt = 0;
		while ((tmp = s.find("HHH", i)) != -1) {
			i = tmp + 1;
			cnt++;
		}
		printf("%d\n", cnt);
	}
	return 0;
}
*/