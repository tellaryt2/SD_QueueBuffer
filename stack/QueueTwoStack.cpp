#include <iostream>
#include "QueueTwoStack.h"
#include "Stack.h"

using namespace std;

void DeleteQueueTwoStack(QueueTwoStack* Queue)
{
	delete[] Queue->StackOne->Buffer;
	delete[] Queue->StackTwo->Buffer;
}

void ShowQueueTwoStack(QueueTwoStack* Queue)
{
	ShowStack(Queue->StackOne);
	ShowStack(Queue->StackTwo);
}

int CheckQueueOneStack(QueueTwoStack* Queue)
{
	if (Queue->StackOne->Buffer == nullptr)
	{
		return 0;
	}
	return 1;
}

int CheckQueueTwoStack(QueueTwoStack* Queue)
{
	if (Queue->StackTwo->Buffer == nullptr)
	{
		return 0;
	}
	return 1;
}

void CreateQueueTwoStack(QueueTwoStack* Queue, int Size)
{
	Queue->StackOne = new Stack();
	Queue->StackTwo = new Stack();
	CreateStack(Queue->StackOne, Size);
	CreateStack(Queue->StackTwo, Size);
}

void EnqueueTwoStack(QueueTwoStack* Queue, int Data)
{
	PushStack(Queue->StackOne, Data);
	Queue->QueueTwoStackLenght++;
	Queue->TopQueueStack++;
}

void RealizationQueueTwoStack(QueueTwoStack* Queue)
{
	int SaveTop = Queue->TopQueueStack;
	for (int i = Queue->QueueTwoStackLenght; i > 0; i--)
	{
		PushStack(Queue->StackTwo, Queue->StackOne->Buffer[Queue->TopQueueStack - 1]);
		Queue->QueueTwoStackLenght--;
		Queue->TopQueueStack--;
	}
	Queue->TopQueueStack = SaveTop;
	ShowQueueTwoStack(Queue);
}

void DequeueTwoStack(QueueTwoStack* Queue)
{
	PopStack(Queue->StackOne);
	PopStack(Queue->StackTwo);
	Queue->TopQueueStack--;
	ShowQueueTwoStack(Queue);
}