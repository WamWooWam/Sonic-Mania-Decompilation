#ifndef OBJ_TITLE3DSPRITE_H
#define OBJ_TITLE3DSPRITE_H

#include "../SonicMania.h"

// Object Class
typedef struct {
	RSDK_OBJECT
} ObjectTitle3DSprite;

// Entity Class
typedef struct {
	RSDK_ENTITY
} EntityTitle3DSprite;

// Object Struct
extern ObjectTitle3DSprite *Title3DSprite;

// Standard Entity Events
void Title3DSprite_Update();
void Title3DSprite_LateUpdate();
void Title3DSprite_StaticUpdate();
void Title3DSprite_Draw();
void Title3DSprite_Create(void* data);
void Title3DSprite_StageLoad();
void Title3DSprite_EditorDraw();
void Title3DSprite_EditorLoad();
void Title3DSprite_Serialize();

// Extra Entity Functions


#endif //!OBJ_TITLE3DSPRITE_H
