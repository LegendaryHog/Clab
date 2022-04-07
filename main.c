#include <stdio.h>
#include <stdlib.h>
#include "writetex/writetex.h"
#include "lsm/lsm.h"

int main ()
{
    struct mnk *MNK = calloc (1, sizeof(struct mnk));

//=================================================================
//===========Here=you=can=combine=your=own=.tex=file:==============
//=================================================================
    FILE *f = Start (MNK);
    //PrintStart (f);
    MakeTabular(f, "1.dat");
    /*IncludePic (f, "tex/graph1.eps");
    LineDev (f);
    
    IncludePic (f, "tex/graph2.eps");
    IncludePic (f, "tex/graph3.eps");
    IncludePic (f, "tex/graph4.eps");
    */


    
    PrintEnd (f);

//=================================================================
//===========================Not=there=============================
//=================================================================
    fclose(f);
    return 0;
}
