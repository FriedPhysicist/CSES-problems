#include<iostream>
#include<string>

using namespace std;


//asdf
int size_array(int array[])
{
  return sizeof(array)-sizeof(array[0]);
}

void missing_number()
{ 
  int sum=0;
  int total_sum=0;
  int array_[4]={2,4,1,5};

  for(int i=0;i<size_array(array_);i++)
  {
    sum+=array_[i];
  }

  for(int i=1;i<=size_array(array_)+1;i++) total_sum+=i;

  //cout<<total_sum-sum;
}

int main()
{
    missing_number();
}
