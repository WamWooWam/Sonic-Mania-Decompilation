#ifndef OBJ_BSS_MESSAGE_H
#define OBJ_BSS_MESSAGE_H

#include "../SonicMania.h"

// Object Class
typedef struct {
	RSDK_OBJECT
} ObjectBSS_Message;

// Entity Class
typedef struct {
	RSDK_ENTITY
} EntityBSS_Message;

// Object Struct
extern ObjectBSS_Message *BSS_Message;

// Standard Entity Events
void BSS_Message_Update();
void BSS_Message_LateUpdate();
void BSS_Message_StaticUpdate();
void BSS_Message_Draw();
void BSS_Message_Create(void* data);
void BSS_Message_StageLoad();
void BSS_Message_EditorDraw();
void BSS_Message_EditorLoad();
void BSS_Message_Serialize();

// Extra Entity Functions


#endif //!OBJ_BSS_MESSAGE_H
