/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE190_Integer_Overflow__int_fscanf_square_68b.c
Label Definition File: CWE190_Integer_Overflow__int.label.xml
Template File: sources-sinks-68b.tmpl.c
*/
/*
 * @description
 * CWE: 190 Integer Overflow
 * BadSource: fscanf Read data from the console using fscanf()
 * GoodSource: Set data to a small, non-zero number (two)
 * Sinks: square
 *    GoodSink: Ensure there will not be an overflow before squaring data
 *    BadSink : Square data, which can lead to overflow
 * Flow Variant: 68 Data flow: data passed as a global variable from one function to another in different source files
 *
 * */

#include "std_testcase.h"

#include <math.h>

extern int CWE190_Integer_Overflow__int_fscanf_square_68_badData;
extern int CWE190_Integer_Overflow__int_fscanf_square_68_goodG2BData;
extern int CWE190_Integer_Overflow__int_fscanf_square_68_goodB2GData;

#ifndef OMITBAD

void CWE190_Integer_Overflow__int_fscanf_square_68b_badSink()
{
    int data = CWE190_Integer_Overflow__int_fscanf_square_68_badData;
    {
        /* POTENTIAL FLAW: if (data*data) > INT_MAX, this will overflow */
        int result = data * data;
        printIntLine(result);
    }
}

#endif /* OMITBAD */

