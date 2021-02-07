#include<iostream>

using namespace std;


int size_array(int array[])
{
  return sizeof(array)-sizeof(array[0]);
}

void weird_algorithm()
{
  int input;
  cin>>input;

  while(input>1)
  {
    input= input%2==0 ? input/2:input*3+1;
    cout << input << endl;
  }
}

void missing_number()
{ 
  int array_[4]={2,3,1,5};

  for(int i=0;i<size_array(array_);i++)
  {
    cout<<array_[i]<< endl;
  }
}


int main()
{ 
  missing_number();
}
