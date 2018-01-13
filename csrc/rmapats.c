#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include "rmapats.h"

scalar dummyScalar;
scalar fScalarIsForced=0;
scalar fScalarIsReleased=0;
scalar fScalarHasChanged=0;
scalar fForceFromNonRoot=0;
scalar fNettypeIsForced=0;
scalar fNettypeIsReleased=0;
void  hsG_0 (struct dummyq_struct * I1012, EBLK  * I1013, U  I717);
void  hsG_0 (struct dummyq_struct * I1012, EBLK  * I1013, U  I717)
{
    U  I1242;
    U  I1243;
    U  I1244;
    struct futq * I1245;
    I1242 = ((U )vcs_clocks) + I717;
    I1244 = I1242 & 0xfff;
    I1013->I650 = (EBLK  *)(-1);
    I1013->I654 = I1242;
    if (I1242 < (U )vcs_clocks) {
        I1243 = ((U  *)&vcs_clocks)[1];
        sched_millenium(I1012, I1013, I1243 + 1, I1242);
    }
    else if ((peblkFutQ1Head != ((void *)0)) && (I717 == 1)) {
        I1013->I655 = (struct eblk *)peblkFutQ1Tail;
        peblkFutQ1Tail->I650 = I1013;
        peblkFutQ1Tail = I1013;
    }
    else if ((I1245 = I1012->I978[I1244].I667)) {
        I1013->I655 = (struct eblk *)I1245->I666;
        I1245->I666->I650 = (RP )I1013;
        I1245->I666 = (RmaEblk  *)I1013;
    }
    else {
        sched_hsopt(I1012, I1013, I1242);
    }
}
#ifdef __cplusplus
extern "C" {
#endif
void SinitHsimPats(void);
#ifdef __cplusplus
}
#endif
