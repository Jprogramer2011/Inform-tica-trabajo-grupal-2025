#include <iostream>
#include <vector>
#include <cmath>
#include <limits>
int main() {
    int n, x;
    std::cin >> n;
    std::vector<int> arr(n);
    for (int i = 0; i < n; i++) std::cin >> arr[i];
    std::cin >> x;
    int mas_cercano = arr[0];
    int diferencia_min = std::abs(arr[0] - x);
    for (int i = 1; i < n; i++) {
        int dif = std::abs(arr[i] - x);
        if (dif < diferencia_min) {
            diferencia_min = dif;
            mas_cercano = arr[i];
        }
    }
    std::cout << "Más cercano a " << x << ": " << mas_cercano << "\n";
}