#ifndef FLAP_HEL_MUTARR_H
#define FLAP_HEL_MUTARR_H
#include <Hel.h>

using namespace hel::common;
template <typename T, int size>
class MutableArray
{
	public:
	u32 length;
	T data[size];
	
	T& operator[](int idx)
	{
		return data[idx];
	}
};

#endif