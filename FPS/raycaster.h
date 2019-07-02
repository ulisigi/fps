#pragma once

#include <vector>

#include "framebuffer.h"
#include "map.h"
#include "player.h"
#include "sprite.h"
#include "textures.h"

struct GameState
{
    Map map;
    Player player;
    std::vector<Sprite> monsters;
    Texture tex_walls;
    Texture tex_monst;
};

void render(FrameBuffer &fb, const GameState &gs);
