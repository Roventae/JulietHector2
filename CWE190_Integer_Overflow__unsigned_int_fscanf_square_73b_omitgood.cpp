/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE190_Integer_Overflow__unsigned_int_fscanf_square_73b.cpp
Label Definition File: CWE190_Integer_Overflow.label.xml
Template File: sources-sinks-73b.tmpl.cpp
*/
/*
 * @description
 * CWE: 190 Integer Overflow
 * BadSource: fscanf Read data from the console using fscanf()
 * GoodSource: Set data to a small, non-zero number (two)
 * Sinks: square
 *    GoodSink: Ensure there will not be an overflow before squaring data
 *    BadSink : Square data, which can lead to overflow
 * Flow Variant: 73 Data flow: data passed in a list from one function to another in different source files
 *
 * */

#include "std_testcase.h"
#include <list>

#include <math.h>

using namespace std;

namespace CWE190_Integer_Overflow__unsigned_int_fscanf_square_73
{

#ifndef OMITBAD

void badSink(list<unsigned int> dataList)
{
    /* copy data out of dataList */
    unsigned int data = dataList.back();
    {
        /* POTENTIAL FLAW: if (data*data) > UINT_MAX, this will overflow */
        unsigned int result = data * data;
        printUnsignedLine(result);
    }
}

#endif /* OMITBAD */


} /* close namespace */
