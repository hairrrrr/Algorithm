## 题目

## Online Judge

Time Limit: 2000/1000 MS (Java/Others) Memory Limit: 65536/32768 K (Java/Others)
Total Submission(s): 10564 Accepted Submission(s): 3835

### Problem Description
Ignatius is building an Online Judge, now he has worked out all the problems except the Judge System. The system has to read data from correct output file and user's result file, then the system compare the two files. If the two files are absolutly same, then the Judge System return "Accepted", else if the only differences between the two files are spaces(' '), tabs('\t'), or enters('\n'), the Judge System should return "Presentation Error", else the system will return "Wrong Answer".

Given the data of correct output file and the data of user's result file, your task is to determine which result the Judge System will return.

### Input
The input contains several test cases. The first line of the input is a single integer T which is the number of test cases. T test cases follow.
Each test case has two parts, the data of correct output file and the data of the user's result file. Both of them are starts with a single line contains a string "START" and end with a single line contains a string "END", these two strings are not the data. In other words, the data is between the two strings. The data will at most 5000 characters.

### Output
For each test cases, you should output the the result Judge System should return.

### Sample Input
4

START

1 + 2 = 3

END

START

1+2=3

END

START

1 + 2 = 3

END

START

1 + 2 = 3

END

START

1 + 2 = 3

END

START

1 + 2 = 4

END

START

1 + 2 = 3

END

START

1 + 2 = 3

END

Sample Output

Presentation Error

Presentation Error

Wrong Answer

Presentation Error

答案参考链接：
链接：https://www.jianshu.com/p/0f479ef9aafc
