#pragma once

#include "shared.h"

extern void (*__s2sdk_CloseGameConfigFile)(uint32_t);

static void CloseGameConfigFile(uint32_t id) {
	__s2sdk_CloseGameConfigFile(id);
}

extern uint32_t (*__s2sdk_LoadGameConfigFile)(Vector*);

static uint32_t LoadGameConfigFile(Vector* paths) {
	return __s2sdk_LoadGameConfigFile(paths);
}

extern String (*__s2sdk_GetGameConfigPatch)(uint32_t, String*);

static String GetGameConfigPatch(uint32_t id, String* name) {
	return __s2sdk_GetGameConfigPatch(id, name);
}

extern int32_t (*__s2sdk_GetGameConfigOffset)(uint32_t, String*);

static int32_t GetGameConfigOffset(uint32_t id, String* name) {
	return __s2sdk_GetGameConfigOffset(id, name);
}

extern uintptr_t (*__s2sdk_GetGameConfigAddress)(uint32_t, String*);

static uintptr_t GetGameConfigAddress(uint32_t id, String* name) {
	return __s2sdk_GetGameConfigAddress(id, name);
}

extern uintptr_t (*__s2sdk_GetGameConfigVTable)(uint32_t, String*);

static uintptr_t GetGameConfigVTable(uint32_t id, String* name) {
	return __s2sdk_GetGameConfigVTable(id, name);
}

extern uintptr_t (*__s2sdk_GetGameConfigSignature)(uint32_t, String*);

static uintptr_t GetGameConfigSignature(uint32_t id, String* name) {
	return __s2sdk_GetGameConfigSignature(id, name);
}

