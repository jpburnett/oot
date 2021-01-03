#include <ultra64.h>
#include <z64.h>
#include "ice_doukutu_room_8.h"
#include <z64.h>
#include <segment_symbols.h>
#include <command_macros_base.h>
#include <z64cutscene_commands.h>
#include <variables.h>
#include "ice_doukutu_scene.h"



SCmdAltHeaders _ice_doukutu_room_8_set0000_cmd00 = { 0x18, 0, (u32)&_ice_doukutu_room_8_alternateHeaders_00000048}; // 0x0000
SCmdEchoSettings _ice_doukutu_room_8_set0000_cmd01 = { 0x16, 0, { 0 }, 0x07 }; // 0x0008
SCmdRoomBehavior _ice_doukutu_room_8_set0000_cmd02 = { 0x08, 0x01, 0x00000001 }; // 0x0010
SCmdSkyboxDisables _ice_doukutu_room_8_set0000_cmd03 = { 0x12, 0, 0, 0, 0x01, 0x01 }; // 0x0018
SCmdTimeSettings _ice_doukutu_room_8_set0000_cmd04 = { 0x10, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00 }; // 0x0020
SCmdMesh _ice_doukutu_room_8_set0000_cmd05 = { 0x0A, 0, (u32)&_ice_doukutu_room_8_meshHeader_000000E0 }; // 0x0028
SCmdObjectList _ice_doukutu_room_8_set0000_cmd06 = { 0x0B, 0x0D, (u32)_ice_doukutu_room_8_objectList_00000058 }; // 0x0030
SCmdActorList _ice_doukutu_room_8_set0000_cmd07 = { 0x01, 0x06, (u32)_ice_doukutu_room_8_actorList_00000074 }; // 0x0038
SCmdEndMarker _ice_doukutu_room_8_set0000_cmd08 = { 0x14, 0x00, 0x00 }; // 0x0040
u32 _ice_doukutu_room_8_alternateHeaders_00000048[] = 
{
	0,
	0,
	0,
	(u32)&_ice_doukutu_room_8_set0100_cmd00,
};

s16 _ice_doukutu_room_8_objectList_00000058[] = 
{
	OBJECT_ICE_OBJECTS,
	OBJECT_TITE,
	OBJECT_GOROIWA,
	OBJECT_FZ,
	OBJECT_DEMO_KEKKAI,
	OBJECT_ST,
	OBJECT_GI_SUTARU,
	OBJECT_TIMEBLOCK,
	OBJECT_EFC_TW,
	OBJECT_WF,
	OBJECT_BOX,
	OBJECT_KA,
	OBJECT_FIREFLY,
};

ActorEntry _ice_doukutu_room_8_actorList_00000074[6] = 
{
	{ ACTOR_EN_FZ, 1109, 172, -1213, 0, 0, 0, 0x0000 }, //0x00000074 
	{ ACTOR_EN_FZ, 1219, 172, -1076, 0, 0, 0, 0x0000 }, //0x00000084 
	{ ACTOR_EN_GOROIWA, 1470, 707, -1243, 0, 0, 1, 0x0D03 }, //0x00000094 
	{ ACTOR_EN_GOROIWA, 897, 687, -1687, 0, 0, 1, 0x0D04 }, //0x000000A4 
	{ ACTOR_EN_WONDER_ITEM, 1074, 172, -722, 0, 0, 0, 0x3FE7 }, //0x000000B4 
	{ ACTOR_EN_WONDER_ITEM, 1110, 172, -656, 0, 0, 0, 0x3FE7 }, //0x000000C4 
};

static u32 padD4 = 0;
static u32 padD8 = 0;
static u32 padDC = 0;

MeshHeader0 _ice_doukutu_room_8_meshHeader_000000E0 = { { 0 }, 0x01, (u32)&_ice_doukutu_room_8_meshDListEntry_000000EC, (u32)&(_ice_doukutu_room_8_meshDListEntry_000000EC) + sizeof(_ice_doukutu_room_8_meshDListEntry_000000EC) };

MeshEntry0 _ice_doukutu_room_8_meshDListEntry_000000EC[1] = 
{
	{ (u32)_ice_doukutu_room_8_dlist_000018F8, 0 },
};

static u32 terminatorMaybe = 0x01000000; // This always appears after the mesh entries. Its purpose is not clear.
static u32 padF8 = 0;
static u32 padFC = 0;

SCmdEchoSettings _ice_doukutu_room_8_set0100_cmd00 = { 0x16, 0, { 0 }, 0x00 }; // 0x0100
SCmdRoomBehavior _ice_doukutu_room_8_set0100_cmd01 = { 0x08, 0x00, 0x00000000 }; // 0x0108
SCmdSkyboxDisables _ice_doukutu_room_8_set0100_cmd02 = { 0x12, 0, 0, 0, 0x00, 0x00 }; // 0x0110
SCmdTimeSettings _ice_doukutu_room_8_set0100_cmd03 = { 0x10, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF }; // 0x0118
SCmdMesh _ice_doukutu_room_8_set0100_cmd04 = { 0x0A, 0, (u32)&_ice_doukutu_room_8_meshHeader_000000E0 }; // 0x0120
SCmdObjectList _ice_doukutu_room_8_set0100_cmd05 = { 0x0B, 0x03, (u32)_ice_doukutu_room_8_objectList_00000138 }; // 0x0128
SCmdEndMarker _ice_doukutu_room_8_set0100_cmd06 = { 0x14, 0x00, 0x00 }; // 0x0130
s16 _ice_doukutu_room_8_objectList_00000138[] = 
{
	OBJECT_ICE_OBJECTS,
	OBJECT_XC,
	OBJECT_GI_MELODY,
};

