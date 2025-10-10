#include <iostream>
#include <vector>
#include <algorithm>
int main() {
    int n;
    std::cin >> n;
    std::vector<double> arr(n);
    for (int i = 0; i < n; i++) std::cin >> arr[i];
    std::sort(arr.begin(), arr.end());
    double mediana;
    if (n % 2 == 0)
        mediana = (arr[n/2 - 1] + arr[n/2]) / 2.0;
    else
        mediana = arr[n/2];
    std::cout << "Mediana: " << mediana << "\n";
}
