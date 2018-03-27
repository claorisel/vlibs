//=======================================================================================
//      vtimepoint.cpp
//=======================================================================================
#include "vtimepoint.h"

#include <sys/time.h>




//=======================================================================================
namespace _priv
{
    //-----------------------------------------------------------------------------------
    int _year_from_time_t( time_t tt )
    {
        auto res = *localtime( &tt );
        return res.tm_year + 1900;
    }
    //-----------------------------------------------------------------------------------
    int _month_from_time_t(time_t tt)
    {
        auto res = *localtime( &tt );
        return res.tm_mon;
    }
    //-----------------------------------------------------------------------------------
    int _day_from_time_t(time_t tt)
    {
        auto res = *localtime( &tt );
        return res.tm_mday;
    }
    //-----------------------------------------------------------------------------------
    int _hour_from_time_t(time_t tt)
    {
        auto res = *localtime( &tt );
        return res.tm_hour;
    }
    //-----------------------------------------------------------------------------------
    int _minute_from_time_t(time_t tt)
    {
        auto res = *localtime( &tt );
        return res.tm_min;
    }
    //-----------------------------------------------------------------------------------
    int _second_from_time_t(time_t tt)
    {
        auto res = *localtime( &tt );
        return res.tm_sec;
    }
    //-----------------------------------------------------------------------------------
} // _priv namespace
//=======================================================================================
std::ostream &operator <<(std::ostream &os, const std::chrono::seconds &val)
{
    os << "seconds(" << val.count() << ')';
    return os;
}
//---------------------------------------------------------------------------------------
std::ostream &operator <<(std::ostream &os, const std::chrono::milliseconds &val)
{
    os << "milliseconds(" << val.count() << ')';
    return os;
}
//---------------------------------------------------------------------------------------
std::ostream &operator <<(std::ostream &os, const std::chrono::microseconds &val)
{
    os << "microseconds(" << val.count() << ')';
    return os;
}
//---------------------------------------------------------------------------------------
std::ostream &operator <<(std::ostream &os, const std::chrono::nanoseconds &val)
{
    os << "nanoseconds(" << val.count() << ')';
    return os;
}
//=======================================================================================
//      vtimepoint.cpp
//=======================================================================================
