class Stack
{
public:
	// 접근자 함수
	int GetSize();
	int GetTop;
	bool SetSize(int size);
	bool GetData(int index, int& data);
};

int Stack::GetSize()
{
	return m_size;
}

int Stack::GetTop()
{
	return m_top;
}

bool Stack::SetSize(int size)
{
	if (size < m_size)
		return false;
	int* tmp = m_buffer;
	m_size = size;
	m_buffer = new int[m_size];
	memcpy(m_buffer, tmp, sizeof(int) * (m_top + 1));
	delete[] tmp;
	return true;
}

bool Stack::GetData(int index, int& data)
{
	if (index < 0 || index > m_top)
		return false;
	data = m_buffer[index]; // *(m_buffer + index)
	return true;
}