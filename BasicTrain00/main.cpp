#include <iostream>
#include <list>
using namespace std;

const int gLen = 9;

int BubbleSort(int* pArray);
int InsertSort(int* pArray);
int MergeSort(int* pArray, int len);

// 排序
int Sort()
{
  cout<<"Mirage***排序练习****"<<endl;

  int* intArray = new int[gLen] {20, 3, 1, 7, 4, 90, 0, 4, 6};
  //BubbleSort(intArray);
  //InsertSort(intArray);
  MergeSort(intArray, gLen);

  cout<<"排序后生成的序列: ";
  for (int i = 0; i < gLen; i++)
  {
	  cout << intArray[i] << " ";
  }

  delete intArray;
  return 0;
}

// 冒泡排序
int BubbleSort(int* pArray)
{
	for (int i = 0; i < gLen; i++)
	{
		for (int j = i; j < gLen; j++)
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
	for (int i = 1; i < gLen;i++)
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
int MergeSort(int* pArray, int len)
{
  int* a = pArray;
  int* b = new int[len];

  for(int seg=1; seg<len; seg+=seg){
    for(int start=0; start<len; start+=seg+seg){
      int low=start,mid=min(start+seg,len),high=min(start+seg+seg,len);
      int k=low;
      int start1=low,end1=mid;
      int start2=mid,end2=high;
      while(start1<end1 && start2<end2)
        b[k++]=a[start1]<a[start2]?a[start1++]:a[start2++];
      while (start1<end1) {
        b[k++]=a[start1++];
      }
      while (start2<end2) {
        b[k++]=a[start2++];
      }
    }
    int* temp = a;
    a=b;
    b=temp;
  }
  if(a!=pArray){
    for(int i=0;i<len;i++)
      b[i]=a[i];
  b = a;
  }

  delete[] b;
	return 0;
}

int main(int argc, char const *argv[]) {
  Sort();

  char ch;
  cin >> ch;
  return 0;
}
