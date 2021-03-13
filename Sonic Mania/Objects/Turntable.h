#ifndef OBJ_TURNTABLE_H
#define OBJ_TURNTABLE_H

#include "../SonicMania.h"

// Object Class
typedef struct {
	RSDK_OBJECT
} ObjectTurntable;

// Entity Class
typedef struct {
	RSDK_ENTITY
} EntityTurntable;

// Object Struct
extern ObjectTurntable *Turntable;

// Standard Entity Events
void Turntable_Update();
void Turntable_LateUpdate();
void Turntable_StaticUpdate();
void Turntable_Draw();
void Turntable_Create(void* data);
void Turntable_StageLoad();
void Turntable_EditorDraw();
void Turntable_EditorLoad();
void Turntable_Serialize();

// Extra Entity Functions


#endif //!OBJ_TURNTABLE_H
