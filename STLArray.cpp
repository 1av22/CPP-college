#include <iostream>
#include <array>
int main()
{

    std::array<int, 5> arr1 = {1, 2, 3, 4, 5}; // STL array
    int arr2[5] = {1, 2, 3, 4, 5};             // CPP traditional array
    // Stl array has many functions that traditional array does not have.

    std::cout << "*********************************************************************" << std::endl;
    // .size() -> to find the size of an array.
    std::cout << "Size of the array : " << arr1.size() << std::endl;
    std::cout << "*********************************************************************" << std::endl;
    std::cout << std::endl;

    std::cout << "*********************************************************************" << std::endl;
    // get -> this function is also used to get a value from an array.
    // .at() -> to find the element at a specific index.
    // we can also use '[]' operator to get a value from an array.
    std::cout << "Element at 0'th index is : " << std::get<0>(arr1) << std::endl;
    std::cout << "Element at 1'st index is : " << arr1[1] << std::endl;
    std::cout << "Element at 2'nd index is : " << arr1.at(2) << std::endl;
    std::cout << "*********************************************************************" << std::endl;
    std::cout << std::endl;

    std::cout << "*********************************************************************" << std::endl;
    // .front() -> to get the first element of an array.
    // .back() -> to get the last element of an array.
    std::cout << "First element : " << arr1.front() << std::endl;
    std::cout << "Last element : " << arr1.back() << std::endl;
    std::cout << "*********************************************************************" << std::endl;
    std::cout << std::endl;

    std::cout << "*********************************************************************" << std::endl;
    // .max_size() -> it is used to get the max number of elements an array can hold.
    std::cout << "Maximum elements our array can hold is : " << arr1.max_size() << std::endl;
    std::cout << "*********************************************************************" << std::endl;
    std::cout << std::endl;

    std::cout << "*********************************************************************" << std::endl;
    // .swap() -> it is used to swap two arrays.
    std::array<int, 5> tarr = {6, 7, 8, 9, 10};
    std::cout << "Array 1 before swapping :";
    for (int i = 0; i < 5; i++)
        std::cout << arr1[i] << " ";
    std::cout << std::endl;
    std::cout << "Array 2 before swapping :";
    for (int i = 0; i < 5; i++)
        std::cout << tarr[i] << " ";
    std::cout << std::endl;

    arr1.swap(tarr);

    std::cout << "Array 1 after swapping :";
    for (int i = 0; i < 5; i++)
        std::cout << arr1[i] << " ";
    std::cout << std::endl;
    std::cout << "Array 2 after swapping :";
    for (int i = 0; i < 5; i++)
        std::cout << tarr[i] << " ";
    std::cout << std::endl;
    std::cout << "*********************************************************************" << std::endl;
    std::cout << std::endl;

    std::cout << "*********************************************************************" << std::endl;
    // .empty() -> to check if the array is empty or not.
    std::cout << "Print 0 if array is not empty and 1 if array is empty : " << arr1.empty() << std::endl;
    std::cout << "*********************************************************************" << std::endl;
    std::cout << std::endl;

    std::cout << "*********************************************************************" << std::endl;
    // .fill() -> used to fill same value in all the elements of the array.
    std::cout << "Array before filling :";
    for (int i = 0; i < 5; i++)
        std::cout << tarr[i] << " ";
    std::cout << std::endl;
    tarr.fill(18);
    std::cout << "Array after filling :";
    for (int i = 0; i < 5; i++)
        std::cout << tarr[i] << " ";
    std::cout << std::endl;
    std::cout << "*********************************************************************" << std::endl;
    std::cout << std::endl;
}