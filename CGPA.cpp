#include <iostream>
#include <vector>
using namespace std;

int Sub, sem;
string Grade;
double intGrade;
double* ar = new double[Sub];
int i = 0;
void GraDe() {

	cout << "\t\tEnter Grade \t\t"; cin >> Grade;

	if (Grade == "A" || Grade == "A+") {
		ar[0] = 4.00;
	}
	else if (Grade == "A-") {
		ar[0] = 3.67;
	}
	else if (Grade == "B+") {
		ar[0] = 3.33;
	}
	else if (Grade == "B") {
		ar[0] = 3.00;
	}
	else if (Grade == "B-") {
		ar[0] = 2.67;
	}
	else if (Grade == "C+") {
		ar[0] = 2.33;
	}
	else if (Grade == "C") {
		ar[0] = 2.00;
	}
	else if (Grade == "C-") {
		ar[0] = 1.67;
	}
	else if (Grade == "D+") {
		ar[0] = 1.33;
	}
	else if (Grade == "D") {
		ar[0] = 1.00;
	}
	else if (Grade == "F") {
		ar[0] = 0.00;
	}
	else {
		cout << "\n\t\tInvalid Grade:\n";
	}
}
void GPA() {
	cout << "\n\n\t\t------------------- GPA CALCULATOR -----------------------------\t\t\t\n";
	cout << "\t\tHow many subjects are you studying in this Sememster ?\t"; cin >> Sub;
	cout << "\n\n\t\t------------------- ENTER VALUES -----------------------------\t\t\t\n";

	vector<string>SubjectName(Sub);
	vector<double> CrdHrs(Sub);
	double Sumpoints, Points = 0.00;
	double GPA, SumCrdHrs = 0.00;
	while (i < Sub) {
		cout << "\t\tEnter Subject Name\t"; cin >> SubjectName[i];
		cout << "\t\tEnter Credit Hrs\t"; cin >> CrdHrs[i];
		GraDe();
		Sumpoints = CrdHrs[i] * ar[0];  //cal points
		Points += Sumpoints;   //adding all points
		SumCrdHrs += CrdHrs[i];
		GPA = Points / SumCrdHrs;  // GPA = points / CreditHrs
		i++;
	}
	cout << "\n\n\t\t------------------- RESULTS -----------------------------\t\t\t\n";
	cout << "\t\tPOINTS\t ---> " << Points;
	cout << "\t\t Credit hrs\t --->  " << SumCrdHrs << "\n";
	cout << "\n\t\tCGPA   ---> " << GPA;
}

void CGPA() {
	cout << "\n\n\t\t------------------- CGPA CALCULATOR -----------------------------\t\t\t\n";
	cout << "\t\tHow many semesters have you read ? \t"; cin >> sem;
	vector<double> gpa(sem);
	double CGPAsum = 0, CGPA = 0;
	while (i < sem) {
		cout << "\t\tEnter GPA of sem " << i + 1 << "\t  ----> \t"; cin >> gpa[i];
		CGPAsum += gpa[i];
		CGPA = CGPAsum / sem;   //cgpa = total cgpa of all semsters/total no of semesters
		i++;
	}
	cout << "\n\n\t\t------------------- RESULTS -----------------------------\t\t\t\n";
	cout << "\n\t\tCGPA   ---> " << CGPA;
}
void Menu() {
	do {
		cout << "\n\n\t\t------------------------- MENU --------------------------------\t\t\t\n";	
		cout << "\t\t1. Calculate GPA of a Sememster \t\t\t\n";
		cout << "\t\t2. Calculate CGPA of all Sememsters \t\t\t\n";
		cout << "\t\t3. QUIT \t\t\t\n";
		int option;
		cout << "\t\tEnter Option according to MENU \t\t"; cin >> option;
		switch (option) {
		case 1:
			GPA();
			break;
		case 2:
			CGPA();
			break;

		case 3:
			exit(0);
		}

	} while (1);
}
int main() {
	Menu();
	
}