#include <iostream>
#include <vector>

int main()
{
    std::cout << std::endl
              << std::endl;
    // Creating an array.
    std::vector<int> vec;
    // .push_back(value) is used to add an element int the vector.
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    // Using a loop to print the vector.
    std::cout << "Vector after push : ";
    for (int i : vec)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl
              << std::endl
              << std::endl;

    // Using the .at,[] functions.
    std::cout << "Element at 0'th index : " << vec.at(0) << std::endl;
    std::cout << "Element at 1'nd index : " << vec[1] << std::endl;
    std::cout << std::endl
              << std::endl;

    // Using .front() and .back() to see the first and last element.
    std::cout << "First element : " << vec.front() << std::endl;
    std::cout << "Last element  : " << vec.back() << std::endl;
    std::cout << std::endl
              << std::endl;

    // Using .pop_back() to remove the last element.
    std::cout << "Vector before popping :" << std::endl;
    for (int i : vec)
        std::cout << i << " ";
    std::cout << std::endl;
    vec.pop_back();
    std::cout << "Vector after popping :" << std::endl;
    for (int i : vec)
        std::cout << i << " ";
    std::cout << std::endl
              << std::endl
              << std::endl;

    // Using size and max_size.
    std::cout << "Sixe of the vector : " << vec.size() << std::endl;
    std::cout << "Capacity of the vector : " << vec.capacity() << std::endl;
    std::cout << std::endl
              << std::endl;

    // Using .shrink_to_fit() to make the capacity and size same.
    std::cout << "Capacity before shrink : " << vec.capacity() << std::endl;
    vec.shrink_to_fit();
    std::cout << "Capacity after shrink : " << vec.capacity() << std::endl;
    std::cout << std::endl
              << std::endl;

    // Using .clear() to erase all elements
    std::cout << "Vector before clearing : ";
    for (int i : vec)
        std::cout << i << " ";
    vec.clear();
    std::cout << std::endl;
    std::cout << "Vector after clearing :";
    for (int i : vec)
        std::cout << i << " ";
}

jatin.patel2021
    Pon44085