Vtx_t _ice_doukutu_room_8_vertices_00000140[32] = 
{
	 { 472, 172, -785, 0, -2749, -5606, 153, 153, 153, 255 }, // 0x00000140
	 { 501, 172, -624, 0, -538, -3293, 255, 255, 255, 255 }, // 0x00000150
	 { 611, 172, -642, 0, -3678, -2413, 153, 153, 153, 255 }, // 0x00000160
	 { 465, 172, -661, 0, 329, -4724, 178, 178, 178, 255 }, // 0x00000170
	 { 704, 172, -749, 0, -1232, -2517, 216, 216, 216, 255 }, // 0x00000180
	 { 683, 172, -809, 0, -538, -3293, 255, 255, 255, 255 }, // 0x00000190
	 { 1037, 172, -553, 0, -1404, 3892, 89, 89, 89, 255 }, // 0x000001A0
	 { 1263, 172, -720, 0, 2848, 5834, 216, 216, 216, 255 }, // 0x000001B0
	 { 1144, 172, -745, 0, 2245, 3906, 255, 255, 255, 255 }, // 0x000001C0
	 { 1028, 172, -663, 0, 119, 2887, 255, 255, 255, 255 }, // 0x000001D0
	 { 1019, 172, -733, 0, 1069, 2182, 216, 216, 216, 255 }, // 0x000001E0
	 { 1046, 172, -1690, 0, -2811, 4942, 178, 178, 178, 255 }, // 0x000001F0
	 { 1038, 172, -1557, 0, -2941, 1031, 255, 255, 255, 255 }, // 0x00000200
	 { 1112, 172, -1568, 0, -5076, 1552, 255, 255, 255, 255 }, // 0x00000210
	 { 956, 172, -1577, 0, -480, 1422, 255, 255, 255, 255 }, // 0x00000220
	 { 974, 172, -1497, 0, -1205, -886, 178, 178, 178, 255 }, // 0x00000230
	 { 742, 172, -1615, 0, 5891, 1975, 178, 178, 178, 255 }, // 0x00000240
	 { 797, 172, -1530, 0, 4063, -379, 255, 255, 255, 255 }, // 0x00000250
	 { 852, 172, -1444, 0, 2236, -2733, 178, 178, 178, 255 }, // 0x00000260
	 { 936, 172, -1507, 0, -60, -699, 204, 204, 204, 255 }, // 0x00000270
	 { 730, 172, -1534, 0, 6029, -426, 255, 255, 255, 255 }, // 0x00000280
	 { 718, 172, -1453, 0, 6166, -2826, 178, 178, 178, 255 }, // 0x00000290
	 { 824, 172, -785, 0, 251, -1066, 216, 216, 216, 255 }, // 0x000002A0
	 { 852, 172, -858, 0, 1543, -1237, 255, 255, 255, 255 }, // 0x000002B0
	 { 881, 172, -931, 0, 2835, -1409, 165, 165, 165, 255 }, // 0x000002C0
	 { 633, 172, -896, 0, 329, -4724, 178, 178, 178, 255 }, // 0x000002D0
	 { 900, 172, -636, 0, -1297, 1246, 216, 216, 216, 255 }, // 0x000002E0
	 { 957, 172, -686, 0, -114, 1665, 255, 255, 255, 255 }, // 0x000002F0
	 { 852, 172, -858, 0, 1543, -1237, 255, 255, 255, 255 }, // 0x00000300
	 { 824, 172, -785, 0, 251, -1066, 216, 216, 216, 255 }, // 0x00000310
	 { 1178, 172, -768, 0, 2857, 4218, 255, 255, 255, 255 }, // 0x00000320
	 { 1227, 172, -768, 0, 3249, 4931, 255, 255, 255, 255 }, // 0x00000330
};

Vtx_t _ice_doukutu_room_8_vertices_00000340[12] = 
{
	 { 1178, 172, -768, 0, 2857, 4218, 255, 255, 255, 255 }, // 0x00000340
	 { 1150, 172, -828, 0, 3492, 3324, 255, 255, 255, 255 }, // 0x00000350
	 { 1144, 172, -745, 0, 2245, 3906, 255, 255, 255, 255 }, // 0x00000360
	 { 1108, 172, -841, 0, 3353, 2607, 255, 255, 255, 255 }, // 0x00000370
	 { 1019, 172, -733, 0, 1069, 2182, 216, 216, 216, 255 }, // 0x00000380
	 { 1112, 172, -1568, 0, -5076, 1552, 255, 255, 255, 255 }, // 0x00000390
	 { 1282, 172, -1526, 0, -10146, 766, 178, 178, 178, 255 }, // 0x000003A0
	 { 1046, 172, -1690, 0, -2811, 4942, 178, 178, 178, 255 }, // 0x000003B0
	 { 683, 172, -809, 0, -538, -3293, 255, 255, 255, 255 }, // 0x000003C0
	 { 633, 172, -896, 0, 329, -4724, 178, 178, 178, 255 }, // 0x000003D0
	 { 497, 172, -760, 0, -2749, -5606, 153, 153, 153, 255 }, // 0x000003E0
	 { 611, 172, -642, 0, -3678, -2413, 153, 153, 153, 255 }, // 0x000003F0
};

Vtx_t _ice_doukutu_room_8_vertices_00000400[8] = 
{
	 { 644, 172, -1761, 0, 0, 0, 0, 0, 0, 0 }, // 0x00000400
	 { 1423, 172, -1623, 0, 0, 0, 0, 0, 0, 0 }, // 0x00000410
	 { 644, 172, -1761, 0, 0, 0, 0, 0, 0, 0 }, // 0x00000420
	 { 1423, 172, -1623, 0, 0, 0, 0, 0, 0, 0 }, // 0x00000430
	 { 445, 172, -634, 0, 0, 0, 0, 0, 0, 0 }, // 0x00000440
	 { 1224, 172, -496, 0, 0, 0, 0, 0, 0, 0 }, // 0x00000450
	 { 445, 172, -634, 0, 0, 0, 0, 0, 0, 0 }, // 0x00000460
	 { 1224, 172, -496, 0, 0, 0, 0, 0, 0, 0 }, // 0x00000470
};

Gfx _ice_doukutu_room_8_dlist_00000480[] =
{
	gsDPPipeSync(), // 0x00000480
	gsSPGeometryMode(0xFF030000, 0x00000000), // 0x00000488
	gsSPVertex(_ice_doukutu_room_8_vertices_00000400, 8, 0), // 0x00000490
	gsSPCullDisplayList(0, 7), // 0x00000498
	gsDPPipeSync(), // 0x000004A0
	gsSPGeometryMode(0xFF000000, 0x00030000), // 0x000004A8
	gsSPSetOtherMode(0xE3, 14, 2, 0x00000000), // 0x000004B0
	gsSPTexture(65535, 65535, 0, 0, 1), // 0x000004B8
	gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, _ice_doukutu_scene_tex_00010AC0), // 0x000004C0
	gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 2, 0, 5, 2), // 0x000004C8
	gsDPLoadSync(), // 0x000004D0
	gsDPLoadBlock(7, 0, 0, 511, 512), // 0x000004D8
	gsDPPipeSync(), // 0x000004E0
	gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0, 0, 0, 0, 5, 2, 0, 5, 2), // 0x000004E8
	gsDPSetTileSize(0, 0, 0, 124, 124), // 0x000004F0
	gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, _ice_doukutu_scene_tex_0000FCC0), // 0x000004F8
	gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 256, 7, 0, 0, 5, 0, 0, 5, 0), // 0x00000500
	gsDPLoadSync(), // 0x00000508
	gsDPLoadBlock(7, 0, 0, 511, 512), // 0x00000510
	gsDPPipeSync(), // 0x00000518
	gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 256, 1, 0, 0, 5, 0, 0, 5, 0), // 0x00000520
	gsDPSetTileSize(1, 0, 0, 124, 124), // 0x00000528
	gsDPSetCombineLERP(TEXEL1, TEXEL0, ENV_ALPHA, TEXEL0, 0, 0, 0, 1, COMBINED, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, COMBINED), // 0x00000530
	gsSPSetOtherMode(0xE2, 3, 29, 0xC8113078), // 0x00000538
	gsSPGeometryMode(0xFF0E0000, 0x00000000), // 0x00000540
	gsSPGeometryMode(0xFF000000, 0x00010400), // 0x00000548
	gsDPSetPrimColor(0, 0, 255, 255, 255, 255), // 0x00000550
	gsSPVertex(_ice_doukutu_room_8_vertices_00000140, 32, 0), // 0x00000558
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0), // 0x00000560
	gsSP2Triangles(2, 4, 5, 0, 6, 7, 8, 0), // 0x00000568
	gsSP2Triangles(6, 8, 9, 0, 8, 10, 9, 0), // 0x00000570
	gsSP2Triangles(11, 12, 13, 0, 11, 14, 12, 0), // 0x00000578
	gsSP2Triangles(14, 15, 12, 0, 11, 16, 17, 0), // 0x00000580
	gsSP2Triangles(11, 17, 14, 0, 17, 18, 19, 0), // 0x00000588
	gsSP2Triangles(17, 19, 14, 0, 19, 15, 14, 0), // 0x00000590
	gsSP2Triangles(16, 20, 17, 0, 20, 21, 18, 0), // 0x00000598
	gsSP2Triangles(20, 18, 17, 0, 4, 22, 23, 0), // 0x000005A0
	gsSP2Triangles(4, 23, 5, 0, 23, 24, 25, 0), // 0x000005A8
	gsSP2Triangles(23, 25, 5, 0, 26, 6, 9, 0), // 0x000005B0
	gsSP2Triangles(26, 9, 27, 0, 9, 10, 27, 0), // 0x000005B8
	gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0), // 0x000005C0
	gsSP2Triangles(27, 10, 24, 0, 27, 24, 28, 0), // 0x000005C8
	gsSP2Triangles(7, 30, 8, 0, 7, 31, 30, 0), // 0x000005D0
	gsSPVertex(_ice_doukutu_room_8_vertices_00000340, 12, 0), // 0x000005D8
	gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0), // 0x000005E0
	gsSP2Triangles(3, 4, 2, 0, 5, 6, 7, 0), // 0x000005E8
	gsSP2Triangles(8, 9, 10, 0, 11, 8, 10, 0), // 0x000005F0
	gsSPEndDisplayList(), // 0x000005F8
};

