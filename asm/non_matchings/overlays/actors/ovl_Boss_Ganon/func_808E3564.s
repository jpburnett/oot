.late_rodata
glabel D_808F8240
    .float 0.3

glabel D_808F8244
    .float 1.5707964

glabel D_808F8248
    .float 1.5707964

glabel D_808F824C
    .float 1.5707964

glabel D_808F8250
    .float 1.5707964

glabel D_808F8254
    .float 13.9

glabel D_808F8258
    .float 17.9

glabel D_808F825C
    .float 1.5707964

glabel D_808F8260
    .float 1.5707964

glabel D_808F8264
    .float 3.14159274101

glabel D_808F8268
    .float 1.5707964

.text
glabel func_808E3564
/* 0CCF4 808E3564 27BDFF30 */  addiu   $sp, $sp, 0xFF30           ## $sp = FFFFFF30
/* 0CCF8 808E3568 AFB00050 */  sw      $s0, 0x0050($sp)           
/* 0CCFC 808E356C 44800000 */  mtc1    $zero, $f0                 ## $f0 = 0.00
/* 0CD00 808E3570 AFBF0074 */  sw      $ra, 0x0074($sp)           
/* 0CD04 808E3574 AFBE0070 */  sw      $s8, 0x0070($sp)           
/* 0CD08 808E3578 AFB7006C */  sw      $s7, 0x006C($sp)           
/* 0CD0C 808E357C AFB60068 */  sw      $s6, 0x0068($sp)           
/* 0CD10 808E3580 AFB50064 */  sw      $s5, 0x0064($sp)           
/* 0CD14 808E3584 AFB40060 */  sw      $s4, 0x0060($sp)           
/* 0CD18 808E3588 AFB3005C */  sw      $s3, 0x005C($sp)           
/* 0CD1C 808E358C AFB20058 */  sw      $s2, 0x0058($sp)           
/* 0CD20 808E3590 AFB10054 */  sw      $s1, 0x0054($sp)           
/* 0CD24 808E3594 F7BE0048 */  sdc1    $f30, 0x0048($sp)          
/* 0CD28 808E3598 F7BC0040 */  sdc1    $f28, 0x0040($sp)          
/* 0CD2C 808E359C F7BA0038 */  sdc1    $f26, 0x0038($sp)          
/* 0CD30 808E35A0 F7B80030 */  sdc1    $f24, 0x0030($sp)          
/* 0CD34 808E35A4 F7B60028 */  sdc1    $f22, 0x0028($sp)          
/* 0CD38 808E35A8 F7B40020 */  sdc1    $f20, 0x0020($sp)          
/* 0CD3C 808E35AC AFA400D0 */  sw      $a0, 0x00D0($sp)           
/* 0CD40 808E35B0 3C100001 */  lui     $s0, 0x0001                ## $s0 = 00010000
/* 0CD44 808E35B4 02048021 */  addu    $s0, $s0, $a0              
/* 0CD48 808E35B8 8C971C44 */  lw      $s7, 0x1C44($a0)           ## 00001C44
/* 0CD4C 808E35BC 8E101E10 */  lw      $s0, 0x1E10($s0)           ## 00011E10
/* 0CD50 808E35C0 3C013F80 */  lui     $at, 0x3F80                ## $at = 3F800000
/* 0CD54 808E35C4 3C158090 */  lui     $s5, %hi(D_808F93D0)       ## $s5 = 80900000
/* 0CD58 808E35C8 4481F000 */  mtc1    $at, $f30                  ## $f30 = 1.00
/* 0CD5C 808E35CC 26B593D0 */  addiu   $s5, $s5, %lo(D_808F93D0)  ## $s5 = 808F93D0
/* 0CD60 808E35D0 24130001 */  addiu   $s3, $zero, 0x0001         ## $s3 = 00000001
/* 0CD64 808E35D4 241400FF */  addiu   $s4, $zero, 0x00FF         ## $s4 = 000000FF
/* 0CD68 808E35D8 24160002 */  addiu   $s6, $zero, 0x0002         ## $s6 = 00000002
/* 0CD6C 808E35DC 0000F025 */  or      $s8, $zero, $zero          ## $s8 = 00000000
/* 0CD70 808E35E0 E7A000A0 */  swc1    $f0, 0x00A0($sp)           
/* 0CD74 808E35E4 E7A000A4 */  swc1    $f0, 0x00A4($sp)           
.L808E35E8:
/* 0CD78 808E35E8 920F0000 */  lbu     $t7, 0x0000($s0)           ## 00010000
/* 0CD7C 808E35EC 24010009 */  addiu   $at, $zero, 0x0009         ## $at = 00000009
/* 0CD80 808E35F0 51E001CD */  beql    $t7, $zero, .L808E3D28     
/* 0CD84 808E35F4 27DE0001 */  addiu   $s8, $s8, 0x0001           ## $s8 = 00000001
/* 0CD88 808E35F8 C6000010 */  lwc1    $f0, 0x0010($s0)           ## 00010010
/* 0CD8C 808E35FC C6040004 */  lwc1    $f4, 0x0004($s0)           ## 00010004
/* 0CD90 808E3600 C6020014 */  lwc1    $f2, 0x0014($s0)           ## 00010014
/* 0CD94 808E3604 C6080008 */  lwc1    $f8, 0x0008($s0)           ## 00010008
/* 0CD98 808E3608 C60C0018 */  lwc1    $f12, 0x0018($s0)          ## 00010018
/* 0CD9C 808E360C C610000C */  lwc1    $f16, 0x000C($s0)          ## 0001000C
/* 0CDA0 808E3610 46002180 */  add.s   $f6, $f4, $f0              
/* 0CDA4 808E3614 C604001C */  lwc1    $f4, 0x001C($s0)           ## 0001001C
/* 0CDA8 808E3618 92180001 */  lbu     $t8, 0x0001($s0)           ## 00010001
/* 0CDAC 808E361C 46024280 */  add.s   $f10, $f8, $f2             
/* 0CDB0 808E3620 C6080020 */  lwc1    $f8, 0x0020($s0)           ## 00010020
/* 0CDB4 808E3624 E6060004 */  swc1    $f6, 0x0004($s0)           ## 00010004
/* 0CDB8 808E3628 460C8480 */  add.s   $f18, $f16, $f12           
/* 0CDBC 808E362C C6100024 */  lwc1    $f16, 0x0024($s0)          ## 00010024
/* 0CDC0 808E3630 E60A0008 */  swc1    $f10, 0x0008($s0)          ## 00010008
/* 0CDC4 808E3634 46040180 */  add.s   $f6, $f0, $f4              
/* 0CDC8 808E3638 E612000C */  swc1    $f18, 0x000C($s0)          ## 0001000C
/* 0CDCC 808E363C 92020000 */  lbu     $v0, 0x0000($s0)           ## 00010000
/* 0CDD0 808E3640 46081280 */  add.s   $f10, $f2, $f8             
/* 0CDD4 808E3644 27190001 */  addiu   $t9, $t8, 0x0001           ## $t9 = 00000001
/* 0CDD8 808E3648 A2190001 */  sb      $t9, 0x0001($s0)           ## 00010001
/* 0CDDC 808E364C 46106480 */  add.s   $f18, $f12, $f16           
/* 0CDE0 808E3650 E6060010 */  swc1    $f6, 0x0010($s0)           ## 00010010
/* 0CDE4 808E3654 E60A0014 */  swc1    $f10, 0x0014($s0)          ## 00010014
/* 0CDE8 808E3658 14410011 */  bne     $v0, $at, .L808E36A0       
/* 0CDEC 808E365C E6120018 */  swc1    $f18, 0x0018($s0)          ## 00010018
/* 0CDF0 808E3660 3C018090 */  lui     $at, %hi(D_808F8240)       ## $at = 80900000
/* 0CDF4 808E3664 C4268240 */  lwc1    $f6, %lo(D_808F8240)($at)  
/* 0CDF8 808E3668 C6040044 */  lwc1    $f4, 0x0044($s0)           ## 00010044
/* 0CDFC 808E366C 3C013F00 */  lui     $at, 0x3F00                ## $at = 3F000000
/* 0CE00 808E3670 44818000 */  mtc1    $at, $f16                  ## $f16 = 0.50
/* 0CE04 808E3674 46062200 */  add.s   $f8, $f4, $f6              
/* 0CE08 808E3678 44803000 */  mtc1    $zero, $f6                 ## $f6 = 0.00
/* 0CE0C 808E367C C6040008 */  lwc1    $f4, 0x0008($s0)           ## 00010008
/* 0CE10 808E3680 C60A0048 */  lwc1    $f10, 0x0048($s0)          ## 00010048
/* 0CE14 808E3684 E6080044 */  swc1    $f8, 0x0044($s0)           ## 00010044
/* 0CE18 808E3688 4606203C */  c.lt.s  $f4, $f6                   
/* 0CE1C 808E368C 46105480 */  add.s   $f18, $f10, $f16           
/* 0CE20 808E3690 450001A4 */  bc1f    .L808E3D24                 
/* 0CE24 808E3694 E6120048 */  swc1    $f18, 0x0048($s0)          ## 00010048
/* 0CE28 808E3698 100001A2 */  beq     $zero, $zero, .L808E3D24   
/* 0CE2C 808E369C A2000000 */  sb      $zero, 0x0000($s0)         ## 00010000
.L808E36A0:
/* 0CE30 808E36A0 1662001A */  bne     $s3, $v0, .L808E370C       
/* 0CE34 808E36A4 24010008 */  addiu   $at, $zero, 0x0008         ## $at = 00000008
/* 0CE38 808E36A8 3C018090 */  lui     $at, %hi(D_808F8244)       ## $at = 80900000
/* 0CE3C 808E36AC 0C00CFBE */  jal     Rand_ZeroFloat
              
