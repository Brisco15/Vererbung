#include <iostream>
#include "Person.h"
#include "Student.h"
#include "Mitarbeiter.h"
#include "Dozent.h"
using namespace std;

int main()
{
	string vorname, nachname;
	short alter, semester;
	double gehalt;
	char lehrbefaehigung;

	// Objekt der Elternklasse
	Person person;

	cout << "Person\n======\n";

	// Vorname
	cout << "Vorname: ";
	cin >> vorname;
	person.SetVorname(vorname);

	// Nachname
	cout << "Nachname: ";
	cin >> nachname;
	person.SetNachname(nachname);

	// Alter
	cout << "Alter: ";
	cin >> alter;
	person.SetAlter(alter);

	cout << "Die Person " << person.GetVorname() << " " << person.GetNachname()
		<< " ist " << person.GetAlter() << " Jahre alt.\n\n";




	// Objekt der Kindklasse
	Student student;

	cout << "Student\n=======\n";

	// Vorname
	cout << "Vorname: ";
	cin >> vorname;
	student.SetVorname(vorname);

	// Nachname
	cout << "Nachname: ";
	cin >> nachname;
	student.SetNachname(nachname);

	// Alter
	cout << "Alter: ";
	cin >> alter;
	student.SetAlter(alter);

	// Semester
	cout << "Semester: ";
	cin >> semester;
	student.SetSemester(semester);

	cout << "Der Student " << student.GetVorname() << " " << student.GetNachname()
		<< " ist " << student.GetAlter() << " Jahre alt und studiert im " <<
		student.GetSemester() << " Semester.\n\n";




	// Objekt der Kindklasse
	Mitarbeiter mitarbeiter;

	cout << "Mitarbeiter\n=======\n";

	// Vorname
	cout << "Vorname: ";
	cin >> vorname;
	mitarbeiter.SetVorname(vorname);

	// Nachname
	cout << "Nachname: ";
	cin >> nachname;
	mitarbeiter.SetNachname(nachname);

	// Alter
	cout << "Alter: ";
	cin >> alter;
	mitarbeiter.SetAlter(alter);

	// Gehalt
	cout << "Gehalt: ";
	cin >> gehalt;
	mitarbeiter.SetGehalt(gehalt);

	cout << "Der Mitarbeiter " << mitarbeiter.GetVorname() << " " << mitarbeiter.GetNachname() << " ist " << mitarbeiter.GetAlter() << " Jahre alt und verdient  " <<
		mitarbeiter.GetGehalt() << " Euro .\n\n";






	// Objekt der Kindklasse
	Dozent dozent;

	cout << "Dozent\n=======\n";

	// Vorname
	cout << "Vorname: ";
	cin >> vorname;
	dozent.SetVorname(vorname);

	// Nachname
	cout << "Nachname: ";
	cin >> nachname;
	dozent.SetNachname(nachname);

	// Alter
	cout << "Alter: ";
	cin >> alter;
	dozent.SetAlter(alter);

	// Lehrbefaehigung
	cout << "Lehrbefaehigung (j/n): ";
	cin >> lehrbefaehigung;
	if (lehrbefaehigung == 'j')
		dozent.SetLehrbefaehigung(true);
	else
		dozent.SetLehrbefaehigung(false);

	if (dozent.GetLehrbefaehigung())
		cout << "Der Dozent" << dozent.GetVorname() << " " << dozent.GetNachname() << " ist " << dozent.GetAlter() << " Jahre alt und besizt die Lehrbefähigung.\n\n";
	else
		cout << "Der Dozent" << dozent.GetVorname() << " " << dozent.GetNachname() << " ist " << dozent.GetAlter() << " Jahre alt und besizt die Lehrbefähigung nicht.\n\n";



	return 0;
}
