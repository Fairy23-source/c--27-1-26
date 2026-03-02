#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

class Contact {
public:
    string name;
    string phone;
    string email;
};

class ContactManager {
private:
    vector<Contact> contacts;

public:
    void loadContacts() {
        ifstream file("contacts.txt");
        Contact c;
        while (getline(file, c.name)) {
            getline(file, c.phone);
            getline(file, c.email);
            contacts.push_back(c);
        }
        file.close();
    }

    void saveContacts() {
        ofstream file("contacts.txt");
        for (Contact c : contacts) {
            file << c.name << endl;
            file << c.phone << endl;
            file << c.email << endl;
        }
        file.close();
    }

    void addContact() {
        Contact c;
        cin.ignore();
        cout << "Enter Name: ";
        getline(cin, c.name);
        cout << "Enter Phone: ";
        getline(cin, c.phone);
        cout << "Enter Email: ";
        getline(cin, c.email);

        contacts.push_back(c);
        saveContacts();
        cout << "Contact added successfully!\n";
    }

    void viewContacts() {
        if (contacts.empty()) {
            cout << "No contacts found.\n";
            return;
        }

        cout << "\n---- Contact List ----\n";
        for (int i = 0; i < contacts.size(); i++) {
            cout << "\nContact " << i + 1 << endl;
            cout << "Name: " << contacts[i].name << endl;
            cout << "Phone: " << contacts[i].phone << endl;
            cout << "Email: " << contacts[i].email << endl;
        }
    }

    void searchContact() {
        string searchName;
        cin.ignore();
        cout << "Enter name to search: ";
        getline(cin, searchName);

        for (Contact c : contacts) {
            if (c.name == searchName) {
                cout << "\nContact Found!\n";
                cout << "Name: " << c.name << endl;
                cout << "Phone: " << c.phone << endl;
                cout << "Email: " << c.email << endl;
                return;
            }
        }

        cout << "Contact not found.\n";
    }

    void deleteContact() {
        string deleteName;
        cin.ignore();
        cout << "Enter name to delete: ";
        getline(cin, deleteName);

        for (int i = 0; i < contacts.size(); i++) {
            if (contacts[i].name == deleteName) {
                contacts.erase(contacts.begin() + i);
                saveContacts();
                cout << "Contact deleted successfully!\n";
                return;
            }
        }

        cout << "Contact not found.\n";
    }

    void updateContact() {
        string updateName;
        cin.ignore();
        cout << "Enter name to update: ";
        getline(cin, updateName);

        for (int i = 0; i < contacts.size(); i++) {
            if (contacts[i].name == updateName) {
                cout << "Enter new phone: ";
                getline(cin, contacts[i].phone);
                cout << "Enter new email: ";
                getline(cin, contacts[i].email);

                saveContacts();
                cout << "Contact updated successfully!\n";
                return;
            }
        }

        cout << "Contact not found.\n";
    }
};

int main() {
    ContactManager manager;
    manager.loadContacts();

    int choice;

    do {
        cout << "\n===== CONTACT MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Contact\n";
        cout << "2. View Contacts\n";
        cout << "3. Search Contact\n";
        cout << "4. Update Contact\n";
        cout << "5. Delete Contact\n";
        cout << "6. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                manager.addContact();
                break;
            case 2:
                manager.viewContacts();
                break;
            case 3:
                manager.searchContact();
                break;
            case 4:
                manager.updateContact();
                break;
            case 5:
                manager.deleteContact();
                break;
            case 6:
                cout << "Exiting program...\n";
                break;
            default:
                cout << "Invalid choice!\n";
        }

    } while (choice != 6);

    return 0;
}
