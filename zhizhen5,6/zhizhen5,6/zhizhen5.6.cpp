#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//实现一个计算器
//整数的加法（1）、减法(2)、乘法(3)、除法(4)
//菜单：0退出
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//void menu()
//{
//	printf("-------------------------------\n");
//	printf("----- 1. add     2. sub   -----\n");
//	printf("----- 3. mul     4. div   -----\n");
//	printf("----- 0. exit             -----\n");
//	printf("-------------------------------\n");
//}
//
//void calc(int (*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	int r = 0;
//	printf("请输入2个操作数:");
//	scanf("%d%d", &x, &y);
//	r = pf(x, y);
//	printf("结果是: %d\n", r);
//}
//
//int main()
//{
//	int input = 0;
//	
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			calc(Add);
//			break;
//		case 2:
//			calc(Sub);
//			break;
//		case 3:
//			calc(Mul);
//			break;
//		case 4:
//			calc(Div);
//			break;
//		case 0:
//			printf("退出计算器\n");
//			break;
//		default:
//			printf("输入错误，请输入0~4的值\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}
//

//
//
void bubble_sort(int* arr, int sz)
{
	int i = 0;
	//确定趟数
	for (i = 0; i < sz - 1; i++)
	{
		int flag = 1;//标记是否有序：假设已经有序
		//一趟内部的比较
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (*(arr + j) > *(arr + j + 1))
			{
				flag = 0;//
				int tmp = *(arr + j);
				*(arr + j) = *(arr + j + 1);
				*(arr + j + 1) = tmp;
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}
//
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };// 0 1 2 3 4 5 6 7 8 9 
//	//对数组进行排序 - 升序
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	//输出
//	print_arr(arr, sz);
//
//	return 0;
//}

//int cmp(const void* p1, const void* p2)
//{
//    //
//}
// 要求:函数的返回值能体现出p1和p2指向的数据的大小
// //p1指向的数据>p2指向的数据, 返回 >0的数字
// //p1指向的数据<p2指向的数据, 返回 <0的数字
// //p1指向的数据==p2指向的数据, 返回 0
// 
//void qsort(void* base, //指针，指向了要排序的数组的第一个元素
//           size_t num, //base指向的数组的元素个数
//          size_t size, //base指向的数组中一个元素的字节数
//          int (*compar)(const void* p1, const void* p2)//函数指针 - 应该指向一个行数
//          //指向的这个函数用来比较base指向的数组中任意两个数据的大小
//          );

//int cmp_int(const void* p1, const void* p2)
//{
//	if (*(int*)p1 > *(int*)p2)
//		return 1;
//	else if (*(int*)p1 < *(int*)p2)
//		return -1;
//	else
//		return 0;
//}
#include <stdlib.h>
#include <string.h>

//
int cmp_int(const void* p1, const void* p2)
{
	return (*(int*)p1 - *(int*)p2);
}

void print_arr(int* arr, int sz)
{
	int i = 0;
	//确定趟数
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

//void test1()
//{
//	int arr[] = { 8,7,6,5,4,3,2,9,1,0 };// 0 1 2 3 4 5 6 7 8 9 
//	//对数组进行排序 - 升序
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print_arr(arr, sz);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	print_arr(arr, sz);
//}

struct Stu
{
	char name[20];
	int age;
};

int cmp_stu_by_age(const void* p1, const void* p2)
{
	//return (*(struct Stu*)p1).age - (*(struct Stu*)p2).age;
	return (((struct Stu*)p1)->age - ((struct Stu*)p2)->age);
}

int cmp_stu_by_name(const void* p1, const void* p2)
{
	return strcmp(((struct Stu*)p1)->name, ((struct Stu*)p2)->name);
}
//
//void test2()
//{
//	struct Stu arr[] = { {"zhangsan", 18}, {"lisi", 25}, {"wangwu", 15}};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_age);
//	qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_name);
//}

//void test3()
//{
//	struct Stu s = { "zhangsan", 28 };
//	printf("%s %d\n", s.name, s.age);
//
//	struct Stu* ps = &s;
//	printf("%s %d\n", (*ps).name, (*ps).age);
//	printf("%s %d\n", ps->name, ps->age);
//}

//结构题成员访问：
//1. 结构体变量.成员名
//2. 结构体指针->成员名


//void bubble_sort(void* base, size_t num, size_t size, int (*compar)(const void* p1, const void* p2))
//{
//	size_t i = 0;
//	for (i = 0; i < num - 1; i++)
//	{
//		int flag = 1;
//		size_t j = 0;
//		for (j = 0; j < num - 1 - i; j++)
//		{
//			// 用 compar 比较相邻两个元素
//			if (compar((char*)base + j * size, (char*)base + (j + 1) * size) > 0)
//			{
//				flag = 0;
//				// 逐字节交换两个元素
//				size_t k = 0;
//				for (k = 0; k < size; k++)
//				{
//					char tmp = *((char*)base + j * size + k);
//					*((char*)base + j * size + k) = *((char*)base + (j + 1) * size + k);
//					*((char*)base + (j + 1) * size + k) = tmp;
//				}
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//
//void Swap(char*buf1, char*buf2, size_t width)
//{
//	size_t i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//
//void bubble_sort2(void* base, size_t sz, size_t width, int (*cmp)(const void* p1, const void* p2))
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			//下标为j和下标为j+1这2个元素
//			//升序
//			if (cmp((char*)base + j*width, (char*)base + (j+1)* width) > 0)
//			{
//				//交换
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//			}
//		}
//	}
//}
//
//void test4()
//{
//	int arr[] = { 8,7,6,5,4,3,2,9,1,0 };// 0 1 2 3 4 5 6 7 8 9 
//	//对数组进行排序 - 升序
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print_arr(arr, sz);
//	bubble_sort2(arr, sz, sizeof(arr[0]), cmp_int);
//	print_arr(arr, sz);
//}
//
//void test5()
//{
//	struct Stu arr[] = { {"zhangsan", 18}, {"lisi", 25}, {"wangwu", 15}};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort2(arr, sz, sizeof(arr[0]), cmp_stu_by_age);
//	//bubble_sort2(arr, sz, sizeof(arr[0]), cmp_stu_by_name);
//}
//
//int main()
//{
//	//test1();//测试qsort排序整型数据
//	//test2();//测试qsort排序结构体数据
//	//test3();
//	
//	//test4();
//	test5();
//	return 0;
//}
//

//#include <stdio.h>
//int main()
//{
//	char arr1[3] = { 'a', 'b', 'c' };//[a b c]
//	char arr2[] = "abc";             //[a b c \0]
//	printf("%d\n", strlen(arr1));//未知数
//	printf("%d\n", strlen(arr2));//3
//
//	printf("%d\n", sizeof(arr1));//3
//	printf("%d\n", sizeof(arr2));//4
//	return 0;
//}


//int main()
//{
//	int a[] = { 1,2,3,4 };//4*4 = 16
//	printf("%zu\n", sizeof(a));//16
//	printf("%zu\n", sizeof(a + 0));//4/8，a+0是首元素的地址
//	printf("%zu\n", sizeof(*a));//4, *a == a[0]
//	printf("%zu\n", sizeof(a + 1));//4/8, a + 1 --> &a[1]
//	printf("%zu\n", sizeof(a[1]));//4
//	printf("%zu\n", sizeof(&a));//4/8, &a是整个数组的地址，依然是地址
//	printf("%zu\n", sizeof(*&a));//16
//	//&a -- int (*)[4]
//	//*&a -- a
//	//sizeof(*&a) == sizeof(a)
//	printf("%zu\n", sizeof(&a + 1));//4/8  &a + 1还是地址
//	printf("%zu\n", sizeof(&a[0]));//4/8
//	printf("%zu\n", sizeof(&a[0] + 1));//4/8
//	return 0;
//}

//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%zu\n", sizeof(arr));//6
//	printf("%zu\n", sizeof(arr + 0));//4/8, arr + 0 == &arr[0]
//	printf("%zu\n", sizeof(*arr));//1, *arr == arr[0]
//	printf("%zu\n", sizeof(arr[1]));//1
//	printf("%zu\n", sizeof(&arr));//4/8 -- char(*)[6]
//	printf("%zu\n", sizeof(&arr + 1));//4/8-- char(*)[6]
//	printf("%zu\n", sizeof(&arr[0] + 1));//4/8
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%zu\n", strlen(arr));//未知数
//	printf("%zu\n", strlen(arr + 0));//未知数
//	//printf("%zu\n", strlen(*arr));//*arr == arr[0] == 'a' == 97, 程序会崩溃
//	//printf("%zu\n", strlen(arr[1]));//'b'-98,程序会崩溃
//	printf("%zu\n", strlen(&arr));//未知数  x
//	//char(*)[6]-> const char*
//	printf("%zu\n", strlen(&arr + 1));//未知数 x-6
//	printf("%zu\n", strlen(&arr[0] + 1));//未知数 x-1
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//
//	printf("%zu\n", sizeof(arr));//7
//	printf("%zu\n", sizeof(arr + 0));//4/8
//	printf("%zu\n", sizeof(*arr));//1, arr[0] == *arr
//	printf("%zu\n", sizeof(arr[1]));//1
//	printf("%zu\n", sizeof(&arr));//4/8
//	printf("%zu\n", sizeof(&arr + 1));//4/8
//	printf("%zu\n", sizeof(&arr[0] + 1));//4/8
//	return 0;
//}
#include <stdio.h>
#include <string.h>

//int main()
//{
//	char arr[] = "abcdef";
//	printf("%zu\n", strlen(arr));//6
//	printf("%zu\n", strlen(arr + 0));//6
//	//printf("%zu\n", strlen(*arr));//程序会崩溃
//	//printf("%zu\n", strlen(arr[1]));//程序会崩溃
//	printf("%zu\n", strlen(&arr));//6
//	printf("%zu\n", strlen(&arr + 1));//未知数
//	printf("%zu\n", strlen(&arr[0] + 1));//5
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	char* p = "abcdef";
//
//	printf("%zu\n", sizeof(p));//4/8
//	printf("%zu\n", sizeof(p + 1));//4/8, p+1是b的地址
//	printf("%zu\n", sizeof(*p));//1, *p == 'a'
//	printf("%zu\n", sizeof(p[0]));//1
//	//p[0]  == *(p+0) == 'a'
//	printf("%zu\n", sizeof(&p));//4/8
//	printf("%zu\n", sizeof(&p + 1));//4/8
//	printf("%zu\n", sizeof(&p[0] + 1));//4/8, 'b'的地址
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char* p = "abcdef";
//	printf("%zu\n", strlen(p));//6
//	printf("%zu\n", strlen(p + 1));//5
//	printf("%zu\n", strlen(*p));//程序崩溃
//	printf("%zu\n", strlen(p[0]));//程序崩溃
//	printf("%zu\n", strlen(&p));//未知数
//	printf("%zu\n", strlen(&p + 1));//未知数
//	printf("%zu\n", strlen(&p[0] + 1));//5
//	return 0;
//}