Vtx_t _ice_doukutu_room_8_vertices_00000600[32] = 
{
	 { 601, 272, -792, 0, 3681, -850, 255, 255, 255, 255 }, // 0x00000600
	 { 596, 324, -800, 0, 2132, 1399, 63, 63, 63, 255 }, // 0x00000610
	 { 606, 324, -800, 0, 2775, 1399, 63, 63, 63, 255 }, // 0x00000620
	 { 592, 324, -790, 0, 1491, 1399, 63, 63, 63, 255 }, // 0x00000630
	 { 601, 272, -792, 0, 443, -850, 255, 255, 255, 255 }, // 0x00000640
	 { 600, 324, -784, 0, 842, 1399, 63, 63, 63, 255 }, // 0x00000650
	 { 609, 324, -789, 0, 187, 1399, 63, 63, 63, 255 }, // 0x00000660
	 { 609, 324, -789, 0, 3426, 1399, 63, 63, 63, 255 }, // 0x00000670
	 { 635, 263, -756, 0, 4978, -1742, 255, 255, 255, 255 }, // 0x00000680
	 { 624, 337, -756, 0, 2524, 1577, 63, 63, 63, 255 }, // 0x00000690
	 { 631, 337, -766, 0, 3543, 1577, 63, 63, 63, 255 }, // 0x000006A0
	 { 635, 263, -756, 0, 3096, -1742, 255, 255, 255, 255 }, // 0x000006B0
	 { 632, 337, -746, 0, 3482, 1577, 63, 63, 63, 255 }, // 0x000006C0
	 { 644, 337, -750, 0, 5611, 1577, 63, 63, 63, 255 }, // 0x000006D0
	 { 632, 337, -746, 0, 6639, 1577, 63, 63, 63, 255 }, // 0x000006E0
	 { 643, 337, -763, 0, 4574, 1577, 63, 63, 63, 255 }, // 0x000006F0
	 { 1181, 307, -1452, 0, 2329, -1742, 255, 255, 255, 255 }, // 0x00000700
	 { 1176, 359, -1462, 0, 1657, 1577, 38, 38, 38, 255 }, // 0x00000710
	 { 1188, 359, -1459, 0, 2139, 1577, 38, 38, 38, 255 }, // 0x00000720
	 { 1189, 359, -1446, 0, 2624, 1577, 38, 38, 38, 255 }, // 0x00000730
	 { 1177, 359, -1442, 0, 3105, 1577, 38, 38, 38, 255 }, // 0x00000740
	 { 1169, 359, -1452, 0, 1181, 1577, 38, 38, 38, 255 }, // 0x00000750
	 { 983, 313, -1278, 0, 1155, -1546, 255, 255, 255, 255 }, // 0x00000760
	 { 980, 361, -1287, 0, 1874, 1538, 63, 63, 63, 255 }, // 0x00000770
	 { 991, 360, -1284, 0, 2405, 1493, 63, 63, 63, 255 }, // 0x00000780
	 { 992, 360, -1273, 0, 2934, 1510, 63, 63, 63, 255 }, // 0x00000790
	 { 992, 360, -1273, 0, 240, 1510, 63, 63, 63, 255 }, // 0x000007A0
	 { 981, 361, -1270, 0, 778, 1566, 63, 63, 63, 255 }, // 0x000007B0
	 { 975, 362, -1278, 0, 1330, 1583, 63, 63, 63, 255 }, // 0x000007C0
	 { 1223, 276, -1242, 0, 1602, 2575, 255, 255, 255, 255 }, // 0x000007D0
	 { 1209, 349, -1241, 0, 3047, -515, 51, 51, 51, 255 }, // 0x000007E0
	 { 1218, 349, -1254, 0, 2447, -515, 51, 51, 51, 255 }, // 0x000007F0
};

