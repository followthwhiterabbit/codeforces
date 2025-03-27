#include <iostream>
#include <vector>

using namespace std;

// Function to initialize the frequency array from the given date
void resetFrequency(int freq[], const string &date) {
    fill(freq, freq + 10, 0);
    for (char c : date) {
        if (c != '.') {
            freq[c - '0']++;
        }
    }
}

// Function to check if the frequency array is fully zero
bool isZero(int freq[]) {
    for (int i = 0; i < 10; i++) {
        if (freq[i] > 0) return false;
    }
    return true;
}

// Function to determine when frequency array becomes zero
int getZeroIndex(const vector<int> &nums, int freq[]) {
    for (int i = 0; i < nums.size(); i++) {
        if (freq[nums[i]] > 0) {  // Decrease only if the number is present
            freq[nums[i]]--;
        }

        if (isZero(freq)) {
            return i + 1;  // Return the index (1-based)
        }
    }
    return 0;  
}

int main() {
    string date = "01.03.2025";
    int originalFreq[10] = {0};

    // Initialize frequency array from the date
    resetFrequency(originalFreq, date);

    int t;  // Number of test cases
    cin >> t;

    while (t--) {
        int freq[10];
        copy(begin(originalFreq), end(originalFreq), begin(freq));

        int m;  // Number of numbers in the test set
        cin >> m;

        vector<int> nums(m);
        for (int i = 0; i < m; i++) {
            cin >> nums[i];
        }

        int result = getZeroIndex(nums, freq);
        cout << result << endl;
    }

    return 0;
}

