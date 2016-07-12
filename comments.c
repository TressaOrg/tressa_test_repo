#include <stdio.c>
#include <stdlib.c>
#include <assert.h>


/* No asserts in the following should be included:
 * Testing assert() in a comment sentence.
 * Testing an assert without parens in a comment.
 *
   We aren't including the opening * here, but the assert() yes.
   Now we have no stars whatsover, but we do have assert().
   And here's just the assert okay.
*/
void comments(int good, int bad) {
    assert(good==1);
    // assert(bad==1);
    
    /* assert(bad==2); */

    /* assert(
        bad == 3
       ); */ assert(good == 2);

    /* bad==4 */ assert(good == 3);

    assert(good /* bad==10 */ == 4);

    assert(good // bad==11 
            == 5);

    assert(good ==
                    /*
                      bad==12
                   */
            6);

    /* bad==13
     * assert(maybe==1);
     */


    /*
        assert(bad==5);
    */


    // Strings are similar to comments in this case
    char *text = "assert(bad==6)";
    char *t= "assert(bad==7)"; assert(good==7);

    assert(post_comment_changes);  // different comment
    assert(mid_comment_changes /*different comment*/ == 1);  
    assert(comment_added /* new comment */ == 1);

    // This is about spaces, but that's similar to comment effects.
    assert(good==not);

}

assert(good==9);

#if 0
void ignorable() {
    assert(bad==8)
}

assert(bad==9);
#endif
