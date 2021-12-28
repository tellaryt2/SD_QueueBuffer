#pragma once
#include "Stack.h"

struct stack;
/// <summary>
/// ��������� ������� �� ���� ���� ������
/// </summary>
struct QueueTwoStack
{
	/// <summary>
	/// ������ ���� ��� �������
	/// </summary>
	Stack* StackOne;
	/// <summary>
	/// ������ ���� ��� �������
	/// </summary>
	Stack* StackTwo;
	/// <summary>
	/// ��� ��������� �������
	/// </summary>
	int QueueTwoStackLenght = 0;
	/// <summary>
	/// ������� ��� ���������� �������� �������
	/// </summary>
	int TopQueueStack = 0;
};
/// <summary>
/// �������� �������
/// </summary>
/// <param name="Queue"></param> ������ ��������� QueueTwoStack
/// <param name="Size"></param> ������ �������
void CreateQueueTwoStack(QueueTwoStack* Queue, int Size);
/// <summary>
/// ������� �������
/// </summary>
/// <param name="Queue"></param> ������ ��������� QueueTwoStack
void DeleteQueueTwoStack(QueueTwoStack* Queue);
/// <summary>
/// ���������, ������ �� ������ ����
/// </summary>
/// <param name="Queue"></param> ������ ��������� QueueTwoStack
/// <returns></returns> ����� 1 ��� 0
int CheckQueueOneStack(QueueTwoStack* Queue);
/// <summary>
/// ���������, ������ �� ������ ����
/// </summary>
/// <param name="Queue"></param> ������ ��������� QueueTwoStack
/// <returns></returns> ����� 1 ��� 0
int CheckQueueTwoStack(QueueTwoStack* Queue);
/// <summary>
/// ��������� �������� � �������
/// </summary>
/// <param name="Queue"></param> ������ ��������� QueueTwoStack
/// <param name="Data"></param> ���������� �������
void EnqueueTwoStack(QueueTwoStack* Queue, int Data);
/// <summary>
/// �������� �������� �� �������
/// </summary>
/// <param name="Queue"></param> ������ ��������� QueueTwoStack
void DequeueTwoStack(QueueTwoStack* Queue);
/// <summary>
/// ��������� �������� �� ������� ����� �� ������
/// </summary>
/// <param name="Queue"></param> ������ ��������� QueueTwoStack
void RealizationQueueTwoStack(QueueTwoStack* Queue);
/// <summary>
/// ����� ������� �� �����
/// </summary>
/// <param name="Queue"></param> ������ ��������� QueueTwoStack
void ShowQueueTwoStack(QueueTwoStack* Queue);