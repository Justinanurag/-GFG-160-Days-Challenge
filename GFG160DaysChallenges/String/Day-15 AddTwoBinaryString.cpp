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

        if (i >= 0) sum += a[i--] - '0';
        if (j >= 0) sum += b[j--] - '0';

        result += (sum % 2) + '0';
        carry = sum / 2;
    }

    reverse(result.begin(), result.end());

    // ✅ Remove leading zeros (except when the result is "0")
    size_t pos = result.find_first_not_of('0');
    if (pos != string::npos)
        return result.substr(pos);
    else
        return "0";
}
int main() {
    string a = "1010", b = "1011";
    cout << "Sum: " << addBinary(a, b) << endl;
    return 0;
}
