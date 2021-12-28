#include <iostream>
#include "Stack.h";
#include "RingBuffer.h";
#include "QueueOnRingBuffer.h";
#include "QueueTwoStack.h";

using namespace std;

int PushSize()
{
	while (true)
	{
		int Size = 0;
		cin >> Size;
		if (Size < 0)
		{
			cout << "������! �� ����� ������������� ������!" << endl;
		}
		else
		{
			return Size;
		}
	}
}

void StackMenu()
{
	Stack* NewStack = new Stack();
	cout << "1 - �������e �����" << endl;
	cout << "2 - ��������� �������� � ����" << endl;
	cout << "3 - ���������� �������� �� �����" << endl;
	cout << "4 - �������� ����" << endl;
	cout << "5 - �������� ����� (������� ������)" << endl;
	cout << "6 - ��������� � ���������� ����" << endl;

	while (true)
	{
		int Command;
		cout << "������� ������� ";
		cin >> Command;
		if (Command < 1 and Command > 5)
		{
			Command = 0;
		}
		switch (Command)
		{

		case 0:
		{
			cout << "������! ������� ����� �� 1 �� 6!" << endl;
			break;
		}

		case 1:
		{
			int Size;
			cout << "������� ������ �����: ";
			Size = PushSize();
			CreateStack(NewStack, Size);
			break;
		}

		case 2:
		{
			int Check = CheckStack(NewStack);
			if (Check == 0)
			{
				cout << "���� �� ������!" << endl;
				break;
			}
			int Element;
			cout << "������� �������, ������� �� ������ ��������: ";
			cin >> Element;
			PushStack(NewStack, Element);
			break;
		}

		case 3:
		{
			int Check = CheckStack(NewStack);
			if (Check == 0)
			{
				cout << "���� �� ������!" << endl;
				break;
			}
			PopStack(NewStack);
			break;
		}

		case 4:
		{
			int Check = CheckStack(NewStack);
			if (Check == 0)
			{
				cout << "���� �� ������!" << endl;
				break;
			}
			ShowStack(NewStack);
			break;
			DeleteStack(NewStack);
			cout << "���� ������!" << endl;
			break;
		}

		case 5:
		{
			DeleteStack(NewStack);
			cout << "���� ������!" << endl;
			break;
		}

		case 6:
		{
			return;
		}
		}
	}
}

void RingBufferMenu()
{
	RingBuffer* Buffer = new RingBuffer();
	cout << "1 - ������� ������" << endl;
	cout << "2 - �������� ������� � ������" << endl;
	cout << "3 - ������� ������� �� �������" << endl;
	cout << "4 - �������� ���������� ���������� �����" << endl;
	cout << "5 - �������� ���������� �������� �����" << endl;
	cout << "5 - �������� ��������� ������" << endl;
	cout << "6 - �������� �������" << endl;
	cout << "7 - ��������� � ���������� ����" << endl;

	while (true)
	{
		int Command;
		cout << "������� ������� ";
		cin >> Command;
		if (Command < 1 and Command > 8)
		{
			Command = 0;
		}

		switch (Command)
		{

		case 0:
		{
			cout << "������! ������� ����� �� 1 �� 8!" << endl;
			break;
		}

		case 1:
		{
			int Size;
			cout << "������� ������ �������: ";
			Size = PushSize();
			CreateRingBuffer(Buffer, Size);
			break;
		}

		case 2:
		{
			int Check = CheckBuffer(Buffer);
			if (Check == 0)
			{
				cout << "��������� ������ �� ������!" << endl;
				break;
			}
			int element;
			cout << "������� �������, ������� �� ������ ������: ";
			cin >> element;
			PushRingBuffer(Buffer, element);
			break;
		}

		case 3:
		{
			int Check = CheckBuffer(Buffer);
			if (Check == 0)
			{
				cout << "��������� ������ �� ������!" << endl;
				break;
			}
			PopRingBuffer(Buffer);
			break;
		}

		case 4:
		{
			int Check = CheckBuffer(Buffer);
			if (Check == 0)
			{
				cout << "��������� ������ �� ������!" << endl;
				break;
			}
			cout << "��������� �����: " << GetEmptyBuffer(Buffer) << endl;
			break;
		}

		case 5:
		{
			int Check = CheckBuffer(Buffer);
			if (Check == 0)
			{
				cout << "��������� ������ �� ������!" << endl;
				break;
			}
			cout << "������� �����: " << GetBusyBuffer(Buffer) << endl;
			break;
		}

		case 6:
		{
			ShowRingBuffer(Buffer);
			break;
		}

		case 7:
		{
			
			DeleteRingBuffer(Buffer);
			cout << "������ ������" << endl;
			break;
		}

		case 8:
		{
			return;
		}
		}
	}
}

