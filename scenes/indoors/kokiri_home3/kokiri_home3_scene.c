#include <ultra64.h>
#include <z64.h>
#include "kokiri_home3_scene.h"
#include <z64.h>
#include <segment_symbols.h>
#include <command_macros_base.h>
#include <z64cutscene_commands.h>
#include <variables.h>



SCmdSoundSettings _kokiri_home3_scene_set0000_cmd00 = { 0x15, 0x05, 0x00, 0x00, 0x00, 0x00, 0x13, 0x1F }; // 0x0000
SCmdRoomList _kokiri_home3_scene_set0000_cmd01 = { 0x04, 0x01, (u32)&_kokiri_home3_scene_roomList_00000068 }; // 0x0008
SCmdMiscSettings _kokiri_home3_scene_set0000_cmd02 = { 0x19, 0x20, 0x00000004 }; // 0x0010
SCmdColHeader _kokiri_home3_scene_set0000_cmd03 = { 0x03, 0x00, (u32)&_kokiri_home3_scene_collisionHeader_00001774}; // 0x0018
SCmdEntranceList _kokiri_home3_scene_set0000_cmd04 = { 0x06, 0x00, (u32)&_kokiri_home3_scene_entranceList_00000070 }; // 0x0020
SCmdSpecialFiles _kokiri_home3_scene_set0000_cmd05 = { 0x07, 0x00, 0x0002}; // 0x0028
SCmdSpawnList _kokiri_home3_scene_set0000_cmd06 = { 0x00, 0x01, (u32)&_kokiri_home3_scene_startPositionList_00000058}; // 0x0030
SCmdSkyboxSettings _kokiri_home3_scene_set0000_cmd07 = { 0x11, 0x00, 0x00, 0x00, 0x0E, 0x00, 0x01}; // 0x0038
SCmdExitList _kokiri_home3_scene_set0000_cmd08 = { 0x13, 0x00, (u32)&_kokiri_home3_scene_exitList_00000074 }; // 0x0040
SCmdLightSettingList _kokiri_home3_scene_set0000_cmd09 = { 0x0F, 1, (u32)&_kokiri_home3_scene_lightSettings_00000078}; // 0x0048
SCmdEndMarker _kokiri_home3_scene_set0000_cmd0A = { 0x14, 0x00, 0x00 }; // 0x0050
ActorEntry _kokiri_home3_scene_startPositionList_00000058[] = 
{
	{ ACTOR_PLAYER, -1, 0, -156, 0, 0, 0, 0x0E00 },
};

RomFile _kokiri_home3_scene_roomList_00000068[] = 
{
	{ (u32)_kokiri_home3_room_0SegmentRomStart, (u32)_kokiri_home3_room_0SegmentRomEnd },
};

EntranceEntry _kokiri_home3_scene_entranceList_00000070[] = 
{
	{ 0x00, 0x00 }, //0x00000070 
	{ 0x00, 0x00 }, //0x00000072 
};

u16 _kokiri_home3_scene_exitList_00000074[] = 
{
	0x033C,
	0x0000,
};

LightSettings _kokiri_home3_scene_lightSettings_00000078[] = 
{
	{ 0x46, 0x3C, 0x32, 0xD6, 0x59, 0x4F, 0xF0, 0xDC, 0xD2, 0x03, 0x6A, 0xBB, 0xC8, 0xB4, 0xAA, 0x0A, 0x0A, 0x0A, 0x07E0, 0x07D0 }, // 0x00000078 
};

CamPosData _kokiri_home3_scene_camPosData_00000090[] = 
{
	{ -112, 392, 60, 13107, 21845, 0, 5000, -1, 0xFFFF }, // 0x02000090
	{ -140, 40, -24, 0, 0, 0, 6000, -1, 0xFFFF }, // 0x020000A2
};

CamData _kokiri_home3_scene_camData_000000B4 = { 0x0019, 0x0003, (u32)_kokiri_home3_scene_camPosData_00000090 };

CamPosDataEntry _kokiri_home3_scene_camPosDataEntries_000000BC[] = 
{
	{ 0x001A0003, (u32)&_kokiri_home3_scene_camPosData_00000090[1] }, // 0x000000BC
	{ 0x00000000, 0x00000000 }, // 0x000000C4
};

u32 _kokiri_home3_scene_polygonTypes_000000CC[] = 
{
	 0x00000002, 0x00000800, 
	 0x00000002, 0x0000080A, 
	 0x00000102, 0x040C0800, 
	 0x00000002, 0x00000808, 
	 0x00000002, 0x00000FC0, 
};

