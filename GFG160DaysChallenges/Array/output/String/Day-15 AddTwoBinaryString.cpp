#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string addBinary(string a, string b) {
    string result = "";
    int i = a.size() - 1, j = b.size() - 1;
    int carry = 0;

    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;

        if (i >= 0) sum += a[i--] - '0';  // Convert char to int
        if (j >= 0) sum += b[j--] - '0';

        result += (sum % 2) + '0';  // Add remainder (0 or 1) to result
        carry = sum / 2;            // Update carry
    }

    reverse(result.begin(), result.end()); // Final result is in reverse order
    return result;
}

int main() {
    string a = "1010", b = "1011";
    cout << "Sum: " << addBinary(a, b) << endl;
    return 0;
}
