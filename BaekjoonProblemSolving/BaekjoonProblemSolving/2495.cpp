/*
https://www.acmicpc.net/problem/2495

&Title
2495번 - 연속구간

&Question
여덟 자리의 양의 정수가 주어질 때, 그 안에서 
연속하여 같은 숫자가 나오는 것이 없으면 1을 출력하고, 있으면 
같은 숫자가 연속해서 나오는 구간 중 가장 긴 것의 
길이를 출력하는 프로그램을 작성하라. 예를 들어 세 개의 숫자 
12345123, 17772345, 22233331이 주어졌다고 하자. 12345123은 연속하여 같은 숫자가 
나오는 것이 없으므로 1을 출력하고, 17772345는 7이 세 개 
연속하여 나오므로 3을 출력하며, 22233331의 경우에는 2가 세 개, 
3이 네 개 연속해서 나오므로 그 중 큰 값인 
4를 출력하여야 한다. 

&Input
첫째 줄부터 셋째 줄까지 각 줄에 하나씩 세 
개의 여덟 자리 양의 정수가 주어진다. 

&Output
첫째 줄에서 셋째 줄까지 한 줄에 하나씩 각 
입력된 수 내에서 같은 숫자가 연속하여 나오는 가장 긴 
길이를 입력 순서대로 출력한다. 

&Example
-input
12345123
17772345
22233331
-output
1
3
4

*/

/*
#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	for (int i = 0; i < 3; i++) {
		int arr[10] = {};
		cin >> s;
		int max = 0, cnt = 0;
		for (int j = 0; j < s.size() - 1; j++) {
			cnt = 1;
			while (s[j] == s[j + 1]) {
				cnt++;
				j++;
				if (j == s.size() - 1)break;
			}
			if (max < cnt)
				max = cnt;
		}
		cout << max << endl;
	}
	return 0;
}
*/