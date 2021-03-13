#ifndef OBJ_PBL_PLAYER_H
#define OBJ_PBL_PLAYER_H

#include "../SonicMania.h"

#if RETRO_USE_PLUS
// Object Class
typedef struct {
	RSDK_OBJECT
} ObjectPBL_Player;

// Entity Class
typedef struct {
	RSDK_ENTITY
} EntityPBL_Player;

// Object Struct
extern ObjectPBL_Player *PBL_Player;

// Standard Entity Events
void PBL_Player_Update();
void PBL_Player_LateUpdate();
void PBL_Player_StaticUpdate();
void PBL_Player_Draw();
void PBL_Player_Create(void* data);
void PBL_Player_StageLoad();
void PBL_Player_EditorDraw();
void PBL_Player_EditorLoad();
void PBL_Player_Serialize();

// Extra Entity Functions
#endif

#endif //!OBJ_PBL_PLAYER_H