Vtx_t _ice_doukutu_room_8_vertices_00000800[32] = 
{
	 { 1223, 276, -1242, 0, 1602, 2575, 255, 255, 255, 255 }, // 0x00000800
	 { 1219, 349, -1229, 0, 624, -515, 51, 51, 51, 255 }, // 0x00000810
	 { 1209, 349, -1241, 0, 3047, -515, 51, 51, 51, 255 }, // 0x00000820
	 { 1233, 349, -1235, 0, 1229, -515, 51, 51, 51, 255 }, // 0x00000830
	 { 1233, 349, -1250, 0, 1840, -515, 51, 51, 51, 255 }, // 0x00000840
	 { 1218, 349, -1254, 0, 2447, -515, 51, 51, 51, 255 }, // 0x00000850
	 { 599, 140, -1667, 0, 1602, 2575, 255, 255, 255, 255 }, // 0x00000860
	 { 585, 234, -1666, 0, 3047, -515, 51, 51, 51, 255 }, // 0x00000870
	 { 593, 234, -1679, 0, 2447, -515, 51, 51, 51, 255 }, // 0x00000880
	 { 594, 234, -1654, 0, 624, -515, 51, 51, 51, 255 }, // 0x00000890
	 { 609, 234, -1659, 0, 1229, -515, 51, 51, 51, 255 }, // 0x000008A0
	 { 608, 234, -1675, 0, 1840, -515, 51, 51, 51, 255 }, // 0x000008B0
	 { 701, 247, -1496, 0, 1602, 2575, 255, 255, 255, 255 }, // 0x000008C0
	 { 695, 319, -1509, 0, 2447, -515, 51, 51, 51, 255 }, // 0x000008D0
	 { 711, 319, -1504, 0, 1840, -515, 51, 51, 51, 255 }, // 0x000008E0
	 { 711, 319, -1489, 0, 1229, -515, 51, 51, 51, 255 }, // 0x000008F0
	 { 697, 319, -1483, 0, 624, -515, 51, 51, 51, 255 }, // 0x00000900
	 { 687, 319, -1495, 0, 3047, -515, 51, 51, 51, 255 }, // 0x00000910
	 { 631, 225, -1585, 0, 1602, 2575, 255, 255, 255, 255 }, // 0x00000920
	 { 617, 297, -1584, 0, 3047, -515, 51, 51, 51, 255 }, // 0x00000930
	 { 626, 297, -1597, 0, 2447, -515, 51, 51, 51, 255 }, // 0x00000940
	 { 627, 297, -1572, 0, 624, -515, 51, 51, 51, 255 }, // 0x00000950
	 { 642, 297, -1577, 0, 1229, -515, 51, 51, 51, 255 }, // 0x00000960
	 { 641, 297, -1593, 0, 1840, -515, 51, 51, 51, 255 }, // 0x00000970
	 { 611, 292, -642, 0, 1388, -162, 216, 216, 216, 255 }, // 0x00000980
	 { 708, 293, -744, 0, 0, -173, 127, 127, 127, 255 }, // 0x00000990
	 { 704, 172, -749, 0, -24, 1024, 229, 229, 229, 255 }, // 0x000009A0
	 { 611, 172, -642, 0, 1388, 1024, 153, 153, 153, 255 }, // 0x000009B0
	 { 708, 293, -744, 0, 2117, -46, 127, 127, 127, 255 }, // 0x000009C0
	 { 824, 172, -785, 0, 1594, 1028, 255, 255, 255, 255 }, // 0x000009D0
	 { 704, 172, -749, 0, 2171, 1012, 229, 229, 229, 255 }, // 0x000009E0
	 { 821, 304, -787, 0, 1520, -137, 127, 127, 127, 255 }, // 0x000009F0
};

Vtx_t _ice_doukutu_room_8_vertices_00000A00[32] = 
{
	 { 821, 304, -787, 0, 1520, -137, 127, 127, 127, 255 }, // 0x00000A00
	 { 893, 309, -606, 0, 280, -193, 127, 127, 127, 255 }, // 0x00000A10
	 { 900, 172, -636, 0, 368, 1019, 255, 255, 255, 255 }, // 0x00000A20
	 { 824, 172, -785, 0, 1594, 1028, 255, 255, 255, 255 }, // 0x00000A30
	 { 1031, 315, -522, 0, -999, -225, 89, 89, 89, 255 }, // 0x00000A40
	 { 1037, 172, -553, 0, -898, 1036, 89, 89, 89, 255 }, // 0x00000A50
	 { 1031, 315, -522, 0, 2797, 127, 89, 89, 89, 255 }, // 0x00000A60
	 { 1274, 338, -711, 0, 955, -144, 41, 60, 56, 255 }, // 0x00000A70
	 { 1037, 172, -553, 0, 2599, 1134, 89, 89, 89, 255 }, // 0x00000A80
	 { 1263, 172, -720, 0, 946, 1024, 127, 127, 127, 255 }, // 0x00000A90
	 { 1401, 338, -884, 0, -549, -147, 89, 89, 89, 255 }, // 0x00000AA0
	 { 1388, 172, -894, 0, -553, 1024, 255, 255, 255, 255 }, // 0x00000AB0
	 { 1398, 338, -1076, 0, -1499, -12, 63, 63, 63, 255 }, // 0x00000AC0
	 { 1380, 172, -1079, 0, -1438, 1160, 229, 229, 229, 255 }, // 0x00000AD0
	 { 1398, 338, -1076, 0, 2560, -284, 63, 63, 63, 255 }, // 0x00000AE0
	 { 1282, 338, -1197, 0, 1586, -231, 63, 63, 63, 255 }, // 0x00000AF0
	 { 1257, 172, -1193, 0, 1535, 1024, 255, 255, 255, 255 }, // 0x00000B00
	 { 1380, 172, -1079, 0, 2450, 968, 229, 229, 229, 255 }, // 0x00000B10
	 { 1245, 338, -1533, 0, -1038, -199, 19, 31, 26, 255 }, // 0x00000B20
	 { 1282, 172, -1526, 0, -1106, 1024, 153, 153, 153, 255 }, // 0x00000B30
	 { 1245, 338, -1533, 0, 2107, -49, 19, 31, 26, 255 }, // 0x00000B40
	 { 1064, 338, -1704, 0, 510, -237, 89, 89, 89, 255 }, // 0x00000B50
	 { 1046, 172, -1690, 0, 409, 976, 163, 193, 193, 255 }, // 0x00000B60
	 { 1282, 172, -1526, 0, 2379, 1130, 153, 153, 153, 255 }, // 0x00000B70
	 { 756, 264, -1637, 0, -1537, 511, 76, 76, 76, 255 }, // 0x00000B80
	 { 742, 172, -1615, 0, -1596, 1211, 163, 193, 193, 255 }, // 0x00000B90
	 { 756, 264, -1637, 0, 23, -1477, 76, 76, 76, 255 }, // 0x00000BA0
	 { 730, 172, -1708, 0, -785, -386, 216, 216, 216, 255 }, // 0x00000BB0
	 { 742, 172, -1615, 0, 292, -386, 255, 255, 255, 255 }, // 0x00000BC0
	 { 856, 326, -1450, 0, 1496, -3423, 89, 89, 89, 255 }, // 0x00000BD0
	 { 770, 368, -1522, 0, 1828, -4460, 140, 140, 140, 255 }, // 0x00000BE0
	 { 1015, 441, -1594, 0, -558, -3795, 51, 51, 51, 255 }, // 0x00000BF0
};

