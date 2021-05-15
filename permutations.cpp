#include <iostream>

using namespace std;

int n;

int main()
{
    cin >>n;
    cout<<endl;

    if(n<=4)
    {
	cout<<"no combination"<<endl;
	return 0;
    }

    for (int i = 1; i <= n; i += 2) cout << i << " ";
    for (int i = 2; i <= n; i += 2) cout << i << " ";
    
    cout<<endl;
}
