#ifndef BLOCKTEXTURES_H_
#define BLOCKTEXTURES_H_

#include "textureimage.h"

#include <string>
#include <vector>

namespace mapcrafter {
namespace render {

/**
 * Collection of Minecraft block textures.
 */
class BlockTextures {
public:
	BlockTextures();
	~BlockTextures();

	bool load(const std::string& block_dir, int size);

	TextureImage
		ANVIL_BASE,
		ANVIL_TOP_DAMAGED_0,
		ANVIL_TOP_DAMAGED_1,
		ANVIL_TOP_DAMAGED_2,
		BEACON,
		BED_FEET_END,
		BED_FEET_SIDE,
		BED_FEET_TOP,
		BED_HEAD_END,
		BED_HEAD_SIDE,
		BED_HEAD_TOP,
		BEDROCK,
		BOOKSHELF,
		BREWING_STAND,
		BREWING_STAND_BASE,
		BRICK,
		CACTUS_BOTTOM,
		CACTUS_SIDE,
		CACTUS_TOP,
		CAKE_BOTTOM,
		CAKE_INNER,
		CAKE_SIDE,
		CAKE_TOP,
		CARROTS_STAGE_0,
		CARROTS_STAGE_1,
		CARROTS_STAGE_2,
		CARROTS_STAGE_3,
		CAULDRON_BOTTOM,
		CAULDRON_INNER,
		CAULDRON_SIDE,
		CAULDRON_TOP,
		CLAY,
		COAL_BLOCK,
		COAL_ORE,
		COBBLESTONE,
		COBBLESTONE_MOSSY,
		COCOA_STAGE_0,
		COCOA_STAGE_1,
		COCOA_STAGE_2,
		COMMAND_BLOCK,
		COMPARATOR_OFF,
		COMPARATOR_ON,
		CRAFTING_TABLE_FRONT,
		CRAFTING_TABLE_SIDE,
		CRAFTING_TABLE_TOP,
		DAYLIGHT_DETECTOR_SIDE,
		DAYLIGHT_DETECTOR_TOP,
		DEADBUSH,
		DESTROY_STAGE_0,
		DESTROY_STAGE_1,
		DESTROY_STAGE_2,
		DESTROY_STAGE_3,
		DESTROY_STAGE_4,
		DESTROY_STAGE_5,
		DESTROY_STAGE_6,
		DESTROY_STAGE_7,
		DESTROY_STAGE_8,
		DESTROY_STAGE_9,
		DIAMOND_BLOCK,
		DIAMOND_ORE,
		DIRT,
		DIRT_PODZOL_SIDE,
		DIRT_PODZOL_TOP,
		DISPENSER_FRONT_HORIZONTAL,
		DISPENSER_FRONT_VERTICAL,
		DOOR_IRON_LOWER,
		DOOR_IRON_UPPER,
		DOOR_WOOD_LOWER,
		DOOR_WOOD_UPPER,
		DOUBLE_PLANT_FERN_BOTTOM,
		DOUBLE_PLANT_FERN_TOP,
		DOUBLE_PLANT_GRASS_BOTTOM,
		DOUBLE_PLANT_GRASS_TOP,
		DOUBLE_PLANT_PAEONIA_BOTTOM,
		DOUBLE_PLANT_PAEONIA_TOP,
		DOUBLE_PLANT_ROSE_BOTTOM,
		DOUBLE_PLANT_ROSE_TOP,
		DOUBLE_PLANT_SUNFLOWER_BACK,
		DOUBLE_PLANT_SUNFLOWER_BOTTOM,
		DOUBLE_PLANT_SUNFLOWER_FRONT,
		DOUBLE_PLANT_SUNFLOWER_TOP,
		DOUBLE_PLANT_SYRINGA_BOTTOM,
		DOUBLE_PLANT_SYRINGA_TOP,
		DRAGON_EGG,
		DROPPER_FRONT_HORIZONTAL,
		DROPPER_FRONT_VERTICAL,
		EMERALD_BLOCK,
		EMERALD_ORE,
		ENCHANTING_TABLE_BOTTOM,
		ENCHANTING_TABLE_SIDE,
		ENCHANTING_TABLE_TOP,
		END_STONE,
		ENDFRAME_EYE,
		ENDFRAME_SIDE,
		ENDFRAME_TOP,
		FARMLAND_DRY,
		FARMLAND_WET,
		FERN,
		FIRE_LAYER_0,
		FIRE_LAYER_1,
		FLOWER_ALLIUM,
		FLOWER_BLUE_ORCHID,
		FLOWER_DANDELION,
		FLOWER_HOUSTONIA,
		FLOWER_OXEYE_DAISY,
		FLOWER_PAEONIA,
		FLOWER_POT,
		FLOWER_ROSE,
		FLOWER_TULIP_ORANGE,
		FLOWER_TULIP_PINK,
		FLOWER_TULIP_RED,
		FLOWER_TULIP_WHITE,
		FURNACE_FRONT_OFF,
		FURNACE_FRONT_ON,
		FURNACE_SIDE,
		FURNACE_TOP,
		GLASS,
		GLASS_BLACK,
		GLASS_BLUE,
		GLASS_BROWN,
		GLASS_CYAN,
		GLASS_GRAY,
		GLASS_GREEN,
		GLASS_LIGHT_BLUE,
		GLASS_LIME,
		GLASS_MAGENTA,
		GLASS_ORANGE,
		GLASS_PANE_TOP,
		GLASS_PANE_TOP_BLACK,
		GLASS_PANE_TOP_BLUE,
		GLASS_PANE_TOP_BROWN,
		GLASS_PANE_TOP_CYAN,
		GLASS_PANE_TOP_GRAY,
		GLASS_PANE_TOP_GREEN,
		GLASS_PANE_TOP_LIGHT_BLUE,
		GLASS_PANE_TOP_LIME,
		GLASS_PANE_TOP_MAGENTA,
		GLASS_PANE_TOP_ORANGE,
		GLASS_PANE_TOP_PINK,
		GLASS_PANE_TOP_PURPLE,
		GLASS_PANE_TOP_RED,
		GLASS_PANE_TOP_SILVER,
		GLASS_PANE_TOP_WHITE,
		GLASS_PANE_TOP_YELLOW,
		GLASS_PINK,
		GLASS_PURPLE,
		GLASS_RED,
		GLASS_SILVER,
		GLASS_WHITE,
		GLASS_YELLOW,
		GLOWSTONE,
		GOLD_BLOCK,
		GOLD_ORE,
		GRASS_SIDE,
		GRASS_SIDE_OVERLAY,
		GRASS_SIDE_SNOWED,
		GRASS_TOP,
		GRAVEL,
		HARDENED_CLAY,
		HARDENED_CLAY_STAINED_BLACK,
		HARDENED_CLAY_STAINED_BLUE,
		HARDENED_CLAY_STAINED_BROWN,
		HARDENED_CLAY_STAINED_CYAN,
		HARDENED_CLAY_STAINED_GRAY,
		HARDENED_CLAY_STAINED_GREEN,
		HARDENED_CLAY_STAINED_LIGHT_BLUE,
		HARDENED_CLAY_STAINED_LIME,
		HARDENED_CLAY_STAINED_MAGENTA,
		HARDENED_CLAY_STAINED_ORANGE,
		HARDENED_CLAY_STAINED_PINK,
		HARDENED_CLAY_STAINED_PURPLE,
		HARDENED_CLAY_STAINED_RED,
		HARDENED_CLAY_STAINED_SILVER,
		HARDENED_CLAY_STAINED_WHITE,
		HARDENED_CLAY_STAINED_YELLOW,
		HAY_BLOCK_SIDE,
		HAY_BLOCK_TOP,
		HOPPER_INSIDE,
		HOPPER_OUTSIDE,
		HOPPER_TOP,
		ICE,
		ICE_PACKED,
		IRON_BARS,
		IRON_BLOCK,
		IRON_ORE,
		ITEMFRAME_BACKGROUND,
		JUKEBOX_SIDE,
		JUKEBOX_TOP,
		LADDER,
		LAPIS_BLOCK,
		LAPIS_ORE,
		LAVA_FLOW,
		LAVA_STILL,
		LEAVES_ACACIA,
		LEAVES_ACACIA_OPAQUE,
		LEAVES_BIG_OAK,
		LEAVES_BIG_OAK_OPAQUE,
		LEAVES_BIRCH,
		LEAVES_BIRCH_OPAQUE,
		LEAVES_JUNGLE,
		LEAVES_JUNGLE_OPAQUE,
		LEAVES_OAK,
		LEAVES_OAK_OPAQUE,
		LEAVES_SPRUCE,
		LEAVES_SPRUCE_OPAQUE,
		LEVER,
		LOG_ACACIA,
		LOG_ACACIA_TOP,
		LOG_BIG_OAK,
		LOG_BIG_OAK_TOP,
		LOG_BIRCH,
		LOG_BIRCH_TOP,
		LOG_JUNGLE,
		LOG_JUNGLE_TOP,
		LOG_OAK,
		LOG_OAK_TOP,
		LOG_SPRUCE,
		LOG_SPRUCE_TOP,
		MELON_SIDE,
		MELON_STEM_CONNECTED,
		MELON_STEM_DISCONNECTED,
		MELON_TOP,
		MOB_SPAWNER,
		MUSHROOM_BLOCK_INSIDE,
		MUSHROOM_BLOCK_SKIN_BROWN,
		MUSHROOM_BLOCK_SKIN_RED,
		MUSHROOM_BLOCK_SKIN_STEM,
		MUSHROOM_BROWN,
		MUSHROOM_RED,
		MYCELIUM_SIDE,
		MYCELIUM_TOP,
		NETHER_BRICK,
		NETHER_WART_STAGE_0,
		NETHER_WART_STAGE_1,
		NETHER_WART_STAGE_2,
		NETHERRACK,
		NOTEBLOCK,
		OBSIDIAN,
		PISTON_BOTTOM,
		PISTON_INNER,
		PISTON_SIDE,
		PISTON_TOP_NORMAL,
		PISTON_TOP_STICKY,
		PLANKS_ACACIA,
		PLANKS_BIG_OAK,
		PLANKS_BIRCH,
		PLANKS_JUNGLE,
		PLANKS_OAK,
		PLANKS_SPRUCE,
		PORTAL,
		POTATOES_STAGE_0,
		POTATOES_STAGE_1,
		POTATOES_STAGE_2,
		POTATOES_STAGE_3,
		PUMPKIN_FACE_OFF,
		PUMPKIN_FACE_ON,
		PUMPKIN_SIDE,
		PUMPKIN_STEM_CONNECTED,
		PUMPKIN_STEM_DISCONNECTED,
		PUMPKIN_TOP,
		QUARTZ_BLOCK_BOTTOM,
		QUARTZ_BLOCK_CHISELED,
		QUARTZ_BLOCK_CHISELED_TOP,
		QUARTZ_BLOCK_LINES,
		QUARTZ_BLOCK_LINES_TOP,
		QUARTZ_BLOCK_SIDE,
		QUARTZ_BLOCK_TOP,
		QUARTZ_ORE,
		RAIL_ACTIVATOR,
		RAIL_ACTIVATOR_POWERED,
		RAIL_DETECTOR,
		RAIL_DETECTOR_POWERED,
		RAIL_GOLDEN,
		RAIL_GOLDEN_POWERED,
		RAIL_NORMAL,
		RAIL_NORMAL_TURNED,
		RED_SAND,
		REDSTONE_BLOCK,
		REDSTONE_DUST_CROSS,
		REDSTONE_DUST_CROSS_OVERLAY,
		REDSTONE_DUST_LINE,
		REDSTONE_DUST_LINE_OVERLAY,
		REDSTONE_LAMP_OFF,
		REDSTONE_LAMP_ON,
		REDSTONE_ORE,
		REDSTONE_TORCH_OFF,
		REDSTONE_TORCH_ON,
		REEDS,
		REPEATER_OFF,
		REPEATER_ON,
		SAND,
		SANDSTONE_BOTTOM,
		SANDSTONE_CARVED,
		SANDSTONE_NORMAL,
		SANDSTONE_SMOOTH,
		SANDSTONE_TOP,
		SAPLING_ACACIA,
		SAPLING_BIRCH,
		SAPLING_JUNGLE,
		SAPLING_OAK,
		SAPLING_ROOFED_OAK,
		SAPLING_SPRUCE,
		SNOW,
		SOUL_SAND,
		SPONGE,
		STONE,
		STONE_SLAB_SIDE,
		STONE_SLAB_TOP,
		STONEBRICK,
		STONEBRICK_CARVED,
		STONEBRICK_CRACKED,
		STONEBRICK_MOSSY,
		TALLGRASS,
		TNT_BOTTOM,
		TNT_SIDE,
		TNT_TOP,
		TORCH_ON,
		TRAPDOOR,
		TRIP_WIRE,
		TRIP_WIRE_SOURCE,
		VINE,
		WATER_FLOW,
		WATER_STILL,
		WATERLILY,
		WEB,
		WHEAT_STAGE_0,
		WHEAT_STAGE_1,
		WHEAT_STAGE_2,
		WHEAT_STAGE_3,
		WHEAT_STAGE_4,
		WHEAT_STAGE_5,
		WHEAT_STAGE_6,
		WHEAT_STAGE_7,
		WOOL_COLORED_BLACK,
		WOOL_COLORED_BLUE,
		WOOL_COLORED_BROWN,
		WOOL_COLORED_CYAN,
		WOOL_COLORED_GRAY,
		WOOL_COLORED_GREEN,
		WOOL_COLORED_LIGHT_BLUE,
		WOOL_COLORED_LIME,
		WOOL_COLORED_MAGENTA,
		WOOL_COLORED_ORANGE,
		WOOL_COLORED_PINK,
		WOOL_COLORED_PURPLE,
		WOOL_COLORED_RED,
		WOOL_COLORED_SILVER,
		WOOL_COLORED_WHITE,
		WOOL_COLORED_YELLOW;
	std::vector<TextureImage*> textures;
};

}
}

#endif /* BLOCKTEXTURES_H_ */
