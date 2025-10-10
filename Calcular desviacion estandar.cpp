#include <iostream>
#include <vector>
#include <cmath>
#include <numeric>
int main() {
    int n;
    std::cin >> n;
    std::vector<double> arr(n);
    for (int i = 0; i < n; i++) std::cin >> arr[i];
    double media = std::accumulate(arr.begin(), arr.end(), 0.0) / n;
    double suma_cuadrados = 0.0;
    for (double x : arr) suma_cuadrados += std::pow(x - media, 2);
    double desviacion = std::sqrt(suma_cuadrados / n);
    std::cout << "Desviación estándar: " << desviacion << "\n";
}