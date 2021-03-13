#ifndef OBJ_TVVAN_H
#define OBJ_TVVAN_H

#include "../SonicMania.h"

// Object Class
typedef struct {
	RSDK_OBJECT
} ObjectTVVan;

// Entity Class
typedef struct {
	RSDK_ENTITY
} EntityTVVan;

// Object Struct
extern ObjectTVVan *TVVan;

// Standard Entity Events
void TVVan_Update();
void TVVan_LateUpdate();
void TVVan_StaticUpdate();
void TVVan_Draw();
void TVVan_Create(void* data);
void TVVan_StageLoad();
void TVVan_EditorDraw();
void TVVan_EditorLoad();
void TVVan_Serialize();

// Extra Entity Functions


#endif //!OBJ_TVVAN_H
