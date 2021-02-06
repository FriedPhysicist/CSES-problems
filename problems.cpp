#include<iostream>

using namespace std;

void weird_algorithm()
{
  int input=3;

  while(input>1)
  {
    input= input%2==0 ? input/2:input*3+1;
    cout << input << endl;
  }
}

void missing_number()
{
  
}

int main()
{
}
