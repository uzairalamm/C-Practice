#include <iostream>
#include <string>
using namespace std;

// --------------------Easy — Problem 1 : Vehicle &Car-----------------------
// class Vehicle
// {
//     string brand;

// public:
//     Vehicle(string brand) : brand(brand) {};

//     string getBrand() const
//     {
//         return brand;
//     }

//     void display() const
//     {
//         cout << "Brand: " << brand << endl;
//     }
// };

// class Car : public Vehicle
// {
//     string model;

// public:
//     Car(string brand, string model) : Vehicle(brand), model(model) {};
//     string getModel() const
//     {
//         return model;
//     }
//     void display() const
//     {
//         Vehicle::display()
//         cout << "Model: " << model << endl;
//     }
// };

// int main()
// {
//     Car car("Toyota", "2001");
//     car.display();
// }

// --------------------Medium — Problem 2 : BankAccount &SavingAccount-----------------------

// class BankAccount
// {
//     float balance;

// public:
//     BankAccount(float initialBalance = 0) : balance(initialBalance) {};
//     bool deposit(float money)
//     {
//         if (money <= 0)
//             return false;
//         balance += money;
//         return true;
//     }
//     float getBalance()
//     {
//         return balance;
//     }
//     void showBalance()
//     {
//         cout << "Balance is: " << balance << endl;
//     }
// };

// class SavingAccount : public BankAccount
// {
//     float interestRate;

// public:
//     SavingAccount(float initialBalance, int interestRate) : BankAccount(initialBalance), interestRate(interestRate) {};
//     void addInterestRate()
//     {
//         if (interestRate <= 0)
//             return;
//         float interestAmount = (getBalance() * interestRate) / 100;
//         deposit(interestAmount);
//     }
// };

// int main()
// {
//     SavingAccount account(300, 12);
//     account.deposit(19999);
//     account.showBalance();
//     cout << "After Interest" << endl;
//     account.addInterestRate();
//     account.showBalance();
// }

// --------------------Hard — Problem 3: Employee & Developer-----------------------
// class Employee
// {
//     string name;
//     double baseSalary;

// public:
//     Employee(string name, double salary) : name(name), baseSalary((salary <= 0) ? 0 : salary) {};

//     double getSalary()
//     {
//         return baseSalary;
//     }

//     void increaseSalary(double amount)
//     {
//         baseSalary += amount;
//     }

//     void detail()
//     {
//         cout << "Name: " << name << endl;
//         cout << "Salary: " << baseSalary << endl;
//     }
// };
// class Developer : public Employee
// {
//     string language;
//     bool bonus;

// public:
//     Developer(string name, double salary, string language) : Employee(name, salary), language(language), bonus(false) {};
//     double calculateSalary()
//     {
//         if (language == "C++")
//         {
//             return getSalary() + 2000;
//         }
//         return getSalary();
//     }

//     void addBonus()
//     {
//         if (language == "C++" && !bonus)
//         {
//             bonus = true;
//             increaseSalary(2000);
//         }
//     }

//     void devDetail()
//     {
//         Employee::detail();
//         cout << "Language: " << language << endl;
//     }
// };
// void line()
// {
//     cout << "-----------------------\n";
// }
// int main()
// {
//     Developer dev("Ali", 90000, "Python");
//     Developer dev1("Ahmed", 90000, "C++");
//     dev.addBonus();
//     dev.devDetail();
//     dev1.addBonus();
//     dev1.devDetail();
// }

class Product
{
    string productName;
    float price;

public:
    Product(string productName, float price) : productName(productName), price((price <= 0) ? 0 : price) {};
    float getPrice() const
    {
        return price;
    }

    void productDetail() const
    {
        cout << "Product Name: " << productName << endl;
        cout << "Product Price: " << price << endl;
    }
};

class Electronics : public Product
{
    int warrantyYears;
    bool extended;

public:
    Electronics(string name, float price, int years)
        : Product(name, price), warrantyYears(years > 0 ? years : 0), extended(false) {}

    // Check if warranty has ended
    bool warrantyExpired() const
    {
        return warrantyYears <= 0;
    }

    // Extend warranty based on rules
    bool extendWarranty(int years)
    {
        if (years <= 0)
            return false; // invalid extension

        if (!warrantyExpired())
        {
            // Only allow extension if warranty is active or expired
            if (!extended)
            {
                warrantyYears += years;
                extended = true; // only once
                return true;     // successfully extended
            }
            else
            {
                return false; // already extended once
            }
        }
        else
        {
            // if expired, maybe allow only partial extension rule
            warrantyYears = years; // start a new warranty
            extended = true;
            return true;
        }
    }

    void decreaseWarranty(int years)
    {
        if (years > 0)
        {
            warrantyYears -= years;
            if (warrantyYears < 0)
                warrantyYears = 0;
        }
    }

    int getWarranty() const
    {
        return warrantyYears;
    }

    void showWarranty() const
    {
        cout << "Warranty: " << warrantyYears << " Years" << endl;
    }
};

int main()
{
    Electronics fan("MYFan", 2999, 1);

    fan.productDetail();
    fan.showWarranty();

    cout << "\nSimulate 1 year passing...\n";
    fan.decreaseWarranty(1); // warranty expired
    fan.showWarranty();

    cout << "\nTrying to extend warranty by 2 years...\n";
    if (fan.extendWarranty(2))
        cout << "Warranty extended successfully!\n";
    else
        cout << "Cannot extend warranty!\n";

    fan.showWarranty();
}