Vtx_t _ice_doukutu_room_8_vertices_00000C00[32] = 
{
	 { 770, 368, -1522, 0, 1828, -4460, 140, 140, 140, 255 }, // 0x00000C00
	 { 685, 334, -1594, 0, 2217, -5456, 51, 51, 51, 255 }, // 0x00000C10
	 { 1015, 441, -1594, 0, -558, -3795, 51, 51, 51, 255 }, // 0x00000C20
	 { 986, 338, -1507, 0, 151, -3211, 76, 76, 76, 255 }, // 0x00000C30
	 { 856, 326, -1450, 0, 1496, -3423, 89, 89, 89, 255 }, // 0x00000C40
	 { 714, 315, -1454, 0, 2647, -4178, 89, 89, 89, 255 }, // 0x00000C50
	 { 537, 211, -1544, 0, 3751, -5756, 89, 89, 89, 255 }, // 0x00000C60
	 { 756, 264, -1637, 0, 1483, -5394, 76, 76, 76, 255 }, // 0x00000C70
	 { 1064, 338, -1704, 0, -1621, -3907, 89, 89, 89, 255 }, // 0x00000C80
	 { 563, 172, -1708, 0, 2806, -6906, 216, 216, 216, 255 }, // 0x00000C90
	 { 646, 210, -1745, 0, 2091, -6494, 153, 153, 153, 255 }, // 0x00000CA0
	 { 730, 172, -1708, 0, 1434, -6041, 216, 216, 216, 255 }, // 0x00000CB0
	 { 497, 172, -760, 0, -1587, 1150, 153, 153, 153, 255 }, // 0x00000CC0
	 { 628, 316, -902, 0, -435, -145, 89, 89, 89, 255 }, // 0x00000CD0
	 { 497, 292, -760, 0, -1587, 183, 153, 153, 153, 255 }, // 0x00000CE0
	 { 633, 172, -896, 0, -389, 1024, 178, 178, 178, 255 }, // 0x00000CF0
	 { 881, 172, -931, 0, 1264, 1024, 165, 165, 165, 255 }, // 0x00000D00
	 { 874, 327, -940, 0, 1201, -235, 51, 51, 51, 255 }, // 0x00000D10
	 { 1005, 255, -744, 0, 2499, 431, 165, 165, 165, 255 }, // 0x00000D20
	 { 1034, 338, -752, 0, 2645, -202, 127, 127, 127, 255 }, // 0x00000D30
	 { 1019, 172, -733, 0, 2698, 1125, 216, 216, 216, 255 }, // 0x00000D40
	 { 1019, 172, -733, 0, -193, 1002, 216, 216, 216, 255 }, // 0x00000D50
	 { 1108, 172, -841, 0, 423, 1078, 216, 216, 216, 255 }, // 0x00000D60
	 { 1005, 255, -744, 0, -133, 368, 165, 165, 165, 255 }, // 0x00000D70
	 { 1034, 172, -961, 0, -1054, 926, 153, 153, 153, 255 }, // 0x00000D80
	 { 1000, 338, -953, 0, -987, -609, 63, 63, 63, 255 }, // 0x00000D90
	 { 1108, 172, -841, 0, -1691, 560, 216, 216, 216, 255 }, // 0x00000DA0
	 { 1064, 338, -801, 0, 92, -200, 63, 63, 63, 255 }, // 0x00000DB0
	 { 1108, 172, -841, 0, 423, 1078, 216, 216, 216, 255 }, // 0x00000DC0
	 { 1000, 338, -953, 0, 1289, -295, 63, 63, 63, 255 }, // 0x00000DD0
	 { 1064, 338, -801, 0, 92, -200, 63, 63, 63, 255 }, // 0x00000DE0
	 { 1034, 338, -752, 0, -463, -218, 127, 127, 127, 255 }, // 0x00000DF0
};

Vtx_t _ice_doukutu_room_8_vertices_00000E00[32] = 
{
	 { 1034, 172, -961, 0, -1054, 926, 153, 153, 153, 255 }, // 0x00000E00
	 { 904, 338, -1028, 0, -138, -531, 63, 63, 63, 255 }, // 0x00000E10
	 { 1000, 338, -953, 0, -987, -609, 63, 63, 63, 255 }, // 0x00000E20
	 { 927, 172, -1027, 0, -199, 1006, 204, 204, 204, 255 }, // 0x00000E30
	 { 892, 172, -1200, 0, 655, 1085, 242, 242, 242, 255 }, // 0x00000E40
	 { 870, 338, -1200, 0, 710, -453, 63, 63, 63, 255 }, // 0x00000E50
	 { 974, 172, -1497, 0, 2549, 773, 229, 229, 229, 255 }, // 0x00000E60
	 { 963, 255, -1491, 0, 2404, 40, 165, 165, 165, 255 }, // 0x00000E70
	 { 986, 338, -1507, 0, 2619, -848, 76, 76, 76, 255 }, // 0x00000E80
	 { 974, 172, -1497, 0, -137, 1034, 229, 229, 229, 255 }, // 0x00000E90
	 { 936, 172, -1507, 0, 95, 1017, 204, 204, 204, 255 }, // 0x00000EA0
	 { 963, 255, -1491, 0, -30, 344, 165, 165, 165, 255 }, // 0x00000EB0
	 { 852, 172, -1444, 0, 959, 1024, 178, 178, 178, 255 }, // 0x00000EC0
	 { 856, 326, -1450, 0, 906, -261, 89, 89, 89, 255 }, // 0x00000ED0
	 { 936, 172, -1507, 0, 95, 1017, 204, 204, 204, 255 }, // 0x00000EE0
	 { 986, 338, -1507, 0, -267, -347, 76, 76, 76, 255 }, // 0x00000EF0
	 { 852, 172, -1444, 0, -1020, -130, 178, 178, 178, 255 }, // 0x00000F00
	 { 718, 172, -1453, 0, 0, 33, 178, 178, 178, 255 }, // 0x00000F10
	 { 714, 315, -1454, 0, 31, -1145, 89, 89, 89, 255 }, // 0x00000F20
	 { 856, 326, -1450, 0, -1026, -1424, 89, 89, 89, 255 }, // 0x00000F30
	 { 718, 52, -1453, 0, 0, 1024, 255, 255, 255, 255 }, // 0x00000F40
	 { 557, 52, -1553, 0, 1640, 1024, 255, 255, 255, 255 }, // 0x00000F50
	 { 537, 211, -1544, 0, 1744, -244, 89, 89, 89, 255 }, // 0x00000F60
	 { 557, 52, -1553, 0, 3979, 1024, 255, 255, 255, 255 }, // 0x00000F70
	 { 563, 52, -1708, 0, 5201, 1024, 255, 255, 255, 255 }, // 0x00000F80
	 { 537, 211, -1544, 0, 3874, 0, 89, 89, 89, 255 }, // 0x00000F90
	 { 563, 172, -1708, 0, 5201, 0, 216, 216, 216, 255 }, // 0x00000FA0
	 { 1245, 338, -1533, 0, -2093, -2075, 19, 31, 26, 255 }, // 0x00000FB0
	 { 1096, 414, -1420, 0, -402, -1990, 41, 60, 56, 255 }, // 0x00000FC0
	 { 1064, 338, -1704, 0, -1621, -3907, 89, 89, 89, 255 }, // 0x00000FD0
	 { 1015, 441, -1594, 0, -558, -3795, 51, 51, 51, 255 }, // 0x00000FE0
	 { 986, 338, -1507, 0, 151, -3211, 76, 76, 76, 255 }, // 0x00000FF0
};