/* 0CE40 808E36B0 C42C8244 */  lwc1    $f12, %lo(D_808F8244)($at) 
/* 0CE44 808E36B4 3C018090 */  lui     $at, %hi(D_808F8248)       ## $at = 80900000
/* 0CE48 808E36B8 C42A8248 */  lwc1    $f10, %lo(D_808F8248)($at) 
/* 0CE4C 808E36BC 8608002E */  lh      $t0, 0x002E($s0)           ## 0001002E
/* 0CE50 808E36C0 86090030 */  lh      $t1, 0x0030($s0)           ## 00010030
/* 0CE54 808E36C4 460A0400 */  add.s   $f16, $f0, $f10            
/* 0CE58 808E36C8 C608003C */  lwc1    $f8, 0x003C($s0)           ## 0001003C
/* 0CE5C 808E36CC 01095023 */  subu    $t2, $t0, $t1              
/* 0CE60 808E36D0 A60A002E */  sh      $t2, 0x002E($s0)           ## 0001002E
/* 0CE64 808E36D4 46104480 */  add.s   $f18, $f8, $f16            
/* 0CE68 808E36D8 8602002E */  lh      $v0, 0x002E($s0)           ## 0001002E
/* 0CE6C 808E36DC 1C400004 */  bgtz    $v0, .L808E36F0            
/* 0CE70 808E36E0 E612003C */  swc1    $f18, 0x003C($s0)          ## 0001003C
/* 0CE74 808E36E4 A600002E */  sh      $zero, 0x002E($s0)         ## 0001002E
/* 0CE78 808E36E8 8602002E */  lh      $v0, 0x002E($s0)           ## 0001002E
/* 0CE7C 808E36EC A2000000 */  sb      $zero, 0x0000($s0)         ## 00010000
.L808E36F0:
/* 0CE80 808E36F0 A602002C */  sh      $v0, 0x002C($s0)           ## 0001002C
/* 0CE84 808E36F4 860B002C */  lh      $t3, 0x002C($s0)           ## 0001002C
/* 0CE88 808E36F8 29610100 */  slti    $at, $t3, 0x0100           
/* 0CE8C 808E36FC 5420018A */  bnel    $at, $zero, .L808E3D28     
/* 0CE90 808E3700 27DE0001 */  addiu   $s8, $s8, 0x0001           ## $s8 = 00000002
/* 0CE94 808E3704 10000187 */  beq     $zero, $zero, .L808E3D24   
/* 0CE98 808E3708 A614002C */  sh      $s4, 0x002C($s0)           ## 0001002C
.L808E370C:
/* 0CE9C 808E370C 1441003E */  bne     $v0, $at, .L808E3808       
/* 0CEA0 808E3710 00000000 */  nop
/* 0CEA4 808E3714 8EA50000 */  lw      $a1, 0x0000($s5)           ## 808F93D0
/* 0CEA8 808E3718 C6060004 */  lwc1    $f6, 0x0004($s0)           ## 00010004
/* 0CEAC 808E371C C612000C */  lwc1    $f18, 0x000C($s0)          ## 0001000C
/* 0CEB0 808E3720 C4A40278 */  lwc1    $f4, 0x0278($a1)           ## 00000278
/* 0CEB4 808E3724 C4B00280 */  lwc1    $f16, 0x0280($a1)          ## 00000280
/* 0CEB8 808E3728 C6080008 */  lwc1    $f8, 0x0008($s0)           ## 00010008
/* 0CEBC 808E372C 46062501 */  sub.s   $f20, $f4, $f6             
/* 0CEC0 808E3730 C4AA027C */  lwc1    $f10, 0x027C($a1)          ## 0000027C
/* 0CEC4 808E3734 46128581 */  sub.s   $f22, $f16, $f18           
/* 0CEC8 808E3738 4600A306 */  mov.s   $f12, $f20                 
/* 0CECC 808E373C 46085601 */  sub.s   $f24, $f10, $f8            
/* 0CED0 808E3740 0C03F494 */  jal     Math_FAtan2F              
/* 0CED4 808E3744 4600B386 */  mov.s   $f14, $f22                 
/* 0CED8 808E3748 4614A682 */  mul.s   $f26, $f20, $f20           
/* 0CEDC 808E374C E7A000B0 */  swc1    $f0, 0x00B0($sp)           
/* 0CEE0 808E3750 4600C306 */  mov.s   $f12, $f24                 
/* 0CEE4 808E3754 4616B702 */  mul.s   $f28, $f22, $f22           
/* 0CEE8 808E3758 461CD000 */  add.s   $f0, $f26, $f28            
/* 0CEEC 808E375C 0C03F494 */  jal     Math_FAtan2F              
/* 0CEF0 808E3760 46000384 */  sqrt.s  $f14, $f0                  
/* 0CEF4 808E3764 C6040038 */  lwc1    $f4, 0x0038($s0)           ## 00010038
/* 0CEF8 808E3768 46000507 */  neg.s   $f20, $f0                  
/* 0CEFC 808E376C C7AC00B0 */  lwc1    $f12, 0x00B0($sp)          
/* 0CF00 808E3770 00002825 */  or      $a1, $zero, $zero          ## $a1 = 00000000
/* 0CF04 808E3774 0C034348 */  jal     Matrix_RotateY              
/* 0CF08 808E3778 E7A400A8 */  swc1    $f4, 0x00A8($sp)           
/* 0CF0C 808E377C 4600A306 */  mov.s   $f12, $f20                 
/* 0CF10 808E3780 0C0342DC */  jal     Matrix_RotateX              
/* 0CF14 808E3784 24050001 */  addiu   $a1, $zero, 0x0001         ## $a1 = 00000001
/* 0CF18 808E3788 27A400A0 */  addiu   $a0, $sp, 0x00A0           ## $a0 = FFFFFFD0
/* 0CF1C 808E378C 0C0346BD */  jal     Matrix_MultVec3f              
/* 0CF20 808E3790 26050010 */  addiu   $a1, $s0, 0x0010           ## $a1 = 00010010
/* 0CF24 808E3794 4406F000 */  mfc1    $a2, $f30                  
/* 0CF28 808E3798 26040038 */  addiu   $a0, $s0, 0x0038           ## $a0 = 00010038
/* 0CF2C 808E379C 3C054120 */  lui     $a1, 0x4120                ## $a1 = 41200000
/* 0CF30 808E37A0 0C01E107 */  jal     Math_ApproachF
              
