#ifndef OBJ_ONEWAYDOOR_H
#define OBJ_ONEWAYDOOR_H

#include "../SonicMania.h"

// Object Class
typedef struct {
	RSDK_OBJECT
} ObjectOneWayDoor;

// Entity Class
typedef struct {
	RSDK_ENTITY
} EntityOneWayDoor;

// Object Struct
extern ObjectOneWayDoor *OneWayDoor;

// Standard Entity Events
void OneWayDoor_Update();
void OneWayDoor_LateUpdate();
void OneWayDoor_StaticUpdate();
void OneWayDoor_Draw();
void OneWayDoor_Create(void* data);
void OneWayDoor_StageLoad();
void OneWayDoor_EditorDraw();
void OneWayDoor_EditorLoad();
void OneWayDoor_Serialize();

// Extra Entity Functions


#endif //!OBJ_ONEWAYDOOR_H
