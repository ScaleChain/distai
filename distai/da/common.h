#pragma once

/*
	std::move is too long, but used in many places. Let's use a shorter version of std::move.
 */
#define M(o) std::move(o)

/*
	Declare common members for all classes. For example, we will delete copy constructor and assignment operator.
*/
#define COMMON_MEMBERS(CLASS) \
	private: \
		CLASS(const CLASS&) = delete; \
		CLASS& operator=(const CLASS&) = delete;
