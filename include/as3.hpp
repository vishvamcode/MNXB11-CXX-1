#pragma once
#include <string>

namespace homework {

// (a)
enum class Color { red, green, yellow };

// (b)
class Fruit {
public:
  Fruit(std::string name, Color color);
  std::string getName() const;
  Color getColor() const;
  virtual std::string getTaste() const = 0;

protected:
  std::string name_;
  Color color_;
};

// (c)
class Apple : public Fruit {
public:
  Apple(Color color);
  std::string getTaste() const override;
};

} // namespace homework