RoomPoly _kokiri_home3_scene_polygons_000000F4[] = 
{
	{ 0x0000, 0x0030, 0x0031, 0x0032, 0x287A, 0x0000, 0x8692, 0x0075 }, // 0x000000F4
	{ 0x0000, 0x0030, 0x0032, 0x0033, 0x287A, 0x0000, 0x8692, 0x0075 }, // 0x00000104
	{ 0x0000, 0x0031, 0x0034, 0x0035, 0xDCD6, 0x0000, 0x84EE, 0x002B }, // 0x00000114
	{ 0x0000, 0x0031, 0x0035, 0x0032, 0xDCD6, 0x0000, 0x84EE, 0x002B }, // 0x00000124
	{ 0x0000, 0x0034, 0x0036, 0x0037, 0xA57E, 0x0000, 0xA57E, 0xFFDC }, // 0x00000134
	{ 0x0000, 0x0034, 0x0037, 0x0035, 0xA57E, 0x0000, 0xA57E, 0xFFDC }, // 0x00000144
	{ 0x0000, 0x0036, 0x0038, 0x0039, 0x81BF, 0x0000, 0xEAF5, 0xFF85 }, // 0x00000154
	{ 0x0000, 0x0036, 0x0039, 0x0037, 0x81BF, 0x0000, 0xEAF5, 0xFF85 }, // 0x00000164
	{ 0x0000, 0x0038, 0x003A, 0x003B, 0x814A, 0x0000, 0x121A, 0xFF68 }, // 0x00000174
	{ 0x0000, 0x0038, 0x003B, 0x0039, 0x814A, 0x0000, 0x121A, 0xFF68 }, // 0x00000184
	{ 0x0000, 0x003A, 0x003C, 0x003D, 0xB00B, 0x0000, 0x63F3, 0xFF5A }, // 0x00000194
	{ 0x0000, 0x003A, 0x003D, 0x003B, 0xB00B, 0x0000, 0x63F3, 0xFF5A }, // 0x000001A4
	{ 0x0000, 0x003C, 0x003E, 0x003F, 0xDCD6, 0x0000, 0x7B12, 0xFF76 }, // 0x000001B4
	{ 0x0000, 0x003C, 0x003F, 0x003D, 0xDCD6, 0x0000, 0x7B12, 0xFF76 }, // 0x000001C4
	{ 0x0000, 0x003E, 0x0040, 0x0041, 0x287A, 0x0000, 0x796E, 0xFFC3 }, // 0x000001D4
	{ 0x0000, 0x003E, 0x0041, 0x003F, 0x287A, 0x0000, 0x796E, 0xFFC3 }, // 0x000001E4
	{ 0x0000, 0x0040, 0x0042, 0x0043, 0x4FF5, 0x0000, 0x63F3, 0xFFFA }, // 0x000001F4
	{ 0x0000, 0x0040, 0x0043, 0x0041, 0x4FF5, 0x0000, 0x63F3, 0xFFFA }, // 0x00000204
	{ 0x0000, 0x0042, 0x0044, 0x0045, 0x7B12, 0x0000, 0x232A, 0x0054 }, // 0x00000214
	{ 0x0000, 0x0042, 0x0045, 0x0043, 0x7B12, 0x0000, 0x232A, 0x0054 }, // 0x00000224
	{ 0x0000, 0x0044, 0x0046, 0x0047, 0x796E, 0x0000, 0xD786, 0x008A }, // 0x00000234
	{ 0x0000, 0x0044, 0x0047, 0x0045, 0x796E, 0x0000, 0xD786, 0x008A }, // 0x00000244
	{ 0x0000, 0x0046, 0x0030, 0x0033, 0x5A82, 0x0000, 0xA57E, 0x0090 }, // 0x00000254
	{ 0x0000, 0x0046, 0x0033, 0x0047, 0x5A82, 0x0000, 0xA57E, 0x0090 }, // 0x00000264
	{ 0x0001, 0x003D, 0x003F, 0x0041, 0x0000, 0x7FFF, 0x0000, 0xFFF0 }, // 0x00000274
	{ 0x0001, 0x003D, 0x0041, 0x0043, 0x0000, 0x7FFF, 0x0000, 0xFFF0 }, // 0x00000284
	{ 0x0001, 0x003D, 0x0043, 0x0045, 0x0000, 0x7FFF, 0x0000, 0xFFF0 }, // 0x00000294
	{ 0x0001, 0x003D, 0x0045, 0x0047, 0x0000, 0x7FFF, 0x0000, 0xFFF0 }, // 0x000002A4
	{ 0x0001, 0x003D, 0x0047, 0x0033, 0x0000, 0x7FFF, 0x0000, 0xFFF0 }, // 0x000002B4
	{ 0x0001, 0x003D, 0x0033, 0x0032, 0x0000, 0x7FFF, 0x0000, 0xFFF0 }, // 0x000002C4
	{ 0x0001, 0x003D, 0x0032, 0x0035, 0x0000, 0x7FFF, 0x0000, 0xFFF0 }, // 0x000002D4
	{ 0x0001, 0x003D, 0x0035, 0x0037, 0x0000, 0x7FFF, 0x0000, 0xFFF0 }, // 0x000002E4
	{ 0x0001, 0x003D, 0x0037, 0x0039, 0x0000, 0x7FFF, 0x0000, 0xFFF0 }, // 0x000002F4
	{ 0x0001, 0x003D, 0x0039, 0x003B, 0x0000, 0x7FFF, 0x0000, 0xFFF0 }, // 0x00000304
	{ 0x0000, 0x0000, 0x0001, 0x0002, 0x0000, 0x0000, 0x7FFF, 0x0154 }, // 0x00000314
	{ 0x0000, 0x0000, 0x0002, 0x0003, 0x0000, 0x0000, 0x7FFF, 0x0154 }, // 0x00000324
	{ 0x0000, 0x0004, 0x0000, 0x0003, 0x8001, 0x0000, 0x0000, 0x001A }, // 0x00000334
	{ 0x0000, 0x0004, 0x0003, 0x0005, 0x8003, 0x0148, 0xFF2F, 0x0018 }, // 0x00000344
	{ 0x0000, 0x0006, 0x0002, 0x0001, 0x7FFF, 0x0000, 0x0000, 0x001A }, // 0x00000354
	{ 0x0000, 0x0006, 0x0001, 0x0007, 0x7FFF, 0x0000, 0x0000, 0x001A }, // 0x00000364
	{ 0x0000, 0x0008, 0x0009, 0x000A, 0x8185, 0x0000, 0x13A0, 0x00B9 }, // 0x00000374
	{ 0x0000, 0x0008, 0x000A, 0x000B, 0x8185, 0x0000, 0x13A0, 0x00B9 }, // 0x00000384
	{ 0x0000, 0x000C, 0x000D, 0x0009, 0x8185, 0x0000, 0xEC60, 0x00B9 }, // 0x00000394
	{ 0x0000, 0x000C, 0x0009, 0x0008, 0x8185, 0x0000, 0xEC60, 0x00B9 }, // 0x000003A4
	{ 0x0000, 0x000E, 0x000F, 0x000D, 0x8E67, 0x0000, 0xC504, 0x00B9 }, // 0x000003B4
	{ 0x0000, 0x000E, 0x000D, 0x000C, 0x8E67, 0x0000, 0xC504, 0x00B9 }, // 0x000003C4
	{ 0x0000, 0x0010, 0x0011, 0x000F, 0xA57E, 0x0000, 0xA57E, 0x00B9 }, // 0x000003D4
	{ 0x0000, 0x0010, 0x000F, 0x000E, 0xA57E, 0x0000, 0xA57E, 0x00B9 }, // 0x000003E4
	{ 0x0000, 0x0012, 0x0013, 0x0011, 0xC504, 0x0000, 0x8E67, 0x00B9 }, // 0x000003F4
	{ 0x0000, 0x0012, 0x0011, 0x0010, 0xC504, 0x0000, 0x8E67, 0x00B9 }, // 0x00000404
	{ 0x0000, 0x0014, 0x0015, 0x0013, 0xEC60, 0x0000, 0x8185, 0x00B9 }, // 0x00000414
	{ 0x0000, 0x0014, 0x0013, 0x0012, 0xEC60, 0x0000, 0x8185, 0x00B9 }, // 0x00000424
	{ 0x0000, 0x0016, 0x0017, 0x0015, 0x13A0, 0x0000, 0x8185, 0x00B9 }, // 0x00000434
	{ 0x0000, 0x0016, 0x0015, 0x0014, 0x13A0, 0x0000, 0x8185, 0x00B9 }, // 0x00000444
	{ 0x0000, 0x0018, 0x0019, 0x0017, 0x3AFC, 0x0000, 0x8E67, 0x00B9 }, // 0x00000454
	{ 0x0000, 0x0018, 0x0017, 0x0016, 0x3AFC, 0x0000, 0x8E67, 0x00B9 }, // 0x00000464
	{ 0x0000, 0x001A, 0x001B, 0x0019, 0x5A82, 0x0000, 0xA57E, 0x00B9 }, // 0x00000474
	{ 0x0000, 0x001A, 0x0019, 0x0018, 0x5A82, 0x0000, 0xA57E, 0x00B9 }, // 0x00000484
	{ 0x0000, 0x001C, 0x001D, 0x001B, 0x7199, 0x0000, 0xC504, 0x00B9 }, // 0x00000494
	{ 0x0000, 0x001C, 0x001B, 0x001A, 0x7199, 0x0000, 0xC504, 0x00B9 }, // 0x000004A4
	{ 0x0000, 0x001E, 0x001F, 0x001D, 0x7E7B, 0x0000, 0xEC60, 0x00B9 }, // 0x000004B4
	{ 0x0000, 0x001E, 0x001D, 0x001C, 0x7E7B, 0x0000, 0xEC60, 0x00B9 }, // 0x000004C4
	{ 0x0000, 0x0020, 0x0021, 0x001F, 0x7E7B, 0x0000, 0x13A0, 0x00B9 }, // 0x000004D4
	{ 0x0000, 0x0020, 0x001F, 0x001E, 0x7E7B, 0x0000, 0x13A0, 0x00B9 }, // 0x000004E4
	{ 0x0000, 0x0022, 0x0023, 0x0021, 0x7199, 0x0000, 0x3AFC, 0x00B9 }, // 0x000004F4
	{ 0x0000, 0x0022, 0x0021, 0x0020, 0x7199, 0x0000, 0x3AFC, 0x00B9 }, // 0x00000504
	{ 0x0000, 0x0024, 0x0025, 0x0023, 0x5A82, 0x0000, 0x5A82, 0x00B9 }, // 0x00000514
	{ 0x0000, 0x0024, 0x0023, 0x0022, 0x5A82, 0x0000, 0x5A82, 0x00B9 }, // 0x00000524
	{ 0x0000, 0x0026, 0x0027, 0x0025, 0x3AFC, 0x0000, 0x7199, 0x00B9 }, // 0x00000534
	{ 0x0000, 0x0026, 0x0025, 0x0024, 0x3AFC, 0x0000, 0x7199, 0x00B9 }, // 0x00000544
	{ 0x0000, 0x0028, 0x0029, 0x002A, 0xC504, 0x0000, 0x7199, 0x00B9 }, // 0x00000554
	{ 0x0000, 0x0028, 0x002A, 0x002B, 0xC504, 0x0000, 0x7199, 0x00B9 }, // 0x00000564
	{ 0x0000, 0x002C, 0x002D, 0x0029, 0xA57E, 0x0000, 0x5A82, 0x00B9 }, // 0x00000574
	{ 0x0000, 0x002C, 0x0029, 0x0028, 0xA57E, 0x0000, 0x5A82, 0x00B9 }, // 0x00000584
	{ 0x0000, 0x000B, 0x000A, 0x002D, 0x8E67, 0x0000, 0x3AFC, 0x00B9 }, // 0x00000594
	{ 0x0000, 0x000B, 0x002D, 0x002C, 0x8E67, 0x0000, 0x3AFC, 0x00B9 }, // 0x000005A4
	{ 0x0000, 0x002E, 0x0004, 0x002F, 0xEC8A, 0x0000, 0x7E82, 0x00B9 }, // 0x000005B4
	{ 0x0000, 0x0004, 0x002A, 0x002F, 0xEC60, 0xFFF8, 0x7E7B, 0x00B9 }, // 0x000005C4
	{ 0x0000, 0x0004, 0x0005, 0x002B, 0xECD3, 0x0031, 0x7E8D, 0x00B9 }, // 0x000005D4
	{ 0x0000, 0x0004, 0x002B, 0x002A, 0xEC3E, 0x0000, 0x7E76, 0x00B9 }, // 0x000005E4
	{ 0x0000, 0x0026, 0x0006, 0x0007, 0x13C2, 0x0000, 0x7E76, 0x00B9 }, // 0x000005F4
	{ 0x0000, 0x0026, 0x0007, 0x0027, 0x13C2, 0x0000, 0x7E76, 0x00B9 }, // 0x00000604
	{ 0x0000, 0x0007, 0x002F, 0x0027, 0x13A0, 0xFFF8, 0x7E7B, 0x00B9 }, // 0x00000614
	{ 0x0000, 0x0007, 0x002E, 0x002F, 0x1376, 0x0000, 0x7E82, 0x00B9 }, // 0x00000624
	{ 0x0000, 0x0001, 0x0000, 0x0004, 0x0000, 0x8001, 0x0000, 0x0064 }, // 0x00000634
	{ 0x0000, 0x0001, 0x0004, 0x002E, 0x0000, 0x8001, 0x0000, 0x0064 }, // 0x00000644
	{ 0x0000, 0x0001, 0x002E, 0x0007, 0x0000, 0x8001, 0x0000, 0x0064 }, // 0x00000654
	{ 0x0002, 0x0003, 0x2002, 0x0006, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x00000664
	{ 0x0002, 0x0003, 0x2006, 0x0005, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x00000674
	{ 0x0000, 0x0006, 0x0026, 0x0024, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x00000684
	{ 0x0000, 0x0006, 0x0024, 0x0022, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x00000694
	{ 0x0000, 0x0006, 0x0022, 0x0020, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x000006A4
	{ 0x0000, 0x0006, 0x0020, 0x001E, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x000006B4
	{ 0x0000, 0x0006, 0x001E, 0x001C, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x000006C4
	{ 0x0000, 0x0006, 0x001C, 0x001A, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x000006D4
	{ 0x0000, 0x0006, 0x001A, 0x0018, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x000006E4
	{ 0x0000, 0x0006, 0x0018, 0x0016, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x000006F4
	{ 0x0000, 0x0006, 0x0016, 0x0014, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x00000704
	{ 0x0000, 0x0006, 0x0014, 0x0012, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x00000714
	{ 0x0000, 0x0006, 0x0012, 0x0010, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x00000724
	{ 0x0000, 0x0006, 0x0010, 0x000E, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x00000734
	{ 0x0000, 0x0006, 0x000E, 0x000C, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x00000744
	{ 0x0000, 0x0006, 0x000C, 0x0008, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x00000754
	{ 0x0000, 0x0006, 0x0008, 0x000B, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x00000764
	{ 0x0000, 0x0006, 0x000B, 0x002C, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x00000774
	{ 0x0000, 0x0006, 0x002C, 0x0028, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x00000784
	{ 0x0000, 0x0006, 0x0028, 0x002B, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x00000794
	{ 0x0000, 0x0006, 0x002B, 0x0005, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x000007A4
	{ 0x0000, 0x0048, 0x0049, 0x004A, 0x7DFA, 0x0000, 0x16A6, 0x007B }, // 0x000007B4
	{ 0x0000, 0x0048, 0x004A, 0x004B, 0x7DFA, 0x0000, 0x16A6, 0x007B }, // 0x000007C4
	{ 0x0000, 0x0049, 0x0048, 0x004C, 0x1564, 0x0000, 0x81CE, 0xFFD1 }, // 0x000007D4
	{ 0x0000, 0x0049, 0x004C, 0x004D, 0x1564, 0x0000, 0x81CE, 0xFFD1 }, // 0x000007E4
	{ 0x0000, 0x004E, 0x004B, 0x004A, 0xE88A, 0x0000, 0x7DD4, 0xFFD3 }, // 0x000007F4
	{ 0x0000, 0x004E, 0x004A, 0x004F, 0xE88A, 0x0000, 0x7DD4, 0xFFD3 }, // 0x00000804
	{ 0x0000, 0x00BE, 0x00BF, 0x00C0, 0xA57E, 0x0000, 0x5A82, 0x007C }, // 0x00000814
	{ 0x0000, 0x00BE, 0x00C0, 0x00BC, 0xA57E, 0x0000, 0x5A82, 0x007C }, // 0x00000824
	{ 0x0000, 0x00C1, 0x00BE, 0x00C2, 0x5A82, 0x0000, 0x5A82, 0xFFDD }, // 0x00000834
	{ 0x0000, 0x00C1, 0x00C2, 0x00C3, 0x5A82, 0x0000, 0x5A82, 0xFFDD }, // 0x00000844
	{ 0x0000, 0x00BD, 0x00BC, 0x00BB, 0xA57E, 0x0000, 0xA57E, 0xFFDD }, // 0x00000854
	{ 0x0000, 0x00BD, 0x00BB, 0x00BA, 0xA57E, 0x0000, 0xA57E, 0xFFDD }, // 0x00000864
	{ 0x0003, 0x00C4, 0x00C5, 0x00C0, 0x0000, 0x7FFF, 0x0000, 0xFFCC }, // 0x00000874
	{ 0x0003, 0x00C4, 0x00C0, 0x00BF, 0x0000, 0x7FFF, 0x0000, 0xFFCC }, // 0x00000884
	{ 0x0000, 0x00C3, 0x00C2, 0x00BE, 0xA57E, 0x0000, 0xA57E, 0x0023 }, // 0x00000894
	{ 0x0000, 0x00C3, 0x00BE, 0x00C1, 0xA57E, 0x0000, 0xA57E, 0x0023 }, // 0x000008A4
	{ 0x0000, 0x00AE, 0x00AF, 0x00B0, 0xA57E, 0x0000, 0xA57E, 0x007C }, // 0x000008B4
	{ 0x0000, 0x00AE, 0x00B0, 0x00B1, 0xA57E, 0x0000, 0xA57E, 0x007C }, // 0x000008C4
	{ 0x0000, 0x00B2, 0x00B3, 0x00AE, 0x5A82, 0x0000, 0xA57E, 0x0023 }, // 0x000008D4
	{ 0x0000, 0x00B2, 0x00AE, 0x00B4, 0x5A82, 0x0000, 0xA57E, 0x0023 }, // 0x000008E4
	{ 0x0000, 0x00B5, 0x00B1, 0x00B6, 0x5A82, 0x0000, 0xA57E, 0xFFDD }, // 0x000008F4
	{ 0x0000, 0x00B5, 0x00B6, 0x00B7, 0x5A82, 0x0000, 0xA57E, 0xFFDD }, // 0x00000904
	{ 0x0003, 0x00B8, 0x00B9, 0x00B0, 0x0000, 0x7FFF, 0x0000, 0xFFCC }, // 0x00000914
	{ 0x0003, 0x00B8, 0x00B0, 0x00AF, 0x0000, 0x7FFF, 0x0000, 0xFFCC }, // 0x00000924
	{ 0x0000, 0x00B7, 0x00B6, 0x00B1, 0xA57E, 0x0000, 0x5A82, 0x0023 }, // 0x00000934
	{ 0x0000, 0x00B7, 0x00B1, 0x00B5, 0xA57E, 0x0000, 0x5A82, 0x0023 }, // 0x00000944
	{ 0x0000, 0x00B4, 0x00AE, 0x00B3, 0xA57E, 0x0000, 0x5A82, 0xFFDD }, // 0x00000954
	{ 0x0000, 0x00B4, 0x00B3, 0x00B2, 0xA57E, 0x0000, 0x5A82, 0xFFDD }, // 0x00000964
	{ 0x0000, 0x00BA, 0x00BB, 0x00BC, 0x5A82, 0x0000, 0x5A82, 0x0023 }, // 0x00000974
	{ 0x0000, 0x00BA, 0x00BC, 0x00BD, 0x5A82, 0x0000, 0x5A82, 0x0023 }, // 0x00000984
	{ 0x0000, 0x0050, 0x0051, 0x0052, 0x7B7C, 0x0000, 0xDE52, 0x008C }, // 0x00000994
	{ 0x0000, 0x0050, 0x0052, 0x0053, 0x7B7C, 0x0000, 0xDE52, 0x008C }, // 0x000009A4
	{ 0x0000, 0x0054, 0x0050, 0x0053, 0x7B7C, 0x0000, 0x21AE, 0x0077 }, // 0x000009B4
	{ 0x0000, 0x0054, 0x0053, 0x0055, 0x7B7C, 0x0000, 0x21AE, 0x0077 }, // 0x000009C4
	{ 0x0000, 0x0056, 0x0054, 0x0055, 0x4700, 0x0000, 0x6A80, 0x0022 }, // 0x000009D4
	{ 0x0000, 0x0056, 0x0055, 0x0057, 0x4700, 0x0000, 0x6A80, 0x0022 }, // 0x000009E4
	{ 0x0000, 0x001C, 0x0056, 0x0057, 0x03FF, 0x0000, 0x7FEF, 0xFFCC }, // 0x000009F4
	{ 0x0000, 0x001C, 0x0057, 0x0058, 0x03FF, 0x0000, 0x7FEF, 0xFFCC }, // 0x00000A04
	{ 0x0000, 0x0059, 0x001C, 0x0058, 0xBB48, 0x0000, 0x9404, 0xFFD1 }, // 0x00000A14
	{ 0x0000, 0x0059, 0x0058, 0x005A, 0xBB48, 0x0000, 0x9404, 0xFFD1 }, // 0x00000A24
	{ 0x0000, 0x005B, 0x0059, 0x005A, 0x8484, 0x0000, 0x21AE, 0xFF51 }, // 0x00000A34
	{ 0x0000, 0x005B, 0x005A, 0x005C, 0x8484, 0x0000, 0x21AE, 0xFF51 }, // 0x00000A44
	{ 0x0000, 0x005D, 0x005B, 0x005C, 0x8484, 0x0000, 0xDE52, 0xFF67 }, // 0x00000A54
	{ 0x0000, 0x005D, 0x005C, 0x005E, 0x8484, 0x0000, 0xDE52, 0xFF67 }, // 0x00000A64
	{ 0x0000, 0x005F, 0x005D, 0x005E, 0xB900, 0x0000, 0x9580, 0xFFBB }, // 0x00000A74
	{ 0x0000, 0x005F, 0x005E, 0x0060, 0xB900, 0x0000, 0x9580, 0xFFBB }, // 0x00000A84
	{ 0x0000, 0x0061, 0x005F, 0x0060, 0x0000, 0x0000, 0x8001, 0x0017 }, // 0x00000A94
	{ 0x0000, 0x0061, 0x0060, 0x0062, 0x0000, 0x0000, 0x8001, 0x0017 }, // 0x00000AA4
	{ 0x0000, 0x0051, 0x0061, 0x0062, 0x4700, 0x0000, 0x9580, 0x0064 }, // 0x00000AB4
	{ 0x0000, 0x0051, 0x0062, 0x0052, 0x4700, 0x0000, 0x9580, 0x0064 }, // 0x00000AC4
	{ 0x0001, 0x007B, 0x007C, 0x007D, 0x796E, 0x0000, 0xD786, 0x0023 }, // 0x00000AD4
	{ 0x0001, 0x007B, 0x007D, 0x007E, 0x796E, 0x0000, 0xD786, 0x0023 }, // 0x00000AE4
	{ 0x0001, 0x007F, 0x007B, 0x007E, 0x7B12, 0x0000, 0x232A, 0xFFCA }, // 0x00000AF4
	{ 0x0001, 0x007F, 0x007E, 0x0080, 0x7B12, 0x0000, 0x232A, 0xFFCA }, // 0x00000B04
	{ 0x0001, 0x0081, 0x007F, 0x0080, 0x4FF5, 0x0000, 0x63F3, 0xFF7F }, // 0x00000B14
	{ 0x0001, 0x0081, 0x0080, 0x0082, 0x4FF5, 0x0000, 0x63F3, 0xFF7F }, // 0x00000B24
	{ 0x0001, 0x0083, 0x0081, 0x0082, 0x287A, 0x0000, 0x796E, 0xFF65 }, // 0x00000B34
	{ 0x0001, 0x0083, 0x0082, 0x0084, 0x287A, 0x0000, 0x796E, 0xFF65 }, // 0x00000B44
	{ 0x0001, 0x0085, 0x0083, 0x0084, 0xDCD6, 0x0000, 0x7B12, 0xFF63 }, // 0x00000B54
	{ 0x0001, 0x0085, 0x0084, 0x0086, 0xDCD6, 0x0000, 0x7B12, 0xFF63 }, // 0x00000B64
	{ 0x0000, 0x0087, 0x0085, 0x0086, 0xA57E, 0x0000, 0x5A82, 0xFF89 }, // 0x00000B74
	{ 0x0000, 0x0087, 0x0086, 0x0088, 0xA57E, 0x0000, 0x5A82, 0xFF89 }, // 0x00000B84
	{ 0x0000, 0x0089, 0x0087, 0x0088, 0x84EE, 0x0000, 0x232A, 0xFFCA }, // 0x00000B94
	{ 0x0000, 0x0089, 0x0088, 0x008A, 0x84EE, 0x0000, 0x232A, 0xFFCA }, // 0x00000BA4
	{ 0x0000, 0x008B, 0x0089, 0x008A, 0x8692, 0x0000, 0xD786, 0x0023 }, // 0x00000BB4
	{ 0x0000, 0x008B, 0x008A, 0x008C, 0x8692, 0x0000, 0xD786, 0x0023 }, // 0x00000BC4
	{ 0x0000, 0x008D, 0x008B, 0x008C, 0x9C0D, 0x0000, 0xB00B, 0x0051 }, // 0x00000BD4
	{ 0x0000, 0x008D, 0x008C, 0x008E, 0x9C0D, 0x0000, 0xB00B, 0x0051 }, // 0x00000BE4
	{ 0x0000, 0x008F, 0x008D, 0x008E, 0xDCD6, 0x0000, 0x84EE, 0x0084 }, // 0x00000BF4
	{ 0x0000, 0x008F, 0x008E, 0x0090, 0xDCD6, 0x0000, 0x84EE, 0x0084 }, // 0x00000C04
	{ 0x0000, 0x0091, 0x008F, 0x0090, 0x287A, 0x0000, 0x8692, 0x0082 }, // 0x00000C14
	{ 0x0000, 0x0091, 0x0090, 0x0092, 0x287A, 0x0000, 0x8692, 0x0082 }, // 0x00000C24
	{ 0x0000, 0x007C, 0x0091, 0x0092, 0x5A82, 0x0000, 0xA57E, 0x005E }, // 0x00000C34
	{ 0x0000, 0x007C, 0x0092, 0x007D, 0x5A82, 0x0000, 0xA57E, 0x005E }, // 0x00000C44
	{ 0x0001, 0x0080, 0x007E, 0x007D, 0x0000, 0x7FFF, 0x0000, 0xFFF0 }, // 0x00000C54
	{ 0x0001, 0x0080, 0x007D, 0x0092, 0x0000, 0x7FFF, 0x0000, 0xFFF0 }, // 0x00000C64
	{ 0x0001, 0x0080, 0x0092, 0x0090, 0x0000, 0x7FFF, 0x0000, 0xFFF0 }, // 0x00000C74
	{ 0x0001, 0x0080, 0x0090, 0x008E, 0x0000, 0x7FFF, 0x0000, 0xFFF0 }, // 0x00000C84
	{ 0x0001, 0x0080, 0x008E, 0x008C, 0x0000, 0x7FFF, 0x0000, 0xFFF0 }, // 0x00000C94
	{ 0x0001, 0x0080, 0x008C, 0x008A, 0x0000, 0x7FFF, 0x0000, 0xFFF0 }, // 0x00000CA4
	{ 0x0001, 0x0080, 0x008A, 0x0088, 0x0000, 0x7FFF, 0x0000, 0xFFF0 }, // 0x00000CB4
	{ 0x0001, 0x0080, 0x0088, 0x0086, 0x0000, 0x7FFF, 0x0000, 0xFFF0 }, // 0x00000CC4
	{ 0x0001, 0x0080, 0x0086, 0x0084, 0x0000, 0x7FFF, 0x0000, 0xFFF0 }, // 0x00000CD4
	{ 0x0001, 0x0080, 0x0084, 0x0082, 0x0000, 0x7FFF, 0x0000, 0xFFF0 }, // 0x00000CE4
	{ 0x0001, 0x0063, 0x0064, 0x0065, 0x7B12, 0x0000, 0xDCD6, 0x0042 }, // 0x00000CF4
	{ 0x0001, 0x0063, 0x0065, 0x0066, 0x7B12, 0x0000, 0xDCD6, 0x0042 }, // 0x00000D04
	{ 0x0001, 0x0067, 0x0063, 0x0066, 0x7B12, 0x0000, 0x232A, 0xFFFB }, // 0x00000D14
	{ 0x0001, 0x0067, 0x0066, 0x0068, 0x7B12, 0x0000, 0x232A, 0xFFFB }, // 0x00000D24
	{ 0x0001, 0x0069, 0x0067, 0x0068, 0x5A82, 0x0000, 0x5A82, 0xFFB4 }, // 0x00000D34
	{ 0x0001, 0x0069, 0x0068, 0x006A, 0x5A82, 0x0000, 0x5A82, 0xFFB4 }, // 0x00000D44
	{ 0x0001, 0x006B, 0x0069, 0x006A, 0x232A, 0x0000, 0x7B12, 0xFF79 }, // 0x00000D54
	{ 0x0001, 0x006B, 0x006A, 0x006C, 0x232A, 0x0000, 0x7B12, 0xFF79 }, // 0x00000D64
	{ 0x0001, 0x006D, 0x006B, 0x006C, 0xDCD6, 0x0000, 0x7B12, 0xFF58 }, // 0x00000D74
	{ 0x0001, 0x006D, 0x006C, 0x006E, 0xDCD6, 0x0000, 0x7B12, 0xFF58 }, // 0x00000D84
	{ 0x0000, 0x006F, 0x006D, 0x006E, 0xA57E, 0x0000, 0x5A82, 0xFF5F }, // 0x00000D94
	{ 0x0000, 0x006F, 0x006E, 0x0070, 0xA57E, 0x0000, 0x5A82, 0xFF5F }, // 0x00000DA4
	{ 0x0000, 0x0071, 0x006F, 0x0070, 0x84EE, 0x0000, 0x232A, 0xFF88 }, // 0x00000DB4
	{ 0x0000, 0x0071, 0x0070, 0x0072, 0x84EE, 0x0000, 0x232A, 0xFF88 }, // 0x00000DC4
	{ 0x0000, 0x0073, 0x0071, 0x0072, 0x84EE, 0x0000, 0xDCD6, 0xFFCF }, // 0x00000DD4
	{ 0x0000, 0x0073, 0x0072, 0x0074, 0x84EE, 0x0000, 0xDCD6, 0xFFCF }, // 0x00000DE4
	{ 0x0000, 0x0075, 0x0073, 0x0074, 0xA57E, 0x0000, 0xA57E, 0x0017 }, // 0x00000DF4
	{ 0x0000, 0x0075, 0x0074, 0x0076, 0xA57E, 0x0000, 0xA57E, 0x0017 }, // 0x00000E04
	{ 0x0000, 0x0077, 0x0075, 0x0076, 0xDCD6, 0x0000, 0x84EE, 0x0052 }, // 0x00000E14
	{ 0x0000, 0x0077, 0x0076, 0x0078, 0xDCD6, 0x0000, 0x84EE, 0x0052 }, // 0x00000E24
	{ 0x0000, 0x0079, 0x0077, 0x0078, 0x232A, 0x0000, 0x84EE, 0x0073 }, // 0x00000E34
	{ 0x0000, 0x0079, 0x0078, 0x007A, 0x232A, 0x0000, 0x84EE, 0x0073 }, // 0x00000E44
	{ 0x0000, 0x0064, 0x0079, 0x007A, 0x5A82, 0x0000, 0xA57E, 0x006B }, // 0x00000E54
	{ 0x0000, 0x0064, 0x007A, 0x0065, 0x5A82, 0x0000, 0xA57E, 0x006B }, // 0x00000E64
	{ 0x0001, 0x0068, 0x0066, 0x0065, 0x0000, 0x7FFF, 0x0000, 0xFFE8 }, // 0x00000E74
	{ 0x0001, 0x0068, 0x0065, 0x007A, 0x0000, 0x7FFF, 0x0000, 0xFFE8 }, // 0x00000E84
	{ 0x0001, 0x0068, 0x007A, 0x0078, 0x0000, 0x7FFF, 0x0000, 0xFFE8 }, // 0x00000E94
	{ 0x0001, 0x0068, 0x0078, 0x0076, 0x0000, 0x7FFF, 0x0000, 0xFFE8 }, // 0x00000EA4
	{ 0x0001, 0x0068, 0x0076, 0x0074, 0x0000, 0x7FFF, 0x0000, 0xFFE8 }, // 0x00000EB4
	{ 0x0001, 0x0068, 0x0074, 0x0072, 0x0000, 0x7FFF, 0x0000, 0xFFE8 }, // 0x00000EC4
	{ 0x0001, 0x0068, 0x0072, 0x0070, 0x0000, 0x7FFF, 0x0000, 0xFFE8 }, // 0x00000ED4
	{ 0x0001, 0x0068, 0x0070, 0x006E, 0x0000, 0x7FFF, 0x0000, 0xFFE8 }, // 0x00000EE4
	{ 0x0001, 0x0068, 0x006E, 0x006C, 0x0000, 0x7FFF, 0x0000, 0xFFE8 }, // 0x00000EF4
	{ 0x0001, 0x0068, 0x006C, 0x006A, 0x0000, 0x7FFF, 0x0000, 0xFFE8 }, // 0x00000F04
	{ 0x0000, 0x0093, 0x0094, 0x0095, 0x8001, 0x0000, 0x0000, 0x0055 }, // 0x00000F14
	{ 0x0000, 0x0093, 0x0095, 0x0096, 0x8001, 0x0000, 0x0000, 0x0055 }, // 0x00000F24
	{ 0x0001, 0x0097, 0x0093, 0x0096, 0x0000, 0x7FFF, 0x0000, 0xFFEC }, // 0x00000F34
	{ 0x0001, 0x0097, 0x0096, 0x0098, 0x0000, 0x7FFF, 0x0000, 0xFFEC }, // 0x00000F44
	{ 0x0000, 0x0099, 0x0097, 0x0098, 0x8001, 0x0000, 0x0000, 0x0077 }, // 0x00000F54
	{ 0x0000, 0x0099, 0x0098, 0x009A, 0x8001, 0x0000, 0x0000, 0x0077 }, // 0x00000F64
	{ 0x0001, 0x009B, 0x0099, 0x009A, 0x0000, 0x7FFF, 0x0000, 0xFFE2 }, // 0x00000F74
	{ 0x0001, 0x009B, 0x009A, 0x009C, 0x0000, 0x7FFF, 0x0000, 0xFFE2 }, // 0x00000F84
	{ 0x0000, 0x009D, 0x009B, 0x009C, 0x8001, 0x0000, 0x0000, 0x0099 }, // 0x00000F94
	{ 0x0000, 0x009D, 0x009C, 0x009E, 0x8001, 0x0000, 0x0000, 0x0099 }, // 0x00000FA4
	{ 0x0001, 0x009F, 0x0095, 0x0094, 0x0000, 0x7FFF, 0x0000, 0xFFF6 }, // 0x00000FB4
	{ 0x0001, 0x009F, 0x0094, 0x00A0, 0x0000, 0x7FFF, 0x0000, 0xFFF6 }, // 0x00000FC4
	{ 0x0001, 0x00A1, 0x00A2, 0x00A3, 0x0000, 0x7FFF, 0x0000, 0xFFD8 }, // 0x00000FD4
	{ 0x0001, 0x00A1, 0x00A3, 0x00A4, 0x0000, 0x7FFF, 0x0000, 0xFFD8 }, // 0x00000FE4
	{ 0x0001, 0x00A1, 0x00A4, 0x009E, 0x0000, 0x7FFF, 0x0000, 0xFFD8 }, // 0x00000FF4
	{ 0x0001, 0x00A1, 0x009E, 0x00A5, 0x0000, 0x7FFF, 0x0000, 0xFFD8 }, // 0x00001004
	{ 0x0001, 0x00A4, 0x00A6, 0x00A7, 0x0000, 0x7FFF, 0x0000, 0xFFD8 }, // 0x00001014
	{ 0x0001, 0x00A4, 0x00A7, 0x009D, 0x0000, 0x7FFF, 0x0000, 0xFFD8 }, // 0x00001024
	{ 0x0001, 0x00A4, 0x009D, 0x009E, 0x0000, 0x7FFF, 0x0000, 0xFFD8 }, // 0x00001034
	{ 0x0001, 0x00A7, 0x00A8, 0x00A9, 0x0000, 0x7FFF, 0x0000, 0xFFD8 }, // 0x00001044
	{ 0x0001, 0x00A7, 0x00A9, 0x00AA, 0x0000, 0x7FFF, 0x0000, 0xFFD8 }, // 0x00001054
	{ 0x0001, 0x00A7, 0x00AA, 0x00AB, 0x0000, 0x7FFF, 0x0000, 0xFFD8 }, // 0x00001064
	{ 0x0001, 0x00A7, 0x00AB, 0x009D, 0x0000, 0x7FFF, 0x0000, 0xFFD8 }, // 0x00001074
	{ 0x0000, 0x0012, 0x00A1, 0x00A5, 0x8001, 0x0000, 0x0000, 0x003A }, // 0x00001084
	{ 0x0000, 0x0012, 0x00A5, 0x009F, 0x8001, 0x0000, 0x0000, 0x003A }, // 0x00001094
	{ 0x0000, 0x0012, 0x009F, 0x00A0, 0x8001, 0x0000, 0x0000, 0x003A }, // 0x000010A4
	{ 0x0000, 0x0012, 0x00A0, 0x002B, 0x8001, 0x0000, 0x0000, 0x003A }, // 0x000010B4
	{ 0x0000, 0x00A0, 0x00AB, 0x00AA, 0x8001, 0x0000, 0x0000, 0x003A }, // 0x000010C4
	{ 0x0000, 0x00A0, 0x00AA, 0x002B, 0x8001, 0x0000, 0x0000, 0x003A }, // 0x000010D4
	{ 0x0000, 0x00A0, 0x00AC, 0x009D, 0x0000, 0x0000, 0x7FFF, 0x0022 }, // 0x000010E4
	{ 0x0000, 0x00A0, 0x009D, 0x00AB, 0x0000, 0x0000, 0x7FFF, 0x0022 }, // 0x000010F4
	{ 0x0000, 0x00A5, 0x009E, 0x00AD, 0x0000, 0x0000, 0x8001, 0x0022 }, // 0x00001104
	{ 0x0000, 0x00A5, 0x00AD, 0x009F, 0x0000, 0x0000, 0x8001, 0x0022 }, // 0x00001114
	{ 0x0004, 0x00D0, 0x0006, 0x00D1, 0x7F8E, 0x0000, 0xF55F, 0x000B }, // 0x00001124
	{ 0x0004, 0x00D0, 0x00D1, 0x00D2, 0x7F8E, 0x0000, 0xF55F, 0x000B }, // 0x00001134
	{ 0x0004, 0x00D3, 0x00D4, 0x00D5, 0xB900, 0x0000, 0x6A80, 0x005D }, // 0x00001144
	{ 0x0004, 0x00D3, 0x00D5, 0x00D6, 0xB900, 0x0000, 0x6A80, 0x005D }, // 0x00001154
	{ 0x0004, 0x00D4, 0x00D7, 0x00D8, 0x0000, 0x0000, 0x7FFF, 0x008F }, // 0x00001164
	{ 0x0004, 0x00D4, 0x00D8, 0x00D5, 0x0000, 0x0000, 0x7FFF, 0x008F }, // 0x00001174
	{ 0x0004, 0x00D7, 0x00D9, 0x00DA, 0x4700, 0x0000, 0x6A80, 0x008A }, // 0x00001184
	{ 0x0004, 0x00D7, 0x00DA, 0x00D8, 0x4700, 0x0000, 0x6A80, 0x008A }, // 0x00001194
	{ 0x0004, 0x00D9, 0x00DB, 0x00DC, 0x7B7C, 0x0000, 0x21AE, 0x003F }, // 0x000011A4
	{ 0x0004, 0x00D9, 0x00DC, 0x00DA, 0x7B7C, 0x0000, 0x21AE, 0x003F }, // 0x000011B4
	{ 0x0004, 0x00DB, 0x00D0, 0x00D2, 0x7B7C, 0x0000, 0xDE52, 0xFFEB }, // 0x000011C4
	{ 0x0004, 0x00DB, 0x00D2, 0x00DC, 0x7B7C, 0x0000, 0xDE52, 0xFFEB }, // 0x000011D4
	{ 0x0004, 0x00C6, 0x00C7, 0x00C8, 0x0000, 0x0000, 0x7FFF, 0x0098 }, // 0x000011E4
	{ 0x0004, 0x00C6, 0x00C8, 0x00C9, 0x0000, 0x0000, 0x7FFF, 0x0098 }, // 0x000011F4
	{ 0x0004, 0x00CA, 0x00CB, 0x00C8, 0x8001, 0x0000, 0x0000, 0x0020 }, // 0x00001204
	{ 0x0004, 0x00CA, 0x00C8, 0x00C7, 0x8001, 0x0000, 0x0000, 0x0020 }, // 0x00001214
	{ 0x0004, 0x00CC, 0x00CD, 0x00CE, 0x5292, 0x0000, 0x61CD, 0x0096 }, // 0x00001224
	{ 0x0004, 0x00CC, 0x00CE, 0x00CF, 0x5292, 0x0000, 0x61CD, 0x0096 }, // 0x00001234
};

Vec3s _kokiri_home3_scene_vertices_00001244[221] = 
{
	{ 26, 100, -340 }, // 0x00001244
	{ -26, 100, -340 }, // 0x0000124A
	{ -26, 0, -340 }, // 0x00001250
	{ 26, 0, -340 }, // 0x00001256
	{ 26, 100, -183 }, // 0x0000125C
	{ 25, 0, -183 }, // 0x00001262
	{ -26, 0, -183 }, // 0x00001268
	{ -26, 100, -183 }, // 0x0000126E
	{ 187, 0, 0 }, // 0x00001274
	{ 187, 240, 0 }, // 0x0000127A
	{ 178, 240, -58 }, // 0x00001280
	{ 178, 0, -58 }, // 0x00001286
	{ 178, 0, 58 }, // 0x0000128C
	{ 178, 240, 58 }, // 0x00001292
	{ 151, 0, 110 }, // 0x00001298
	{ 151, 240, 110 }, // 0x0000129E
	{ 110, 0, 151 }, // 0x000012A4
	{ 110, 240, 151 }, // 0x000012AA
	{ 58, 0, 178 }, // 0x000012B0
	{ 58, 240, 178 }, // 0x000012B6
	{ 0, 0, 187 }, // 0x000012BC
	{ 0, 240, 187 }, // 0x000012C2
	{ -58, 0, 178 }, // 0x000012C8
	{ -58, 240, 178 }, // 0x000012CE
	{ -110, 0, 151 }, // 0x000012D4
	{ -110, 240, 151 }, // 0x000012DA
	{ -151, 0, 110 }, // 0x000012E0
	{ -151, 240, 110 }, // 0x000012E6
	{ -178, 0, 58 }, // 0x000012EC
	{ -178, 240, 58 }, // 0x000012F2
	{ -187, 0, 0 }, // 0x000012F8
	{ -187, 240, 0 }, // 0x000012FE
	{ -178, 0, -58 }, // 0x00001304
	{ -178, 240, -58 }, // 0x0000130A
	{ -151, 0, -110 }, // 0x00001310
	{ -151, 240, -110 }, // 0x00001316
	{ -110, 0, -151 }, // 0x0000131C
	{ -110, 240, -151 }, // 0x00001322
	{ -58, 0, -178 }, // 0x00001328
	{ -58, 240, -178 }, // 0x0000132E
	{ 110, 0, -151 }, // 0x00001334
	{ 110, 240, -151 }, // 0x0000133A
	{ 58, 240, -178 }, // 0x00001340
	{ 58, 0, -178 }, // 0x00001346
	{ 151, 0, -110 }, // 0x0000134C
	{ 151, 240, -110 }, // 0x00001352
	{ 0, 100, -187 }, // 0x00001358
	{ 0, 240, -187 }, // 0x0000135E
	{ -121, 0, 83 }, // 0x00001364
	{ -127, 0, 81 }, // 0x0000136A
	{ -127, 16, 81 }, // 0x00001370
	{ -121, 16, 83 }, // 0x00001376
	{ -134, 0, 83 }, // 0x0000137C
	{ -134, 16, 83 }, // 0x00001382
	{ -139, 0, 88 }, // 0x00001388
	{ -139, 16, 88 }, // 0x0000138E
	{ -140, 0, 94 }, // 0x00001394
	{ -140, 16, 94 }, // 0x0000139A
	{ -139, 0, 101 }, // 0x000013A0
	{ -139, 16, 101 }, // 0x000013A6
	{ -134, 0, 105 }, // 0x000013AC
	{ -134, 16, 105 }, // 0x000013B2
	{ -127, 0, 107 }, // 0x000013B8
	{ -127, 16, 107 }, // 0x000013BE
	{ -121, 0, 105 }, // 0x000013C4
	{ -121, 16, 105 }, // 0x000013CA
	{ -116, 0, 101 }, // 0x000013D0
	{ -116, 16, 101 }, // 0x000013D6
	{ -114, 0, 94 }, // 0x000013DC
	{ -114, 16, 94 }, // 0x000013E2
	{ -116, 0, 88 }, // 0x000013E8
	{ -116, 16, 88 }, // 0x000013EE
	{ -113, 0, -67 }, // 0x000013F4
	{ -113, 120, -67 }, // 0x000013FA
	{ -129, 120, 22 }, // 0x00001400
	{ -129, 0, 22 }, // 0x00001406
	{ -172, 0, -77 }, // 0x0000140C
	{ -172, 120, -77 }, // 0x00001412
	{ -188, 0, 11 }, // 0x00001418
	{ -188, 120, 11 }, // 0x0000141E
	{ -134, 0, 40 }, // 0x00001424
	{ -137, 0, 29 }, // 0x0000142A
	{ -137, 120, 29 }, // 0x00001430
	{ -134, 120, 40 }, // 0x00001436
	{ -137, 0, 51 }, // 0x0000143C
	{ -137, 120, 51 }, // 0x00001442
	{ -146, 0, 57 }, // 0x00001448
	{ -146, 120, 57 }, // 0x0000144E
	{ -178, 120, 58 }, // 0x00001454
	{ -167, 0, 51 }, // 0x0000145A
	{ -167, 120, 51 }, // 0x00001460
	{ -170, 0, 40 }, // 0x00001466
	{ -170, 120, 40 }, // 0x0000146C
	{ -167, 0, 29 }, // 0x00001472
	{ -167, 120, 29 }, // 0x00001478
	{ -158, 0, 23 }, // 0x0000147E
	{ -158, 120, 23 }, // 0x00001484
	{ -146, 0, 23 }, // 0x0000148A
	{ -146, 120, 23 }, // 0x00001490
	{ -32, 0, 130 }, // 0x00001496
	{ -36, 0, 116 }, // 0x0000149C
	{ -36, 24, 116 }, // 0x000014A2
	{ -32, 24, 130 }, // 0x000014A8
	{ -36, 0, 144 }, // 0x000014AE
	{ -36, 24, 144 }, // 0x000014B4
	{ -46, 0, 154 }, // 0x000014BA
	{ -46, 24, 154 }, // 0x000014C0
	{ -60, 0, 158 }, // 0x000014C6
	{ -60, 24, 158 }, // 0x000014CC
	{ -74, 0, 154 }, // 0x000014D2
	{ -74, 24, 154 }, // 0x000014D8
	{ -84, 0, 144 }, // 0x000014DE
	{ -84, 24, 144 }, // 0x000014E4
	{ -88, 0, 130 }, // 0x000014EA
	{ -88, 24, 130 }, // 0x000014F0
	{ -84, 0, 116 }, // 0x000014F6
	{ -84, 24, 116 }, // 0x000014FC
	{ -74, 0, 106 }, // 0x00001502
	{ -74, 24, 106 }, // 0x00001508
	{ -60, 0, 102 }, // 0x0000150E
	{ -60, 24, 102 }, // 0x00001514
	{ -46, 0, 106 }, // 0x0000151A
	{ -46, 24, 106 }, // 0x00001520
	{ 13, 3, 150 }, // 0x00001526
	{ 11, 3, 144 }, // 0x0000152C
	{ 11, 16, 144 }, // 0x00001532
	{ 13, 16, 150 }, // 0x00001538
	{ 11, 3, 157 }, // 0x0000153E
	{ 11, 16, 157 }, // 0x00001544
	{ 6, 3, 161 }, // 0x0000154A
	{ 6, 16, 161 }, // 0x00001550
	{ 0, 3, 163 }, // 0x00001556
	{ 0, 16, 163 }, // 0x0000155C
	{ -7, 3, 161 }, // 0x00001562
	{ -7, 16, 161 }, // 0x00001568
	{ -11, 3, 157 }, // 0x0000156E
	{ -11, 16, 157 }, // 0x00001574
	{ -13, 3, 150 }, // 0x0000157A
	{ -13, 16, 150 }, // 0x00001580
	{ -11, 3, 144 }, // 0x00001586
	{ -11, 16, 144 }, // 0x0000158C
	{ -7, 3, 139 }, // 0x00001592
	{ -7, 16, 139 }, // 0x00001598
	{ 0, 3, 137 }, // 0x0000159E
	{ 0, 16, 137 }, // 0x000015A4
	{ 6, 3, 139 }, // 0x000015AA
	{ 6, 16, 139 }, // 0x000015B0
	{ 85, 20, -34 }, // 0x000015B6
	{ 85, 10, -34 }, // 0x000015BC
	{ 85, 10, 34 }, // 0x000015C2
	{ 85, 20, 34 }, // 0x000015C8
	{ 119, 20, -34 }, // 0x000015CE
	{ 119, 20, 34 }, // 0x000015D4
	{ 119, 30, -34 }, // 0x000015DA
	{ 119, 30, 34 }, // 0x000015E0
	{ 153, 30, -34 }, // 0x000015E6
	{ 153, 30, 34 }, // 0x000015EC
	{ 153, 40, -34 }, // 0x000015F2
	{ 153, 40, 34 }, // 0x000015F8
	{ 58, 10, 34 }, // 0x000015FE
	{ 58, 10, -34 }, // 0x00001604
	{ 58, 40, 178 }, // 0x0000160A
	{ 110, 40, 151 }, // 0x00001610
	{ 151, 40, 110 }, // 0x00001616
	{ 178, 40, 58 }, // 0x0000161C
	{ 58, 40, 34 }, // 0x00001622
	{ 187, 40, 0 }, // 0x00001628
	{ 178, 40, -58 }, // 0x0000162E
	{ 151, 40, -110 }, // 0x00001634
	{ 110, 40, -151 }, // 0x0000163A
	{ 58, 40, -178 }, // 0x00001640
	{ 58, 40, -34 }, // 0x00001646
	{ 153, 10, -34 }, // 0x0000164C
	{ 153, 10, 34 }, // 0x00001652
	{ 63, 40, 112 }, // 0x00001658
	{ 63, 52, 112 }, // 0x0000165E
	{ 112, 52, 63 }, // 0x00001664
	{ 112, 40, 63 }, // 0x0000166A
	{ 88, 160, 137 }, // 0x00001670
	{ 88, 40, 137 }, // 0x00001676
	{ 63, 160, 112 }, // 0x0000167C
	{ 137, 40, 88 }, // 0x00001682
	{ 112, 160, 63 }, // 0x00001688
	{ 137, 160, 88 }, // 0x0000168E
	{ 94, 52, 143 }, // 0x00001694
	{ 143, 52, 94 }, // 0x0000169A
	{ 88, 160, -137 }, // 0x000016A0
	{ 63, 160, -112 }, // 0x000016A6
	{ 63, 40, -112 }, // 0x000016AC
	{ 88, 40, -137 }, // 0x000016B2
	{ 112, 40, -63 }, // 0x000016B8
	{ 112, 52, -63 }, // 0x000016BE
	{ 63, 52, -112 }, // 0x000016C4
	{ 112, 160, -63 }, // 0x000016CA
	{ 137, 40, -88 }, // 0x000016D0
	{ 137, 160, -88 }, // 0x000016D6
	{ 143, 52, -94 }, // 0x000016DC
	{ 94, 52, -143 }, // 0x000016E2
	{ 56, 120, -152 }, // 0x000016E8
	{ 32, 120, -152 }, // 0x000016EE
	{ 32, 0, -152 }, // 0x000016F4
	{ 56, 0, -152 }, // 0x000016FA
	{ 32, 120, -200 }, // 0x00001700
	{ 32, 0, -200 }, // 0x00001706
	{ -48, 120, -156 }, // 0x0000170C
	{ -170, 120, -53 }, // 0x00001712
	{ -170, 0, -53 }, // 0x00001718
	{ -48, 0, -156 }, // 0x0000171E
	{ -25, 0, -171 }, // 0x00001724
	{ -26, 120, -183 }, // 0x0000172A
	{ -25, 120, -171 }, // 0x00001730
	{ -55, 0, -149 }, // 0x00001736
	{ -46, 0, -143 }, // 0x0000173C
	{ -46, 120, -143 }, // 0x00001742
	{ -55, 120, -149 }, // 0x00001748
	{ -34, 0, -143 }, // 0x0000174E
	{ -34, 120, -143 }, // 0x00001754
	{ -25, 0, -149 }, // 0x0000175A
	{ -25, 120, -149 }, // 0x00001760
	{ -22, 0, -160 }, // 0x00001766
	{ -22, 120, -160 }, // 0x0000176C
};

CollisionHeader _kokiri_home3_scene_collisionHeader_00001774 = { 0xFF44, 0x0000, 0xFEAC, 0x00BB, 0x00F0, 0x00BB, 221, _kokiri_home3_scene_vertices_00001244, 0x0115, _kokiri_home3_scene_polygons_000000F4, _kokiri_home3_scene_polygonTypes_000000CC, &_kokiri_home3_scene_camData_000000B4, 0x0000, 0 };


