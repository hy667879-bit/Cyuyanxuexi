//回调函数
//#include <stdio.h>
//void menu()
//{
//	printf("--------------------1,Add-------------------------\n");
//	printf("--------------------2,Sub-------------------------\n");
//	printf("--------------------3,Mul-------------------------\n");
//	printf("--------------------4,Div-------------------------\n");
//	printf("--------------------0,exit------------------------\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//  }
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int r = 0;
//	do
//	{
//		menu();
//		printf("请选择\n");
//		scanf_s("%d", &input);
//		                      //      0    1    2   3   4
//		int (*pfarr[])(int, int) = { NULL,Add,Sub,Mul,Div };
//		if (input > 0 && input < 5)
//		{
//			printf("请输入你要计算的两个数\n");
//			scanf_s("%d %d", &x, &y);
//			r = pfarr[input](x, y);
//			printf("%d\n", r);
//		}
//		else if (input == 0)
//		{
//			printf("退出计算\n");
//		}
//		else
//		{
//			printf("请重新输入值你输入的值不对\n");
//		}
//	} while (input);
//
//		return 0;
//}

//在switch case 函数中可以抽象多个函数为一个函数
//
//void calc(int(*pf)(int,int))
//{
// int x=0;
// int y=0;
// int r=0;
// printf("输入数字")；
// scanf("%d %d"，&x,&y);
// r=pf(x,y);
// printf ("%d",r);
// }
//
//case 1
// calc(Add);  //calc是指针函数
// break;
// .......
//qsort的运用
//int cmp(const void* p1, const void* p2)
//{
//
//}
//
//
//void qsort(void* base,                                                           //指针只想要排序的数组的第一个元素 
//	size_t num,                                                                    //base所指向的所有元素个数
//	size_t size,                                                                   //在数组中一个元素的字节数
//	int(*compar)(const void* p1, const void* p2)                                   //函数指针——用来比较两个元素的大小
//
#include<stdio.h>
#include <stdlib.h>
#include<string.h>  //---->strcmp的头文件
//int cmp_int(const void* p1, const void* p2)        //p1>p2   return>0     p1=p2   return 0
//{                       
//	return *(int*)p1 - *(int*)p2;           //这里改变p1和p2的位置改变排序的方式
//}
//void print_arr(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d", arr[i]);  //arr[i]==i[arr]==*(arr+i)
//	}
//	printf("\n");
//}
//void test()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print_arr(arr, sz);
//	qsort(arr, sz, sizeof(arr[0]),cmp_int );
//	print_arr(arr, sz);
//}
//struct stu
//{
//	char name[20];
//	int age;
//};
//int cmp_stu_by_age(const void* p1, const void* p2)
//{
//	return ((struct stu*)p1)->age - ((struct stu*)p2)->age;
//}
//int cmp_stu_by_name(const void* p1, const void* p2)  //字符比较用strcmp()--比较的是首字母的字典序
//{
//	return strcmp(((struct stu*)p1)->name, ((struct stu*)p2)->name);//strcmp的返回值也是0，> 0, < 0
//}
//void test2()
//{
//	struct stu arr[] = { { "hu",18 },{ "xin",25 },{ "zhi",15 } };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_age);
//	qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_name);
//}
//void test3()
//{
//	struct stu s = { "huxinzhi",18 };
//	printf("%s %d\n", s.name, s.age);
//	struct stu* ps = &s;
//	printf("%S %d\n", (*ps).name, (*ps).age);
//	printf("%s %d\n", ps->name, ps->age);
//
//}
////结构体的访问
////1，结构体变量.成员名
////2，结构体指针->成员名
//int main()
//{
//	//test();
//	//test2();
//	test3();
//	return 0;
//}
//
////强制类转换的优先级低于->的优先级
//冒泡排序
//void printf_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0;i < sz - 1;i++)
//	{
//		int flag = 1; //优化冒泡排序，增加一个标志位，若某一趟没有发生交换，则说明数组已经有序
//		int j = 0;
//		for (j = 0;j < sz - 1 - i;j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0; // 如果发生了交换，将标志位设为0
//			}
//		}
//		if (flag) // 如果某一趟没有发生交换，说明数组已经有序
//		{
//			break;
//		}
//	}
//}
//
//
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	printf_arr(arr, sz);
//	return 0;
//}
//
//
//void test()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print_arr(arr, sz);
//	qsort(arr, sz, sizeof(arr[0]),cmp_int );
//	print_arr(arr, sz);
//}