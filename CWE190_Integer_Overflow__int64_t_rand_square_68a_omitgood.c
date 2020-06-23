/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE190_Integer_Overflow__int64_t_rand_square_68a.c
Label Definition File: CWE190_Integer_Overflow.label.xml
Template File: sources-sinks-68a.tmpl.c
*/
/*
 * @description
 * CWE: 190 Integer Overflow
 * BadSource: rand Set data to result of rand()
 * GoodSource: Set data to a small, non-zero number (two)
 * Sinks: square
 *    GoodSink: Ensure there will not be an overflow before squaring data
 *    BadSink : Square data, which can lead to overflow
 * Flow Variant: 68 Data flow: data passed as a global variable from one function to another in different source files
 *
 * */

#include "std_testcase.h"

#include <math.h>

int64_t CWE190_Integer_Overflow__int64_t_rand_square_68_badData;
int64_t CWE190_Integer_Overflow__int64_t_rand_square_68_goodG2BData;
int64_t CWE190_Integer_Overflow__int64_t_rand_square_68_goodB2GData;

#ifndef OMITBAD

/* bad function declaration */
void CWE190_Integer_Overflow__int64_t_rand_square_68b_badSink();

void CWE190_Integer_Overflow__int64_t_rand_square_68_bad()
{
    int64_t data;
    data = 0LL;
    /* POTENTIAL FLAW: Use a random value */
    data = (int64_t)RAND64();
    CWE190_Integer_Overflow__int64_t_rand_square_68_badData = data;
    CWE190_Integer_Overflow__int64_t_rand_square_68b_badSink();
}

#endif /* OMITBAD */


/* Below is the main(). It is only used when building this testcase on
   its own for testing or for building a binary to use in testing binary
   analysis tools. It is not used when compiling all the testcases as one
   application, which is how source code analysis tools are tested. */

#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    /* seed randomness */
    srand( (unsigned)time(NULL) );
#ifndef OMITBAD
    printLine("Calling bad()...");
    CWE190_Integer_Overflow__int64_t_rand_square_68_bad();
    printLine("Finished bad()");
#endif /* OMITBAD */
    return 0;
}

#endif