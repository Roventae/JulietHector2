/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE190_Integer_Overflow__int_fgets_preinc_45.c
Label Definition File: CWE190_Integer_Overflow__int.label.xml
Template File: sources-sinks-45.tmpl.c
*/
/*
 * @description
 * CWE: 190 Integer Overflow
 * BadSource: fgets Read data from the console using fgets()
 * GoodSource: Set data to a small, non-zero number (two)
 * Sinks: increment
 *    GoodSink: Ensure there will not be an overflow before incrementing data
 *    BadSink : Increment data, which can cause an overflow
 * Flow Variant: 45 Data flow: data passed as a static global variable from one function to another in the same source file
 *
 * */

#include "std_testcase.h"

#define CHAR_ARRAY_SIZE (3 * sizeof(data) + 2)

static int CWE190_Integer_Overflow__int_fgets_preinc_45_badData;
static int CWE190_Integer_Overflow__int_fgets_preinc_45_goodG2BData;
static int CWE190_Integer_Overflow__int_fgets_preinc_45_goodB2GData;


#ifndef OMITGOOD

/* goodG2B() uses the GoodSource with the BadSink */
static void goodG2BSink()
{
    int data = CWE190_Integer_Overflow__int_fgets_preinc_45_goodG2BData;
    {
        /* POTENTIAL FLAW: Incrementing data could cause an overflow */
        ++data;
        int result = data;
        printIntLine(result);
    }
}

static void goodG2B()
{
    int data;
    /* Initialize data */
    data = 0;
    /* FIX: Use a small, non-zero value that will not cause an integer overflow in the sinks */
    data = 2;
    CWE190_Integer_Overflow__int_fgets_preinc_45_goodG2BData = data;
    goodG2BSink();
}

/* goodB2G() uses the BadSource with the GoodSink */
static void goodB2GSink()
{
    int data = CWE190_Integer_Overflow__int_fgets_preinc_45_goodB2GData;
    /* FIX: Add a check to prevent an overflow from occurring */
    if (data < INT_MAX)
    {
        ++data;
        int result = data;
        printIntLine(result);
    }
    else
    {
        printLine("data value is too large to perform arithmetic safely.");
    }
}

static void goodB2G()
{
    int data;
    /* Initialize data */
    data = 0;
    {
        char inputBuffer[CHAR_ARRAY_SIZE] = "";
        /* POTENTIAL FLAW: Read data from the console using fgets() */
        if (fgets(inputBuffer, CHAR_ARRAY_SIZE, stdin) != NULL)
        {
            /* Convert to int */
            data = atoi(inputBuffer);
        }
        else
        {
            printLine("fgets() failed.");
        }
    }
    CWE190_Integer_Overflow__int_fgets_preinc_45_goodB2GData = data;
    goodB2GSink();
}

void CWE190_Integer_Overflow__int_fgets_preinc_45_good()
{
    goodG2B();
    goodB2G();
}

#endif /* OMITGOOD */

/* Below is the main(). It is only used when building this testcase on
   its own for testing or for building a binary to use in testing binary
   analysis tools. It is not used when compiling all the testcases as one
   application, which is how source code analysis tools are tested. */
#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    /* seed randomness */
    srand( (unsigned)time(NULL) );
#ifndef OMITGOOD
    printLine("Calling good()...");
    CWE190_Integer_Overflow__int_fgets_preinc_45_good();
    printLine("Finished good()");
#endif /* OMITGOOD */
    return 0;
}

#endif
