/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE190_Integer_Overflow__int_fscanf_multiply_66a.c
Label Definition File: CWE190_Integer_Overflow__int.label.xml
Template File: sources-sinks-66a.tmpl.c
*/
/*
 * @description
 * CWE: 190 Integer Overflow
 * BadSource: fscanf Read data from the console using fscanf()
 * GoodSource: Set data to a small, non-zero number (two)
 * Sinks: multiply
 *    GoodSink: Ensure there will not be an overflow before multiplying data by 2
 *    BadSink : If data is positive, multiply by 2, which can cause an overflow
 * Flow Variant: 66 Data flow: data passed in an array from one function to another in different source files
 *
 * */

#include "std_testcase.h"

#ifndef OMITBAD

/* bad function declaration */
void CWE190_Integer_Overflow__int_fscanf_multiply_66b_badSink(int dataArray[]);

void CWE190_Integer_Overflow__int_fscanf_multiply_66_bad()
{
    int data;
    int dataArray[5];
    /* Initialize data */
    data = 0;
    /* POTENTIAL FLAW: Read data from the console using fscanf() */
    fscanf(stdin, "%d", &data);
    /* put data in array */
    dataArray[2] = data;
    CWE190_Integer_Overflow__int_fscanf_multiply_66b_badSink(dataArray);
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
    CWE190_Integer_Overflow__int_fscanf_multiply_66_bad();
    printLine("Finished bad()");
#endif /* OMITBAD */
    return 0;
}

#endif
