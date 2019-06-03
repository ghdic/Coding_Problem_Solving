/*
https://www.acmicpc.net/problem/1543

&Title
1543번 - 문서 검색

&Question
세준이는 영어로만 이루어진 어떤 문서를 검색하는 함수를 만들려고 
한다. 이 함수는 어떤 단어가 총 몇 번 등장하는지 
세려고 한다. 그러나, 세준이의 함수는 중복되어 세는 것은 빼고 
세야 한다. 예를 들어, 문서가 abababa이고, 그리고 찾으려는 ababa라면, 
세준이의 이 함수는 이 단어를 0번부터 찾을 수 있고, 
2번부터도 찾을 수 있다. 그러나 동시에 셀 수는 없다.세준이는 
문서와 검색하려는 단어가 주어졌을 때, 그 단어가 최대 몇 
번 중복되지 않게 등장하는지 구하는 프로그램을 작성하시오. 

&Input
첫째 줄에 문서가 주어진다. 문서의 길이는 최대 2500이다. 
둘째 줄에 검색하고 싶은 단어가 주어진다. 이 길이는 최대 
50이다. 문서와 단어는 알파벳 소문자와 공백으로 이루어져 있다. 

&Output
첫째 줄에 중복되지 않게 최대 몇 번 등장하는지 
출력한다. 

&Example
-input
ababababa
aba

-output
2


*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int main() {
	string s1, s2;
	getline(cin, s1);
	cin >> s2;
	int j = 0, count = 0;
	for (int i = 0; i < s1.size(); i++) {
		if (j == s2.size()) {
			count++;
			j = 0;
		}
		if (s1[i] == s2[j]) {
			j++;
		}
		else {
			i -= j;
			j = 0;
		}
	}
	if (j == s2.size()) {
		count++;
		j = 0;
	}
	printf("%d\n", count);
	return 0;
}
*/

/*
그냥 풀면됨..
*/