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
			cout << "ошибка! вы ввели отрицательный размер!" << endl;
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
	cout << "1 - Созданиe стека" << endl;
	cout << "2 - помещение элемента в стек" << endl;
	cout << "3 - извлечение элемента из стека" << endl;
	cout << "4 - показать стек" << endl;
	cout << "5 - удаление стека (очистка памяти)" << endl;
	cout << "6 - вернуться в предыдущее меню" << endl;

	while (true)
	{
		int Command;
		cout << "Введите команду ";
		cin >> Command;
		if (Command < 1 and Command > 5)
		{
			Command = 0;
		}
		switch (Command)
		{

		case 0:
		{
			cout << "Ошибка! введите число от 1 до 6!" << endl;
			break;
		}

		case 1:
		{
			int Size;
			cout << "Введите размер стека: ";
			Size = PushSize();
			CreateStack(NewStack, Size);
			break;
		}

		case 2:
		{
			int Check = CheckStack(NewStack);
			if (Check == 0)
			{
				cout << "Стек не создан!" << endl;
				break;
			}
			int Element;
			cout << "Введите элемент, который вы хотите добавить: ";
			cin >> Element;
			PushStack(NewStack, Element);
			break;
		}

		case 3:
		{
			int Check = CheckStack(NewStack);
			if (Check == 0)
			{
				cout << "Стек не создан!" << endl;
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
				cout << "Стек не создан!" << endl;
				break;
			}
			ShowStack(NewStack);
			break;
			DeleteStack(NewStack);
			cout << "Стек удален!" << endl;
			break;
		}

		case 5:
		{
			DeleteStack(NewStack);
			cout << "Стек удален!" << endl;
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
	cout << "1 - создать буффер" << endl;
	cout << "2 - добавить элемент в буффер" << endl;
	cout << "3 - достать элемент из буффера" << endl;
	cout << "4 - показать количество свободного места" << endl;
	cout << "5 - показать количество занятого места" << endl;
	cout << "5 - показать кольцевой буффер" << endl;
	cout << "6 - Удаление буффера" << endl;
	cout << "7 - вернуться в предыдущее меню" << endl;

	while (true)
	{
		int Command;
		cout << "Введите команду ";
		cin >> Command;
		if (Command < 1 and Command > 8)
		{
			Command = 0;
		}

		switch (Command)
		{

		case 0:
		{
			cout << "Ошибка! введите число от 1 до 8!" << endl;
			break;
		}

		case 1:
		{
			int Size;
			cout << "Введите размер буффера: ";
			Size = PushSize();
			CreateRingBuffer(Buffer, Size);
			break;
		}

		case 2:
		{
			int Check = CheckBuffer(Buffer);
			if (Check == 0)
			{
				cout << "Кольцевой буффер не создан!" << endl;
				break;
			}
			int element;
			cout << "введите элемент, который вы хотите ввести: ";
			cin >> element;
			PushRingBuffer(Buffer, element);
			break;
		}

		case 3:
		{
			int Check = CheckBuffer(Buffer);
			if (Check == 0)
			{
				cout << "Кольцевой буффер не создан!" << endl;
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
				cout << "Кольцевой буффер не создан!" << endl;
				break;
			}
			cout << "свободных ячеек: " << GetEmptyBuffer(Buffer) << endl;
			break;
		}

		case 5:
		{
			int Check = CheckBuffer(Buffer);
			if (Check == 0)
			{
				cout << "Кольцевой буффер не создан!" << endl;
				break;
			}
			cout << "занятых ячеек: " << GetBusyBuffer(Buffer) << endl;
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
			cout << "буффер удален" << endl;
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

	cout << "1 - создать очередь" << endl;
	cout << "2 - добавить элемент в очередь" << endl;
	cout << "3 - удалить элемент из очереди" << endl;
	cout << "4 - удаление очереди" << endl;
	cout << "5 - вернуться в предыдущее меню" << endl;

	while (true)
	{
		int Command;
		cout << "Введите команду ";
		cin >> Command;
		if (Command < 1 and Command > 5)
		{
			Command = 0;
		}
		switch (Command)
		{

		case 0:
		{
			cout << "Ошибка! введите число от 1 до 5!" << endl;
			break;
		}

		case 1:
		{
			int Size;
			cout << "Введите размер очереди: ";
			Size = PushSize();
			InicializationQueue(NewQueue, Size);
			break;
		}

		case 2:
		{
			int Check = QueueCheck(NewQueue);
			if (Check == 0)
			{
				cout << "очередь не создана!" << endl;
				break;
			}
			int element;
			cout << "введите элемент, который вы хотите ввести: ";
			cin >> element;
			Enqueue(NewQueue, element);
			break;
		}
		case 3:
		{
			int Check = QueueCheck(NewQueue);
			if (Check == 0)
			{
				cout << "очередь не создана!" << endl;
				break;
			}
			int element;
			Dequeue(NewQueue);
			break;
		}

		case 4:
		{
			cout << "очередь удалена!" << endl;
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

	cout << "1 - создать очередь" << endl;
	cout << "2 - добавить элемент в очередь" << endl;
	cout << "3 - инициализация очереди" << endl;
	cout << "4 - извлечь элемент из очереди" << endl;
	cout << "5 - удаление очереди" << endl;
	cout << "6 - вернуться в предыдущее меню" << endl;

	while (true)
	{
		int Command;
		cout << "Введите команду ";
		cin >> Command;

		if (Command < 1 and Command > 5)
		{
			Command = 0;
		}

		switch (Command)
		{

		case 0:
		{
			cout << "Ошибка! введите число от 1 до 5!" << endl;
			break;
		}

		case 1:
		{
			int Size;
			cout << "Введите размер очереди: ";
			Size = PushSize();
			CreateQueueTwoStack(NewQueue, Size);
			break;
		}

		case 2:
		{
			int Check = CheckQueueOneStack(NewQueue);
			if (Check == 0)
			{
				cout << "очередь не была создана!" << endl;
				break;
			}
			int Element;
			cout << "введите элемент, который вы хотите ввести: ";
			cin >> Element;
			EnqueueTwoStack(NewQueue, Element);
			break;
		}

		case 3:
		{
			int Check = CheckQueueOneStack(NewQueue);
			if (Check == 0)
			{
				cout << "очередь не была создана!" << endl;
				break;
			}
			RealizationQueueTwoStack(NewQueue);
			cout << "Очередь инициализирована" << endl;
			break;
		}

		case 4:
		{
			int Check = CheckQueueTwoStack(NewQueue);
			if (Check == 0)
			{
				cout << "очередь не была инициализирована!" << endl;
				break;
			}
			cout << "элемент был извлечен" << endl;
			DequeueTwoStack(NewQueue);
			break;
		}

		case 5:
		{
			cout << "очередь удалена!" << endl;
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
		cout << "1 - Меню стека" << endl;
		cout << "2 - Меню кольцевого буфера" << endl;
		cout << "3 - Меню очереди на кольцевом буффере" << endl;
		cout << "4 - меню очереди из двух стеков" << endl;
		cout << "5 - Выход из программы" << endl;

		int Command;
		cout << "Введите команду ";
		cin >> Command;
		if (Command < 1 and Command > 4)
		{
			Command = 0;
		}

		switch (Command)
		{

		case 0:
		{
			cout << "ошибка! введите число от 1 до 4!" << endl;
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