/*
 *  test.h
 *  test
 *
 *  Created by Chris Bastian on 8/26/15.
 *  Copyright (c) 2015 Chris Bastian. All rights reserved.
 *
 */

extern "C" {
#include <CoreFoundation/CoreFoundation.h>

#pragma GCC visibility push(default)

/* External interface to the test, C-based */

CFStringRef testUUID(void);

#pragma GCC visibility pop
}
