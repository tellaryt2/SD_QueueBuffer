#pragma once
/// <summary>
/// структура стека
/// </summary>
struct Stack
{
	/// <summary>
	/// массив для стека
	/// </summary>
	int* Buffer;
	/// <summary>
	/// размер стека
	/// </summary>
	int BufferSize;
	/// <summary>
	/// индекс последнего элемента
	/// </summary>
	int Top;
};
/// <summary>
/// проверяет, пустой ли стек
/// </summary>
/// <param name="NewStack"></param> объект структуры Stack
/// <returns></returns> число 1 или 0
int IsEmpty(Stack* NewStack);
/// <summary>
/// проверяет, создан ли стек
/// </summary>
/// <param name="NewStack"></param> объект структуры Stack
/// <returns></returns> число 1 или 0
int CheckStack(Stack* NewStack);
/// <summary>
/// Создает стек
/// </summary>
/// <param name="NewStack"></param> объект структуры Stack
/// <param name="Size"></param> размер стека
void CreateStack(Stack* NewStack,int Size);
/// <summary>
/// вывод стека на экран
/// </summary>
/// <param name="NewStack"></param> объект структуры Stack
void ShowStack(Stack* NewStack);
/// <summary>
/// удаление стека
/// </summary>
/// <param name="NewStack"></param> объект структуры Stack
void DeleteStack(Stack* NewStack);
/// <summary>
/// помещение элемента в стек
/// </summary>
/// <param name="NewStack"></param> объект структуры Stack
/// <param name="Element"></param> элемент который помещаем
void PushStack(Stack* NewStack ,int Element);
/// <summary>
/// извлечение элемента из стека
/// </summary>
/// <param name="NewStack"></param> объект структуры Stack
void PopStack(Stack* NewStack);