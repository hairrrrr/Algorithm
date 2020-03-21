 //方法 1：数组法

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
		// p 表示数组下标
		p = (p + m - 1) % n;

		//printf("第 %d 个出圈的人的编号是：%d\n", ++k, v[p]);

		cout << "第" << ++k << "个出圈的人的编号是" << v[p] << endl;

		// 将数组前移
		for (i = p + 1; i < n; i++) {
			v[i - 1] = v[i];
		}

		n--; // 总人数减去 1

		// 如果出列的是最后一个人，下一个人应该从下一轮循环开始
		if (p == n)
			p = 0;
	}
}

int main(void) {

	int n = 10; // 总人数
	int m = 2; // 数的数

	Joseph(n, m);

	return 0;
}

