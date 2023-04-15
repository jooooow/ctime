#include "date/tz.h"
#include <iostream>

namespace timelib
{
	std::string get_current_time()
	{
		using namespace date;
    	using namespace std::chrono;
    	auto local = make_zoned(current_zone(), system_clock::now());		
		//return std::string(local_time);
		return format("%Y-%m-%d %H:%M:%S %Z (%A)", local);
	}
}
