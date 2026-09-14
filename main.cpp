#include <iostream>
#include <string>

// Homework 3 — Andres Valenzuela
// CIS 5 Week 03 · Types & variables

int main() {
	const int CURRENT_YEAR = 2026;

	// TODO: Lab 3 boxes — initialize on the same line
	std::string name = "Andres V";
	int age = 15;
	double height_m = 1.65;
	char initial = 'AV';
	bool student = true;
	int credits = 10;
	double gpa = 4.3;


	// The credits needs to be int because credits are whole numbers, which credits are
	//The gpa is a double because it can include decimal points, which gpa has.

	std::cout << "=== About me ===\n";
	std::cout << "Name: " << name << "\n";
	std::cout << "Age: " << age << "\n";
	std::cout << "Height (m):" << height_m << "\n";
	std::cout << "Initial: " << initial << "\n";
	std::cout << "Student: " << student << "\n";
	std::cout << "Credits: " << credits << "\n";
	std::cout << "GPA: " << gpa << "\n";
	std::cout << "\n";
	std::cout << "Andres is 15, 1.65 meters tall, who is a student taking 10 credits with a 4.3 gpa.";

	// I changed the initials to being AV from A
	// It still prints AV because it prints initial, not the leftover A

	// TODO: two lines that would not compile — leave them commented
	// int credits = "10";   // would not compile — I forgot to put the semicolon at the end, which is needed at the end of a statement
	// name = "Andres V"   // would not compile — I had forgotten to use the quotation marks which resulted in it not compiling
	return 0;
}
