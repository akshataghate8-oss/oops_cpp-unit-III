#include <iostream>
#include <string>
#include <utility>
using namespace std;

class Employee
{
protected:
    int employeeId;
    string name;

public:
    Employee(int id, string employeeName)
        : employeeId(id),
          name(std::move(employeeName))
    {
    }

    virtual double calculateSalary() const = 0;

    void displayBasicDetails() const
    {
        cout << "Employee ID: " << employeeId << endl;
        cout << "Name: " << name << endl;
    }

    virtual ~Employee() = default;
};

class PermanentEmployee : public Employee
{
private:
    double basicSalary;
    double allowance;

public:
    PermanentEmployee(int id,
                      string employeeName,
                      double basic,
                      double extra)
        : Employee(id, std::move(employeeName)),
          basicSalary(basic),
          allowance(extra)
    {
    }

    double calculateSalary() const override
    {
        return basicSalary + allowance;
    }
};

class ContractEmployee : public Employee
{
private:
    double hourlyRate;
    int hoursWorked;

public:
    ContractEmployee(int id,
                     string employeeName,
                     double rate,
                     int hours)
        : Employee(id, std::move(employeeName)),
          hourlyRate(rate),
          hoursWorked(hours)
    {
    }

    double calculateSalary() const override
    {
        return hourlyRate * hoursWorked;
    }
};

void printPaySlip(const Employee& employee)
{
    employee.displayBasicDetails();

    cout << "Salary: Rs. "
         << employee.calculateSalary()
         << endl << endl;
}

int main()
{
    PermanentEmployee permanentEmployee(
        201, "Neha", 45000.0, 9000.0);

    ContractEmployee contractEmployee(
        202, "Rahul", 600.0, 75);

    printPaySlip(permanentEmployee);
    printPaySlip(contractEmployee);

    return 0;
}
