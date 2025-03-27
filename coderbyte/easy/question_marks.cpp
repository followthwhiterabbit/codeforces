/*


Input: "aa6?9"
Output: false

looking for 3 question marks between 2 digits that add up to 10


Input: "acc?7??sss?3rr1??????5"
Output: true 

 */

#include <iostream>
#include <string>

using namespace std;

bool hasThreeQuestionMarks(string s) {
    int prev_digit = -1; // Stores the last seen digit
    int qm_count = 0; // Counter for question marks

    for (char c : s) {
        if (isdigit(c)) {
            int curr_digit = c - '0'; // Convert char to int

            if (prev_digit != -1 && (prev_digit + curr_digit == 10)) {
                if (qm_count == 3) {
                    return true;
                }
            }
            // Reset for next check
            prev_digit = curr_digit;
            qm_count = 0;
        } else if (c == '?') {
            qm_count++;
        }
    }

    return false;
}

int main() {
    string s;
    cin >> s;
    cout << (hasThreeQuestionMarks(s) ? "true" : "false") << endl;
    return 0;
}

