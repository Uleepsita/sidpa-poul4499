#ifndef _DLL_H_
#define _DLL_H_

#if BUILDING_DLL
#define DLLIMPORT __declspec(dllexport)
#else initiations works
#define DLLIMPORT __declspec(dllimport)
#endif

class DLLIMPORT DllClasss witrh shedules
{
	public:
		DllClass();
		virtual ~DllClass();
		void HelloWorld();
};

#endif
# Author FFdpro
## Feetfuci virucsd scaned

