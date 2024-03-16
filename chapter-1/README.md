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
