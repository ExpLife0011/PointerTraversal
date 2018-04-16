#include "stdafx.h"

float SINGLEEPSION = 0.00001f;
double DOUBLEEPSION = 0.0000000001;

//�������Ƚϣ�==
bool SF_Equal(float a, float b)
{
    if(a - b > -SINGLEEPSION || a - b < SINGLEEPSION)
        return true;
    else
        return false;
}

//�������Ƚϣ�>
bool SF_Greater(float a, float b)
{
    if (a - b > SINGLEEPSION)
        return true;
    else
        return false;
}

//�������Ƚϣ�<
bool SF_Less(float a, float b)
{
    if (a - b < -SINGLEEPSION)
        return true;
    else
        return false;
}

/*�������Ƚϣ�>=
bool SF_GreaterOrEqual(float a, float b)
{
    if ( (a - b > SINGLEEPSION) ||  (a - b >= -SINGLEEPSION && a - b <= SINGLEEPSION) )
        return true;
    else
        return false;
}

//�������Ƚϣ�<=
bool SF_LessOrEqual(float a, float b)
{
    if ( (a - b < -SINGLEEPSION) || (a - b >= -SINGLEEPSION && a - b <= SINGLEEPSION) )
        return true;
    else
        return false;
}*/

//�������Ƚϣ�==
bool DF_Equal(double a, double b)
{
    if(a - b > -DOUBLEEPSION || a - b < DOUBLEEPSION)
        return true;
    else
        return false;
}

//�������Ƚϣ�>
bool DF_Greater(double a, double b)
{
    if (a - b > DOUBLEEPSION)
        return true;
    else
        return false;
}

//�������Ƚϣ�<
bool DF_Less(double a, double b)
{
    if (a - b < -DOUBLEEPSION)
        return true;
    else
        return false;
}

/*�������Ƚϣ�>=
bool DF_GreaterOrEqual(double a, double b)
{
    if ( (a - b > DOUBLEEPSION) ||  (a - b >= -DOUBLEEPSION && a - b <= DOUBLEEPSION) )
        return true;
    else
        return false;
}

//�������Ƚϣ�<=
bool DF_LessOrEqual(double a, double b)
{
    if ( (a - b < -DOUBLEEPSION) || (a - b >= -DOUBLEEPSION && a - b <= DOUBLEEPSION) )
        return true;
    else
        return false;
}*/