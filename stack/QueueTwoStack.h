#pragma once
#include "Stack.h"

struct stack;
/// <summary>
/// структура очереди на базе двух стеков
/// </summary>
struct QueueTwoStack
{
	/// <summary>
	/// первый стек для очереди
	/// </summary>
	Stack* StackOne;
	/// <summary>
	/// второй стек для очереди
	/// </summary>
	Stack* StackTwo;
	/// <summary>
	/// для введенной очереди
	/// </summary>
	int QueueTwoStackLenght = 0;
	/// <summary>
	/// счетчик для последнего элемента очереди
	/// </summary>
	int TopQueueStack = 0;
};
/// <summary>
/// создание очереди
/// </summary>
/// <param name="Queue"></param> объект структуры QueueTwoStack
/// <param name="Size"></param> размер очереди
void CreateQueueTwoStack(QueueTwoStack* Queue, int Size);
/// <summary>
/// удаляет очередь
/// </summary>
/// <param name="Queue"></param> объект структуры QueueTwoStack
void DeleteQueueTwoStack(QueueTwoStack* Queue);
/// <summary>
/// проверяет, создан ли первый стек
/// </summary>
/// <param name="Queue"></param> объект структуры QueueTwoStack
/// <returns></returns> число 1 или 0
int CheckQueueOneStack(QueueTwoStack* Queue);
/// <summary>
/// проверяет, создан ли второй стек
/// </summary>
/// <param name="Queue"></param> объект структуры QueueTwoStack
/// <returns></returns> число 1 или 0
int CheckQueueTwoStack(QueueTwoStack* Queue);
/// <summary>
/// помещение элемента в очередь
/// </summary>
/// <param name="Queue"></param> объект структуры QueueTwoStack
/// <param name="Data"></param> помещаемый элемент
void EnqueueTwoStack(QueueTwoStack* Queue, int Data);
/// <summary>
/// удаление элемента из очереди
/// </summary>
/// <param name="Queue"></param> объект структуры QueueTwoStack
void DequeueTwoStack(QueueTwoStack* Queue);
/// <summary>
/// переносит элементы из первого стека во второй
/// </summary>
/// <param name="Queue"></param> объект структуры QueueTwoStack
void RealizationQueueTwoStack(QueueTwoStack* Queue);
/// <summary>
/// вывод очереди на экран
/// </summary>
/// <param name="Queue"></param> объект структуры QueueTwoStack
void ShowQueueTwoStack(QueueTwoStack* Queue);