Vtx_t _ice_doukutu_room_8_vertices_00001000[32] = 
{
	 { 1096, 414, -1420, 0, -402, -1990, 41, 60, 56, 255 }, // 0x00001000
	 { 870, 338, -1200, 0, 2168, -2009, 63, 63, 63, 255 }, // 0x00001010
	 { 986, 338, -1507, 0, 151, -3211, 76, 76, 76, 255 }, // 0x00001020
	 { 1245, 338, -1533, 0, -2093, -2075, 19, 31, 26, 255 }, // 0x00001030
	 { 1282, 338, -1197, 0, -1193, 145, 63, 63, 63, 255 }, // 0x00001040
	 { 1144, 443, -939, 0, 527, 489, 10, 15, 13, 255 }, // 0x00001050
	 { 1398, 338, -1076, 0, -1225, 1222, 63, 63, 63, 255 }, // 0x00001060
	 { 1401, 338, -884, 0, -1256, 2299, 89, 89, 89, 255 }, // 0x00001070
	 { 904, 338, -1028, 0, 2104, -1136, 63, 63, 63, 255 }, // 0x00001080
	 { 1000, 338, -953, 0, 2040, -263, 63, 63, 63, 255 }, // 0x00001090
	 { 1274, 338, -711, 0, 595, 3013, 41, 60, 56, 255 }, // 0x000010A0
	 { 1094, 371, -717, 0, 2336, 2304, 89, 89, 89, 255 }, // 0x000010B0
	 { 1031, 315, -522, 0, 3274, 3013, 89, 89, 89, 255 }, // 0x000010C0
	 { 1094, 371, -717, 0, -494, -350, 89, 89, 89, 255 }, // 0x000010D0
	 { 1064, 338, -801, 0, 92, -200, 63, 63, 63, 255 }, // 0x000010E0
	 { 1000, 338, -953, 0, 1289, -295, 63, 63, 63, 255 }, // 0x000010F0
	 { 1034, 338, -752, 0, -463, -218, 127, 127, 127, 255 }, // 0x00001100
	 { 708, 293, -744, 0, -239, 1019, 127, 127, 127, 255 }, // 0x00001110
	 { 551, 323, -705, 0, 1428, 1019, 216, 216, 216, 255 }, // 0x00001120
	 { 636, 336, -765, 0, 639, 477, 51, 51, 51, 255 }, // 0x00001130
	 { 551, 323, -705, 0, 6562, -668, 216, 216, 216, 255 }, // 0x00001140
	 { 628, 316, -902, 0, 4956, -1648, 89, 89, 89, 255 }, // 0x00001150
	 { 636, 336, -765, 0, 5574, -716, 51, 51, 51, 255 }, // 0x00001160
	 { 708, 293, -744, 0, 5063, 38, 127, 127, 127, 255 }, // 0x00001170
	 { 594, 319, -661, 0, 6415, -93, 216, 216, 216, 255 }, // 0x00001180
	 { 611, 292, -642, 0, 6285, 494, 216, 216, 216, 255 }, // 0x00001190
	 { 497, 292, -760, 0, 6773, -1368, 153, 153, 153, 255 }, // 0x000011A0
	 { 636, 336, -765, 0, 5574, -716, 51, 51, 51, 255 }, // 0x000011B0
	 { 868, 367, -821, 0, 3733, 187, 51, 51, 51, 255 }, // 0x000011C0
	 { 821, 304, -787, 0, 4672, 584, 127, 127, 127, 255 }, // 0x000011D0
	 { 874, 327, -940, 0, 3314, -582, 51, 51, 51, 255 }, // 0x000011E0
	 { 1034, 338, -752, 0, 2476, 1323, 127, 127, 127, 255 }, // 0x000011F0
};

Vtx_t _ice_doukutu_room_8_vertices_00001200[11] = 
{
	 { 1094, 371, -717, 0, 2336, 2304, 89, 89, 89, 255 }, // 0x00001200
	 { 893, 309, -606, 0, 4231, 1892, 127, 127, 127, 255 }, // 0x00001210
	 { 868, 367, -821, 0, 3733, 187, 51, 51, 51, 255 }, // 0x00001220
	 { 1031, 315, -522, 0, 3274, 3013, 89, 89, 89, 255 }, // 0x00001230
	 { 821, 304, -787, 0, 4672, 584, 127, 127, 127, 255 }, // 0x00001240
	 { 730, 172, -1708, 0, -785, -386, 216, 216, 216, 255 }, // 0x00001250
	 { 730, 52, -1708, 0, -785, 1024, 255, 255, 255, 255 }, // 0x00001260
	 { 742, 52, -1615, 0, 292, 1024, 255, 255, 255, 255 }, // 0x00001270
	 { 742, 172, -1615, 0, 292, -386, 255, 255, 255, 255 }, // 0x00001280
	 { 718, 52, -1453, 0, 2210, 1024, 255, 255, 255, 255 }, // 0x00001290
	 { 718, 168, -1453, 0, 2210, -386, 178, 178, 178, 255 }, // 0x000012A0
};

Vtx_t _ice_doukutu_room_8_vertices_000012B0[8] = 
{
	 { 365, -12, -1695, 0, 0, 0, 0, 0, 0, 0 }, // 0x000012B0
	 { 585, -12, -444, 0, 0, 0, 0, 0, 0, 0 }, // 0x000012C0
	 { 1293, 154, -1859, 0, 0, 0, 0, 0, 0, 0 }, // 0x000012D0
	 { 1514, 154, -608, 0, 0, 0, 0, 0, 0, 0 }, // 0x000012E0
	 { 307, 321, -1685, 0, 0, 0, 0, 0, 0, 0 }, // 0x000012F0
	 { 527, 321, -434, 0, 0, 0, 0, 0, 0, 0 }, // 0x00001300
	 { 1235, 487, -1848, 0, 0, 0, 0, 0, 0, 0 }, // 0x00001310
	 { 1456, 487, -597, 0, 0, 0, 0, 0, 0, 0 }, // 0x00001320
};

