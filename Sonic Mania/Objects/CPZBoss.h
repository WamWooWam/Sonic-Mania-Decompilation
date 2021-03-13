#ifndef OBJ_CPZBOSS_H
#define OBJ_CPZBOSS_H

#include "../SonicMania.h"

// Object Class
typedef struct {
	RSDK_OBJECT
} ObjectCPZBoss;

// Entity Class
typedef struct {
	RSDK_ENTITY
} EntityCPZBoss;

// Object Struct
extern ObjectCPZBoss *CPZBoss;

// Standard Entity Events
void CPZBoss_Update();
void CPZBoss_LateUpdate();
void CPZBoss_StaticUpdate();
void CPZBoss_Draw();
void CPZBoss_Create(void* data);
void CPZBoss_StageLoad();
void CPZBoss_EditorDraw();
void CPZBoss_EditorLoad();
void CPZBoss_Serialize();

// Extra Entity Functions


#endif //!OBJ_CPZBOSS_H
