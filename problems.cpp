#include<iostream>
#include<string>

using namespace std;


//asdf
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

void repetitions()
{
  //A=1;T=2;C=3;G=3
  string dna[]={"A","T","T","C","G","G","G","A"};
  int dna_size=sizeof(dna)/sizeof(dna[0]);
  int longest[]={0,0,0,0};
  int most=0;
  
  for(int i=0;i<dna_size;i++)
  {
    if(dna[i]=="A"){
      longest[0]++; 
    }

    if(dna[i]=="T"){
      longest[1]++; 
    }
    
    if(dna[i]=="C"){
      longest[2]++;
    }

    if(dna[i]=="G"){
      longest[3]++;
    } 
  }

  for(int i=0;i<size_array(longest);i++)
  {
    if(longest[i]>most) {
      most=longest[i];
    }
  } 

  cout<<most<<endl;
}

int main()
{ 
  repetitions();
}
