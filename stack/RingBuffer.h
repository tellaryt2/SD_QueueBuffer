#pragma once
#include "QueueOnRingBuffer.h";
/// <summary>
/// ��������� ���������� �������
/// </summary>
struct RingBuffer
{
    /// <summary>
    /// ������ ��� �������
    /// </summary>
    int* Buffer;  
    /// <summary>
    /// ������ �������
    /// </summary>
    int RingbufferSize;  
    /// <summary>
    /// ������ ��� ���������� ��������
    /// </summary>
    int IndexPop;
    /// <summary>
    /// ������� ��� ��������� ��������
    /// </summary>
    int IndexPush;
    /// <summary>
    /// ������� ���������� �����
    /// </summary>
    int EmptyCells;
};
/// <summary>
/// �������� ���������� �������
/// </summary>
/// <param name="RingBuffer"></param> ������ ��������� RingBuffer
/// <param name="Size"></param>
void CreateRingBuffer(RingBuffer* RingBuffer, int Size);
/// <summary>
/// �������� ���������� �������
/// </summary>
/// <param name="RingBuffer"></param> ������ ��������� RingBuffer
void DeleteRingBuffer(RingBuffer* RingBuffer);
/// <summary>
/// ���������� �������� � �������
/// </summary>
/// <param name="RingBuffer"></param> ������ ��������� RingBuffer
/// <param name="Data"></param> ����������� �������
void PushRingBuffer(RingBuffer* RingBuffer, int Data);
/// <summary>
/// ����� ������� �� �����
/// </summary>
/// <param name="RingBuffer"></param> ������ ��������� RingBuffer
void ShowRingBuffer(RingBuffer* RingBuffer);
/// <summary>
/// ���������� �������� �� �������
/// </summary>
/// <param name="RingBuffer"></param> ������ ��������� RingBuffer
void PopRingBuffer(RingBuffer* RingBuffer);
/// <summary>
/// ���������, ������ �� ������
/// </summary>
/// <param name="RingBuffer"></param> ������ ��������� RingBuffer
/// <returns></returns> ����� 1 ��� 0
int CheckBuffer(RingBuffer* RingBuffer);
/// <summary>
/// �������� ���������� ������� �����
/// </summary>
/// <param name="RingBuffer"></param> ������ ��������� RingBuffer
/// <returns></returns> ���������� ������� �����
int GetEmptyBuffer(RingBuffer* RingBuffer);
/// <summary>
/// �������� ���������� ���������� �����
/// </summary>
/// <param name="RingBuffer"></param> ������ ��������� RingBuffer
/// <returns></returns> ���������� ���������� �����
int GetBusyBuffer(RingBuffer* RingBuffer);
/// <summary>
/// �������� ���������� ������� �����, ���� ��� ��������� ���� 0
/// </summary>
/// <param name="RingBuffer"></param> ������ ��������� RingBuffer
void CheckEmptyCells(RingBuffer* RingBuffer);