class fVector2D {
public:
  fVector2D() = default;
  fVector2D(float x, float y) : x_(x), y_(y) {}

  bool operator==(const fVector2D &other) const;

  friend fVector2D operator+(const fVector2D &lhs, const fVector2D &rhs);

private:
  float x_;
  float y_;
};
