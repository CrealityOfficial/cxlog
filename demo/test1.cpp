#include <iostream>
#include"cxlog.h"


int main(int argc, char* argv[])
{

    cxlog::CXLog::Instance().InitCXLog("test.log");

   CXLogInfo("Welcome to spdlog!");

   CXLogError("Some error message with arg: {}", 1);

    CXLogWarn("Easy padding in numbers like {:08d}", 12);
    CXLogCritical("Support for int: {0:d};  hex: {0:x};  oct: {0:o}; bin: {0:b}", 42);
    CXLogInfo("Support for floats %f", 1.23456);
    CXLogInfo("Positional args are %s %s..", "too", "supported");
    CXLogInfo("%s", "left aligned");

    CXLogDebug("This message should be displayed..");
    CXLogInfo("This message should not be displayed..");

    CXLogInfo("Welcome to spdlog!");
    CXLogError("Some error message with arg: {}", 1);

    CXLogWarn("Easy padding in numbers like &08d", 12);
   CXLogInfo("Support for floats %02f", 1.23456);
    CXLogInfo("Positional args are {1} {0}..", "too", "supported");

    cxlog::CXLog::Instance().EndLog();
	return 0;
}