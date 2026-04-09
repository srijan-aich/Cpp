#include <iostream>
using namespace std;

// Global variable to keep track of the count
int cnt = 0;

void f() {
   // 1. BASE CONDITION
   // This stops the recursion once we've reached our goal
   if (cnt == 4) {
       return; 
   }

   // 2. WORK / LOGIC
   cout << cnt << endl;
   cnt++;

   // 3. RECURSIVE CALL
   // The function calls itself to do the next step
   f();
}

int main() {
    f(); // Start the first call
    return 0;
}