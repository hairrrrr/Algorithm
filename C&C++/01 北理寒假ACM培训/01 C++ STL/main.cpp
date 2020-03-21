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

	// 例8：二分查找
	vector<int> v{ 1, 2, 2, 3 };

	// 查找元素是否存在
	// O(logn)
	bool isExist = binary_search(v.begin(), v.end(), 3);// true

	// 将一个数插入一个有序数组，应该插到那个位置
	// O(logn)
	int firstLoc = lower_bound(v.begin(), v.end(), 2) - v.begin();// 1
	int lastLoc = upper_bound(v.begin(), v.end(), 2) - v.begin();// 3

	// 灵活应用这两个函数可以找到有序数组中第一个比查找值大，小的数据
	// 比如要查找第一个比该值大的应该用 upper_bound, 第一个比该值小的用 lower_bound




	// nth_element()
	// 这是一个部分排序函数，它的复杂度是 O(n) 的, 具体用法如下：
	vector<int> v{5, 6, 4, 3, 2, 6, 7, 9, 3 };
	
	nth_element(v.begin(), v.begin() + v.size() / 2, v.end());
	
	cout << "The median is" << v[v.size() / 2] << endl;// 5


	// 例7：运算符重载
	// 由于 sort 函数默认是调用 < 的 cmp 函数，那么我们可以重载运算符 <
	Point points[4];
	points[0] = { 1, 1 };
	points[1] = { 2, 1 };
	points[2] = { 2, 3 };
	points[3] = { 0, 1 };

	sort(points, points + 4);



	// 例6：<algorithm>
	int arr[] = { 9, 5, 2, 7 };
	
	//sort 快排 O(nlogn)
	sort(arr, arr + sizeof(arr) / sizeof(arr[0]));// 参数是数组首地址和数组最后一个元素的“下一个元素”的地址

	sort(arr1.begin(), arr1.end());// 使用 vector 的性质



	vector<int> arr;
	arr.push_back(9);
	arr.push_back(5);
	arr.push_back(2);
	arr.push_back(7);
	
	sort(arr.begin(), arr.end(), cmpInt);// 类似 C 的 qsort

	// sort 第三个参数是函数指针，它的作用是可以你来规定比较规则。自定的结构体，一定要写比较函数。

	Point points[4];
	points[0] = { 1, 1 };
	points[1] = { 2, 1 };
	points[2] = { 2, 3 };
	points[3] = { 0, 1 };
	
	// 如果 VS 有报错说函数存在其他重载，无法确定，那么你可以检查一下是不是结构体定义在函数调用之后！！！
	sort(points, points + 4, compare);


	getchar();

	// 例5：string 
	string str;
	string str1 = "World";
	string str2 = "Hello";
	string::iterator pStr;
	
	str = str1;// str is now "World"

	//在下标为 0 处插入字符串 str2
	str.insert(0, str2);// str is now "HelloWorld"

	// 设置 迭代器的指向
	pStr = str.begin() + str2.length();//使用 str2.size() 也是一样的 大小都是 5

	/* 需要注意的是：与 vector 中的 size 的复杂度(O(1))不同的是，string 中的 size 和 length 复杂度是 O(n)
	 这是因为 vector 设置了一个变量来存储数组大小，使用string时，你也可以设置一个记录字符串长度的变量*/

	
	// 在迭代器位置插入字符‘ ’
	str.insert(pStr, ' ');// str is now "Hello World"
	
	//// 把字符串 "!" 拼接到 str 后面，相当于 str += "!";
	str.append("!");// 参数必须是 字符串
	//str is now "Hello World!"
	


	cout << str << endl;
	
	// //除了上面说到的，下面还有几个较为常用的：
	str.c_str();//返回 C 语言字符串，用于 printf (char* 类型)
	str.compare(str1);// strcmp(str, str1);
	str == str1;// strcmp(str1, str2) == 0;

	// 例4 string 需要 #include<string>
	string str1 = "Hello";
	char str2[] = "World";
	string str3;
	str3.push_back('!');
	cout << str1 << " " << str2 << str3 << endl;

	// 例3 迭代器 
	vector<int>::iterator p;//p 类似于一个指针
	for (p = arr1.begin(); p != arr1.end(); p++) {
		cin >> *p;
		cout << *p << endl;
	}
	//arr1.size();// 数组元素个数
	//arr1.clear();// 清空数组
	//arr1.empty();// 数组是否为空
	//arr1.begin();// 数组首元素迭代器
	//arr1.end();// 数组最后一个元素的下一个元素的迭代器，该元素在数组中不存在
	//arr1.erase(p);//删除数组某个迭代器所在位置的数据
	//arr1.push_back(1);// 往数组后添加元素
	//arr1.pop_back();// 删除数组最后一个元素
	
	
	
	
	// 例2  vector 的遍历
	int n = 3;
	for (int i = 0; i < arr1.size(); i++) {
		scanf("%d", &arr1[i]);
		cout << arr1[i] << endl;
	}
	
	// 将 vector 作为数组，常用
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		arr2.push_back(a);
		cout << arr2[i] << endl;
	}


	// 例 1 vector 需要 #include<vector>
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

