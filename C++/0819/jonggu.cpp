class First
{
public:
	First(int n1 = 0, int n2 = 0, int n3 = 0, int n4 = 0) : num1(n1), num2(n2), num3(n3), num4(n4) {}

private:
	int num1, num2, num3, num4;
};

class Second
{
public:
	Second() : num1(0), num2(0), num3(0), num4(0) {}

private:
	int num1, num2, num3, num4;
};


int main()
{
	First first();
	Second second();

	return 0;
}