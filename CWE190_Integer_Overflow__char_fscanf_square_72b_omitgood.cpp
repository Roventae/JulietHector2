/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE190_Integer_Overflow__char_fscanf_square_72b.cpp
Label Definition File: CWE190_Integer_Overflow.label.xml
Template File: sources-sinks-72b.tmpl.cpp
*/
/*
 * @description
 * CWE: 190 Integer Overflow
 * BadSource: fscanf Read data from the console using fscanf()
 * GoodSource: Set data to a small, non-zero number (two)
 * Sinks: square
 *    GoodSink: Ensure there will not be an overflow before squaring data
 *    BadSink : Square data, which can lead to overflow
 * Flow Variant: 72 Data flow: data passed in a vector from one function to another in different source files
 *
 * */

#include "std_testcase.h"
#include <vector>

#include <math.h>

using namespace std;

namespace CWE190_Integer_Overflow__char_fscanf_square_72
{

#ifndef OMITBAD

void badSink(vector<char> dataVector)
{
    /* copy data out of dataVector */
    char data = dataVector[2];
    {
        /* POTENTIAL FLAW: if (data*data) > CHAR_MAX, this will overflow */
        char result = data * data;
        printHexCharLine(result);
    }
}

#endif /* OMITBAD */


} /* close namespace */
