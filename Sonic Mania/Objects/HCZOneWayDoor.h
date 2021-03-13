#ifndef OBJ_HCZONEWAYDOOR_H
#define OBJ_HCZONEWAYDOOR_H

#include "../SonicMania.h"

// Object Class
typedef struct {
	RSDK_OBJECT
} ObjectHCZOneWayDoor;

// Entity Class
typedef struct {
	RSDK_ENTITY
} EntityHCZOneWayDoor;

// Object Struct
extern ObjectHCZOneWayDoor *HCZOneWayDoor;

// Standard Entity Events
void HCZOneWayDoor_Update();
void HCZOneWayDoor_LateUpdate();
void HCZOneWayDoor_StaticUpdate();
void HCZOneWayDoor_Draw();
void HCZOneWayDoor_Create(void* data);
void HCZOneWayDoor_StageLoad();
void HCZOneWayDoor_EditorDraw();
void HCZOneWayDoor_EditorLoad();
void HCZOneWayDoor_Serialize();

// Extra Entity Functions


#endif //!OBJ_HCZONEWAYDOOR_H
