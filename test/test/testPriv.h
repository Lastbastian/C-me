/*
 *  testPriv.h
 *  test
 *
 *  Created by Chris Bastian on 8/26/15.
 *  Copyright (c) 2015 Chris Bastian. All rights reserved.
 *
 */

#include <CoreFoundation/CoreFoundation.h>

#pragma GCC visibility push(hidden)

class Ctest {
	public:
		CFStringRef UUID(void);
};

#pragma GCC visibility pop
