#ifndef OBJ_SPZ1INTRO_H
#define OBJ_SPZ1INTRO_H

#include "../SonicMania.h"

// Object Class
typedef struct {
	RSDK_OBJECT
} ObjectSPZ1Intro;

// Entity Class
typedef struct {
	RSDK_ENTITY
} EntitySPZ1Intro;

// Object Struct
extern ObjectSPZ1Intro *SPZ1Intro;

// Standard Entity Events
void SPZ1Intro_Update();
void SPZ1Intro_LateUpdate();
void SPZ1Intro_StaticUpdate();
void SPZ1Intro_Draw();
void SPZ1Intro_Create(void* data);
void SPZ1Intro_StageLoad();
void SPZ1Intro_EditorDraw();
void SPZ1Intro_EditorLoad();
void SPZ1Intro_Serialize();

// Extra Entity Functions


#endif //!OBJ_SPZ1INTRO_H
