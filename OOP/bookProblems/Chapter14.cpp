#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Participant
{
    string firstName = "Unknown", lastName = "Unknown", organization = "Unknown";
    int serialNumber;
    static int TotalCandidates;

public:
    Participant() { serialNumber = ++TotalCandidates; }

    Participant(const string &fName, const string &lName, const string &organization) : Participant()
    {
        setFirstName(fName);
        setLastName(lName);
        setOrganization(organization);
    }

    bool setFirstName(const string &fname)
    {
        if (!fname.empty() && fname != " ")
        {
            this->firstName = fname;
            return true;
        }
        return false;
    }

    bool setLastName(const string &lname)
    {
        if (!lname.empty() && lname != " ")
        {
            this->lastName = lname;
            return true;
        }
        return false;
    }

    bool setOrganization(const string &organization)
    {
        if (!organization.empty() && organization != " ")
        {
            this->organization = organization;
            return true;
        }
        return false;
    }

    string getFirstName() const { return firstName; }
    string getLastName() const { return lastName; }
    string getOrganization() const { return organization; }

    int getMySerial() const { return serialNumber; }
    static int getTotalCandidates();

    void display() const
    {
        cout << "Serial Number: " << serialNumber << endl;
        cout << "First Name: " << firstName << endl;
        cout << "Last Name: " << lastName << endl;
        cout << "Organization: " << organization << endl;
    }
};

int Participant::TotalCandidates = 0;
int Participant::getTotalCandidates() { return TotalCandidates; }

int main()
{

    vector<Participant> participants;
    int serial;

    for (int i = 0; i < 3; i++)
    {
        Participant person("Ali", "Hassan", "LAPD");
        participants.push_back(person);
    }

    for (auto &p : participants)
    {
        cout << "----------------------------------\n";
        p.display();
        cout << "----------------------------------\n\n";
    }

    Participant p;
    string name;
    do
    {
        cout << "Enter Name: ";
        getline(cin, name);
    } while (!p.setFirstName(name)); // this is just to show, function working properly...

    cout << "Total Candidaties: " << Participant::getTotalCandidates() << endl;
}