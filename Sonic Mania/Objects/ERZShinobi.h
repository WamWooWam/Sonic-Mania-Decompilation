#ifndef OBJ_ERZSHINOBI_H
#define OBJ_ERZSHINOBI_H

#include "../SonicMania.h"

// Object Class
typedef struct {
	RSDK_OBJECT
} ObjectERZShinobi;

// Entity Class
typedef struct {
	RSDK_ENTITY
} EntityERZShinobi;

// Object Struct
extern ObjectERZShinobi *ERZShinobi;

// Standard Entity Events
void ERZShinobi_Update();
void ERZShinobi_LateUpdate();
void ERZShinobi_StaticUpdate();
void ERZShinobi_Draw();
void ERZShinobi_Create(void* data);
void ERZShinobi_StageLoad();
void ERZShinobi_EditorDraw();
void ERZShinobi_EditorLoad();
void ERZShinobi_Serialize();

// Extra Entity Functions


#endif //!OBJ_ERZSHINOBI_H