/* 0CF34 808E37A4 3C073F00 */  lui     $a3, 0x3F00                ## $a3 = 3F000000
/* 0CF38 808E37A8 4618C182 */  mul.s   $f6, $f24, $f24            
/* 0CF3C 808E37AC 860C002C */  lh      $t4, 0x002C($s0)           ## 0001002C
/* 0CF40 808E37B0 258D000A */  addiu   $t5, $t4, 0x000A           ## $t5 = 0000000A
/* 0CF44 808E37B4 A60D002C */  sh      $t5, 0x002C($s0)           ## 0001002C
/* 0CF48 808E37B8 860E002C */  lh      $t6, 0x002C($s0)           ## 0001002C
/* 0CF4C 808E37BC 4606D280 */  add.s   $f10, $f26, $f6            
/* 0CF50 808E37C0 29C10100 */  slti    $at, $t6, 0x0100           
/* 0CF54 808E37C4 461C5000 */  add.s   $f0, $f10, $f28            
/* 0CF58 808E37C8 14200002 */  bne     $at, $zero, .L808E37D4     
/* 0CF5C 808E37CC 46000004 */  sqrt.s  $f0, $f0                   
/* 0CF60 808E37D0 A614002C */  sh      $s4, 0x002C($s0)           ## 0001002C
.L808E37D4:
/* 0CF64 808E37D4 3C0141A0 */  lui     $at, 0x41A0                ## $at = 41A00000
/* 0CF68 808E37D8 44814000 */  mtc1    $at, $f8                   ## $f8 = 20.00
/* 0CF6C 808E37DC 00000000 */  nop
/* 0CF70 808E37E0 4608003C */  c.lt.s  $f0, $f8                   
/* 0CF74 808E37E4 00000000 */  nop
/* 0CF78 808E37E8 45010005 */  bc1t    .L808E3800                 
/* 0CF7C 808E37EC 00000000 */  nop
/* 0CF80 808E37F0 920F0001 */  lbu     $t7, 0x0001($s0)           ## 00010001
/* 0CF84 808E37F4 29E10047 */  slti    $at, $t7, 0x0047           
/* 0CF88 808E37F8 5420014B */  bnel    $at, $zero, .L808E3D28     
/* 0CF8C 808E37FC 27DE0001 */  addiu   $s8, $s8, 0x0001           ## $s8 = 00000003
.L808E3800:
/* 0CF90 808E3800 10000148 */  beq     $zero, $zero, .L808E3D24   
/* 0CF94 808E3804 A2000000 */  sb      $zero, 0x0000($s0)         ## 00010000
.L808E3808:
/* 0CF98 808E3808 16C20028 */  bne     $s6, $v0, .L808E38AC       
/* 0CF9C 808E380C 24010003 */  addiu   $at, $zero, 0x0003         ## $at = 00000003
/* 0CFA0 808E3810 3C018090 */  lui     $at, %hi(D_808F824C)       ## $at = 80900000
/* 0CFA4 808E3814 0C00CFBE */  jal     Rand_ZeroFloat
              
/* 0CFA8 808E3818 C42C824C */  lwc1    $f12, %lo(D_808F824C)($at) 
/* 0CFAC 808E381C 3C018090 */  lui     $at, %hi(D_808F8250)       ## $at = 80900000
/* 0CFB0 808E3820 C4328250 */  lwc1    $f18, %lo(D_808F8250)($at) 
/* 0CFB4 808E3824 8618002E */  lh      $t8, 0x002E($s0)           ## 0001002E
/* 0CFB8 808E3828 86190030 */  lh      $t9, 0x0030($s0)           ## 00010030
/* 0CFBC 808E382C 46120100 */  add.s   $f4, $f0, $f18             
/* 0CFC0 808E3830 C610003C */  lwc1    $f16, 0x003C($s0)          ## 0001003C
/* 0CFC4 808E3834 03194023 */  subu    $t0, $t8, $t9              
/* 0CFC8 808E3838 A608002E */  sh      $t0, 0x002E($s0)           ## 0001002E
/* 0CFCC 808E383C 46048180 */  add.s   $f6, $f16, $f4             
/* 0CFD0 808E3840 8602002E */  lh      $v0, 0x002E($s0)           ## 0001002E
/* 0CFD4 808E3844 1C400004 */  bgtz    $v0, .L808E3858            
/* 0CFD8 808E3848 E606003C */  swc1    $f6, 0x003C($s0)           ## 0001003C
/* 0CFDC 808E384C A600002E */  sh      $zero, 0x002E($s0)         ## 0001002E
/* 0CFE0 808E3850 8602002E */  lh      $v0, 0x002E($s0)           ## 0001002E
/* 0CFE4 808E3854 A2000000 */  sb      $zero, 0x0000($s0)         ## 00010000
.L808E3858:
/* 0CFE8 808E3858 A602002C */  sh      $v0, 0x002C($s0)           ## 0001002C
/* 0CFEC 808E385C 8609002C */  lh      $t1, 0x002C($s0)           ## 0001002C
/* 0CFF0 808E3860 29210100 */  slti    $at, $t1, 0x0100           
/* 0CFF4 808E3864 54200003 */  bnel    $at, $zero, .L808E3874     
/* 0CFF8 808E3868 3C014170 */  lui     $at, 0x4170                ## $at = 41700000
/* 0CFFC 808E386C A614002C */  sh      $s4, 0x002C($s0)           ## 0001002C
/* 0D000 808E3870 3C014170 */  lui     $at, 0x4170                ## $at = 41700000
.L808E3874:
/* 0D004 808E3874 44815000 */  mtc1    $at, $f10                  ## $f10 = 15.00
/* 0D008 808E3878 C6000040 */  lwc1    $f0, 0x0040($s0)           ## 00010040
/* 0D00C 808E387C 3C014080 */  lui     $at, 0x4080                ## $at = 40800000
/* 0D010 808E3880 44819000 */  mtc1    $at, $f18                  ## $f18 = 4.00
/* 0D014 808E3884 460A0203 */  div.s   $f8, $f0, $f10             
/* 0D018 808E3888 4406F000 */  mfc1    $a2, $f30                  
/* 0D01C 808E388C 44050000 */  mfc1    $a1, $f0                   
/* 0D020 808E3890 26040038 */  addiu   $a0, $s0, 0x0038           ## $a0 = 00010038
/* 0D024 808E3894 46124402 */  mul.s   $f16, $f8, $f18            
/* 0D028 808E3898 44078000 */  mfc1    $a3, $f16                  
/* 0D02C 808E389C 0C01E107 */  jal     Math_ApproachF
              