void QueueMenu()
{
	QueueOnRingBuffer* NewQueue = new QueueOnRingBuffer();

	cout << "1 - ������� �������" << endl;
	cout << "2 - �������� ������� � �������" << endl;
	cout << "3 - ������� ������� �� �������" << endl;
	cout << "4 - �������� �������" << endl;
	cout << "5 - ��������� � ���������� ����" << endl;

	while (true)
	{
		int Command;
		cout << "������� ������� ";
		cin >> Command;
		if (Command < 1 and Command > 5)
		{
			Command = 0;
		}
		switch (Command)
		{

		case 0:
		{
			cout << "������! ������� ����� �� 1 �� 5!" << endl;
			break;
		}

		case 1:
		{
			int Size;
			cout << "������� ������ �������: ";
			Size = PushSize();
			InicializationQueue(NewQueue, Size);
			break;
		}

		case 2:
		{
			int Check = QueueCheck(NewQueue);
			if (Check == 0)
			{
				cout << "������� �� �������!" << endl;
				break;
			}
			int element;
			cout << "������� �������, ������� �� ������ ������: ";
			cin >> element;
			Enqueue(NewQueue, element);
			break;
		}
		case 3:
		{
			int Check = QueueCheck(NewQueue);
			if (Check == 0)
			{
				cout << "������� �� �������!" << endl;
				break;
			}
			int element;
			Dequeue(NewQueue);
			break;
		}

		case 4:
		{
			cout << "������� �������!" << endl;
			DeleteQueue(NewQueue);
			break;
		}

		case 5:
		{
			return;
		}
		}
	}
}

void QueueTwoStackMenu()
{
	QueueTwoStack* NewQueue = new QueueTwoStack();

	cout << "1 - ������� �������" << endl;
	cout << "2 - �������� ������� � �������" << endl;
	cout << "3 - ������������� �������" << endl;
	cout << "4 - ������� ������� �� �������" << endl;
	cout << "5 - �������� �������" << endl;
	cout << "6 - ��������� � ���������� ����" << endl;

	while (true)
	{
		int Command;
		cout << "������� ������� ";
		cin >> Command;

		if (Command < 1 and Command > 5)
		{
			Command = 0;
		}

		switch (Command)
		{

		case 0:
		{
			cout << "������! ������� ����� �� 1 �� 5!" << endl;
			break;
		}

		case 1:
		{
			int Size;
			cout << "������� ������ �������: ";
			Size = PushSize();
			CreateQueueTwoStack(NewQueue, Size);
			break;
		}

		case 2:
		{
			int Check = CheckQueueOneStack(NewQueue);
			if (Check == 0)
			{
				cout << "������� �� ���� �������!" << endl;
				break;
			}
			int Element;
			cout << "������� �������, ������� �� ������ ������: ";
			cin >> Element;
			EnqueueTwoStack(NewQueue, Element);
			break;
		}

		case 3:
		{
			int Check = CheckQueueOneStack(NewQueue);
			if (Check == 0)
			{
				cout << "������� �� ���� �������!" << endl;
				break;
			}
			RealizationQueueTwoStack(NewQueue);
			cout << "������� ����������������" << endl;
			break;
		}

		case 4:
		{
			int Check = CheckQueueTwoStack(NewQueue);
			if (Check == 0)
			{
				cout << "������� �� ���� ����������������!" << endl;
				break;
			}
			cout << "������� ��� ��������" << endl;
			DequeueTwoStack(NewQueue);
			break;
		}

		case 5:
		{
			cout << "������� �������!" << endl;
			DeleteQueueTwoStack(NewQueue);
			break;
		}

		case 6:
		{
			return;
		}
		
		}
	}
}

int main()
{
	setlocale(LC_ALL, "ru");

	while (true)
	{
		cout << "1 - ���� �����" << endl;
		cout << "2 - ���� ���������� ������" << endl;
		cout << "3 - ���� ������� �� ��������� �������" << endl;
		cout << "4 - ���� ������� �� ���� ������" << endl;
		cout << "5 - ����� �� ���������" << endl;

		int Command;
		cout << "������� ������� ";
		cin >> Command;
		if (Command < 1 and Command > 4)
		{
			Command = 0;
		}

		switch (Command)
		{

		case 0:
		{
			cout << "������! ������� ����� �� 1 �� 4!" << endl;
			break;
		}

		case 1:
		{
			StackMenu();
			break;
		}

		case 2:
		{
			RingBufferMenu();
			break;
		}

		case 3:
		{
			QueueMenu();
			break;
		}

		case 4:
		{
			QueueTwoStackMenu();
			break;
		}

		case 5:
		{
			return 0;
		}
		}
	}
	return 0;
}