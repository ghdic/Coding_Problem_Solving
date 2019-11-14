/*
https://www.acmicpc.net/problem/1325

&Title
1325번 - 효율적인 해킹

&Question
해커 김지민은 잘 알려진 어느 회사를 해킹하려고 한다. 
이 회사는 N개의 컴퓨터로 이루어져 있다. 김지민은 귀찮기 때문에, 
한 번의 해킹으로 여러 개의 컴퓨터를 해킹 할 수 
있는 컴퓨터를 해킹하려고 한다.이 회사의 컴퓨터는 신뢰하는 관계와, 신뢰하지 
않는 관계로 이루어져 있는데, A가 B를 신뢰하는 경우에는 B를 
해킹하면, A도 해킹할 수 있다는 소리다.이 회사의 컴퓨터의 신뢰하는 
관계가 주어졌을 때, 한 번에 가장 많은 컴퓨터를 해킹할 
수 있는 컴퓨터의 번호를 출력하는 프로그램을 작성하시오. 

&Input
첫째 줄에, N과 M이 들어온다. N은 10,000보다 작거나 
같은 자연수, M은 100,000보다 작거나 같은 자연수이다. 둘째 줄부터 
M개의 줄에 신뢰하는 관계가 A B와 같은 형식으로 들어오며, 
"A가 B를 신뢰한다"를 의미한다. 컴퓨터는 1번부터 N번까지 번호가 하나씩 
매겨져 있다. 

&Output
첫째 줄에, 김지민이 한 번에 가장 많은 컴퓨터를 
해킹할 수 있는 컴퓨터의 번호를 오름차순으로 출력한다. 

&Example
-input
5 4
3 1
3 2
4 3
5 3

-output
1 2


*/

/*
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, m;
vector<int> map[10001];
int cache[10001];
int max_val;
vector<int> number;

int dfs(int idx) {
	int& res = cache[idx];
	if (res != -1)return cache[idx];
	res = 1; // 0으로 할경우 죄다 0되버림
	for (int i = 0; i < map[idx].size(); ++i) {
		res += dfs(map[idx][i]);
	}
	return res;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	fill(cache, cache + 10000, -1);
	cin >> n >> m;
	int a, b;
	for (int i = 0; i < m; ++i) {
		cin >> a >> b;
		map[b].push_back(a);
	}

	
	for (int i = 1; i <= n; ++i) {
		if (cache[i] == -1) {
			int val = dfs(i);
			if (max_val == val) {
				number.push_back(i);
			}
			else if (max_val < val) {
				max_val = val;
				number.clear();
				number.push_back(i);
			}
		}
	}
	cout << number[0];
	for (int i = 1; i < number.size(); ++i)
		cout << " " << number[i];
	cout << endl;
	return 0;
}
*/