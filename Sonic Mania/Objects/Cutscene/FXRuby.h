#ifndef OBJ_FXRUBY_H
#define OBJ_FXRUBY_H

#include "SonicMania.h"

// Object Class
typedef struct {
    RSDK_OBJECT
    int32 deformData[0x200];
#if RETRO_USE_PLUS
    uint16 lookupTable[0x10000];
#endif
    TileLayer *fgLow;
    TileLayer *fgHigh;
} ObjectFXRuby;

// Entity Class
typedef struct {
    RSDK_ENTITY
    StateMachine(state);
    int32 unused1;
    int32 radiusSpeed;
    int32 radius;
    int32 innerRadius;
    int32 outerRadius;
    int32 timer;
    int32 delay;
    int32 fadeWhite;
    int32 fadeBlack;
    bool32 waitForTrigger;
    int32 unused2;
    int32 unused3;
    int32 unused4;
    bool32 fullyExpanded;
} EntityFXRuby;

// Object Struct
extern ObjectFXRuby *FXRuby;

// Standard Entity Events
void FXRuby_Update(void);
void FXRuby_LateUpdate(void);
void FXRuby_StaticUpdate(void);
void FXRuby_Draw(void);
void FXRuby_Create(void* data);
void FXRuby_StageLoad(void);
#if RETRO_INCLUDE_EDITOR
void FXRuby_EditorDraw(void);
void FXRuby_EditorLoad(void);
#endif
void FXRuby_Serialize(void);

// Extra Entity Functions
void FXRuby_SetupLayerDeformation(void);
void FXRuby_HandleLayerDeform(void);

void FXRuby_State_ExpandRing(void);
void FXRuby_State_ShrinkRing(void);
void FXRuby_State_None(void);
void FXRuby_State_IncreaseStageDeform(void);
void FXRuby_State_DecreaseStageDeform(void);
void FXRuby_State_ShrinkAndDestroy(void);

#endif //!OBJ_FXRUBY_H
