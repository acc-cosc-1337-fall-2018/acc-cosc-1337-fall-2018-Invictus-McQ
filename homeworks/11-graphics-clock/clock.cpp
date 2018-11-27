#include "clock.h"
#include <sstream>

/*
Write code to return hours given seconds since 1970

*/
int Clock::get_hours() const
{
	return ((seconds / 3600) -6 ) % 12 ;  // - 6 
}

/*
Write code to return minutes given seconds since 1970

*/

int Clock::get_minutes() const
{
	return seconds / 60 % 60;
}

/*
Write code to return seconds given seconds since 1970

*/
int Clock::get_seconds() const
{
	return seconds % 60;
}

/*
Write code to return 12hour formatted time 
*/
std::string Clock::get_time() const
{
	std::string string_time;
	std::string h;
	std::string m;
	std::string s;
	std::stringstream ss;
	if (get_hours() < 10) {
		ss.str = "0" + get_hours();
	}
	else ss << get_hours();
	if (ss.str() == "00") {
		ss.str() = "12";
	}
	h = ss.str();
	if (get_minutes() < 10) {
		ss.str = "0" + get_minutes();
	}
	else ss << get_minutes();
	m = ss.str();
	if (get_seconds() < 10) {
		ss.str = "0" + get_seconds();
	}
	else ss << get_seconds();
	s = ss.str();
	string_time = h + ":" + m + ":" + s;

	return string_time;

}

void Clock::update_time()
{
	seconds += 1;
}
