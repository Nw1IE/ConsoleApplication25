#include <iostream>
#include <cstdlib>  
#include <ctime>    

int main() 
{
    setlocale(LC_ALL, "ru");
    const int SIZE = 10; 
    int arr[SIZE];
    std::srand(std::time(0));

    std::cout << "\nМассив случайных чисел: ";
    for (int i = 0; i < SIZE; ++i) {
        arr[i] = std::rand() % 100; 
        std::cout << arr[i] << " ";
    }

    int min = arr[0];
    int max = arr[0];

    
    for (int i = 1; i < SIZE; ++i) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    
    std::cout << "\nМинимальный элемент: " << min << std::endl;
    std::cout << "Максимальный элемент: " << max << std::endl;

    return 0;
}