 //���� 1�����鷨

#include<iostream>
#include<vector>
#include<stdio.h>

using namespace std;

void Joseph(int n, int m) {

	vector<int> v(n);
	int i, p = 0, k = 0;

	for (i = 0; i < n; i++)
		v[i] = i + 1;

	while (n > 1) {
		// p ��ʾ�����±�
		p = (p + m - 1) % n;

		//printf("�� %d ����Ȧ���˵ı���ǣ�%d\n", ++k, v[p]);

		cout << "��" << ++k << "����Ȧ���˵ı����" << v[p] << endl;

		// ������ǰ��
		for (i = p + 1; i < n; i++) {
			v[i - 1] = v[i];
		}

		n--; // ��������ȥ 1

		// ������е������һ���ˣ���һ����Ӧ�ô���һ��ѭ����ʼ
		if (p == n)
			p = 0;
	}
}

int main(void) {

	int n = 10; // ������
	int m = 2; // ������

	Joseph(n, m);

	return 0;
}

