#include <iostream>
#include <vector>
int main() {
    int n;
    std::cin >> n;
    std::vector<int> arr(n);
    for (int i = 0; i < n; i++) std::cin >> arr[i];
    int pos = 0, neg = 0, ceros = 0;
    for (int num : arr) {
        if (num > 0) pos++;
        else if (num < 0) neg++;
        else ceros++;
    }
    std::cout << "Positivos: " << pos << "\n";
    std::cout << "Negativos: " << neg << "\n";
    std::cout << "Ceros: " << ceros << "\n";
}