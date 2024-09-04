#pragma once
#include <string>
using namespace std;

class Person
{
	string Vorname, Nachname;
	short Alter;

public:
	string GetVorname();
	void SetVorname(string Vorname);

	string GetNachname();
	void SetNachname(string Nachname);

	short GetAlter();
	void SetAlter(short Alter);
};

