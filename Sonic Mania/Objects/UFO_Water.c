#include "../SonicMania.h"

ObjectUFO_Water *UFO_Water;

void UFO_Water_Update(void) {}

void UFO_Water_LateUpdate(void) {}

void UFO_Water_StaticUpdate(void)
{
    if (!(UFO_Setup->timer & 3)) {
        UFO_Water->timer += 128;
        UFO_Water->timer &= 0x7FF;
        RSDK.DrawAniTiles(UFO_Water->spriteIndex, 712, UFO_Water->timer & 0x1FF, (UFO_Water->timer >> 2) & 0xFF80, 128, 128);
    }
}

void UFO_Water_Draw(void) {}

void UFO_Water_Create(void *data) {}

void UFO_Water_StageLoad(void) { UFO_Water->spriteIndex = RSDK.LoadSpriteSheet("SpecialUFO/Water.gif", SCOPE_STAGE); }

void UFO_Water_EditorDraw(void) {}

void UFO_Water_EditorLoad(void) {}

void UFO_Water_Serialize(void) {}