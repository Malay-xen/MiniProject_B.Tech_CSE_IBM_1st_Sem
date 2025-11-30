// Question 4: Problem-title: The Mathematician’s Number Challenge


#include<iostream>
using namespace std;
int main() {
    int n;
    int count = 0;

    cout << "Enter a number: ";
    cin >> n;

    if (n % 2 == 0)
        cout << n << " is even number." << endl;
    else
        cout << n << " is odd number." << endl;

    if (n <= 1) {
        cout << n << " is neither prime nor composite." << endl;
    } else {
        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                count++;
                break;
            }
        }

        if (count == 0)
            cout << n << " is a prime number." << endl;
        else
            cout << n << " is not a prime number." << endl;
    }

    return 0;
}
