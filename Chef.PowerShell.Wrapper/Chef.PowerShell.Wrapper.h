#pragma once

using namespace System;
#using <Chef.PowerShell.dll>

extern "C" {
	_declspec(dllexport) const wchar_t* ExecuteScript(const char * powershellScript);
}