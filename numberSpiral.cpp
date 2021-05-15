#include <iostream>

using namespace std;

int column;
int row;

int middleNumber(int number)
{
    return number*number - (number - 1);
}

int main()
{
    cout<< "column: " << endl; 
    cin >> column;  

    cout<< "row: " << endl;
    cin >> row;  

    //if number on column bigger
    if(column > row)
    {
    }

    //if number on row bigger
    else if(column < row)
    {
    }
    
    else{
	cout << middleNumber(column) << endl
    }
}























