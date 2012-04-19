/*       +------------------------------------+
 *       | Inspire Internet Relay Chat Daemon |
 *       +------------------------------------+
 *
 *  InspIRCd: (C) 2002-2010 InspIRCd Development Team
 * See: http://wiki.inspircd.org/Credits
 *
 * This program is free but copyrighted software; see
 *          the file COPYING for details.
 *
 * ---------------------------------------------------
 */

#ifndef TESTSUITE_H
#define TESTSUITE_H

class TestSuite
{
 public:
	TestSuite();
	~TestSuite();

	bool DoThreadTests();
	bool DoWildTests();
	bool DoCommaSepStreamTests();
	bool DoSpaceSepStreamTests();
};

#endif