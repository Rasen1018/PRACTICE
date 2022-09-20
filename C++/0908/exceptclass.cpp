#include <iostream>
using namespace std;

class AAA
{
public:
	virtual void ShowYou() {	//virtual이 동적으로 원래 객체를 찾아가게 해준다
		cout << "AAA exception" << endl;
	}
};

class BBB : public AAA
{
public:
	void ShowYou() {
		cout << "BBB exception" << endl;
	}
};

class CCC : public BBB
{
public:
	void ShowYou() {
		cout << "CCC exception" << endl;
	}
};

void ExceptionGenerator(int expn) {
	if (expn == 1) {
		throw AAA();
	}
	else if (expn == 2) {
		throw BBB();
	}
	else {
		throw CCC();
	}
}

int main()
{
	try
	{
		ExceptionGenerator(3);
		ExceptionGenerator(2);
		ExceptionGenerator(1);
	}
#if 0

	catch (CCC& expn)
	{
		cout << "catch(CCC expn)" << endl;
		expn.ShowYou();
	}
	catch (BBB& expn)
	{
		cout << "catch(BBB expn)" << endl;
		expn.ShowYou();
	}
	catch (AAA& expn)
	{
		cout << "catch(AAA expn)" << endl;
		expn.ShowYou();
	}

#else
	catch (AAA& expn)
	{
		cout << "catch(AAA expn)" << endl;
		expn.ShowYou();
	}
	catch (BBB& expn)
	{
		cout << "catch(BBB expn)" << endl;
		expn.ShowYou();
	}
	catch (CCC& expn)
	{
		cout << "catch(CCC expn)" << endl;
		expn.ShowYou();
	}
#endif
	return 0;
}