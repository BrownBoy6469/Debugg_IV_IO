#include <iostream>

int Largest(int a, int b, int c) {
  if((a >= b) and (a >= c)) {
    return a;
  }
  else if((b >= a) and (b >= c)) {
    return b;
  }
  else if((c >= a) and (c >= b)) {
    return c;
  }
}

bool SumIsEven(int a, int b) {
  if((a + b) % 2 != 0) {
    return false;
  }
  else {
    return true;
  }
}

int BoxesNeeded(int apples) {
  if(apples <= 0) {
    return 0;
  }
  else if(apples % 20 == 0) {
    return apples/20;
  }
  else {
    return 1+ apples/20;
  }  
}

bool SmarterSection(int A_correct, int A_total, int B_correct, int B_total) {
  if(A_correct < 0 or A_total <= 0 or B_correct < 0 or B_total <= 0) {
    throw std::invalid_argument("Invalid argument");
  }
  if(A_correct > A_total or B_correct > B_total) {
    throw std::invalid_argument("Invalid argument");
  }
  if((A_correct/static_cast<double>(A_total)) > (B_correct/static_cast<double>(B_total))) {
    return true;
  }
  else {
    return false;
  }
}

bool GoodDinner(int pizzas, bool is_weekend) {
  if (is_weekend == false) {
    if (pizzas >= 10 and pizzas <= 20) {
      return true;
    }
    else {
      return false;
    }
  }
  if (is_weekend == true) {
    if(pizzas >= 10) {
      return true;
    }
    else {
      return false;
    }
  }
}

int SumBetween(int low, int high) {
  int value = 0;
  if(low > high) {
    throw std::invalid_argument("Invalid argument");
  }
  if(low == high) {
    return low;
  }
  if(low * -1 == high) {
    return 0;
  }
  if((low * -1) - 1 == high) {
    return low;
  }
  if((low * -1) + 1 == high) {
    return high;
  }
  for (int n = low; n < high; n++) {
    if(value > 0 and n > INT32_MAX - value) {
      throw std::overflow_error("Integer overflow");
    }
    if(value < 0 and n < INT32_MIN - value) {
      throw std::overflow_error("Integer underflow");
    }
    value += n;
  }
  if(value > 0 and high > INT32_MAX - value) {
    throw std::overflow_error("Integer overflow");
  }
  if(value < 0 and high < INT32_MIN - value) {
    throw std::overflow_error("Integer underflow");
  }
  value += high;
  return value;
}

int Product(int a, int b) {
  if(a == 0 or b == 0) {
    return 0;
  }
  else if(b > 0) {
    if(a > INT32_MAX / b or a < INT32_MIN / b) {
      throw std::overflow_error("Integer overflow");
    }
  }
  else if(b < 0) {
    if(a < INT32_MAX / b or a > INT32_MIN / b) {
      throw std::overflow_error("Integer underflow");
    }
  }
  return a * b;
}