/* 0D030 808E38A0 00000000 */  nop
/* 0D034 808E38A4 10000120 */  beq     $zero, $zero, .L808E3D28   
/* 0D038 808E38A8 27DE0001 */  addiu   $s8, $s8, 0x0001           ## $s8 = 00000004
.L808E38AC:
/* 0D03C 808E38AC 54410058 */  bnel    $v0, $at, .L808E3A10       
/* 0D040 808E38B0 24010004 */  addiu   $at, $zero, 0x0004         ## $at = 00000004
/* 0D044 808E38B4 860A002E */  lh      $t2, 0x002E($s0)           ## 0001002E
/* 0D048 808E38B8 3C018090 */  lui     $at, %hi(D_808F8258)       ## $at = 80900000
/* 0D04C 808E38BC 15400028 */  bne     $t2, $zero, .L808E3960     
/* 0D050 808E38C0 00000000 */  nop
/* 0D054 808E38C4 3C018090 */  lui     $at, %hi(D_808F8254)       ## $at = 80900000
/* 0D058 808E38C8 0C00CFBE */  jal     Rand_ZeroFloat
              
/* 0D05C 808E38CC C42C8254 */  lwc1    $f12, %lo(D_808F8254)($at) 
/* 0D060 808E38D0 4600010D */  trunc.w.s $f4, $f0                   
/* 0D064 808E38D4 3C0141A0 */  lui     $at, 0x41A0                ## $at = 41A00000
/* 0D068 808E38D8 44816000 */  mtc1    $at, $f12                  ## $f12 = 20.00
/* 0D06C 808E38DC 44112000 */  mfc1    $s1, $f4                   
/* 0D070 808E38E0 00000000 */  nop
/* 0D074 808E38E4 00118C00 */  sll     $s1, $s1, 16               
/* 0D078 808E38E8 00118C03 */  sra     $s1, $s1, 16               
/* 0D07C 808E38EC 26310001 */  addiu   $s1, $s1, 0x0001           ## $s1 = 00000001
/* 0D080 808E38F0 00118C00 */  sll     $s1, $s1, 16               
/* 0D084 808E38F4 0C00CFC8 */  jal     Rand_CenteredFloat
              
/* 0D088 808E38F8 00118C03 */  sra     $s1, $s1, 16               
/* 0D08C 808E38FC 8EAC0000 */  lw      $t4, 0x0000($s5)           ## 808F93D0
/* 0D090 808E3900 00119080 */  sll     $s2, $s1,  2               
/* 0D094 808E3904 02519023 */  subu    $s2, $s2, $s1              
/* 0D098 808E3908 00129080 */  sll     $s2, $s2,  2               
/* 0D09C 808E390C 01926821 */  addu    $t5, $t4, $s2              
/* 0D0A0 808E3910 C5A602EC */  lwc1    $f6, 0x02EC($t5)           ## 000002EC
/* 0D0A4 808E3914 3C0141A0 */  lui     $at, 0x41A0                ## $at = 41A00000
/* 0D0A8 808E3918 44816000 */  mtc1    $at, $f12                  ## $f12 = 20.00
/* 0D0AC 808E391C 46060280 */  add.s   $f10, $f0, $f6             
/* 0D0B0 808E3920 0C00CFC8 */  jal     Rand_CenteredFloat
              
/* 0D0B4 808E3924 E60A0004 */  swc1    $f10, 0x0004($s0)          ## 00010004
/* 0D0B8 808E3928 8EAE0000 */  lw      $t6, 0x0000($s5)           ## 808F93D0
/* 0D0BC 808E392C 3C0141A0 */  lui     $at, 0x41A0                ## $at = 41A00000
/* 0D0C0 808E3930 44816000 */  mtc1    $at, $f12                  ## $f12 = 20.00
/* 0D0C4 808E3934 01D27821 */  addu    $t7, $t6, $s2              
/* 0D0C8 808E3938 C5E802F0 */  lwc1    $f8, 0x02F0($t7)           ## 000002F0
/* 0D0CC 808E393C 46080480 */  add.s   $f18, $f0, $f8             
/* 0D0D0 808E3940 0C00CFC8 */  jal     Rand_CenteredFloat
              
/* 0D0D4 808E3944 E6120008 */  swc1    $f18, 0x0008($s0)          ## 00010008
/* 0D0D8 808E3948 8EB80000 */  lw      $t8, 0x0000($s5)           ## 808F93D0
/* 0D0DC 808E394C 0312C821 */  addu    $t9, $t8, $s2              
/* 0D0E0 808E3950 C73002F4 */  lwc1    $f16, 0x02F4($t9)          ## 000002F4
/* 0D0E4 808E3954 46100100 */  add.s   $f4, $f0, $f16             
/* 0D0E8 808E3958 1000001E */  beq     $zero, $zero, .L808E39D4   
/* 0D0EC 808E395C E604000C */  swc1    $f4, 0x000C($s0)           ## 0001000C
.L808E3960:
/* 0D0F0 808E3960 0C00CFBE */  jal     Rand_ZeroFloat
              
/* 0D0F4 808E3964 C42C8258 */  lwc1    $f12, %lo(D_808F8258)($at) 
/* 0D0F8 808E3968 4600018D */  trunc.w.s $f6, $f0                   
/* 0D0FC 808E396C 3C014120 */  lui     $at, 0x4120                ## $at = 41200000
/* 0D100 808E3970 44816000 */  mtc1    $at, $f12                  ## $f12 = 10.00
/* 0D104 808E3974 44113000 */  mfc1    $s1, $f6                   
/* 0D108 808E3978 00000000 */  nop
/* 0D10C 808E397C 00118C00 */  sll     $s1, $s1, 16               
/* 0D110 808E3980 0C00CFC8 */  jal     Rand_CenteredFloat
              
