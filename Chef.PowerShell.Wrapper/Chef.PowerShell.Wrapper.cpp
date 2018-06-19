#include "stdafx.h"
#include "msclr\marshal.h"
#include "Chef.PowerShell.Wrapper.h"

using namespace System;
using namespace msclr::interop;

const wchar_t* ExecuteScript(const char * powershellScript)
{
	String ^wPowerShellScript = gcnew String(powershellScript);
	String ^output = Chef::PowerShell().ExecuteScript(wPowerShellScript);
	pin_ptr<const wchar_t> result = PtrToStringChars(output);
	return result;
}