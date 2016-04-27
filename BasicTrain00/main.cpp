#include <iostream>
#include <list>
using namespace std;

void InsertSort(list<int>* input， list<int>* output);

// 排序
void Sort()
{
  list<int>* inputNumSet = new list<int>();
  list<int>* outputNumSet = new list<int>()；

  cout<<"Mirage***排序练习****"<<endl;
  cout<<"请输入10个数字：";

  for(int i=0; i<10; i++)
  {
    int num = 0;
    cin>>num;
    inputNumSet->Add(num)
  }

  InsertSort();

  cout<<"排序后生成的序列："；
  for(int i=0; i<10; i++)
  {
    cout<<outputNumSet[i]<<" < ";
  }

  delete inputNumSet;
  delete outputNumSet;
}

// 插入排序
void InsertSort(list<int>* input， list<int>* output)
{
  for (int i = 0; i < 10; i++) {
    /* code */
    output[i] = input[i];
  }
}

/*主程序入口*/
int main(int argc, char const *argv[]) {
  /* code */
  Sort();

  cin>>ch;
  return 0;
}
