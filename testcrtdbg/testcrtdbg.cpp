// testcrtdbg.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "crtdbg.h"

#define new new(_NORMAL_BLOCK, __FILE__, __LINE__)

int _tmain(int argc, _TCHAR* argv[])
{
    _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

    //_CrtSetBreakAlloc(116);
    char *pChar = new char[10];

    _CrtMemState s1;
    _CrtMemCheckpoint(&s1);
    _CrtMemDumpStatistics(&s1);

    //_CrtDumpMemoryLeaks();
	return 0;
}

