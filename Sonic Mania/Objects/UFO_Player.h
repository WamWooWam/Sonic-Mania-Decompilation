#ifndef OBJ_UFO_PLAYER_H
#define OBJ_UFO_PLAYER_H

#include "../SonicMania.h"

// Object Class
typedef struct {
	RSDK_OBJECT
} ObjectUFO_Player;

// Entity Class
typedef struct {
	RSDK_ENTITY
} EntityUFO_Player;

// Object Struct
extern ObjectUFO_Player *UFO_Player;

// Standard Entity Events
void UFO_Player_Update();
void UFO_Player_LateUpdate();
void UFO_Player_StaticUpdate();
void UFO_Player_Draw();
void UFO_Player_Create(void* data);
void UFO_Player_StageLoad();
void UFO_Player_EditorDraw();
void UFO_Player_EditorLoad();
void UFO_Player_Serialize();

// Extra Entity Functions


#endif //!OBJ_UFO_PLAYER_H
