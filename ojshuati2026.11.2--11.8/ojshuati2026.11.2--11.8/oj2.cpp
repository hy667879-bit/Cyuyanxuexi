#define _CRT_SECURE_NO_WARNINGS 
//1，完数
//#include <stdio.h>
//int wanshu(int n)
//{
//	int sum = 0;
//	for (int i = 1;i <n;i++)
//	{
//		if (n % i == 0)
//		{
//			sum += i;
//		}
//	}
//	if (sum == n)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//
//}
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	int found = 0;
//	int count = 0;
//	for (int a = n;a <= m;a++)           //    @1
//	{                                   
//		if (wanshu(a))
//		{
//			found = 1;
//			if (count== 0)
//			{
//				printf("%d", a);
//				count++;
//			}
//			else
//			{
//				printf(" %d", a);
//			}
//		}
//		
//	}
//	if (found == 0)
//	{
//		printf("NIL");                 //                    这几部分不是我想出来的  1：@1部分的另一个变量没想到
//		                               //                                            2：found 和count 的运用没想到     count用来最后的空格是否输出
//	}
//
//	return 0;
//}
// #include <stdio.h>
//2:阶乘
//int f(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * f(n - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", f(n));
//	return 0;
//}
//鞍点  分析->二维数组  变长数组吗  ？？vs上面没有clang啊啊啊啊啊
//时间格式转换
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int m = 0; 
//	scanf("%d:%d", &n, &m);
//	int i = n;
//	int j = m;
//	if (i == 0)
//	{
//		printf("12:%02d AM", j);
//	}
//	else if (i < 12)
//	{
//		printf("%d:%02d AM", n, j);
//	}
//	else if (i == 12)
//	{
//		printf("%d:%02d PM", n, j);
//	}
//	else if (i > 12)
//	{
//		printf("%d:%02d PM", n-12, j);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d:%d", &n, &m);
//    if (n == 0)
//    {
//        printf("12:%02d AM\n", m);
//    }
//    else if (n < 12)
//    {
//        printf("%d:%02d AM\n", n, m);
//    }
//    else if (n == 12)
//    {
//        printf("%d:%02d PM\n", n, m);
//    }
//    else if (n > 12)
//    {
//        printf("%d:%02d PM\n", n - 12, m);
//    }
//    return 0;
//}
//风力等级
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (n < 1)
//	{
//		printf("Calm");
//	}
//	if (n>=1&&n<=3)
//	{
//		printf("Light air");
//	}
//	else if (n>=4&&n<=27)
//	{
//		printf("Breeze");
//	}
//	else if (n>=28&&n<=47)
//	{
//		printf("Gale");
//	}
//	else if (n>=48&&n<=63)
//	{
//		printf("Storm");
//	}
//	else if (n>63)
//	{
//		printf("Hurricane");
//	}
//	return 0;
//}
//成绩转换
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (n >= 0 && n <= 59)
//	{
//		printf("F");
//	}
//	else if (n < +69 && n >= 60)
//	{
//		printf("D");
//	}
//	else if (n > +70 && n <= 79)
//	{
//		printf("C");
//	}
//	else if (n >= 80 && n <= 89)
//	{
//		printf("B");
//	}
//	else if (n >= 90 && n <= 100)
//	{
//		printf("A");
//	}
//	else 
//	{
//		printf("wrong score. must between 0 and 100.");
//	}
//	return 0;
//}
//#include <stdio.h>
//void find()
//{
//
//}
//int main()
//{
//	int arr[4] = { 0 };
//	for (int i = 0;i < 4;i++)
//	{
//		int n = 0;
//		scanf("%d ", &n);
//		arr[i] = n;
//	}
//	find();
//	return 0;
//}
//#include <stdio.h>
//int main() {
//    int a, b, c, d;
//    scanf("%d %d %d %d", &a, &b, &c, &d);
//
//    int max_val = a;
//    if (b > max_val) max_val = b;
//    if (c > max_val) max_val = c;
//    if (d > max_val) max_val = d;
//
//    int min_val = a;
//    if (b < min_val) min_val = b;
//    if (c < min_val) min_val = c;
//    if (d < min_val) min_val = d;
//    printf("Largest = %d, Smallest = %d\n", max_val, min_val);
//
//    return 0;
//}//数组的比较方法
//#include <stdio.h>
//
//int main() {
//    int n;
//    // 1. 读取个数
//    scanf("%d", &n);
//
//    // 2. 定义数组并读取数据
//    int arr[1005];
//    for (int i = 0; i < n; i++) {
//        scanf("%d", &arr[i]);
//    }
//
//    // 3. 初始化最大值和最小值为第一个元素
//    int max_val = arr[0];
//    int min_val = arr[0];
//
//    // 4. 循环比较
//    for (int i = 1; i < n; i++) {
//        if (arr[i] > max_val) {
//            max_val = arr[i];
//        }
//        if (arr[i] < min_val) {
//            min_val = arr[i];
//        }
//    }
//
//    // 5. 输出
//    printf("Largest = %d, Smallest = %d\n", max_val, min_val);
//
//    return 0;
//}
//qsort的比较方法
//#include <stdio.h>
//#include <stdlib.h> // qsort 函数在这个头文件里
//
//// 比较函数：用于告诉 qsort 怎么比较两个元素
//// 返回值 < 0 表示 a 排在 b 前面
//// 返回值 > 0 表示 a 排在 b 后面
//// 返回值 = 0 表示两者相等
//int compare(const void* a, const void* b) {
//    // 将 void 指针转换为 int 指针，然后解引用取值进行比较
//    int val1 = *(int*)a;
//    int val2 = *(int*)b;
//
//    // 这是升序（从小到大）的写法
//    // 如果想降序（从大到小），可以改成：return val2 - val1;
//    return val1 - val2;
//}
//
//int main() {
//    int n;
//    // 1. 读取数字个数
//    scanf("%d", &n);
//
//    // 2. 读取数组
//    int arr[1005]; // 假设 n 不超过 1000
//    for (int i = 0; i < n; i++) {
//        scanf("%d", &arr[i]);
//    }
//
//    // 3. 调用 qsort 进行排序
//    // 参数1：要排序的数组首地址
//    // 参数2：数组中元素的个数
//    // 参数3：每个元素占用的字节大小
//    // 参数4：比较函数的名称
//    qsort(arr, n, sizeof(int), compare);
//
//    // 4. 排序完成后，第一个就是最小值，最后一个就是最大值
//    int min_val = arr[0];
//    int max_val = arr[n - 1];
//
//    // 5. 输出结果（注意格式）
//    printf("Largest = %d, Smallest = %d\n", max_val, min_val);
//
//    return 0;
//}
//
//打印三角图形
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	for (int i = 0;i < n;i++)
//	{
//		for (int j = 0;j < n - 1-i;j++)
//		{
//			printf(" ");
//		}
//			for (int k= 0;k<2*i+1;k++)
//			{
//				printf("%c", 'A' + i);
//			}
//		printf("\n");
//	}
//	return 0;
//}
//显示偶数平方值
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	for (int i = 2;i <= n;i+=2)
//	{
//		int j = sqrt(i);
//		if (pow(j,2)==i)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}
//  

//显示单月的日历
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	for (int i = 1;i < m;i++)
//	{
//		printf("%3s", "");
//	}
//		for (int j = 1;j <= n;j++)
//		{
//			if ((j + m - 1) % 7 == 0)
//			{
//				printf("%3d\n", j);
//			}
//			else
//			{
//				printf("%3d",j);
//			}
//		}
//	
//	return 0;
//}
//计算单词的值
//#include <stdio.h>
//int main()
//{
//	char m;
//	scanf("%s", &m);
//
//	return 0;
//}
//奇偶个数
//#include<stdio.h>
//int main()
//{
//	size_t n = 0;
//	int count1 = 0;
//	int count2 = 0;
//	while (scanf("%zu", &n) != EOF)
//	{
//		if (n == -1)
//		{
//			break;
//		}
//		if (n % 2 == 0)
//		{
//			count1++;
//		}
//		else
//		{
//			count2++;
//		}
//	}
//	printf("%d %d", count1, count2);
//	return 0;
//}
#include <stdio.h>
int main()
{
	
	return 0;
}