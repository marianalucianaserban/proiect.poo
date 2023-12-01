#include <iostream>
using namespace std;


class Calcul
{
	private:
	string expresie;

    public:

	~Calcul()//destructor
    {
		cout << "apel destructor";
	}


	Calcul()//constructor implicit
	{
		expresie = "Epresiee";
	}

	void gasesteParantezele()
	{
		for (int i = 0; i < 10; i++)
		{
			if (expresie[i] == '(')
				int beginP = i;
			if (expresie[i] == ')')
				int endP = i;
	    }
	}

	void setExpresie()
	{
		cin >> expresie;

	}

	string getExpresie()
	{
		return  expresie;
	}
};
int main()
{
	Calcul c;
	cout << endl << "Introduceti expresia: ";
	//cin >> c.getExpresie();
	cout << endl << c.getExpresie() << endl;
} 