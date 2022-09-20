#include <iostream>

using namespace std;

class Stack
{
private:
	int m_size;
	int m_top;
	int* m_buffer;

public:
	void Initialize(int size = 10);
	void RemoveAll();
	bool Push(int value);
	bool Pop(int& value);
};

void Stack::Initialize(int size)
{
	m_size = size;
	m_top = -1; //첫 데이터가 0부터 들어오게 하기 위해서
	m_buffer = new int[m_size];
	memset(m_buffer, 0, sizeof(int) * m_size); //타입의 크기 X 요소의 갯수, 포인터를 0으로 초기화시켜주는 방법
}

void Stack::RemoveAll()
{
	m_size = 0;
	m_top - 1;
	delete[] m_buffer;
	m_buffer = NULL; //m_bufffer가 포인터로 만들어졌을 때 NULL로 초기화
}

bool Stack::Push(int value)
{
	if (m_top >= m_size - 1)
		return false;
	m_buffer[++m_top] = value;
	return true;
}

bool Stack::Pop(int &value)
{
	if (m_top < 0)
		return false;
	value = m_buffer[m_top--];
	return true;
}



int main()
{
	Stack s1;
	s1.Initialize(5);
	//s1.m_top = 1;
	int data;
	s1.Pop(data);
	//delete[] s1.m_buffer;
	s1.Push(123);
	//Stack* p = new Stack;
	//p->Initialize(100);
	return 0;
}