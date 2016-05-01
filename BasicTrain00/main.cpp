#include <iostream>
#include <list>
using namespace std;

int BubbleSort(int* pArray);
int InsertSort(int* pArray);
int MergeSort(int* pArray);

// 排序
int Sort()
{
  cout<<"Mirage***排序练习****"<<endl;
 
  int* intArray = new int[8] {20, 3, 1, 7, 4, 90, 0, 4};
  //BubbleSort(intArray);
  InsertSort(intArray);

  cout<<"排序后生成的序列: ";
  for (int i = 0; i < 8; i++)
  {
	  cout << intArray[i] << " ";
  }

  delete intArray;
  return 0;
}

// 冒泡排序
int BubbleSort(int* pArray)
{
	for (int i = 0; i < 8; i++)
	{
		for (int j = i; j < 8; j++)
		{
			if (pArray[i] > pArray[j])
			{
				int mid = pArray[i];
				pArray[i] = pArray[j];
				pArray[j] = mid;
			}
		}
	}
	return 0;
}
// 插入排序
int InsertSort(int* pArray)
{
	for (int i = 1; i < 8;i++)
	{
		int key = pArray[i];
		int j = i - 1;
		while (j>=0 && pArray[j]>key)
		{
			pArray[j + 1] = pArray[j];
			j = j - 1;
		}
		pArray[j + 1] = key;
	}
	return 0;
}
// 归并排序
int MergeSort(int* pArray)
{

	return 0;
}
// 希尔排序
int ShellSort(int* pArray, int maxNum)
{
	int step = 3;
	for (int i = 0; i < maxNum / step; i++)
	{
		while()
		{}
	}
	return 0;
}

int main(int argc, char const *argv[]) {
  Sort();
	
  char ch;
  cin >> ch;
  return 0;
}