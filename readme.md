# **Competitve Programming**
## Based on the "Competitive Programmer's Handbook"

### **C++ code template**
A typical C++ code template for competitive programming looks like this:
```
#include <bits/stdc++.h>

using namespace std;

int main() {
    // solution comes here
}
```
The code can be compiled using the following command
```
g++ -std=c++11 -O2 -Wall test.cpp -o test
```

The following
lines at the beginning of the code make input and output more efficient:
```
ios::sync_with_stdio(0);
cin.tie(0);
```

If the amount of data is unknown, the following loop is useful:
```
while (cin >> x) {
    // code
}
```

### **Index**