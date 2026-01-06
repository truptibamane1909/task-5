#include <iostream>
using namespace std;

string book[5] = {"C++", "Java", "Python", "DSA", "OS"};
bool issued[5] = {false};

int main() {
    int ch, id;

    do {
        cout << "\n1.View Books\n2.Issue Book\n3.Return Book\n4.Exit\n";
        cout << "Choice: ";
        cin >> ch;

        switch(ch) {
            case 1:
                for(int i=0;i<5;i++)
                    cout << i+1 << ". " << book[i] 
                         << (issued[i]?" (Issued)":" (Available)") << endl;
                break;

            case 2:
                cout << "Enter book id: ";
                cin >> id;
                issued[id-1] = true;
                break;

            case 3:
                cout << "Enter book id: ";
                cin >> id;
                issued[id-1] = false;
                break;
        }
    } while(ch != 4);

    return 0;
}