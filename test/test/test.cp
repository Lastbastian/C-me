/*
 *  test.cp
 *  test
 *
 *  Created by Chris Bastian on 8/26/15.
 *  Copyright (c) 2015 Chris Bastian. All rights reserved.
 *
 */

#include "test.h"
#include "testPriv.h"

CFStringRef testUUID(void)
{
	Ctest* theObj = new Ctest;
	return theObj->UUID();
}

CFStringRef Ctest::UUID()
{
	return CFSTR("0001020304050607");
}