/* 0D114 808E3984 00118C03 */  sra     $s1, $s1, 16               
/* 0D118 808E3988 00114880 */  sll     $t1, $s1,  2               
/* 0D11C 808E398C 01314823 */  subu    $t1, $t1, $s1              
/* 0D120 808E3990 00094880 */  sll     $t1, $t1,  2               
/* 0D124 808E3994 02E99021 */  addu    $s2, $s7, $t1              
/* 0D128 808E3998 C64A0908 */  lwc1    $f10, 0x0908($s2)          ## 00000908
/* 0D12C 808E399C 3C014170 */  lui     $at, 0x4170                ## $at = 41700000
/* 0D130 808E39A0 44816000 */  mtc1    $at, $f12                  ## $f12 = 15.00
/* 0D134 808E39A4 460A0200 */  add.s   $f8, $f0, $f10             
/* 0D138 808E39A8 0C00CFC8 */  jal     Rand_CenteredFloat
              
/* 0D13C 808E39AC E6080004 */  swc1    $f8, 0x0004($s0)           ## 00010004
/* 0D140 808E39B0 C652090C */  lwc1    $f18, 0x090C($s2)          ## 0000090C
/* 0D144 808E39B4 3C014120 */  lui     $at, 0x4120                ## $at = 41200000
/* 0D148 808E39B8 44816000 */  mtc1    $at, $f12                  ## $f12 = 10.00
/* 0D14C 808E39BC 46120400 */  add.s   $f16, $f0, $f18            
/* 0D150 808E39C0 0C00CFC8 */  jal     Rand_CenteredFloat
              
/* 0D154 808E39C4 E6100008 */  swc1    $f16, 0x0008($s0)          ## 00010008
/* 0D158 808E39C8 C6440910 */  lwc1    $f4, 0x0910($s2)           ## 00000910
/* 0D15C 808E39CC 46040180 */  add.s   $f6, $f0, $f4              
/* 0D160 808E39D0 E606000C */  swc1    $f6, 0x000C($s0)           ## 0001000C
.L808E39D4:
/* 0D164 808E39D4 3C018090 */  lui     $at, %hi(D_808F825C)       ## $at = 80900000
/* 0D168 808E39D8 0C00CFBE */  jal     Rand_ZeroFloat
              
/* 0D16C 808E39DC C42C825C */  lwc1    $f12, %lo(D_808F825C)($at) 
/* 0D170 808E39E0 3C018090 */  lui     $at, %hi(D_808F8260)       ## $at = 80900000
/* 0D174 808E39E4 C4288260 */  lwc1    $f8, %lo(D_808F8260)($at)  
/* 0D178 808E39E8 C60A003C */  lwc1    $f10, 0x003C($s0)          ## 0001003C
/* 0D17C 808E39EC 920A0001 */  lbu     $t2, 0x0001($s0)           ## 00010001
/* 0D180 808E39F0 46080480 */  add.s   $f18, $f0, $f8             
/* 0D184 808E39F4 29410015 */  slti    $at, $t2, 0x0015           
/* 0D188 808E39F8 46125400 */  add.s   $f16, $f10, $f18           
/* 0D18C 808E39FC 142000C9 */  bne     $at, $zero, .L808E3D24     
/* 0D190 808E3A00 E610003C */  swc1    $f16, 0x003C($s0)          ## 0001003C
/* 0D194 808E3A04 100000C7 */  beq     $zero, $zero, .L808E3D24   
/* 0D198 808E3A08 A2000000 */  sb      $zero, 0x0000($s0)         ## 00010000
/* 0D19C 808E3A0C 24010004 */  addiu   $at, $zero, 0x0004         ## $at = 00000004
.L808E3A10:
/* 0D1A0 808E3A10 54410020 */  bnel    $v0, $at, .L808E3A94       
/* 0D1A4 808E3A14 24010005 */  addiu   $at, $zero, 0x0005         ## $at = 00000005
/* 0D1A8 808E3A18 44802000 */  mtc1    $zero, $f4                 ## $f4 = 0.00
/* 0D1AC 808E3A1C C606003C */  lwc1    $f6, 0x003C($s0)           ## 0001003C
/* 0D1B0 808E3A20 8FA400D0 */  lw      $a0, 0x00D0($sp)           
/* 0D1B4 808E3A24 3C018090 */  lui     $at, %hi(D_808F8268)       ## $at = 80900000
/* 0D1B8 808E3A28 46062032 */  c.eq.s  $f4, $f6                   
/* 0D1BC 808E3A2C 00000000 */  nop
/* 0D1C0 808E3A30 4500000F */  bc1f    .L808E3A70                 
/* 0D1C4 808E3A34 00000000 */  nop
/* 0D1C8 808E3A38 0C030129 */  jal     Gameplay_GetCamera              
/* 0D1CC 808E3A3C 00002825 */  or      $a1, $zero, $zero          ## $a1 = 00000000
/* 0D1D0 808E3A40 0C016A52 */  jal     Camera_GetInputDirYaw              
/* 0D1D4 808E3A44 00402025 */  or      $a0, $v0, $zero            ## $a0 = 00000000
/* 0D1D8 808E3A48 44824000 */  mtc1    $v0, $f8                   ## $f8 = 0.00
/* 0D1DC 808E3A4C 3C014700 */  lui     $at, 0x4700                ## $at = 47000000
/* 0D1E0 808E3A50 44819000 */  mtc1    $at, $f18                  ## $f18 = 32768.00
/* 0D1E4 808E3A54 468042A0 */  cvt.s.w $f10, $f8                  
/* 0D1E8 808E3A58 3C018090 */  lui     $at, %hi(D_808F8264)       ## $at = 80900000
/* 0D1EC 808E3A5C C4248264 */  lwc1    $f4, %lo(D_808F8264)($at)  
/* 0D1F0 808E3A60 46125403 */  div.s   $f16, $f10, $f18           
/* 0D1F4 808E3A64 46048182 */  mul.s   $f6, $f16, $f4             
/* 0D1F8 808E3A68 10000003 */  beq     $zero, $zero, .L808E3A78   
/* 0D1FC 808E3A6C E6060044 */  swc1    $f6, 0x0044($s0)           ## 00010044
.L808E3A70:
/* 0D200 808E3A70 C4288268 */  lwc1    $f8, %lo(D_808F8268)($at)  
/* 0D204 808E3A74 E6080044 */  swc1    $f8, 0x0044($s0)           ## 00010044
.L808E3A78:
/* 0D208 808E3A78 920B0001 */  lbu     $t3, 0x0001($s0)           ## 00010001
/* 0D20C 808E3A7C 2961000D */  slti    $at, $t3, 0x000D           
/* 0D210 808E3A80 542000A9 */  bnel    $at, $zero, .L808E3D28     
/* 0D214 808E3A84 27DE0001 */  addiu   $s8, $s8, 0x0001           ## $s8 = 00000005
/* 0D218 808E3A88 100000A6 */  beq     $zero, $zero, .L808E3D24   
/* 0D21C 808E3A8C A2000000 */  sb      $zero, 0x0000($s0)         ## 00010000
/* 0D220 808E3A90 24010005 */  addiu   $at, $zero, 0x0005         ## $at = 00000005
.L808E3A94:
/* 0D224 808E3A94 1441002B */  bne     $v0, $at, .L808E3B44       
/* 0D228 808E3A98 26040034 */  addiu   $a0, $s0, 0x0034           ## $a0 = 00010034
/* 0D22C 808E3A9C 860C0030 */  lh      $t4, 0x0030($s0)           ## 00010030
/* 0D230 808E3AA0 8602002E */  lh      $v0, 0x002E($s0)           ## 0001002E
/* 0D234 808E3AA4 4406F000 */  mfc1    $a2, $f30                  
/* 0D238 808E3AA8 258D0001 */  addiu   $t5, $t4, 0x0001           ## $t5 = 00000001
/* 0D23C 808E3AAC 1440000B */  bne     $v0, $zero, .L808E3ADC     
/* 0D240 808E3AB0 A60D0030 */  sh      $t5, 0x0030($s0)           ## 00010030
/* 0D244 808E3AB4 860E002C */  lh      $t6, 0x002C($s0)           ## 0001002C
/* 0D248 808E3AB8 25CF001A */  addiu   $t7, $t6, 0x001A           ## $t7 = 0000001A
/* 0D24C 808E3ABC A60F002C */  sh      $t7, 0x002C($s0)           ## 0001002C
/* 0D250 808E3AC0 8618002C */  lh      $t8, 0x002C($s0)           ## 0001002C
/* 0D254 808E3AC4 2B010100 */  slti    $at, $t8, 0x0100           
/* 0D258 808E3AC8 54200013 */  bnel    $at, $zero, .L808E3B18     
/* 0D25C 808E3ACC 3C073C23 */  lui     $a3, 0x3C23                ## $a3 = 3C230000
/* 0D260 808E3AD0 A614002C */  sh      $s4, 0x002C($s0)           ## 0001002C
/* 0D264 808E3AD4 1000000F */  beq     $zero, $zero, .L808E3B14   
/* 0D268 808E3AD8 A613002E */  sh      $s3, 0x002E($s0)           ## 0001002E
.L808E3ADC:
/* 0D26C 808E3ADC 16620003 */  bne     $s3, $v0, .L808E3AEC       
/* 0D270 808E3AE0 00000000 */  nop
/* 0D274 808E3AE4 1000000B */  beq     $zero, $zero, .L808E3B14   
/* 0D278 808E3AE8 A616002E */  sh      $s6, 0x002E($s0)           ## 0001002E
.L808E3AEC:
/* 0D27C 808E3AEC 56C2000A */  bnel    $s6, $v0, .L808E3B18       
/* 0D280 808E3AF0 3C073C23 */  lui     $a3, 0x3C23                ## $a3 = 3C230000
/* 0D284 808E3AF4 8619002C */  lh      $t9, 0x002C($s0)           ## 0001002C
/* 0D288 808E3AF8 2728FFE6 */  addiu   $t0, $t9, 0xFFE6           ## $t0 = FFFFFFE6
/* 0D28C 808E3AFC A608002C */  sh      $t0, 0x002C($s0)           ## 0001002C
/* 0D290 808E3B00 8609002C */  lh      $t1, 0x002C($s0)           ## 0001002C
/* 0D294 808E3B04 05230004 */  bgezl   $t1, .L808E3B18            
/* 0D298 808E3B08 3C073C23 */  lui     $a3, 0x3C23                ## $a3 = 3C230000
/* 0D29C 808E3B0C A600002C */  sh      $zero, 0x002C($s0)         ## 0001002C
/* 0D2A0 808E3B10 A2000000 */  sb      $zero, 0x0000($s0)         ## 00010000
.L808E3B14:
/* 0D2A4 808E3B14 3C073C23 */  lui     $a3, 0x3C23                ## $a3 = 3C230000
.L808E3B18:
/* 0D2A8 808E3B18 34E7D70A */  ori     $a3, $a3, 0xD70A           ## $a3 = 3C23D70A
/* 0D2AC 808E3B1C 0C01E107 */  jal     Math_ApproachF
              
