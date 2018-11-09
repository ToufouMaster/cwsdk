#include "cube.h"

#include <iostream>
#include <Windows.h>
#include "msvc_bincompat.h"
#include "cube_funcs.h"
#include "globals.h"

namespace cube {
	GameController* GetGameController() {
		auto imageBase = (uint32_t)GetModuleHandleA(NULL);
		GameController* gc = *(GameController**)(imageBase + 0x36B1C8);
		return gc;
	}
	void InitAPI() {
		InitGlobals();
	}
};