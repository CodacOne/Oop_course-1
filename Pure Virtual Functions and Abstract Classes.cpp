#include <iostream>
using namespace std;

class clsmobile 
{
	virtual void Dial(int num) = 0;
	virtual void SendSms(int num ,string name) = 0;
	virtual void SendEmail() = 0;

};

class clsSamsung :public clsmobile
{
public:

	void Dial(int num)
	{


	};

	void SendSms(int num, string name)
	{


	};

	void SendEmail()
	{

	};

};

class clsiphone :public clsmobile
{
public:

	void Dial(int num)
	{


	};

	void SendSms(int num, string name)
	{


	};

	void SendEmail()
	{

	};



};



int main()
{
	// clsmobile mobile;

	clsSamsung Samsung;
	
	clsiphone iphone;

}