/* 0D2B0 808E3B20 8E050038 */  lw      $a1, 0x0038($s0)           ## 00010038
/* 0D2B4 808E3B24 4406F000 */  mfc1    $a2, $f30                  
/* 0D2B8 808E3B28 3C073E19 */  lui     $a3, 0x3E19                ## $a3 = 3E190000
/* 0D2BC 808E3B2C 34E7999A */  ori     $a3, $a3, 0x999A           ## $a3 = 3E19999A
/* 0D2C0 808E3B30 26040040 */  addiu   $a0, $s0, 0x0040           ## $a0 = 00010040
/* 0D2C4 808E3B34 0C01E107 */  jal     Math_ApproachF
              
/* 0D2C8 808E3B38 3C054080 */  lui     $a1, 0x4080                ## $a1 = 40800000
/* 0D2CC 808E3B3C 1000007A */  beq     $zero, $zero, .L808E3D28   
/* 0D2D0 808E3B40 27DE0001 */  addiu   $s8, $s8, 0x0001           ## $s8 = 00000006
.L808E3B44:
/* 0D2D4 808E3B44 24010006 */  addiu   $at, $zero, 0x0006         ## $at = 00000006
/* 0D2D8 808E3B48 54410035 */  bnel    $v0, $at, .L808E3C20       
/* 0D2DC 808E3B4C 24010007 */  addiu   $at, $zero, 0x0007         ## $at = 00000007
/* 0D2E0 808E3B50 57C00004 */  bnel    $s8, $zero, .L808E3B64     
/* 0D2E4 808E3B54 860A0030 */  lh      $t2, 0x0030($s0)           ## 00010030
/* 0D2E8 808E3B58 0C01E221 */  jal     func_80078884              
/* 0D2EC 808E3B5C 24043147 */  addiu   $a0, $zero, 0x3147         ## $a0 = 00003147
/* 0D2F0 808E3B60 860A0030 */  lh      $t2, 0x0030($s0)           ## 00010030
.L808E3B64:
/* 0D2F4 808E3B64 8602002E */  lh      $v0, 0x002E($s0)           ## 0001002E
/* 0D2F8 808E3B68 26040034 */  addiu   $a0, $s0, 0x0034           ## $a0 = 00010034
/* 0D2FC 808E3B6C 254B0001 */  addiu   $t3, $t2, 0x0001           ## $t3 = 00000001
/* 0D300 808E3B70 1440000B */  bne     $v0, $zero, .L808E3BA0     
/* 0D304 808E3B74 A60B0030 */  sh      $t3, 0x0030($s0)           ## 00010030
/* 0D308 808E3B78 860C002C */  lh      $t4, 0x002C($s0)           ## 0001002C
/* 0D30C 808E3B7C 258D0064 */  addiu   $t5, $t4, 0x0064           ## $t5 = 00000064
/* 0D310 808E3B80 A60D002C */  sh      $t5, 0x002C($s0)           ## 0001002C
/* 0D314 808E3B84 860E002C */  lh      $t6, 0x002C($s0)           ## 0001002C
/* 0D318 808E3B88 29C10100 */  slti    $at, $t6, 0x0100           
/* 0D31C 808E3B8C 54200017 */  bnel    $at, $zero, .L808E3BEC     
/* 0D320 808E3B90 4406F000 */  mfc1    $a2, $f30                  
/* 0D324 808E3B94 A614002C */  sh      $s4, 0x002C($s0)           ## 0001002C
/* 0D328 808E3B98 10000013 */  beq     $zero, $zero, .L808E3BE8   
/* 0D32C 808E3B9C A613002E */  sh      $s3, 0x002E($s0)           ## 0001002E
.L808E3BA0:
/* 0D330 808E3BA0 16620007 */  bne     $s3, $v0, .L808E3BC0       
/* 0D334 808E3BA4 00000000 */  nop
/* 0D338 808E3BA8 920F0001 */  lbu     $t7, 0x0001($s0)           ## 00010001
/* 0D33C 808E3BAC 29E10014 */  slti    $at, $t7, 0x0014           
/* 0D340 808E3BB0 5420000E */  bnel    $at, $zero, .L808E3BEC     
/* 0D344 808E3BB4 4406F000 */  mfc1    $a2, $f30                  
/* 0D348 808E3BB8 1000000B */  beq     $zero, $zero, .L808E3BE8   
/* 0D34C 808E3BBC A616002E */  sh      $s6, 0x002E($s0)           ## 0001002E
.L808E3BC0:
/* 0D350 808E3BC0 56C2000A */  bnel    $s6, $v0, .L808E3BEC       
/* 0D354 808E3BC4 4406F000 */  mfc1    $a2, $f30                  
/* 0D358 808E3BC8 8618002C */  lh      $t8, 0x002C($s0)           ## 0001002C
/* 0D35C 808E3BCC 2719FFE2 */  addiu   $t9, $t8, 0xFFE2           ## $t9 = FFFFFFE2
/* 0D360 808E3BD0 A619002C */  sh      $t9, 0x002C($s0)           ## 0001002C
/* 0D364 808E3BD4 8608002C */  lh      $t0, 0x002C($s0)           ## 0001002C
/* 0D368 808E3BD8 05030004 */  bgezl   $t0, .L808E3BEC            
/* 0D36C 808E3BDC 4406F000 */  mfc1    $a2, $f30                  
/* 0D370 808E3BE0 A600002C */  sh      $zero, 0x002C($s0)         ## 0001002C
/* 0D374 808E3BE4 A2000000 */  sb      $zero, 0x0000($s0)         ## 00010000
.L808E3BE8:
/* 0D378 808E3BE8 4406F000 */  mfc1    $a2, $f30                  
.L808E3BEC:
/* 0D37C 808E3BEC 3C073DCC */  lui     $a3, 0x3DCC                ## $a3 = 3DCC0000
/* 0D380 808E3BF0 34E7CCCD */  ori     $a3, $a3, 0xCCCD           ## $a3 = 3DCCCCCD
/* 0D384 808E3BF4 0C01E107 */  jal     Math_ApproachF
              
