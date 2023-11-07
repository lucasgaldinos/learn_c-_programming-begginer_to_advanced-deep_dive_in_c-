# Overflow

Applies to every programming language \
**Overflow** is when a number is too big to be stored in a variable. \
**Underflow** is when a number is too small to be stored in a variable. \
**Overflow** and **Underflow** can cause **undefined behaviour**. \
**Undefined behaviour** is when the program does not behave as expected. \
**Undefined behaviour** can cause the program to crash, or even worse, the program to run without crashing but with incorrect results. \
**Undefined behaviour** is very dangerous and should be avoided at all costs. \
**Overflow** and **Underflow** can be avoided by using a variable type that can store a bigger/smaller number. \
**Overflow** and **Underflow** can also be avoided by checking if the number is too big/small before storing it in a variable.

```c++
#include <iostream>
using namespace std;

int main() {
char x=127; // 127 is the biggest number that can be stored in a char variable

cout << int(x) << endl; // 127
cout << int(x++) << endl; // -128

x = -128; // -128 is the smallest number that can be stored in a char variable

cout << int(x--) << endl; // 127
int y = INT_MAX; // INT_MAX is the biggest number that can be stored in an int variable
cout << y << endl; // 2147483647
cout << y++ << endl; // -2147483648
}
```
