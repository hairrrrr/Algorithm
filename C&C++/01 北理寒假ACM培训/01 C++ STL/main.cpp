#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

vector<int> arr1(3);
vector<int> list;
vector<int> arr2;

struct Point {
	int x, y;
};

bool cmpInt(int a, int b);
bool compare(Point a, Point b);
bool operator<(Point a, Point b);


int main(void) {

	// ��8�����ֲ���
	vector<int> v{ 1, 2, 2, 3 };

	// ����Ԫ���Ƿ����
	// O(logn)
	bool isExist = binary_search(v.begin(), v.end(), 3);// true

	// ��һ��������һ���������飬Ӧ�ò嵽�Ǹ�λ��
	// O(logn)
	int firstLoc = lower_bound(v.begin(), v.end(), 2) - v.begin();// 1
	int lastLoc = upper_bound(v.begin(), v.end(), 2) - v.begin();// 3

	// ���Ӧ�����������������ҵ����������е�һ���Ȳ���ֵ��С������
	// ����Ҫ���ҵ�һ���ȸ�ֵ���Ӧ���� upper_bound, ��һ���ȸ�ֵС���� lower_bound




	// nth_element()
	// ����һ�����������������ĸ��Ӷ��� O(n) ��, �����÷����£�
	vector<int> v{5, 6, 4, 3, 2, 6, 7, 9, 3 };
	
	nth_element(v.begin(), v.begin() + v.size() / 2, v.end());
	
	cout << "The median is" << v[v.size() / 2] << endl;// 5


	// ��7�����������
	// ���� sort ����Ĭ���ǵ��� < �� cmp ��������ô���ǿ������������ <
	Point points[4];
	points[0] = { 1, 1 };
	points[1] = { 2, 1 };
	points[2] = { 2, 3 };
	points[3] = { 0, 1 };

	sort(points, points + 4);



	// ��6��<algorithm>
	int arr[] = { 9, 5, 2, 7 };
	
	//sort ���� O(nlogn)
	sort(arr, arr + sizeof(arr) / sizeof(arr[0]));// �����������׵�ַ���������һ��Ԫ�صġ���һ��Ԫ�ء��ĵ�ַ

	sort(arr1.begin(), arr1.end());// ʹ�� vector ������



	vector<int> arr;
	arr.push_back(9);
	arr.push_back(5);
	arr.push_back(2);
	arr.push_back(7);
	
	sort(arr.begin(), arr.end(), cmpInt);// ���� C �� qsort

	// sort �����������Ǻ���ָ�룬���������ǿ��������涨�ȽϹ����Զ��Ľṹ�壬һ��Ҫд�ȽϺ�����

	Point points[4];
	points[0] = { 1, 1 };
	points[1] = { 2, 1 };
	points[2] = { 2, 3 };
	points[3] = { 0, 1 };
	
	// ��� VS �б���˵���������������أ��޷�ȷ������ô����Լ��һ���ǲ��ǽṹ�嶨���ں�������֮�󣡣���
	sort(points, points + 4, compare);


	getchar();

	// ��5��string 
	string str;
	string str1 = "World";
	string str2 = "Hello";
	string::iterator pStr;
	
	str = str1;// str is now "World"

	//���±�Ϊ 0 �������ַ��� str2
	str.insert(0, str2);// str is now "HelloWorld"

	// ���� ��������ָ��
	pStr = str.begin() + str2.length();//ʹ�� str2.size() Ҳ��һ���� ��С���� 5

	/* ��Ҫע����ǣ��� vector �е� size �ĸ��Ӷ�(O(1))��ͬ���ǣ�string �е� size �� length ���Ӷ��� O(n)
	 ������Ϊ vector ������һ���������洢�����С��ʹ��stringʱ����Ҳ��������һ����¼�ַ������ȵı���*/

	
	// �ڵ�����λ�ò����ַ��� ��
	str.insert(pStr, ' ');// str is now "Hello World"
	
	//// ���ַ��� "!" ƴ�ӵ� str ���棬�൱�� str += "!";
	str.append("!");// ���������� �ַ���
	//str is now "Hello World!"
	


	cout << str << endl;
	
	// //��������˵���ģ����滹�м�����Ϊ���õģ�
	str.c_str();//���� C �����ַ��������� printf (char* ����)
	str.compare(str1);// strcmp(str, str1);
	str == str1;// strcmp(str1, str2) == 0;

	// ��4 string ��Ҫ #include<string>
	string str1 = "Hello";
	char str2[] = "World";
	string str3;
	str3.push_back('!');
	cout << str1 << " " << str2 << str3 << endl;

	// ��3 ������ 
	vector<int>::iterator p;//p ������һ��ָ��
	for (p = arr1.begin(); p != arr1.end(); p++) {
		cin >> *p;
		cout << *p << endl;
	}
	//arr1.size();// ����Ԫ�ظ���
	//arr1.clear();// �������
	//arr1.empty();// �����Ƿ�Ϊ��
	//arr1.begin();// ������Ԫ�ص�����
	//arr1.end();// �������һ��Ԫ�ص���һ��Ԫ�صĵ���������Ԫ���������в�����
	//arr1.erase(p);//ɾ������ĳ������������λ�õ�����
	//arr1.push_back(1);// ����������Ԫ��
	//arr1.pop_back();// ɾ���������һ��Ԫ��
	
	
	
	
	// ��2  vector �ı���
	int n = 3;
	for (int i = 0; i < arr1.size(); i++) {
		scanf("%d", &arr1[i]);
		cout << arr1[i] << endl;
	}
	
	// �� vector ��Ϊ���飬����
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		arr2.push_back(a);
		cout << arr2[i] << endl;
	}


	// �� 1 vector ��Ҫ #include<vector>
	list.push_back(1);
	list.push_back(2);

	return 0;
}

bool cmpInt(int a, int b) {
	return a > b;
}

bool compare(Point a, Point b) {

	if (a.x != b.x) {
		return a.x < b.x;
	}
	else {
		return a.y < a.x;
	}
}

bool operator<(Point a, Point b) {
	if (a.x != b.x) {
		return a.x < b.x;
	}
	else {
		return a.y < a.x;
	}
}

