#ifndef OBJ_ROTATINGSPIKES_H
#define OBJ_ROTATINGSPIKES_H

#include "../SonicMania.h"

// Object Class
typedef struct {
	RSDK_OBJECT
} ObjectRotatingSpikes;

// Entity Class
typedef struct {
	RSDK_ENTITY
} EntityRotatingSpikes;

// Object Struct
extern ObjectRotatingSpikes *RotatingSpikes;

// Standard Entity Events
void RotatingSpikes_Update();
void RotatingSpikes_LateUpdate();
void RotatingSpikes_StaticUpdate();
void RotatingSpikes_Draw();
void RotatingSpikes_Create(void* data);
void RotatingSpikes_StageLoad();
void RotatingSpikes_EditorDraw();
void RotatingSpikes_EditorLoad();
void RotatingSpikes_Serialize();

// Extra Entity Functions


#endif //!OBJ_ROTATINGSPIKES_H
