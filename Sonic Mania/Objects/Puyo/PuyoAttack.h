#ifndef OBJ_PUYOATTACK_H
#define OBJ_PUYOATTACK_H

#include "SonicMania.h"

// Object Class
typedef struct {
    RSDK_OBJECT
    uint16 sfxAttack;
    uint16 aniFrames;
} ObjectPuyoAttack;

// Entity Class
typedef struct {
    RSDK_ENTITY
    int32 playerID;
    int32 delay;
    int32 radius;
    int32 field_64;
    Vector2 targetPos;
    Animator animator;
} EntityPuyoAttack;

// Object Struct
extern ObjectPuyoAttack *PuyoAttack;

// Standard Entity Events
void PuyoAttack_Update(void);
void PuyoAttack_LateUpdate(void);
void PuyoAttack_StaticUpdate(void);
void PuyoAttack_Draw(void);
void PuyoAttack_Create(void* data);
void PuyoAttack_StageLoad(void);
#if RETRO_INCLUDE_EDITOR
void PuyoAttack_EditorDraw(void);
void PuyoAttack_EditorLoad(void);
#endif
void PuyoAttack_Serialize(void);

// Extra Entity Functions


#endif //!OBJ_PUYOATTACK_H
