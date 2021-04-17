#include<iostream>
#include<string>

using namespace std;


int size_array(int array[])
{
  return sizeof(array)-sizeof(array[0]);
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

int b;

int main()
{ 
    b = cin.get();
    cout<<b<<endl;
}
