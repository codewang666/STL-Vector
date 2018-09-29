#include "stdafx.h"
#include <iostream>
#include <string>
#include<stdlib.h>
#include<atlstr.h>
#include<stdio.h>
#include <windows.h>
//#include <vector>
//#include <array>
//#include "Test.h"

using namespace std;

void swaptemp(int a[],int i,int j)
{
	int temp = a[i];
	a[i] = a[j];

	a[j] = temp;

}

int PARTITION(int a[],int left ,int right)
{
	int basicNum=a[right];
	int tail=left-1;
	for(int )


}


void SelectSort(int temp[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		int min=i;
		for(int j=i+1;j<n;j++)
			if(temp[j]<temp[min])
			{
				min=j;
			}
        if(min!=i)
			swaptemp(temp,min,i);

	}

}

 int main(int argc, _TCHAR* argv[])
{
	int A[] = { 6, 5, 3, 1, 8, 7, 2, 4 };    // 从小到大冒泡排序
	int n = sizeof(A) / sizeof(int);
	SelectSort(A, n);
	printf("冒泡排序结果：");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", A[i]);
	}
	printf("\n");
	return 0;




	
	
	  

	return 0;
}

