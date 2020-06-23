/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE190_Integer_Overflow__short_max_postinc_68b.c
Label Definition File: CWE190_Integer_Overflow.label.xml
Template File: sources-sinks-68b.tmpl.c
*/
/*
 * @description
 * CWE: 190 Integer Overflow
 * BadSource: max Set data to the max value for short
 * GoodSource: Set data to a small, non-zero number (two)
 * Sinks: increment
 *    GoodSink: Ensure there will not be an overflow before incrementing data
 *    BadSink : Increment data, which can cause an overflow
 * Flow Variant: 68 Data flow: data passed as a global variable from one function to another in different source files
 *
 * */

#include "std_testcase.h"

extern short CWE190_Integer_Overflow__short_max_postinc_68_badData;
extern short CWE190_Integer_Overflow__short_max_postinc_68_goodG2BData;
extern short CWE190_Integer_Overflow__short_max_postinc_68_goodB2GData;

#ifndef OMITBAD

void CWE190_Integer_Overflow__short_max_postinc_68b_badSink()
{
    short data = CWE190_Integer_Overflow__short_max_postinc_68_badData;
    {
        /* POTENTIAL FLAW: Incrementing data could cause an overflow */
        data++;
        short result = data;
        printIntLine(result);
    }
}

#endif /* OMITBAD */

