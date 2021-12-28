#pragma once
#include "RingBuffer.h";

struct RingBuffer;
/// <summary>
/// структура очереди на базе кольцевого буффера
/// </summary>
struct QueueOnRingBuffer
{
	/// <summary>
	/// кольцевой буффер для очереди
	/// </summary>
	RingBuffer* Buffer;
};
/// <summary>
/// помещение элемента в очередь
/// </summary>
/// <param name="Queue"></param> объект структуры QueueOnRingBuffer
/// <param name="Data"></param> помещаемый элемент
void Enqueue(QueueOnRingBuffer* Queue, int Data);
/// <summary>
/// удаление элемента из очереди
/// </summary>
/// <param name="Queue"></param> объект структуры QueueOnRingBuffer
void Dequeue(QueueOnRingBuffer* Queue);
/// <summary>
/// проверяет, создана ли очередь
/// </summary>
/// <param name="Queue"></param> объект структуры QueueOnRingBuffer
/// <returns></returns> число 1 или 0
int QueueCheck(QueueOnRingBuffer* Queue);
/// <summary>
/// создает очередь
/// </summary>
/// <param name="Queue"></param> объект структуры QueueOnRingBuffer
/// <param name="Size"></param> размер очереди
void InicializationQueue(QueueOnRingBuffer* Queue, int Size);
/// <summary>
/// удаляет очередь
/// </summary>
/// <param name="Queue"></param> объект структуры QueueOnRingBuffer
void DeleteQueue(QueueOnRingBuffer* Queue);
/// <summary>
/// вывод очереди на экран
/// </summary>
/// <param name="Queue"></param> объект структуры QueueOnRingBuffer
void ShowQueue(QueueOnRingBuffer* Queue);