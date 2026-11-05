#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Employee
{
private:
    int id;
    string name;
    double basicSalary;
    double hra, da, pf, grossSalary, netSalary;

public:
    void getDetails()
    {
        cout << "Enter Employee ID: ";
        cin >> id;

        cin.ignore();

        cout << "Enter Employee Name: ";
        getline(cin, name);

        cout << "Enter Basic Salary: ";
        cin >> basicSalary;
    }

    void calculateSalary()
    {
        hra = basicSalary * 0.20;
        da = basicSalary * 0.10;
        pf = basicSalary * 0.12;

        grossSalary = basicSalary + hra + da;
        netSalary = grossSalary - pf;
    }

    void displaySalary()
    {
        cout << fixed << setprecision(2);

        cout << "\n===== EMPLOYEE PAYSLIP =====\n";
        cout << "Employee ID     : " << id << endl;
        cout << "Employee Name   : " << name << endl;
        cout << "Basic Salary    : Rs. " << basicSalary << endl;
        cout << "HRA (20%)       : Rs. " << hra << endl;
        cout << "DA (10%)        : Rs. " << da << endl;
        cout << "Gross Salary    : Rs. " << grossSalary << endl;
        cout << "PF Deduction    : Rs. " << pf << endl;
        cout << "Net Salary      : Rs. " << netSalary << endl;
    }
};

int main()
{
    Employee emp;

    emp.getDetails();
    emp.calculateSalary();
    emp.displaySalary();

    return 0;
}
