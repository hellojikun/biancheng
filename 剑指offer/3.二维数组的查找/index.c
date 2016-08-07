
#include<stdio.h>
#define true 1
#define false 0
bool Find(int *matrix int rows,int columns,int number)
{ 
	bool found = false;
	int row = 0;
	int column = columns - 1;
	if(matrix != NULL && rows > 0 && columns > 0)
	{
		while(row < rows && column >= 0)
		{
			if(martix[row * columns + column] == number)
			{
				found = true;
				break;
			}
			else if(martix[row * columns + column] > number)
				-- column;
			else
				++ row;

		}

	}
	return found;

}
