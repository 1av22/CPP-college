#include <iostream>
#include <memory>
class entity
{
public:
    entity() { std::cout << "Entity created!" << std::endl; }
    ~entity() { std::cout << "Entity destroyed!" << std::endl; }
    void print() { std::cout << "Hello!" << std::endl; }
};
int main()
{
    {
        std::unique_ptr<entity> e = std::make_unique<entity>();
        e->print();
    }
}