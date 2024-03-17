# 1.1

```
$ echo $?
255
```

# 1.2

```
// Correct
#include <iostream> 
// Wrong
#include <iostream.h>
```

# Testing ```diff``` language tag to generate colored text

```diff
- red
+ green
! orange
# gray
@@ purple and bold @@
```

# 1.3

```
// PREDICTION

// WRONG
std::cout << "/*";
std::cout << /* "*/" */;
std::cout << /* "*/" /* "/*" */;

// CORRECT
std::cout << "*/"

// ACTUAL ANS
std::cout << "*/"; is legal. It writes */ to the ostream.
std::cout << "/*"; is legal. It writes /* to the ostream. Because "/*" is a string literal.
std::cout << /* "*/" /* "/*" */; is legal. Writes " /* " to the ostream.

std::ccout << /* "*/" */; is not legal. Add quote at end to fix.
std::cout << /* "*/" */"; is legal.
```

# 1.4

Checkout [1](https://en.cppreference.com/w/cpp/io/basic_ios/operator_bool) [2](https://stackoverflow.com/questions/38978266/how-can-stdcin-return-a-bool-and-itself-at-the-same-time) for details on the operator bool and on why placing std::cin as a boolean works.

