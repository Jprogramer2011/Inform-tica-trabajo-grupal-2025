#include <iostream>
#include <vector>
#include <algorithm>
bool esta_ordenado(const std::vector<int>& arr) {
    return std::is_sorted(arr.begin(), arr.end());
}
int main() {
    int n;
    std::cin >> n;
    std::vector<int> arr(n);
    for (int i = 0; i < n; i++) std::cin >> arr[i];
    if (esta_ordenado(arr))
        std::cout << "El arreglo está ordenado.\n";
    else
        std::cout << "El arreglo NO está ordenado.\n";
}
