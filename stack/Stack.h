#pragma once
/// <summary>
/// ��������� �����
/// </summary>
struct Stack
{
	/// <summary>
	/// ������ ��� �����
	/// </summary>
	int* Buffer;
	/// <summary>
	/// ������ �����
	/// </summary>
	int BufferSize;
	/// <summary>
	/// ������ ���������� ��������
	/// </summary>
	int Top;
};
/// <summary>
/// ���������, ������ �� ����
/// </summary>
/// <param name="NewStack"></param> ������ ��������� Stack
/// <returns></returns> ����� 1 ��� 0
int IsEmpty(Stack* NewStack);
/// <summary>
/// ���������, ������ �� ����
/// </summary>
/// <param name="NewStack"></param> ������ ��������� Stack
/// <returns></returns> ����� 1 ��� 0
int CheckStack(Stack* NewStack);
/// <summary>
/// ������� ����
/// </summary>
/// <param name="NewStack"></param> ������ ��������� Stack
/// <param name="Size"></param> ������ �����
void CreateStack(Stack* NewStack,int Size);
/// <summary>
/// ����� ����� �� �����
/// </summary>
/// <param name="NewStack"></param> ������ ��������� Stack
void ShowStack(Stack* NewStack);
/// <summary>
/// �������� �����
/// </summary>
/// <param name="NewStack"></param> ������ ��������� Stack
void DeleteStack(Stack* NewStack);
/// <summary>
/// ��������� �������� � ����
/// </summary>
/// <param name="NewStack"></param> ������ ��������� Stack
/// <param name="Element"></param> ������� ������� ��������
void PushStack(Stack* NewStack ,int Element);
/// <summary>
/// ���������� �������� �� �����
/// </summary>
/// <param name="NewStack"></param> ������ ��������� Stack
void PopStack(Stack* NewStack);