/* 0D388 808E3BF8 8E050038 */  lw      $a1, 0x0038($s0)           ## 00010038
/* 0D38C 808E3BFC 4405F000 */  mfc1    $a1, $f30                  
/* 0D390 808E3C00 4406F000 */  mfc1    $a2, $f30                  
/* 0D394 808E3C04 3C073E19 */  lui     $a3, 0x3E19                ## $a3 = 3E190000
/* 0D398 808E3C08 34E7999A */  ori     $a3, $a3, 0x999A           ## $a3 = 3E19999A
/* 0D39C 808E3C0C 0C01E107 */  jal     Math_ApproachF
              
/* 0D3A0 808E3C10 26040040 */  addiu   $a0, $s0, 0x0040           ## $a0 = 00010040
/* 0D3A4 808E3C14 10000044 */  beq     $zero, $zero, .L808E3D28   
/* 0D3A8 808E3C18 27DE0001 */  addiu   $s8, $s8, 0x0001           ## $s8 = 00000007
/* 0D3AC 808E3C1C 24010007 */  addiu   $at, $zero, 0x0007         ## $at = 00000007
.L808E3C20:
/* 0D3B0 808E3C20 14410040 */  bne     $v0, $at, .L808E3D24       
/* 0D3B4 808E3C24 26040034 */  addiu   $a0, $s0, 0x0034           ## $a0 = 00010034
/* 0D3B8 808E3C28 860B002C */  lh      $t3, 0x002C($s0)           ## 0001002C
/* 0D3BC 808E3C2C 86090030 */  lh      $t1, 0x0030($s0)           ## 00010030
/* 0D3C0 808E3C30 4406F000 */  mfc1    $a2, $f30                  
/* 0D3C4 808E3C34 256CFFE2 */  addiu   $t4, $t3, 0xFFE2           ## $t4 = FFFFFFE2
/* 0D3C8 808E3C38 A60C002C */  sh      $t4, 0x002C($s0)           ## 0001002C
/* 0D3CC 808E3C3C 860D002C */  lh      $t5, 0x002C($s0)           ## 0001002C
/* 0D3D0 808E3C40 252A0001 */  addiu   $t2, $t1, 0x0001           ## $t2 = 00000001
/* 0D3D4 808E3C44 A60A0030 */  sh      $t2, 0x0030($s0)           ## 00010030
/* 0D3D8 808E3C48 05A10003 */  bgez    $t5, .L808E3C58            
/* 0D3DC 808E3C4C 3C073E05 */  lui     $a3, 0x3E05                ## $a3 = 3E050000
/* 0D3E0 808E3C50 A600002C */  sh      $zero, 0x002C($s0)         ## 0001002C
/* 0D3E4 808E3C54 A2000000 */  sb      $zero, 0x0000($s0)         ## 00010000
.L808E3C58:
/* 0D3E8 808E3C58 8E050038 */  lw      $a1, 0x0038($s0)           ## 00010038
/* 0D3EC 808E3C5C 0C01E107 */  jal     Math_ApproachF
              
