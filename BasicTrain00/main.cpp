#include <iostream>
#include <list>
using namespace std;

int InsertSort(list<int>* input, list<int>* output);

// 排序
int Sort()
{
  list<int>* inputNumSet = new list<int>();
  list<int>* outputNumSet = new list<int>();

  cout<<"Mirage***排序练习****"<<endl;
  cout<<"请输入10个数字：";

  for(int i=0; i<10; i++)
  {
    int num = 0;
    cin>>num;
    inputNumSet->push_back(num);
  }

  InsertSort(inputNumSet, outputNumSet);

  cout<<"排序后生成的序列：";
  for (list<int>::iterator i = outputNumSet->begin(); i != outputNumSet->end(); ++i)
  {
    cout<< *i <<" < ";
  }

  delete inputNumSet;
  delete outputNumSet;
  return 0;
}

// 插入排序
int InsertSort(list<int>* input, list<int>* output)
{
  for (list<int>::iterator i = input->begin(); i != input->end(); ++i)
  {
    /* code */
    output->push_back(*i);
  }
  output->sort();
  return 0;
}

/*主程序入口*/
int main(int argc, char const *argv[]) {
  /* code */
  Sort();

  char ch;
  cin>>ch;
  return 0;
}
