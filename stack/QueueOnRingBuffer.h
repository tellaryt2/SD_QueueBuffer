#pragma once
#include "RingBuffer.h";

struct RingBuffer;
/// <summary>
/// ��������� ������� �� ���� ���������� �������
/// </summary>
struct QueueOnRingBuffer
{
	/// <summary>
	/// ��������� ������ ��� �������
	/// </summary>
	RingBuffer* Buffer;
};
/// <summary>
/// ��������� �������� � �������
/// </summary>
/// <param name="Queue"></param> ������ ��������� QueueOnRingBuffer
/// <param name="Data"></param> ���������� �������
void Enqueue(QueueOnRingBuffer* Queue, int Data);
/// <summary>
/// �������� �������� �� �������
/// </summary>
/// <param name="Queue"></param> ������ ��������� QueueOnRingBuffer
void Dequeue(QueueOnRingBuffer* Queue);
/// <summary>
/// ���������, ������� �� �������
/// </summary>
/// <param name="Queue"></param> ������ ��������� QueueOnRingBuffer
/// <returns></returns> ����� 1 ��� 0
int QueueCheck(QueueOnRingBuffer* Queue);
/// <summary>
/// ������� �������
/// </summary>
/// <param name="Queue"></param> ������ ��������� QueueOnRingBuffer
/// <param name="Size"></param> ������ �������
void InicializationQueue(QueueOnRingBuffer* Queue, int Size);
/// <summary>
/// ������� �������
/// </summary>
/// <param name="Queue"></param> ������ ��������� QueueOnRingBuffer
void DeleteQueue(QueueOnRingBuffer* Queue);
/// <summary>
/// ����� ������� �� �����
/// </summary>
/// <param name="Queue"></param> ������ ��������� QueueOnRingBuffer
void ShowQueue(QueueOnRingBuffer* Queue);