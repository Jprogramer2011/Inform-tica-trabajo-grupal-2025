#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
int main() {
    int n;
    std::cin >> n;
    std::vector<int> arr(n);
    for (int i = 0; i < n; i++) std::cin >> arr[i];
    std::unordered_map<int, int> freq;
    for (int num : arr) freq[num]++;
    int moda = arr[0], max_freq = 0;
    for (auto& p : freq) {
        if (p.second > max_freq) {
            max_freq = p.second;
            moda = p.first;
        }
    }
    std::cout << "Moda: " << moda << " (repetido " << max_freq << " veces)\n";
}