/* 0D3F0 808E3C60 34E71EB8 */  ori     $a3, $a3, 0x1EB8           ## $a3 = 3E051EB8
/* 0D3F4 808E3C64 920E0001 */  lbu     $t6, 0x0001($s0)           ## 00010001
/* 0D3F8 808E3C68 29C10096 */  slti    $at, $t6, 0x0096           
/* 0D3FC 808E3C6C 5020002E */  beql    $at, $zero, .L808E3D28     
/* 0D400 808E3C70 27DE0001 */  addiu   $s8, $s8, 0x0001           ## $s8 = 00000008
/* 0D404 808E3C74 C6E00028 */  lwc1    $f0, 0x0028($s7)           ## 00000028
/* 0D408 808E3C78 3C0140A0 */  lui     $at, 0x40A0                ## $at = 40A00000
/* 0D40C 808E3C7C 44815000 */  mtc1    $at, $f10                  ## $f10 = 5.00
/* 0D410 808E3C80 46000005 */  abs.s   $f0, $f0                   
/* 0D414 808E3C84 460A003C */  c.lt.s  $f0, $f10                  
/* 0D418 808E3C88 00000000 */  nop
/* 0D41C 808E3C8C 45020026 */  bc1fl   .L808E3D28                 
/* 0D420 808E3C90 27DE0001 */  addiu   $s8, $s8, 0x0001           ## $s8 = 00000009
/* 0D424 808E3C94 C6120004 */  lwc1    $f18, 0x0004($s0)          ## 00010004
/* 0D428 808E3C98 C6F00024 */  lwc1    $f16, 0x0024($s7)          ## 00000024
/* 0D42C 808E3C9C C604000C */  lwc1    $f4, 0x000C($s0)           ## 0001000C
/* 0D430 808E3CA0 C6E6002C */  lwc1    $f6, 0x002C($s7)           ## 0000002C
/* 0D434 808E3CA4 46109081 */  sub.s   $f2, $f18, $f16            
/* 0D438 808E3CA8 3C014316 */  lui     $at, 0x4316                ## $at = 43160000
/* 0D43C 808E3CAC 44819000 */  mtc1    $at, $f18                  ## $f18 = 150.00
/* 0D440 808E3CB0 46062301 */  sub.s   $f12, $f4, $f6             
/* 0D444 808E3CB4 46021202 */  mul.s   $f8, $f2, $f2              
/* 0D448 808E3CB8 C60E0034 */  lwc1    $f14, 0x0034($s0)          ## 00010034
/* 0D44C 808E3CBC 3C014396 */  lui     $at, 0x4396                ## $at = 43960000
/* 0D450 808E3CC0 460C6282 */  mul.s   $f10, $f12, $f12           
/* 0D454 808E3CC4 460A4000 */  add.s   $f0, $f8, $f10             
/* 0D458 808E3CC8 46127402 */  mul.s   $f16, $f14, $f18           
/* 0D45C 808E3CCC 46000004 */  sqrt.s  $f0, $f0                   
/* 0D460 808E3CD0 4600803C */  c.lt.s  $f16, $f0                  
/* 0D464 808E3CD4 00000000 */  nop
/* 0D468 808E3CD8 45020013 */  bc1fl   .L808E3D28                 
/* 0D46C 808E3CDC 27DE0001 */  addiu   $s8, $s8, 0x0001           ## $s8 = 0000000A
/* 0D470 808E3CE0 44812000 */  mtc1    $at, $f4                   ## $f4 = 300.00
/* 0D474 808E3CE4 240F0096 */  addiu   $t7, $zero, 0x0096         ## $t7 = 00000096
/* 0D478 808E3CE8 3C0640E0 */  lui     $a2, 0x40E0                ## $a2 = 40E00000
/* 0D47C 808E3CEC 46047182 */  mul.s   $f6, $f14, $f4             
/* 0D480 808E3CF0 24180020 */  addiu   $t8, $zero, 0x0020         ## $t8 = 00000020
/* 0D484 808E3CF4 4606003C */  c.lt.s  $f0, $f6                   
/* 0D488 808E3CF8 00000000 */  nop
/* 0D48C 808E3CFC 4502000A */  bc1fl   .L808E3D28                 
/* 0D490 808E3D00 27DE0001 */  addiu   $s8, $s8, 0x0001           ## $s8 = 0000000B
/* 0D494 808E3D04 A20F0001 */  sb      $t7, 0x0001($s0)           ## 00010001
/* 0D498 808E3D08 8EA50000 */  lw      $a1, 0x0000($s5)           ## 808F93D0
/* 0D49C 808E3D0C 44804000 */  mtc1    $zero, $f8                 ## $f8 = 0.00
/* 0D4A0 808E3D10 8FA400D0 */  lw      $a0, 0x00D0($sp)           
/* 0D4A4 808E3D14 84A7008A */  lh      $a3, 0x008A($a1)           ## 0000008A
/* 0D4A8 808E3D18 AFB80014 */  sw      $t8, 0x0014($sp)           
/* 0D4AC 808E3D1C 0C00BDB5 */  jal     func_8002F6D4              
/* 0D4B0 808E3D20 E7A80010 */  swc1    $f8, 0x0010($sp)           
.L808E3D24:
/* 0D4B4 808E3D24 27DE0001 */  addiu   $s8, $s8, 0x0001           ## $s8 = 0000000C
.L808E3D28:
/* 0D4B8 808E3D28 001EF400 */  sll     $s8, $s8, 16               
/* 0D4BC 808E3D2C 001EF403 */  sra     $s8, $s8, 16               
/* 0D4C0 808E3D30 2BC100C8 */  slti    $at, $s8, 0x00C8           
/* 0D4C4 808E3D34 1420FE2C */  bne     $at, $zero, .L808E35E8     
/* 0D4C8 808E3D38 2610004C */  addiu   $s0, $s0, 0x004C           ## $s0 = 0001004C
/* 0D4CC 808E3D3C 8FBF0074 */  lw      $ra, 0x0074($sp)           
/* 0D4D0 808E3D40 D7B40020 */  ldc1    $f20, 0x0020($sp)          
/* 0D4D4 808E3D44 D7B60028 */  ldc1    $f22, 0x0028($sp)          
/* 0D4D8 808E3D48 D7B80030 */  ldc1    $f24, 0x0030($sp)          
/* 0D4DC 808E3D4C D7BA0038 */  ldc1    $f26, 0x0038($sp)          
/* 0D4E0 808E3D50 D7BC0040 */  ldc1    $f28, 0x0040($sp)          
/* 0D4E4 808E3D54 D7BE0048 */  ldc1    $f30, 0x0048($sp)          
/* 0D4E8 808E3D58 8FB00050 */  lw      $s0, 0x0050($sp)           
/* 0D4EC 808E3D5C 8FB10054 */  lw      $s1, 0x0054($sp)           
/* 0D4F0 808E3D60 8FB20058 */  lw      $s2, 0x0058($sp)           
/* 0D4F4 808E3D64 8FB3005C */  lw      $s3, 0x005C($sp)           
/* 0D4F8 808E3D68 8FB40060 */  lw      $s4, 0x0060($sp)           
/* 0D4FC 808E3D6C 8FB50064 */  lw      $s5, 0x0064($sp)           
/* 0D500 808E3D70 8FB60068 */  lw      $s6, 0x0068($sp)           
/* 0D504 808E3D74 8FB7006C */  lw      $s7, 0x006C($sp)           
/* 0D508 808E3D78 8FBE0070 */  lw      $s8, 0x0070($sp)           
/* 0D50C 808E3D7C 03E00008 */  jr      $ra                        
/* 0D510 808E3D80 27BD00D0 */  addiu   $sp, $sp, 0x00D0           ## $sp = 00000000
