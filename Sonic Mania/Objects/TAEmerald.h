#ifndef OBJ_TAEMERALD_H
#define OBJ_TAEMERALD_H

#include "../SonicMania.h"

// Object Class
typedef struct {
	RSDK_OBJECT
} ObjectTAEmerald;

// Entity Class
typedef struct {
	RSDK_ENTITY
} EntityTAEmerald;

// Object Struct
extern ObjectTAEmerald *TAEmerald;

// Standard Entity Events
void TAEmerald_Update(void);
void TAEmerald_LateUpdate(void);
void TAEmerald_StaticUpdate(void);
void TAEmerald_Draw(void);
void TAEmerald_Create(void* data);
void TAEmerald_StageLoad(void);
void TAEmerald_EditorDraw(void);
void TAEmerald_EditorLoad(void);
void TAEmerald_Serialize(void);

// Extra Entity Functions


#endif //!OBJ_TAEMERALD_H