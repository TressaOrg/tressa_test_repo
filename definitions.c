#include <stdlib.h>


// Neither of the macros should be included
// This is taken from an example gnu assert.h source file
#ifdef NDEBUG
# define assert(EX)
#else
# define assert(EX) (void)((EX) || (__assert (#EX, __FILE__, __LINE__),0))
#endif

// function definition shouldn't be included either:
void assert(int ignored) {  // problematic
    if (ignored)
        return;
    else
        exit(-1);
}

// a function prototype could cause AST to fail, if abbreviated form
void assert(int ig2nored);  // problematic
void assert(int);           // problematic
void assert(predicate);     // problematic



assert(0);   // to include file in history
