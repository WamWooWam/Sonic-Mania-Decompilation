#ifndef OBJ_BLASTOID_H
#define OBJ_BLASTOID_H

#include "../SonicMania.h"

// Object Class
typedef struct {
	RSDK_OBJECT
} ObjectBlastoid;

// Entity Class
typedef struct {
	RSDK_ENTITY
} EntityBlastoid;

// Object Struct
extern ObjectBlastoid *Blastoid;

// Standard Entity Events
void Blastoid_Update();
void Blastoid_LateUpdate();
void Blastoid_StaticUpdate();
void Blastoid_Draw();
void Blastoid_Create(void* data);
void Blastoid_StageLoad();
void Blastoid_EditorDraw();
void Blastoid_EditorLoad();
void Blastoid_Serialize();

// Extra Entity Functions


#endif //!OBJ_BLASTOID_H
