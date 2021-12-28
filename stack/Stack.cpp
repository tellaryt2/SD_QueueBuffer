#include <iostream>
#include "Stack.h";

using namespace std;


void ShowStack(Stack* NewStack)
{
	cout << "Ваш стeк: " << endl;
	int i;
	i = NewStack->Top; 
	if (IsEmpty(NewStack) == 0)
	{
		cout << "стек пуст" << endl;
		return;
	}
	for (int i = (NewStack->Top - 1); i >= 0; i--)
	{
		cout << NewStack->Buffer[i] << endl;
	} 
	cout << endl;
}

int CheckStack(Stack* NewStack)
{
	if (NewStack->Buffer == nullptr)
	{
		return 0;
	}
	return 1;
}

int IsEmpty(Stack* NewStack)
{
	if (NewStack->Top == 0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

void PopStack(Stack* NewStack) 
{
	if (NewStack->Top > 0)
	{
		NewStack->Top--;
	}
	else
	{
		cout << "Стек пуст!" << endl;
	}
	
}

void PushStack(Stack* NewStack, int Element) 
{
	
	if (NewStack->Top < NewStack->BufferSize)
	{
		NewStack->Buffer[NewStack->Top] = Element;
		NewStack->Top++;
	}
	else
	{
		cout << "стек полон!" << endl;
	}

}

void CreateStack(Stack* NewStack, int Size)
{
	NewStack->BufferSize = Size;
	NewStack->Top = 0;
	int* TempStack = new int[NewStack->BufferSize];
	delete[] NewStack->Buffer;
	NewStack->Buffer = TempStack;
}

void DeleteStack(Stack* NewStack)
{
	delete[] NewStack->Buffer;
	NewStack->BufferSize = NULL;
	NewStack->Top = NULL;
}
