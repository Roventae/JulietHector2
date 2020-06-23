/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE190_Integer_Overflow__short_max_multiply_68b.c
Label Definition File: CWE190_Integer_Overflow.label.xml
Template File: sources-sinks-68b.tmpl.c
*/
/*
 * @description
 * CWE: 190 Integer Overflow
 * BadSource: max Set data to the max value for short
 * GoodSource: Set data to a small, non-zero number (two)
 * Sinks: multiply
 *    GoodSink: Ensure there will not be an overflow before multiplying data by 2
 *    BadSink : If data is positive, multiply by 2, which can cause an overflow
 * Flow Variant: 68 Data flow: data passed as a global variable from one function to another in different source files
 *
 * */

#include "std_testcase.h"

extern short CWE190_Integer_Overflow__short_max_multiply_68_badData;
extern short CWE190_Integer_Overflow__short_max_multiply_68_goodG2BData;
extern short CWE190_Integer_Overflow__short_max_multiply_68_goodB2GData;

#ifndef OMITBAD

void CWE190_Integer_Overflow__short_max_multiply_68b_badSink()
{
    short data = CWE190_Integer_Overflow__short_max_multiply_68_badData;
    if(data > 0) /* ensure we won't have an underflow */
    {
        /* POTENTIAL FLAW: if (data*2) > SHRT_MAX, this will overflow */
        short result = data * 2;
        printIntLine(result);
    }
}

#endif /* OMITBAD */
