#include <iostream>
#include <string>
using namespace std;

class Employee {
public:
    Employee(string firstName, string lastName, double monthlySalary)
        : firstName(firstName), lastName(lastName) {
        if (monthlySalary > 0) {
            this->monthlySalary = monthlySalary;
        } else {
            this->monthlySalary = 0.0;
        }
    }

    void setFirstName(string firstName) {
        this->firstName = firstName;
    }

    void setLastName(string lastName) {
        this->lastName = lastName;
    }

    void setMonthlySalary(double salary) {
        if (salary > 0) {
            monthlySalary = salary;
        } else {
            monthlySalary = 0.0;
        }
    }

    string getFirstName() const {
        return firstName;
    }

    string getLastName() const {
        return lastName;
    }

    double getMonthlySalary() const {
        return monthlySalary;
    }

    double getYearlySalary() const {
        return monthlySalary * 12;
    }

    void applyRaise() {
        monthlySalary += monthlySalary * 0.10;
    }

private:
    string firstName;
    string lastName;
    double monthlySalary;
};

int main() {
    Employee employee1("Adeel", "Rehman", 3000);
    Employee employee2("Abdullah", "Umar", 4500);

    cout << "Employee 1 (" << employee1.getFirstName() << " " << employee1.getLastName() << "): Yearly Salary: $"
         << employee1.getYearlySalary() << endl;

    cout << "Employee 2 (" << employee2.getFirstName() << " " << employee2.getLastName() << "): Yearly Salary: $"
         << employee2.getYearlySalary() << endl;

    employee1.applyRaise();
    employee2.applyRaise();

    cout << "\nAfter 10% Raise:\n";
    cout << "Employee 1 (" << employee1.getFirstName() << " " << employee1.getLastName() << "): Yearly Salary: $"
         << employee1.getYearlySalary() << endl;

    cout << "Employee 2 (" << employee2.getFirstName() << " " << employee2.getLastName() << "): Yearly Salary: $"
         << employee2.getYearlySalary() << endl;

    return 0;
}
