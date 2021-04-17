#include<iostream>
#include<string>

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

int main()
{
    weird_algorithm();
}
