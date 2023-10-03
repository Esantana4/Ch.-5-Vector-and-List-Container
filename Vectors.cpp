#include "Vectors.h"

Vectors::Vectors()
{


}

void Vectors::vectorsSubMenu()
{
    char choice = 0;

    do {
        system("cls");
        cout << "\t\t221 > Vector's member functions\n";
        cout << "\n\t" << string(80, char(205)) << endl;
        cout << "\t\tA > clear() - Removes all elements from the vector(which are destroyed)\n";
        cout << "\t\tB > reserve(n) - Requests that the vector capacity be at least enough to contain n elements\n";
        cout << "\t\tC > resize(n) - Resizes the container so that it contains n elements\n";
        cout << "\t\tD > Read input.dat and push_back(e) - Adds a new element at the end of the vector\n";
        cout << "\t\tE > pop_back() - Removes the last element in the vector\n";
        cout << "\t\tF > front() - Returns a reference to the first element in the vector\n";
        cout << "\t\tG > back() - Returns a reference to the last element in the vector\n";
        cout << "\t\tH > index using at() or []) - Returns a reference to the element at position n in the vector\n";
        cout << "\t\tI > begin() - Returns an iterator pointing to the first element in the vector\n";
        cout << "\t\tJ > end() Returns an iterator referring to the past - the - end element in the vector\n";
        cout << "\t\tK > Using iterator begin() and end() returns all elements in the vector\n";
        cout << "\t\tL > rbegin() - Returns a reverse iterator pointing to the last element in the vector\n";
        cout << "\t\tM > rend() - Returns a reverse iterator pointing to the theoretical element preceding the first\n";
        cout << "\t\t\t     element in the vector\n";
        cout << "\t\tN > Using iterator rbegin() and rend() returns all elements in the vector\n";
        cout << "\t\tO > erase(it) - Removes from the vector a single element(using an iterator)\n";
        cout << "\t\tP > erase(start_it, end_it) - Removes from the vector a range of elements(using iterators)\n";
        cout << "\t\tQ > insert(it, entry) - Insert a new entry at the iterator.\n";
        cout << "\t\tR > swap() - Exchanges the content of the container by another vector's content of the same type\n";
        cout << "\t\tS > Sort - Sorts the vector.\n";
        cout << "\n\t" << string(80, char(169)) << endl;
        cout << "\t\t0 > return\n";
        cout << "\n\t" << string(80, char(205)) << endl;

        choice = inputChar("\t\tOption: ", "ABCDEFGHIJKLMNOPQRS0");

        switch (choice)
        {
        case 'A':
            break;
        case 'B':
            system("cls");
            break;
        case '0': system("cls"); mainMenu();
        }

        // new line
        cout << "\n";
        system("cls");
    } while (true);
}
