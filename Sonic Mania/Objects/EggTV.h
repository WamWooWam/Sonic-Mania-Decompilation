#ifndef OBJ_EGGTV_H
#define OBJ_EGGTV_H

#include "../SonicMania.h"

// Object Class
typedef struct {
	RSDK_OBJECT
} ObjectEggTV;

// Entity Class
typedef struct {
	RSDK_ENTITY
} EntityEggTV;

// Object Struct
extern ObjectEggTV *EggTV;

// Standard Entity Events
void EggTV_Update();
void EggTV_LateUpdate();
void EggTV_StaticUpdate();
void EggTV_Draw();
void EggTV_Create(void* data);
void EggTV_StageLoad();
void EggTV_EditorDraw();
void EggTV_EditorLoad();
void EggTV_Serialize();

// Extra Entity Functions


#endif //!OBJ_EGGTV_H