Gfx _ice_doukutu_room_8_dlist_00001330[] =
{
	gsDPPipeSync(), // 0x00001330
	gsSPGeometryMode(0xFF030000, 0x00000000), // 0x00001338
	gsSPVertex(_ice_doukutu_room_8_vertices_000012B0, 8, 0), // 0x00001340
	gsSPCullDisplayList(0, 7), // 0x00001348
	gsDPPipeSync(), // 0x00001350
	gsSPGeometryMode(0xFF000000, 0x00030000), // 0x00001358
	gsSPSetOtherMode(0xE3, 14, 2, 0x00000000), // 0x00001360
	gsSPTexture(65535, 65535, 0, 0, 1), // 0x00001368
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, _ice_doukutu_scene_tex_000100C0), // 0x00001370
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0), // 0x00001378
	gsDPLoadSync(), // 0x00001380
	gsDPLoadBlock(7, 0, 0, 1023, 256), // 0x00001388
	gsDPPipeSync(), // 0x00001390
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0), // 0x00001398
	gsDPSetTileSize(0, 0, 0, 124, 124), // 0x000013A0
	gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, _ice_doukutu_scene_tex_0000FCC0), // 0x000013A8
	gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 256, 7, 0, 0, 5, 15, 0, 5, 15), // 0x000013B0
	gsDPLoadSync(), // 0x000013B8
	gsDPLoadBlock(7, 0, 0, 511, 512), // 0x000013C0
	gsDPPipeSync(), // 0x000013C8
	gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 256, 1, 0, 0, 5, 15, 0, 5, 15), // 0x000013D0
	gsDPSetTileSize(1, 0, 0, 124, 124), // 0x000013D8
	gsDPSetCombineLERP(TEXEL1, TEXEL0, ENV_ALPHA, TEXEL0, 0, 0, 0, 1, COMBINED, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, COMBINED), // 0x000013E0
	gsSPSetOtherMode(0xE2, 3, 29, 0xC8112078), // 0x000013E8
	gsSPGeometryMode(0xFF0E0000, 0x00000000), // 0x000013F0
	gsSPGeometryMode(0xFF000000, 0x00010400), // 0x000013F8
	gsDPSetPrimColor(0, 0, 255, 255, 255, 255), // 0x00001400
	gsSPVertex(_ice_doukutu_room_8_vertices_00000600, 32, 0), // 0x00001408
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0), // 0x00001410
	gsSP2Triangles(4, 5, 3, 0, 4, 6, 5, 0), // 0x00001418
	gsSP2Triangles(0, 2, 7, 0, 8, 9, 10, 0), // 0x00001420
	gsSP2Triangles(11, 12, 9, 0, 8, 13, 14, 0), // 0x00001428
	gsSP2Triangles(8, 15, 13, 0, 8, 10, 15, 0), // 0x00001430
	gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0), // 0x00001438
	gsSP2Triangles(16, 19, 20, 0, 16, 20, 21, 0), // 0x00001440
	gsSP2Triangles(16, 21, 17, 0, 22, 23, 24, 0), // 0x00001448
	gsSP2Triangles(22, 24, 25, 0, 22, 26, 27, 0), // 0x00001450
	gsSP2Triangles(22, 27, 28, 0, 22, 28, 23, 0), // 0x00001458
	gsSP1Triangle(29, 30, 31, 0), // 0x00001460
	gsSPVertex(_ice_doukutu_room_8_vertices_00000800, 32, 0), // 0x00001468
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0), // 0x00001470
	gsSP2Triangles(0, 4, 3, 0, 0, 5, 4, 0), // 0x00001478
	gsSP2Triangles(6, 7, 8, 0, 6, 9, 7, 0), // 0x00001480
	gsSP2Triangles(6, 10, 9, 0, 6, 11, 10, 0), // 0x00001488
	gsSP2Triangles(6, 8, 11, 0, 12, 13, 14, 0), // 0x00001490
	gsSP2Triangles(12, 14, 15, 0, 12, 15, 16, 0), // 0x00001498
	gsSP2Triangles(12, 16, 17, 0, 12, 17, 13, 0), // 0x000014A0
	gsSP2Triangles(18, 19, 20, 0, 18, 21, 19, 0), // 0x000014A8
	gsSP2Triangles(18, 22, 21, 0, 18, 23, 22, 0), // 0x000014B0
	gsSP2Triangles(18, 20, 23, 0, 24, 25, 26, 0), // 0x000014B8
	gsSP2Triangles(24, 26, 27, 0, 28, 29, 30, 0), // 0x000014C0
	gsSP1Triangle(28, 31, 29, 0), // 0x000014C8
	gsSPVertex(_ice_doukutu_room_8_vertices_00000A00, 32, 0), // 0x000014D0
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0), // 0x000014D8
	gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0), // 0x000014E0
	gsSP2Triangles(6, 7, 8, 0, 7, 9, 8, 0), // 0x000014E8
	gsSP2Triangles(7, 10, 11, 0, 7, 11, 9, 0), // 0x000014F0
	gsSP2Triangles(10, 12, 13, 0, 10, 13, 11, 0), // 0x000014F8
	gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0), // 0x00001500
	gsSP2Triangles(15, 18, 19, 0, 15, 19, 16, 0), // 0x00001508
	gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0), // 0x00001510
	gsSP2Triangles(21, 24, 25, 0, 21, 25, 22, 0), // 0x00001518
	gsSP2Triangles(26, 27, 28, 0, 29, 30, 31, 0), // 0x00001520
	gsSPVertex(_ice_doukutu_room_8_vertices_00000C00, 32, 0), // 0x00001528
	gsSP2Triangles(0, 1, 2, 0, 3, 4, 2, 0), // 0x00001530
	gsSP2Triangles(4, 5, 0, 0, 5, 1, 0, 0), // 0x00001538
	gsSP2Triangles(5, 6, 1, 0, 1, 7, 2, 0), // 0x00001540
	gsSP2Triangles(7, 8, 2, 0, 6, 9, 1, 0), // 0x00001548
	gsSP2Triangles(9, 10, 1, 0, 10, 11, 1, 0), // 0x00001550
	gsSP2Triangles(11, 7, 1, 0, 12, 13, 14, 0), // 0x00001558
	gsSP2Triangles(12, 15, 13, 0, 15, 16, 17, 0), // 0x00001560
	gsSP2Triangles(15, 17, 13, 0, 16, 18, 17, 0), // 0x00001568
	gsSP2Triangles(18, 19, 17, 0, 16, 20, 18, 0), // 0x00001570
	gsSP2Triangles(21, 22, 23, 0, 24, 25, 26, 0), // 0x00001578
	gsSP2Triangles(27, 23, 28, 0, 29, 30, 22, 0), // 0x00001580
	gsSP1Triangle(30, 31, 23, 0), // 0x00001588
	gsSPVertex(_ice_doukutu_room_8_vertices_00000E00, 32, 0), // 0x00001590
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0), // 0x00001598
	gsSP2Triangles(3, 4, 5, 0, 3, 5, 1, 0), // 0x000015A0
	gsSP2Triangles(4, 6, 5, 0, 6, 7, 5, 0), // 0x000015A8
	gsSP2Triangles(7, 8, 5, 0, 9, 10, 11, 0), // 0x000015B0
	gsSP2Triangles(10, 12, 13, 0, 14, 13, 11, 0), // 0x000015B8
	gsSP2Triangles(13, 15, 11, 0, 16, 17, 18, 0), // 0x000015C0
	gsSP2Triangles(16, 18, 19, 0, 20, 21, 22, 0), // 0x000015C8
	gsSP2Triangles(20, 22, 17, 0, 22, 18, 17, 0), // 0x000015D0
	gsSP2Triangles(23, 24, 25, 0, 24, 26, 25, 0), // 0x000015D8
	gsSP2Triangles(27, 28, 29, 0, 28, 30, 29, 0), // 0x000015E0
	gsSP1Triangle(28, 31, 30, 0), // 0x000015E8
	gsSPVertex(_ice_doukutu_room_8_vertices_00001000, 32, 0), // 0x000015F0
	gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0), // 0x000015F8
	gsSP2Triangles(4, 5, 0, 0, 4, 6, 5, 0), // 0x00001600
	gsSP2Triangles(6, 7, 5, 0, 5, 1, 0, 0), // 0x00001608
	gsSP2Triangles(5, 8, 1, 0, 5, 9, 8, 0), // 0x00001610
	gsSP2Triangles(7, 10, 5, 0, 10, 11, 5, 0), // 0x00001618
	gsSP2Triangles(10, 12, 11, 0, 11, 9, 5, 0), // 0x00001620
	gsSP2Triangles(13, 14, 15, 0, 13, 16, 14, 0), // 0x00001628
	gsSP2Triangles(17, 18, 19, 0, 20, 21, 22, 0), // 0x00001630
	gsSP2Triangles(23, 24, 20, 0, 23, 25, 24, 0), // 0x00001638
	gsSP2Triangles(20, 26, 21, 0, 23, 27, 28, 0), // 0x00001640
	gsSP2Triangles(23, 28, 29, 0, 27, 21, 30, 0), // 0x00001648
	gsSP2Triangles(27, 30, 28, 0, 30, 31, 28, 0), // 0x00001650
	gsSP1Triangle(31, 11, 28, 0), // 0x00001658
	gsSPVertex(_ice_doukutu_room_8_vertices_00001200, 11, 0), // 0x00001660
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0), // 0x00001668
	gsSP2Triangles(1, 4, 2, 0, 5, 6, 7, 0), // 0x00001670
	gsSP2Triangles(5, 7, 8, 0, 7, 9, 10, 0), // 0x00001678
	gsSP1Triangle(7, 10, 8, 0), // 0x00001680
	gsSPEndDisplayList(), // 0x00001688
};

