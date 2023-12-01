#pragma once

class Calcul
{
private:

	bool readyForAction=false;
	static int nrCalcule;
	char* expresie = nullptr; //pusesem string...sa revin char*

public:


	Calcul()//constructor implicit
	{
		nrCalcule++;
		//expresie = "Epresiee";
	}

	Calcul(char* expresie)
	{

		this->expresie = expresie;
	}

	~Calcul()//destructor
	{
		if (expresie != nullptr)
			delete[] expresie;

		cout << "apel destructor";//proba
	}

	void gasesteParantezele()
	{
		for (int i = 0; i < strlen(expresie); i++)
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

int nrCalcule = 0;
