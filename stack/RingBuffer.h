#pragma once
#include "QueueOnRingBuffer.h";
/// <summary>
/// структура кольцевого буффера
/// </summary>
struct RingBuffer
{
    /// <summary>
    /// массив для буффера
    /// </summary>
    int* Buffer;  
    /// <summary>
    /// размер буффера
    /// </summary>
    int RingbufferSize;  
    /// <summary>
    /// индекс для извлечения элемента
    /// </summary>
    int IndexPop;
    /// <summary>
    /// индекса для помещения элемента
    /// </summary>
    int IndexPush;
    /// <summary>
    /// счетчик свободного места
    /// </summary>
    int EmptyCells;
};
/// <summary>
/// создание кольцевого буффера
/// </summary>
/// <param name="RingBuffer"></param> объект структуры RingBuffer
/// <param name="Size"></param>
void CreateRingBuffer(RingBuffer* RingBuffer, int Size);
/// <summary>
/// удаление кольцевого буффера
/// </summary>
/// <param name="RingBuffer"></param> объект структуры RingBuffer
void DeleteRingBuffer(RingBuffer* RingBuffer);
/// <summary>
/// добавление элемента в буффера
/// </summary>
/// <param name="RingBuffer"></param> объект структуры RingBuffer
/// <param name="Data"></param> добавляемый элемент
void PushRingBuffer(RingBuffer* RingBuffer, int Data);
/// <summary>
/// вывод буффера на экран
/// </summary>
/// <param name="RingBuffer"></param> объект структуры RingBuffer
void ShowRingBuffer(RingBuffer* RingBuffer);
/// <summary>
/// извлечение элемента из буффера
/// </summary>
/// <param name="RingBuffer"></param> объект структуры RingBuffer
void PopRingBuffer(RingBuffer* RingBuffer);
/// <summary>
/// проверяет, создан ли буффер
/// </summary>
/// <param name="RingBuffer"></param> объект структуры RingBuffer
/// <returns></returns> число 1 или 0
int CheckBuffer(RingBuffer* RingBuffer);
/// <summary>
/// получает количество пустого места
/// </summary>
/// <param name="RingBuffer"></param> объект структуры RingBuffer
/// <returns></returns> количество пустого места
int GetEmptyBuffer(RingBuffer* RingBuffer);
/// <summary>
/// получает количество свободного места
/// </summary>
/// <param name="RingBuffer"></param> объект структуры RingBuffer
/// <returns></returns> количество свободного места
int GetBusyBuffer(RingBuffer* RingBuffer);
/// <summary>
/// обнуляет количество пустого места, если оно опустится ниже 0
/// </summary>
/// <param name="RingBuffer"></param> объект структуры RingBuffer
void CheckEmptyCells(RingBuffer* RingBuffer);