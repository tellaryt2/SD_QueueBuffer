#include <iostream>
#include "QueueOnRingBuffer.h";
#include "RingBuffer.h";

using namespace std;


int QueueCheck(QueueOnRingBuffer* Queue)
{
	if (Queue->Buffer == nullptr)
	{
		return 0;
	}
	return 1;
}

void DeleteQueue(QueueOnRingBuffer* Queue)
{
	delete[] Queue->Buffer->Buffer;
}

void InicializationQueue(QueueOnRingBuffer* Queue, int Size)
{
	Queue->Buffer = new RingBuffer();
	CreateRingBuffer(Queue->Buffer, Size);
	ShowQueue(Queue);
}

void Dequeue(QueueOnRingBuffer* Queue)
{
	PopRingBuffer(Queue->Buffer);
	ShowQueue(Queue);
}

void Enqueue(QueueOnRingBuffer* Queue, int Data)
{
	PushRingBuffer(Queue->Buffer, Data);
	ShowQueue(Queue);
}

void ShowQueue(QueueOnRingBuffer* Queue)
{
	ShowRingBuffer(Queue->Buffer);
}