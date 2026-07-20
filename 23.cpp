// Array operations: Insertion at Beginning, End, and Position N
#include <iostream>
using namespace std;

// 1. Insert at Beginning
void insertbeg(int a[], int &ub, int lb, int val) {
    for (int i = ub; i >= lb; i--) {
        a[i + 1] = a[i]; 
    }
    a[lb] = val;
    ub++;
}

// 2. Insert at End
void insertend(int a[], int &ub, int val) {
    ub++;
    a[ub] = val;
}

// 3. Insert at Position K (0-indexed)
void insertpos(int a[], int &ub, int lb, int pos, int val) {
    if (pos < lb || pos > ub + 1) {
        cout << "\nInvalid position!\n";
        return;
    }
    for (int i = ub; i >= pos; i--) {
        a[i + 1] = a[i];
    }
    a[pos] = val;
    ub++;
}

// Helper function to print array
void printArray(int a[], int lb, int ub) {
    cout << "[ ";
    for (int i = lb; i <= ub; i++) {
        cout << a[i] << " ";
    }
    cout << "]\n";
}

int main() {
    int a[20]; // Array with capacity up to 20
    int lb = 0;
    int n;

    cout << "Enter the number of initial array elements: ";
    cin >> n;

    int ub = n - 1; // Last valid index is n - 1

    cout << "Enter array elements:\n";
    for (int i = lb; i <= ub; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> a[i];
    }

    cout << "\nOriginal Array:\n";
    printArray(a, lb, ub);

    // 1. Insert at Beginning
    int valBeg;
    cout << "\nEnter value to insert at BEGINNING: ";
    cin >> valBeg;
    insertbeg(a, ub, lb, valBeg);
    cout << "After inserting at beginning:\n";
    printArray(a, lb, ub);

    // 2. Insert at End
    int valEnd;
    cout << "\nEnter value to insert at END: ";
    cin >> valEnd;
    insertend(a, ub, valEnd);
    cout << "After inserting at end:\n";
    printArray(a, lb, ub);

    // 3. Insert at specific Position (0-indexed)
    int valPos, pos;
    cout << "\nEnter position index (0 to " << ub + 1 << "): ";
    cin >> pos;
    cout << "Enter value to insert at position " << pos << ": ";
    cin >> valPos;
    insertpos(a, ub, lb, pos, valPos);
    cout << "After inserting at position " << pos << ":\n";
    printArray(a, lb, ub);

    return 0;
}