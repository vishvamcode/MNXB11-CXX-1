#include "as3.hpp"

namespace homework {

// (a) Enum class
enum class Color { red, green, yellow };

// (b) Base class Fruit
class Fruit {
public:
    Fruit(std::string name, Color color)
        : name_(name), color_(color) {}

    std::string getName() const { return name_; }
    Color getColor() const { return color_; }

    virtual std::string getTaste() const = 0;

protected:
    std::string name_;
    Color color_;
};

// (c) Derived class Apple
class Apple : public Fruit {
public:
    Apple(Color color) : Fruit("apple", color) {}

    std::string getTaste() const override { return "sweet"; }
};

} // namespace homework