Vtx_t _ice_doukutu_room_8_vertices_00001690[16] = 
{
	 { 1282, 172, -1526, 0, 2372, -5670, 255, 255, 255, 255 }, // 0x00001690
	 { 1112, 172, -1568, 0, 439, -6559, 178, 239, 255, 255 }, // 0x000016A0
	 { 1038, 172, -1557, 0, -472, -6594, 178, 239, 255, 255 }, // 0x000016B0
	 { 974, 172, -1497, 0, -1382, -6026, 69, 217, 255, 255 }, // 0x000016C0
	 { 892, 172, -1200, 0, -3048, -2662, 255, 255, 255, 255 }, // 0x000016D0
	 { 1257, 172, -1193, 0, 1303, -1741, 124, 228, 254, 255 }, // 0x000016E0
	 { 927, 172, -1027, 0, -3031, -520, 71, 162, 183, 255 }, // 0x000016F0
	 { 1034, 172, -961, 0, -1900, 528, 178, 239, 255, 255 }, // 0x00001700
	 { 1380, 172, -1079, 0, 2507, -88, 255, 255, 255, 255 }, // 0x00001710
	 { 1388, 172, -894, 0, 2180, 2143, 57, 168, 197, 255 }, // 0x00001720
	 { 1108, 172, -841, 0, -1289, 2125, 178, 239, 255, 255 }, // 0x00001730
	 { 1380, 172, -1079, 0, 2507, -88, 178, 239, 255, 255 }, // 0x00001740
	 { 1150, 172, -828, 0, -820, 2384, 124, 228, 254, 255 }, // 0x00001750
	 { 1178, 172, -768, 0, -615, 3163, 255, 255, 255, 255 }, // 0x00001760
	 { 1263, 172, -720, 0, 291, 3930, 178, 239, 255, 255 }, // 0x00001770
	 { 1227, 172, -768, 0, -29, 3279, 124, 228, 254, 255 }, // 0x00001780
};

Vtx_t _ice_doukutu_room_8_vertices_00001790[8] = 
{
	 { 1288, 172, -1601, 0, 0, 0, 0, 0, 0, 0 }, // 0x00001790
	 { 1437, 172, -751, 0, 0, 0, 0, 0, 0, 0 }, // 0x000017A0
	 { 1288, 172, -1601, 0, 0, 0, 0, 0, 0, 0 }, // 0x000017B0
	 { 1437, 172, -751, 0, 0, 0, 0, 0, 0, 0 }, // 0x000017C0
	 { 835, 172, -1521, 0, 0, 0, 0, 0, 0, 0 }, // 0x000017D0
	 { 985, 172, -671, 0, 0, 0, 0, 0, 0, 0 }, // 0x000017E0
	 { 835, 172, -1521, 0, 0, 0, 0, 0, 0, 0 }, // 0x000017F0
	 { 985, 172, -671, 0, 0, 0, 0, 0, 0, 0 }, // 0x00001800
};

Gfx _ice_doukutu_room_8_dlist_00001810[] =
{
	gsDPPipeSync(), // 0x00001810
	gsSPGeometryMode(0xFF030000, 0x00000000), // 0x00001818
	gsSPVertex(_ice_doukutu_room_8_vertices_00001790, 8, 0), // 0x00001820
	gsSPCullDisplayList(0, 7), // 0x00001828
	gsDPPipeSync(), // 0x00001830
	gsSPGeometryMode(0xFF000000, 0x00030000), // 0x00001838
	gsSPSetOtherMode(0xE3, 14, 2, 0x00000000), // 0x00001840
	gsSPTexture(65535, 65535, 0, 0, 1), // 0x00001848
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, _ice_doukutu_scene_tex_00010EC0), // 0x00001850
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0), // 0x00001858
	gsDPLoadSync(), // 0x00001860
	gsDPLoadBlock(7, 0, 0, 1023, 256), // 0x00001868
	gsDPPipeSync(), // 0x00001870
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0), // 0x00001878
	gsDPSetTileSize(0, 0, 0, 124, 124), // 0x00001880
	gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, 1, COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED), // 0x00001888
	gsSPSetOtherMode(0xE2, 3, 29, 0xC8112078), // 0x00001890
	gsSPGeometryMode(0xFF0E0000, 0x00000000), // 0x00001898
	gsSPGeometryMode(0xFF000000, 0x00010400), // 0x000018A0
	gsDPSetPrimColor(0, 0, 255, 255, 255, 255), // 0x000018A8
	gsSPVertex(_ice_doukutu_room_8_vertices_00001690, 16, 0), // 0x000018B0
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0), // 0x000018B8
	gsSP2Triangles(0, 3, 4, 0, 5, 4, 6, 0), // 0x000018C0
	gsSP2Triangles(5, 6, 7, 0, 8, 5, 7, 0), // 0x000018C8
	gsSP2Triangles(9, 8, 10, 0, 10, 11, 7, 0), // 0x000018D0
	gsSP2Triangles(9, 12, 13, 0, 5, 0, 4, 0), // 0x000018D8
	gsSP2Triangles(9, 10, 12, 0, 14, 9, 15, 0), // 0x000018E0
	gsSP1Triangle(9, 13, 15, 0), // 0x000018E8
	gsSPEndDisplayList(), // 0x000018F0
};

Gfx _ice_doukutu_room_8_dlist_000018F8[] =
{
	gsSPDisplayList(_ice_doukutu_room_8_dlist_00000480), // 0x000018F8
	gsSPDisplayList(_ice_doukutu_room_8_dlist_00001330), // 0x00001900
	gsSPDisplayList(_ice_doukutu_room_8_dlist_00001810), // 0x00001908
	gsSPEndDisplayList(), // 0x00001910
};

static u8 unaccounted1918[] = 
{
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};


