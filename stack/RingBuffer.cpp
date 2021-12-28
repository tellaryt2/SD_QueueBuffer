#include <iostream>
#include "RingBuffer.h";
#include "QueueOnRingBuffer.h";

using namespace std;

int CheckBuffer(RingBuffer* RingBuffer) 
{
	if (RingBuffer->Buffer == nullptr)
	{
		return 0;
	}
	return 1;
}

void CheckEmptyCells(RingBuffer* RingBuffer)
{
	if (RingBuffer->EmptyCells < 0)
	{
		RingBuffer->EmptyCells = 0;
	}
}

void ShowRingBuffer(RingBuffer* RingBuffer)
{
	for (int i = 0; i < RingBuffer->RingbufferSize; i++)
	{
		cout << RingBuffer->Buffer[i] << "\t";
	}
	cout << endl;
}

void CreateRingBuffer(RingBuffer* RingBuffer, int Size)
{
	RingBuffer->IndexPop = RingBuffer->IndexPush = 0;
	RingBuffer->RingbufferSize = RingBuffer->EmptyCells = Size;
	int* TempBuffer = new int[Size];
	delete[] RingBuffer->Buffer;
	for (int i = 0; i < Size; i++)
	{
		TempBuffer[i] = 0;
	}

	RingBuffer->Buffer = TempBuffer;
}

void PushRingBuffer(RingBuffer* RingBuffer, int Data)
{
	RingBuffer->Buffer[RingBuffer->IndexPush] = Data;
	if (RingBuffer->IndexPush == RingBuffer->RingbufferSize - 1)
	{
		RingBuffer->IndexPush = 0;
	}
	else
	{
		RingBuffer->IndexPush++;
	}
	RingBuffer->EmptyCells--;
}

void PopRingBuffer(RingBuffer* RingBuffer)
{
	if (RingBuffer->IndexPop == RingBuffer->RingbufferSize - 1)
	{
		RingBuffer->IndexPop = 0;
	}
	else
	{
		RingBuffer->Buffer[RingBuffer->IndexPop] = 0;
		RingBuffer->IndexPop++;
	}
	RingBuffer->EmptyCells++;
}

int GetEmptyBuffer(RingBuffer* RingBuffer)
{
	CheckEmptyCells(RingBuffer);
	return RingBuffer->EmptyCells;
	
}

int GetBusyBuffer(RingBuffer* RingBuffer)
{
	CheckEmptyCells(RingBuffer);
	return RingBuffer->RingbufferSize - RingBuffer->EmptyCells;
}

void DeleteRingBuffer(RingBuffer* RingBuffer)
{
	RingBuffer->RingbufferSize = 0;
	RingBuffer->EmptyCells = 0;
	RingBuffer->IndexPop = 0;
	RingBuffer->IndexPush = 0;
	delete[] RingBuffer->Buffer;
}

