/*
https://www.acmicpc.net/problem/7567

&Title
�׸�
&Question
�׸��� �ٴڿ� ������ �� �� ���̴� 10cm �̴�. �׷��� �� ���� �׸��� ���� �������� ������ �� ���̴� 5cm�� �����ȴ�. ���� �׸��� ���� �ݴ�������� ���̸� ���̴� �׸���ŭ, �� 10cm �þ��. �׸��� ��ȣ ��ȣ�� ��Ÿ���� �����غ���. ���ǻ� �׸��� �׿����� ������ ���ʿ��� �������̶�� �����Ѵ�. �׸����� ��(���� �׸��� �ٴڿ� �ٷ� ���� ���¸� ��Ÿ����, ��)���� �׸��� �Ųٷ� ���� ���¸� ��Ÿ����.

���� �׸��� ������ ����� �Ʒ� �׸� 1(a)�� ���ٸ� ��ü�� ���̴� 25cm�� �ȴ�. �ֳ��ϸ� ó�� �ٴڿ� �ִ� �׸��� ���̰� 10cm�̰� ���� ���� �������� 3���� �׸��� ������ �����Ƿ� �þ ���̴� 5+5+5=15 �̱� �����̴�. �׸� 1(b)�� ���� ����� �� ���̴� 10*4=40cm�� �ȴ�.
�������� �Է¿� �־��� ����� �׸��� ���� �� ������ ��ü �׸� ���̸� ����ؼ� ����ؾ� �Ѵ�. �� ó�� �Է����� �־��� �� �׸��� ������ �ٲ� �� ����.
&Input
ù �ٿ��� ��ȣ���ڷθ� �̷���� ���ڿ��� �־�����. �Է� ���ڿ����� ���� ��ȣ ��(���� �ٷ� ���� �׸�, ���� ��ȣ ��)���� �Ųٷ� ���� �׸��� ��Ÿ����. ���ڿ��� ���̴� 3�̻� 50 �����̴�.
&Output
�������� �׸� ������ ��ȣ ���ڷ� ǥ�õ� ���ڿ��� �о �� ������ ���̸� ������ ����ؾ� �Ѵ�.
&Example
-input
((((
-output
25
*/

/*
#include <iostream>
#include <string>
using namespace std;

int main() {
	string N;
	int size = 0;
	cin >> N;
	for (int i = 0; i < N.size(); i++) {
		if (i == 0)size += 10;
		else if (N[i] == N[i - 1])size += 5;
		else if (N[i] != N[i - 1])size += 10;
	}
	cout << size << endl;
	return 0;
}
*/