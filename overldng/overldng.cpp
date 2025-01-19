#include <iostream>
using namespace std;
void bakePizza();
void bakePizza(std::string topping1);
void bakePizza(std::string topping1, string topping2);
int main()
{
    bakePizza("pepperone","mushrooms");
    return 0;
}
void bakePizza() {
    std::cout << "Here is your pizza!\n";
}
void bakePizza(std::string topping1) {
    std::cout << "Here is your : " << topping1 << "pizza\n";

 }
void bakePizza(std::string topping1, string topping2) {
    std::cout << "Here is your : " << topping1 <<"and" << topping2<<"pizza\n";

}


