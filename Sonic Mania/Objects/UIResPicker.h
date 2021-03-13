#ifndef OBJ_UIRESPICKER_H
#define OBJ_UIRESPICKER_H

#include "../SonicMania.h"

// Object Class
typedef struct {
	RSDK_OBJECT
} ObjectUIResPicker;

// Entity Class
typedef struct {
	RSDK_ENTITY
} EntityUIResPicker;

// Object Struct
extern ObjectUIResPicker *UIResPicker;

// Standard Entity Events
void UIResPicker_Update();
void UIResPicker_LateUpdate();
void UIResPicker_StaticUpdate();
void UIResPicker_Draw();
void UIResPicker_Create(void* data);
void UIResPicker_StageLoad();
void UIResPicker_EditorDraw();
void UIResPicker_EditorLoad();
void UIResPicker_Serialize();

// Extra Entity Functions


#endif //!OBJ_UIRESPICKER_H
