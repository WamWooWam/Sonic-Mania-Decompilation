#ifndef OBJ_LOCOSMOKE_H
#define OBJ_LOCOSMOKE_H

#include "SonicMania.h"

// Object Class
typedef struct {
    RSDK_OBJECT
    uint16 aniFrames;
    uint16 field_6;
} ObjectLocoSmoke;

// Entity Class
typedef struct {
    RSDK_ENTITY
    int32 timer;
    Animator animator;
} EntityLocoSmoke;

// Object Struct
extern ObjectLocoSmoke *LocoSmoke;

// Standard Entity Events
void LocoSmoke_Update(void);
void LocoSmoke_LateUpdate(void);
void LocoSmoke_StaticUpdate(void);
void LocoSmoke_Draw(void);
void LocoSmoke_Create(void* data);
void LocoSmoke_StageLoad(void);
#if RETRO_INCLUDE_EDITOR
void LocoSmoke_EditorDraw(void);
void LocoSmoke_EditorLoad(void);
#endif
void LocoSmoke_Serialize(void);

// Extra Entity Functions


#endif //!OBJ_LOCOSMOKE_H
