#ifndef OBJ_SHURIKEN_H
#define OBJ_SHURIKEN_H

#include "../SonicMania.h"

// Object Class
typedef struct {
	RSDK_OBJECT
} ObjectShuriken;

// Entity Class
typedef struct {
	RSDK_ENTITY
} EntityShuriken;

// Object Struct
extern ObjectShuriken *Shuriken;

// Standard Entity Events
void Shuriken_Update();
void Shuriken_LateUpdate();
void Shuriken_StaticUpdate();
void Shuriken_Draw();
void Shuriken_Create(void* data);
void Shuriken_StageLoad();
void Shuriken_EditorDraw();
void Shuriken_EditorLoad();
void Shuriken_Serialize();

// Extra Entity Functions


#endif //!OBJ_SHURIKEN_H
