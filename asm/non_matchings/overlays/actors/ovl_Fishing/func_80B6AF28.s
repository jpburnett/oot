.late_rodata
glabel D_80B7B394
    .float 0.001

glabel D_80B7B398
    .float 0.1

glabel D_80B7B39C
    .float 0.3

glabel D_80B7B3A0
    .float 846400.0

glabel D_80B7B3A4
    .float 0.11

glabel D_80B7B3A8
    .float 0.0100000007078

glabel D_80B7B3AC
    .float 0.147

.text
glabel func_80B6AF28
/* 01588 80B6AF28 27BDFF48 */  addiu   $sp, $sp, 0xFF48           ## $sp = FFFFFF48
/* 0158C 80B6AF2C F7BC0040 */  sdc1    $f28, 0x0040($sp)          
/* 01590 80B6AF30 3C014466 */  lui     $at, 0x4466                ## $at = 44660000
/* 01594 80B6AF34 4481E000 */  mtc1    $at, $f28                  ## $f28 = 920.00
/* 01598 80B6AF38 F7BA0038 */  sdc1    $f26, 0x0038($sp)          
/* 0159C 80B6AF3C 3C01C1A0 */  lui     $at, 0xC1A0                ## $at = C1A00000
/* 015A0 80B6AF40 4481D000 */  mtc1    $at, $f26                  ## $f26 = -20.00
/* 015A4 80B6AF44 F7B80030 */  sdc1    $f24, 0x0030($sp)          
/* 015A8 80B6AF48 3C0180B8 */  lui     $at, %hi(D_80B7B394)       ## $at = 80B80000
/* 015AC 80B6AF4C AFB70068 */  sw      $s7, 0x0068($sp)           
/* 015B0 80B6AF50 AFB30058 */  sw      $s3, 0x0058($sp)           
/* 015B4 80B6AF54 F7B60028 */  sdc1    $f22, 0x0028($sp)          
/* 015B8 80B6AF58 C438B394 */  lwc1    $f24, %lo(D_80B7B394)($at) 
/* 015BC 80B6AF5C AFB60064 */  sw      $s6, 0x0064($sp)           
/* 015C0 80B6AF60 AFB50060 */  sw      $s5, 0x0060($sp)           
/* 015C4 80B6AF64 AFB4005C */  sw      $s4, 0x005C($sp)           
/* 015C8 80B6AF68 AFB20054 */  sw      $s2, 0x0054($sp)           
/* 015CC 80B6AF6C AFB0004C */  sw      $s0, 0x004C($sp)           
/* 015D0 80B6AF70 F7B40020 */  sdc1    $f20, 0x0020($sp)          
/* 015D4 80B6AF74 3C0180B8 */  lui     $at, %hi(D_80B7B398)       ## $at = 80B80000
/* 015D8 80B6AF78 3C138016 */  lui     $s3, %hi(gGameInfo)
/* 015DC 80B6AF7C 3C1780B8 */  lui     $s7, %hi(D_80B7A89C)       ## $s7 = 80B80000
/* 015E0 80B6AF80 4480B000 */  mtc1    $zero, $f22                ## $f22 = 0.00
/* 015E4 80B6AF84 00808025 */  or      $s0, $a0, $zero            ## $s0 = 00000000
/* 015E8 80B6AF88 00A09025 */  or      $s2, $a1, $zero            ## $s2 = 00000000
/* 015EC 80B6AF8C AFBF006C */  sw      $ra, 0x006C($sp)           
/* 015F0 80B6AF90 AFB10050 */  sw      $s1, 0x0050($sp)           
/* 015F4 80B6AF94 26F7A89C */  addiu   $s7, $s7, %lo(D_80B7A89C)  ## $s7 = 80B7A89C
/* 015F8 80B6AF98 2673FA90 */  addiu   $s3, %lo(gGameInfo)
/* 015FC 80B6AF9C C434B398 */  lwc1    $f20, %lo(D_80B7B398)($at) 
/* 01600 80B6AFA0 0000A025 */  or      $s4, $zero, $zero          ## $s4 = 00000000
/* 01604 80B6AFA4 3C150001 */  lui     $s5, 0x0001                ## $s5 = 00010000
/* 01608 80B6AFA8 24160005 */  addiu   $s6, $zero, 0x0005         ## $s6 = 00000005
.L80B6AFAC:
/* 0160C 80B6AFAC 92030024 */  lbu     $v1, 0x0024($s0)           ## 00000024
/* 01610 80B6AFB0 5060019B */  beql    $v1, $zero, .L80B6B620     
/* 01614 80B6AFB4 26940001 */  addiu   $s4, $s4, 0x0001           ## $s4 = 00000001
/* 01618 80B6AFB8 C6040000 */  lwc1    $f4, 0x0000($s0)           ## 00000000
/* 0161C 80B6AFBC C606000C */  lwc1    $f6, 0x000C($s0)           ## 0000000C
/* 01620 80B6AFC0 C6000010 */  lwc1    $f0, 0x0010($s0)           ## 00000010
/* 01624 80B6AFC4 C60A0004 */  lwc1    $f10, 0x0004($s0)          ## 00000004
/* 01628 80B6AFC8 46062200 */  add.s   $f8, $f4, $f6              
/* 0162C 80B6AFCC C6060008 */  lwc1    $f6, 0x0008($s0)           ## 00000008
/* 01630 80B6AFD0 920E0025 */  lbu     $t6, 0x0025($s0)           ## 00000025
/* 01634 80B6AFD4 46005100 */  add.s   $f4, $f10, $f0             
/* 01638 80B6AFD8 E6080000 */  swc1    $f8, 0x0000($s0)           ## 00000000
/* 0163C 80B6AFDC C6080014 */  lwc1    $f8, 0x0014($s0)           ## 00000014
/* 01640 80B6AFE0 24010001 */  addiu   $at, $zero, 0x0001         ## $at = 00000001
/* 01644 80B6AFE4 E6040004 */  swc1    $f4, 0x0004($s0)           ## 00000004
/* 01648 80B6AFE8 C604001C */  lwc1    $f4, 0x001C($s0)           ## 0000001C
/* 0164C 80B6AFEC 46083280 */  add.s   $f10, $f6, $f8             
/* 01650 80B6AFF0 25CF0001 */  addiu   $t7, $t6, 0x0001           ## $t7 = 00000001
/* 01654 80B6AFF4 A20F0025 */  sb      $t7, 0x0025($s0)           ## 00000025
/* 01658 80B6AFF8 46040180 */  add.s   $f6, $f0, $f4              
/* 0165C 80B6AFFC E60A0008 */  swc1    $f10, 0x0008($s0)          ## 00000008
/* 01660 80B6B000 00601025 */  or      $v0, $v1, $zero            ## $v0 = 00000000
/* 01664 80B6B004 1461001F */  bne     $v1, $at, .L80B6B084       
/* 01668 80B6B008 E6060010 */  swc1    $f6, 0x0010($s0)           ## 00000010
/* 0166C 80B6B00C 3C063E4C */  lui     $a2, 0x3E4C                ## $a2 = 3E4C0000
/* 01670 80B6B010 34C6CCCD */  ori     $a2, $a2, 0xCCCD           ## $a2 = 3E4CCCCD
/* 01674 80B6B014 26040030 */  addiu   $a0, $s0, 0x0030           ## $a0 = 00000030
/* 01678 80B6B018 8E050034 */  lw      $a1, 0x0034($s0)           ## 00000034
/* 0167C 80B6B01C 0C01E107 */  jal     Math_ApproachF
              
/* 01680 80B6B020 8E070038 */  lw      $a3, 0x0038($s0)           ## 00000038
/* 01684 80B6B024 8618002C */  lh      $t8, 0x002C($s0)           ## 0000002C
/* 01688 80B6B028 5700000F */  bnel    $t8, $zero, .L80B6B068     
/* 0168C 80B6B02C 860C002A */  lh      $t4, 0x002A($s0)           ## 0000002A
/* 01690 80B6B030 8619002A */  lh      $t9, 0x002A($s0)           ## 0000002A
/* 01694 80B6B034 8602002E */  lh      $v0, 0x002E($s0)           ## 0000002E
/* 01698 80B6B038 27280014 */  addiu   $t0, $t9, 0x0014           ## $t0 = 00000014
/* 0169C 80B6B03C A608002A */  sh      $t0, 0x002A($s0)           ## 0000002A
/* 016A0 80B6B040 8609002A */  lh      $t1, 0x002A($s0)           ## 0000002A
/* 016A4 80B6B044 0122082A */  slt     $at, $t1, $v0              
/* 016A8 80B6B048 54200175 */  bnel    $at, $zero, .L80B6B620     
/* 016AC 80B6B04C 26940001 */  addiu   $s4, $s4, 0x0001           ## $s4 = 00000002
/* 016B0 80B6B050 860A002C */  lh      $t2, 0x002C($s0)           ## 0000002C
/* 016B4 80B6B054 A602002A */  sh      $v0, 0x002A($s0)           ## 0000002A
/* 016B8 80B6B058 254B0001 */  addiu   $t3, $t2, 0x0001           ## $t3 = 00000001
/* 016BC 80B6B05C 1000016F */  beq     $zero, $zero, .L80B6B61C   
/* 016C0 80B6B060 A60B002C */  sh      $t3, 0x002C($s0)           ## 0000002C
/* 016C4 80B6B064 860C002A */  lh      $t4, 0x002A($s0)           ## 0000002A
.L80B6B068:
/* 016C8 80B6B068 258DFFF8 */  addiu   $t5, $t4, 0xFFF8           ## $t5 = FFFFFFF8
/* 016CC 80B6B06C A60D002A */  sh      $t5, 0x002A($s0)           ## 0000002A
/* 016D0 80B6B070 860E002A */  lh      $t6, 0x002A($s0)           ## 0000002A
/* 016D4 80B6B074 5DC0016A */  bgtzl   $t6, .L80B6B620            
/* 016D8 80B6B078 26940001 */  addiu   $s4, $s4, 0x0001           ## $s4 = 00000003
/* 016DC 80B6B07C 10000167 */  beq     $zero, $zero, .L80B6B61C   
/* 016E0 80B6B080 A2000024 */  sb      $zero, 0x0024($s0)         ## 00000024
.L80B6B084:
/* 016E4 80B6B084 24010003 */  addiu   $at, $zero, 0x0003         ## $at = 00000003
/* 016E8 80B6B088 14410020 */  bne     $v0, $at, .L80B6B10C       
/* 016EC 80B6B08C 26040030 */  addiu   $a0, $s0, 0x0030           ## $a0 = 00000030
/* 016F0 80B6B090 4406A000 */  mfc1    $a2, $f20                  
/* 016F4 80B6B094 4407A000 */  mfc1    $a3, $f20                  
/* 016F8 80B6B098 0C01E107 */  jal     Math_ApproachF
              
/* 016FC 80B6B09C 8E050034 */  lw      $a1, 0x0034($s0)           ## 00000034
/* 01700 80B6B0A0 860F002A */  lh      $t7, 0x002A($s0)           ## 0000002A
/* 01704 80B6B0A4 3C0140A0 */  lui     $at, 0x40A0                ## $at = 40A00000
/* 01708 80B6B0A8 44812000 */  mtc1    $at, $f4                   ## $f4 = 5.00
/* 0170C 80B6B0AC 25F8FFF6 */  addiu   $t8, $t7, 0xFFF6           ## $t8 = FFFFFFF6
/* 01710 80B6B0B0 A618002A */  sh      $t8, 0x002A($s0)           ## 0000002A
/* 01714 80B6B0B4 8E5907C0 */  lw      $t9, 0x07C0($s2)           ## 000007C0
/* 01718 80B6B0B8 8F280028 */  lw      $t0, 0x0028($t9)           ## 00000028
/* 0171C 80B6B0BC 85090002 */  lh      $t1, 0x0002($t0)           ## 00000002
/* 01720 80B6B0C0 44894000 */  mtc1    $t1, $f8                   ## $f8 = 0.00
/* 01724 80B6B0C4 00000000 */  nop
/* 01728 80B6B0C8 468042A0 */  cvt.s.w $f10, $f8                  
/* 0172C 80B6B0CC C6080004 */  lwc1    $f8, 0x0004($s0)           ## 00000004
/* 01730 80B6B0D0 46045181 */  sub.s   $f6, $f10, $f4             
/* 01734 80B6B0D4 4608303C */  c.lt.s  $f6, $f8                   
/* 01738 80B6B0D8 00000000 */  nop
/* 0173C 80B6B0DC 45020007 */  bc1fl   .L80B6B0FC                 
/* 01740 80B6B0E0 860C002A */  lh      $t4, 0x002A($s0)           ## 0000002A
/* 01744 80B6B0E4 860A002A */  lh      $t2, 0x002A($s0)           ## 0000002A
/* 01748 80B6B0E8 E616001C */  swc1    $f22, 0x001C($s0)          ## 0000001C
/* 0174C 80B6B0EC E6160010 */  swc1    $f22, 0x0010($s0)          ## 00000010
/* 01750 80B6B0F0 254BFFFB */  addiu   $t3, $t2, 0xFFFB           ## $t3 = FFFFFFFB
/* 01754 80B6B0F4 A60B002A */  sh      $t3, 0x002A($s0)           ## 0000002A
/* 01758 80B6B0F8 860C002A */  lh      $t4, 0x002A($s0)           ## 0000002A
.L80B6B0FC:
/* 0175C 80B6B0FC 5D800148 */  bgtzl   $t4, .L80B6B620            
/* 01760 80B6B100 26940001 */  addiu   $s4, $s4, 0x0001           ## $s4 = 00000004
/* 01764 80B6B104 10000145 */  beq     $zero, $zero, .L80B6B61C   
/* 01768 80B6B108 A2000024 */  sb      $zero, 0x0024($s0)         ## 00000024
.L80B6B10C:
/* 0176C 80B6B10C 24010004 */  addiu   $at, $zero, 0x0004         ## $at = 00000004
/* 01770 80B6B110 54410032 */  bnel    $v0, $at, .L80B6B1DC       
/* 01774 80B6B114 24010002 */  addiu   $at, $zero, 0x0002         ## $at = 00000002
/* 01778 80B6B118 860D002C */  lh      $t5, 0x002C($s0)           ## 0000002C
/* 0177C 80B6B11C 3C01428A */  lui     $at, 0x428A                ## $at = 428A0000
/* 01780 80B6B120 55A00008 */  bnel    $t5, $zero, .L80B6B144     
/* 01784 80B6B124 44811000 */  mtc1    $at, $f2                   ## $f2 = 69.00
/* 01788 80B6B128 8E4E07C0 */  lw      $t6, 0x07C0($s2)           ## 000007C0
/* 0178C 80B6B12C 8DCF0028 */  lw      $t7, 0x0028($t6)           ## 00000028
/* 01790 80B6B130 85F80002 */  lh      $t8, 0x0002($t7)           ## 00000002
/* 01794 80B6B134 44985000 */  mtc1    $t8, $f10                  ## $f10 = NaN
/* 01798 80B6B138 10000003 */  beq     $zero, $zero, .L80B6B148   
/* 0179C 80B6B13C 468050A0 */  cvt.s.w $f2, $f10                  
/* 017A0 80B6B140 44811000 */  mtc1    $at, $f2                   ## $f2 = 69.00
.L80B6B144:
/* 017A4 80B6B144 00000000 */  nop
.L80B6B148:
/* 017A8 80B6B148 C6040004 */  lwc1    $f4, 0x0004($s0)           ## 00000004
/* 017AC 80B6B14C 4604103E */  c.le.s  $f2, $f4                   
/* 017B0 80B6B150 00000000 */  nop
/* 017B4 80B6B154 45020132 */  bc1fl   .L80B6B620                 
/* 017B8 80B6B158 26940001 */  addiu   $s4, $s4, 0x0001           ## $s4 = 00000005
/* 017BC 80B6B15C A2000024 */  sb      $zero, 0x0024($s0)         ## 00000024
/* 017C0 80B6B160 0C03F66B */  jal     Rand_ZeroOne
              ## Rand.Next() float
/* 017C4 80B6B164 E7A200B4 */  swc1    $f2, 0x00B4($sp)           
/* 017C8 80B6B168 3C0180B8 */  lui     $at, %hi(D_80B7B39C)       ## $at = 80B80000
/* 017CC 80B6B16C C426B39C */  lwc1    $f6, %lo(D_80B7B39C)($at)  
/* 017D0 80B6B170 C7A200B4 */  lwc1    $f2, 0x00B4($sp)           
/* 017D4 80B6B174 27A600A4 */  addiu   $a2, $sp, 0x00A4           ## $a2 = FFFFFFEC
/* 017D8 80B6B178 4606003C */  c.lt.s  $f0, $f6                   
/* 017DC 80B6B17C 00002025 */  or      $a0, $zero, $zero          ## $a0 = 00000000
/* 017E0 80B6B180 45020127 */  bc1fl   .L80B6B620                 
/* 017E4 80B6B184 26940001 */  addiu   $s4, $s4, 0x0001           ## $s4 = 00000006
/* 017E8 80B6B188 8E080000 */  lw      $t0, 0x0000($s0)           ## 00000000
/* 017EC 80B6B18C 02554821 */  addu    $t1, $s2, $s5              
/* 017F0 80B6B190 3C014270 */  lui     $at, 0x4270                ## $at = 42700000
/* 017F4 80B6B194 ACC80000 */  sw      $t0, 0x0000($a2)           ## FFFFFFEC
/* 017F8 80B6B198 8E190004 */  lw      $t9, 0x0004($s0)           ## 00000004
/* 017FC 80B6B19C 44814000 */  mtc1    $at, $f8                   ## $f8 = 60.00
/* 01800 80B6B1A0 240A0096 */  addiu   $t2, $zero, 0x0096         ## $t2 = 00000096
/* 01804 80B6B1A4 ACD90004 */  sw      $t9, 0x0004($a2)           ## FFFFFFF0
/* 01808 80B6B1A8 8E080008 */  lw      $t0, 0x0008($s0)           ## 00000008
/* 0180C 80B6B1AC 240B005A */  addiu   $t3, $zero, 0x005A         ## $t3 = 0000005A
/* 01810 80B6B1B0 3C0741A0 */  lui     $a3, 0x41A0                ## $a3 = 41A00000
/* 01814 80B6B1B4 ACC80008 */  sw      $t0, 0x0008($a2)           ## FFFFFFF4
/* 01818 80B6B1B8 E7A200A8 */  swc1    $f2, 0x00A8($sp)           
/* 0181C 80B6B1BC 8D251E10 */  lw      $a1, 0x1E10($t1)           ## 00001E10
/* 01820 80B6B1C0 AFAB0018 */  sw      $t3, 0x0018($sp)           
/* 01824 80B6B1C4 AFAA0014 */  sw      $t2, 0x0014($sp)           
/* 01828 80B6B1C8 0C2DA70B */  jal     func_80B69C2C              
/* 0182C 80B6B1CC E7A80010 */  swc1    $f8, 0x0010($sp)           
/* 01830 80B6B1D0 10000113 */  beq     $zero, $zero, .L80B6B620   
/* 01834 80B6B1D4 26940001 */  addiu   $s4, $s4, 0x0001           ## $s4 = 00000007
/* 01838 80B6B1D8 24010002 */  addiu   $at, $zero, 0x0002         ## $at = 00000002
.L80B6B1DC:
/* 0183C 80B6B1DC 14410038 */  bne     $v0, $at, .L80B6B2C0       
/* 01840 80B6B1E0 00000000 */  nop
/* 01844 80B6B1E4 C60A0010 */  lwc1    $f10, 0x0010($s0)          ## 00000010
/* 01848 80B6B1E8 461A503C */  c.lt.s  $f10, $f26                 
/* 0184C 80B6B1EC 00000000 */  nop
/* 01850 80B6B1F0 45020004 */  bc1fl   .L80B6B204                 
/* 01854 80B6B1F4 8E4C07C0 */  lw      $t4, 0x07C0($s2)           ## 000007C0
/* 01858 80B6B1F8 E61A0010 */  swc1    $f26, 0x0010($s0)          ## 00000010
/* 0185C 80B6B1FC E616001C */  swc1    $f22, 0x001C($s0)          ## 0000001C
/* 01860 80B6B200 8E4C07C0 */  lw      $t4, 0x07C0($s2)           ## 000007C0
.L80B6B204:
/* 01864 80B6B204 C6080004 */  lwc1    $f8, 0x0004($s0)           ## 00000004
/* 01868 80B6B208 8D8D0028 */  lw      $t5, 0x0028($t4)           ## 00000028
/* 0186C 80B6B20C 85AE0002 */  lh      $t6, 0x0002($t5)           ## 00000002
/* 01870 80B6B210 448E2000 */  mtc1    $t6, $f4                   ## $f4 = 0.00
/* 01874 80B6B214 00000000 */  nop
/* 01878 80B6B218 468021A0 */  cvt.s.w $f6, $f4                   
/* 0187C 80B6B21C 4606403E */  c.le.s  $f8, $f6                   
/* 01880 80B6B220 00000000 */  nop
/* 01884 80B6B224 450200FE */  bc1fl   .L80B6B620                 
/* 01888 80B6B228 26940001 */  addiu   $s4, $s4, 0x0001           ## $s4 = 00000008
/* 0188C 80B6B22C 0C03F66B */  jal     Rand_ZeroOne
              ## Rand.Next() float
/* 01890 80B6B230 A2000024 */  sb      $zero, 0x0024($s0)         ## 00000024
/* 01894 80B6B234 3C013F00 */  lui     $at, 0x3F00                ## $at = 3F000000
/* 01898 80B6B238 44815000 */  mtc1    $at, $f10                  ## $f10 = 0.50
/* 0189C 80B6B23C 00000000 */  nop
/* 018A0 80B6B240 460A003C */  c.lt.s  $f0, $f10                  
/* 018A4 80B6B244 00000000 */  nop
/* 018A8 80B6B248 450200F5 */  bc1fl   .L80B6B620                 
/* 018AC 80B6B24C 26940001 */  addiu   $s4, $s4, 0x0001           ## $s4 = 00000009
/* 018B0 80B6B250 8E180000 */  lw      $t8, 0x0000($s0)           ## 00000000
/* 018B4 80B6B254 27A60098 */  addiu   $a2, $sp, 0x0098           ## $a2 = FFFFFFE0
/* 018B8 80B6B258 02555021 */  addu    $t2, $s2, $s5              
/* 018BC 80B6B25C ACD80000 */  sw      $t8, 0x0000($a2)           ## FFFFFFE0
/* 018C0 80B6B260 8E0F0004 */  lw      $t7, 0x0004($s0)           ## 00000004
/* 018C4 80B6B264 3C0142DC */  lui     $at, 0x42DC                ## $at = 42DC0000
/* 018C8 80B6B268 44814000 */  mtc1    $at, $f8                   ## $f8 = 110.00
/* 018CC 80B6B26C ACCF0004 */  sw      $t7, 0x0004($a2)           ## FFFFFFE4
/* 018D0 80B6B270 8E180008 */  lw      $t8, 0x0008($s0)           ## 00000008
/* 018D4 80B6B274 240B0096 */  addiu   $t3, $zero, 0x0096         ## $t3 = 00000096
/* 018D8 80B6B278 240C005A */  addiu   $t4, $zero, 0x005A         ## $t4 = 0000005A
/* 018DC 80B6B27C ACD80008 */  sw      $t8, 0x0008($a2)           ## FFFFFFE8
/* 018E0 80B6B280 8E5907C0 */  lw      $t9, 0x07C0($s2)           ## 000007C0
/* 018E4 80B6B284 00002025 */  or      $a0, $zero, $zero          ## $a0 = 00000000
/* 018E8 80B6B288 3C074220 */  lui     $a3, 0x4220                ## $a3 = 42200000
/* 018EC 80B6B28C 8F280028 */  lw      $t0, 0x0028($t9)           ## 00000028
/* 018F0 80B6B290 85090002 */  lh      $t1, 0x0002($t0)           ## 00000002
/* 018F4 80B6B294 44892000 */  mtc1    $t1, $f4                   ## $f4 = 0.00
/* 018F8 80B6B298 00000000 */  nop
/* 018FC 80B6B29C 468021A0 */  cvt.s.w $f6, $f4                   
/* 01900 80B6B2A0 E7A6009C */  swc1    $f6, 0x009C($sp)           
/* 01904 80B6B2A4 8D451E10 */  lw      $a1, 0x1E10($t2)           ## 00001E10
/* 01908 80B6B2A8 AFAC0018 */  sw      $t4, 0x0018($sp)           
/* 0190C 80B6B2AC AFAB0014 */  sw      $t3, 0x0014($sp)           
/* 01910 80B6B2B0 0C2DA70B */  jal     func_80B69C2C              
/* 01914 80B6B2B4 E7A80010 */  swc1    $f8, 0x0010($sp)           
/* 01918 80B6B2B8 100000D9 */  beq     $zero, $zero, .L80B6B620   
/* 0191C 80B6B2BC 26940001 */  addiu   $s4, $s4, 0x0001           ## $s4 = 0000000A
.L80B6B2C0:
/* 01920 80B6B2C0 16C20055 */  bne     $s6, $v0, .L80B6B418       
/* 01924 80B6B2C4 28410007 */  slti    $at, $v0, 0x0007           
/* 01928 80B6B2C8 8E4D07C0 */  lw      $t5, 0x07C0($s2)           ## 000007C0
/* 0192C 80B6B2CC C6040004 */  lwc1    $f4, 0x0004($s0)           ## 00000004
/* 01930 80B6B2D0 8DAE0028 */  lw      $t6, 0x0028($t5)           ## 00000028
/* 01934 80B6B2D4 85CF0002 */  lh      $t7, 0x0002($t6)           ## 00000002
/* 01938 80B6B2D8 448F5000 */  mtc1    $t7, $f10                  ## $f10 = 0.00
/* 0193C 80B6B2DC 00000000 */  nop
/* 01940 80B6B2E0 468053A0 */  cvt.s.w $f14, $f10                 
/* 01944 80B6B2E4 460E203C */  c.lt.s  $f4, $f14                  
/* 01948 80B6B2E8 00000000 */  nop
/* 0194C 80B6B2EC 450200CC */  bc1fl   .L80B6B620                 
/* 01950 80B6B2F0 26940001 */  addiu   $s4, $s4, 0x0001           ## $s4 = 0000000B
/* 01954 80B6B2F4 C6020000 */  lwc1    $f2, 0x0000($s0)           ## 00000000
/* 01958 80B6B2F8 C60C0008 */  lwc1    $f12, 0x0008($s0)          ## 00000008
/* 0195C 80B6B2FC 3C0180B8 */  lui     $at, %hi(D_80B7B3A0)       ## $at = 80B80000
/* 01960 80B6B300 46021182 */  mul.s   $f6, $f2, $f2              
/* 01964 80B6B304 C42AB3A0 */  lwc1    $f10, %lo(D_80B7B3A0)($at) 
/* 01968 80B6B308 3C014040 */  lui     $at, 0x4040                ## $at = 40400000
/* 0196C 80B6B30C 460C6202 */  mul.s   $f8, $f12, $f12            
/* 01970 80B6B310 46083400 */  add.s   $f16, $f6, $f8             
/* 01974 80B6B314 4610503C */  c.lt.s  $f10, $f16                 
/* 01978 80B6B318 00000000 */  nop
/* 0197C 80B6B31C 45020019 */  bc1fl   .L80B6B384                 
/* 01980 80B6B320 44815000 */  mtc1    $at, $f10                  ## $f10 = 3.00
/* 01984 80B6B324 46008004 */  sqrt.s  $f0, $f16                  
/* 01988 80B6B328 3C0180B8 */  lui     $at, %hi(D_80B7B3A4)       ## $at = 80B80000
/* 0198C 80B6B32C C426B3A4 */  lwc1    $f6, %lo(D_80B7B3A4)($at)  
/* 01990 80B6B330 24090008 */  addiu   $t1, $zero, 0x0008         ## $t1 = 00000008
/* 01994 80B6B334 2602000C */  addiu   $v0, $s0, 0x000C           ## $v0 = 0000000C
/* 01998 80B6B338 461C0101 */  sub.s   $f4, $f0, $f28             
/* 0199C 80B6B33C 46062202 */  mul.s   $f8, $f4, $f6              
/* 019A0 80B6B340 460E4280 */  add.s   $f10, $f8, $f14            
/* 019A4 80B6B344 E60A0004 */  swc1    $f10, 0x0004($s0)          ## 00000004
/* 019A8 80B6B348 8E780000 */  lw      $t8, 0x0000($s3)           ## 8015FA90
/* 019AC 80B6B34C 871909F6 */  lh      $t9, 0x09F6($t8)           ## 000009F6
/* 019B0 80B6B350 A2090024 */  sb      $t1, 0x0024($s0)           ## 00000024
/* 019B4 80B6B354 27280002 */  addiu   $t0, $t9, 0x0002           ## $t0 = 00000002
/* 019B8 80B6B358 A2080025 */  sb      $t0, 0x0025($s0)           ## 00000025
/* 019BC 80B6B35C 8E6A0000 */  lw      $t2, 0x0000($s3)           ## 8015FA90
/* 019C0 80B6B360 854B09F8 */  lh      $t3, 0x09F8($t2)           ## 000009F8
/* 019C4 80B6B364 256C001E */  addiu   $t4, $t3, 0x001E           ## $t4 = 0000001E
/* 019C8 80B6B368 448C2000 */  mtc1    $t4, $f4                   ## $f4 = 0.00
/* 019CC 80B6B36C 00000000 */  nop
/* 019D0 80B6B370 468021A0 */  cvt.s.w $f6, $f4                   
/* 019D4 80B6B374 46183202 */  mul.s   $f8, $f6, $f24             
/* 019D8 80B6B378 10000020 */  beq     $zero, $zero, .L80B6B3FC   
/* 019DC 80B6B37C E6080030 */  swc1    $f8, 0x0030($s0)           ## 00000030
/* 019E0 80B6B380 44815000 */  mtc1    $at, $f10                  ## $f10 = -0.00
.L80B6B384:
/* 019E4 80B6B384 A2000025 */  sb      $zero, 0x0025($s0)         ## 00000025
/* 019E8 80B6B388 460A7100 */  add.s   $f4, $f14, $f10            
/* 019EC 80B6B38C 0C03F66B */  jal     Rand_ZeroOne
              ## Rand.Next() float
/* 019F0 80B6B390 E6040004 */  swc1    $f4, 0x0004($s0)           ## 00000004
/* 019F4 80B6B394 3C013F40 */  lui     $at, 0x3F40                ## $at = 3F400000
/* 019F8 80B6B398 44813000 */  mtc1    $at, $f6                   ## $f6 = 0.75
/* 019FC 80B6B39C 240D0007 */  addiu   $t5, $zero, 0x0007         ## $t5 = 00000007
/* 01A00 80B6B3A0 2602000C */  addiu   $v0, $s0, 0x000C           ## $v0 = 0000000C
/* 01A04 80B6B3A4 4606003C */  c.lt.s  $f0, $f6                   
/* 01A08 80B6B3A8 00000000 */  nop
/* 01A0C 80B6B3AC 45020013 */  bc1fl   .L80B6B3FC                 
/* 01A10 80B6B3B0 A2000024 */  sb      $zero, 0x0024($s0)         ## 00000024
/* 01A14 80B6B3B4 A20D0024 */  sb      $t5, 0x0024($s0)           ## 00000024
/* 01A18 80B6B3B8 8EEF0000 */  lw      $t7, 0x0000($s7)           ## 80B7A89C
/* 01A1C 80B6B3BC 2602000C */  addiu   $v0, $s0, 0x000C           ## $v0 = 0000000C
/* 01A20 80B6B3C0 AC4F0000 */  sw      $t7, 0x0000($v0)           ## 0000000C
/* 01A24 80B6B3C4 8EEE0004 */  lw      $t6, 0x0004($s7)           ## 80B7A8A0
/* 01A28 80B6B3C8 AC4E0004 */  sw      $t6, 0x0004($v0)           ## 00000010
/* 01A2C 80B6B3CC 8EEF0008 */  lw      $t7, 0x0008($s7)           ## 80B7A8A4
/* 01A30 80B6B3D0 AC4F0008 */  sw      $t7, 0x0008($v0)           ## 00000014
/* 01A34 80B6B3D4 8E780000 */  lw      $t8, 0x0000($s3)           ## 8015FA90
/* 01A38 80B6B3D8 871909F8 */  lh      $t9, 0x09F8($t8)           ## 000009F8
/* 01A3C 80B6B3DC 2728001E */  addiu   $t0, $t9, 0x001E           ## $t0 = 0000001E
/* 01A40 80B6B3E0 44884000 */  mtc1    $t0, $f8                   ## $f8 = 0.00
/* 01A44 80B6B3E4 00000000 */  nop
/* 01A48 80B6B3E8 468042A0 */  cvt.s.w $f10, $f8                  
/* 01A4C 80B6B3EC 46185102 */  mul.s   $f4, $f10, $f24            
/* 01A50 80B6B3F0 10000002 */  beq     $zero, $zero, .L80B6B3FC   
/* 01A54 80B6B3F4 E6040030 */  swc1    $f4, 0x0030($s0)           ## 00000030
/* 01A58 80B6B3F8 A2000024 */  sb      $zero, 0x0024($s0)         ## 00000024
.L80B6B3FC:
/* 01A5C 80B6B3FC 8EEA0000 */  lw      $t2, 0x0000($s7)           ## 80B7A89C
/* 01A60 80B6B400 AC4A0000 */  sw      $t2, 0x0000($v0)           ## 0000000C
/* 01A64 80B6B404 8EE90004 */  lw      $t1, 0x0004($s7)           ## 80B7A8A0
/* 01A68 80B6B408 AC490004 */  sw      $t1, 0x0004($v0)           ## 00000010
/* 01A6C 80B6B40C 8EEA0008 */  lw      $t2, 0x0008($s7)           ## 80B7A8A4
/* 01A70 80B6B410 10000082 */  beq     $zero, $zero, .L80B6B61C   
/* 01A74 80B6B414 AC4A0008 */  sw      $t2, 0x0008($v0)           ## 00000014
.L80B6B418:
/* 01A78 80B6B418 54200011 */  bnel    $at, $zero, .L80B6B460     
/* 01A7C 80B6B41C 24010006 */  addiu   $at, $zero, 0x0006         ## $at = 00000006
/* 01A80 80B6B420 8E6B0000 */  lw      $t3, 0x0000($s3)           ## 8015FA90
/* 01A84 80B6B424 C6060030 */  lwc1    $f6, 0x0030($s0)           ## 00000030
/* 01A88 80B6B428 920E0025 */  lbu     $t6, 0x0025($s0)           ## 00000025
/* 01A8C 80B6B42C 856C09F8 */  lh      $t4, 0x09F8($t3)           ## 000009F8
/* 01A90 80B6B430 29C10006 */  slti    $at, $t6, 0x0006           
/* 01A94 80B6B434 258D001E */  addiu   $t5, $t4, 0x001E           ## $t5 = 0000001E
/* 01A98 80B6B438 448D4000 */  mtc1    $t5, $f8                   ## $f8 = 0.00
/* 01A9C 80B6B43C 00000000 */  nop
/* 01AA0 80B6B440 468042A0 */  cvt.s.w $f10, $f8                  
/* 01AA4 80B6B444 46185102 */  mul.s   $f4, $f10, $f24            
/* 01AA8 80B6B448 46043200 */  add.s   $f8, $f6, $f4              
/* 01AAC 80B6B44C 14200073 */  bne     $at, $zero, .L80B6B61C     
/* 01AB0 80B6B450 E6080030 */  swc1    $f8, 0x0030($s0)           ## 00000030
/* 01AB4 80B6B454 10000071 */  beq     $zero, $zero, .L80B6B61C   
/* 01AB8 80B6B458 A2000024 */  sb      $zero, 0x0024($s0)         ## 00000024
/* 01ABC 80B6B45C 24010006 */  addiu   $at, $zero, 0x0006         ## $at = 00000006
.L80B6B460:
/* 01AC0 80B6B460 1441006E */  bne     $v0, $at, .L80B6B61C       
/* 01AC4 80B6B464 3C0480B8 */  lui     $a0, %hi(D_80B7E09E)       ## $a0 = 80B80000
/* 01AC8 80B6B468 3C0180B8 */  lui     $at, %hi(D_80B7B3A8)       ## $at = 80B80000
/* 01ACC 80B6B46C C42AB3A8 */  lwc1    $f10, %lo(D_80B7B3A8)($at) 
/* 01AD0 80B6B470 2484E09E */  addiu   $a0, $a0, %lo(D_80B7E09E)  ## $a0 = 80B7E09E
/* 01AD4 80B6B474 00002825 */  or      $a1, $zero, $zero          ## $a1 = 00000000
/* 01AD8 80B6B478 24060014 */  addiu   $a2, $zero, 0x0014         ## $a2 = 00000014
/* 01ADC 80B6B47C 24070064 */  addiu   $a3, $zero, 0x0064         ## $a3 = 00000064
/* 01AE0 80B6B480 0C01E1EF */  jal     Math_ApproachS
              
/* 01AE4 80B6B484 E60A0030 */  swc1    $f10, 0x0030($s0)          ## 00000030
/* 01AE8 80B6B488 3C0480B8 */  lui     $a0, %hi(D_80B7E09C)       ## $a0 = 80B80000
/* 01AEC 80B6B48C 2484E09C */  addiu   $a0, $a0, %lo(D_80B7E09C)  ## $a0 = 80B7E09C
/* 01AF0 80B6B490 00002825 */  or      $a1, $zero, $zero          ## $a1 = 00000000
/* 01AF4 80B6B494 24060014 */  addiu   $a2, $zero, 0x0014         ## $a2 = 00000014
/* 01AF8 80B6B498 0C01E1EF */  jal     Math_ApproachS
              
/* 01AFC 80B6B49C 24070064 */  addiu   $a3, $zero, 0x0064         ## $a3 = 00000064
/* 01B00 80B6B4A0 3C0480B8 */  lui     $a0, %hi(D_80B7E0A0)       ## $a0 = 80B80000
/* 01B04 80B6B4A4 2484E0A0 */  addiu   $a0, $a0, %lo(D_80B7E0A0)  ## $a0 = 80B7E0A0
/* 01B08 80B6B4A8 2405C000 */  addiu   $a1, $zero, 0xC000         ## $a1 = FFFFC000
/* 01B0C 80B6B4AC 24060014 */  addiu   $a2, $zero, 0x0014         ## $a2 = 00000014
/* 01B10 80B6B4B0 0C01E1EF */  jal     Math_ApproachS
              
/* 01B14 80B6B4B4 24070064 */  addiu   $a3, $zero, 0x0064         ## $a3 = 00000064
/* 01B18 80B6B4B8 C6020000 */  lwc1    $f2, 0x0000($s0)           ## 00000000
/* 01B1C 80B6B4BC C60C0008 */  lwc1    $f12, 0x0008($s0)          ## 00000008
/* 01B20 80B6B4C0 8E4F07C0 */  lw      $t7, 0x07C0($s2)           ## 000007C0
/* 01B24 80B6B4C4 46021182 */  mul.s   $f6, $f2, $f2              
/* 01B28 80B6B4C8 3C0180B8 */  lui     $at, %hi(D_80B7B3AC)       ## $at = 80B80000
/* 01B2C 80B6B4CC 8DF80028 */  lw      $t8, 0x0028($t7)           ## 00000028
/* 01B30 80B6B4D0 460C6102 */  mul.s   $f4, $f12, $f12            
/* 01B34 80B6B4D4 C42AB3AC */  lwc1    $f10, %lo(D_80B7B3AC)($at) 
/* 01B38 80B6B4D8 87190002 */  lh      $t9, 0x0002($t8)           ## 00000002
/* 01B3C 80B6B4DC 3C014120 */  lui     $at, 0x4120                ## $at = 41200000
/* 01B40 80B6B4E0 C6120004 */  lwc1    $f18, 0x0004($s0)          ## 00000004
/* 01B44 80B6B4E4 46043380 */  add.s   $f14, $f6, $f4             
/* 01B48 80B6B4E8 44992000 */  mtc1    $t9, $f4                   ## $f4 = 0.00
/* 01B4C 80B6B4EC 46007004 */  sqrt.s  $f0, $f14                  
/* 01B50 80B6B4F0 461C0201 */  sub.s   $f8, $f0, $f28             
/* 01B54 80B6B4F4 460A4182 */  mul.s   $f6, $f8, $f10             
/* 01B58 80B6B4F8 44815000 */  mtc1    $at, $f10                  ## $f10 = 10.00
/* 01B5C 80B6B4FC 46802220 */  cvt.s.w $f8, $f4                   
/* 01B60 80B6B500 46083400 */  add.s   $f16, $f6, $f8             
/* 01B64 80B6B504 460A8101 */  sub.s   $f4, $f16, $f10            
/* 01B68 80B6B508 4612203C */  c.lt.s  $f4, $f18                  
/* 01B6C 80B6B50C 00000000 */  nop
/* 01B70 80B6B510 45020004 */  bc1fl   .L80B6B524                 
/* 01B74 80B6B514 92080025 */  lbu     $t0, 0x0025($s0)           ## 00000025
/* 01B78 80B6B518 46149181 */  sub.s   $f6, $f18, $f20            
/* 01B7C 80B6B51C E6060004 */  swc1    $f6, 0x0004($s0)           ## 00000004
/* 01B80 80B6B520 92080025 */  lbu     $t0, 0x0025($s0)           ## 00000025
.L80B6B524:
/* 01B84 80B6B524 3109000F */  andi    $t1, $t0, 0x000F           ## $t1 = 00000000
/* 01B88 80B6B528 5520001C */  bnel    $t1, $zero, .L80B6B59C     
/* 01B8C 80B6B52C 8602002C */  lh      $v0, 0x002C($s0)           ## 0000002C
/* 01B90 80B6B530 8E0B0000 */  lw      $t3, 0x0000($s0)           ## 00000000
/* 01B94 80B6B534 27A60080 */  addiu   $a2, $sp, 0x0080           ## $a2 = FFFFFFC8
/* 01B98 80B6B538 02557821 */  addu    $t7, $s2, $s5              
/* 01B9C 80B6B53C ACCB0000 */  sw      $t3, 0x0000($a2)           ## FFFFFFC8
/* 01BA0 80B6B540 8E0A0004 */  lw      $t2, 0x0004($s0)           ## 00000004
/* 01BA4 80B6B544 3C014396 */  lui     $at, 0x4396                ## $at = 43960000
/* 01BA8 80B6B548 44812000 */  mtc1    $at, $f4                   ## $f4 = 300.00
/* 01BAC 80B6B54C ACCA0004 */  sw      $t2, 0x0004($a2)           ## FFFFFFCC
/* 01BB0 80B6B550 8E0B0008 */  lw      $t3, 0x0008($s0)           ## 00000008
/* 01BB4 80B6B554 24180096 */  addiu   $t8, $zero, 0x0096         ## $t8 = 00000096
/* 01BB8 80B6B558 2419005A */  addiu   $t9, $zero, 0x005A         ## $t9 = 0000005A
/* 01BBC 80B6B55C ACCB0008 */  sw      $t3, 0x0008($a2)           ## FFFFFFD0
/* 01BC0 80B6B560 8E4C07C0 */  lw      $t4, 0x07C0($s2)           ## 000007C0
/* 01BC4 80B6B564 00002025 */  or      $a0, $zero, $zero          ## $a0 = 00000000
/* 01BC8 80B6B568 3C0741F0 */  lui     $a3, 0x41F0                ## $a3 = 41F00000
/* 01BCC 80B6B56C 8D8D0028 */  lw      $t5, 0x0028($t4)           ## 00000028
/* 01BD0 80B6B570 85AE0002 */  lh      $t6, 0x0002($t5)           ## 00000002
/* 01BD4 80B6B574 448E4000 */  mtc1    $t6, $f8                   ## $f8 = 0.00
/* 01BD8 80B6B578 00000000 */  nop
/* 01BDC 80B6B57C 468042A0 */  cvt.s.w $f10, $f8                  
/* 01BE0 80B6B580 E7AA0084 */  swc1    $f10, 0x0084($sp)          
/* 01BE4 80B6B584 8DE51E10 */  lw      $a1, 0x1E10($t7)           ## 00001E10
/* 01BE8 80B6B588 AFB90018 */  sw      $t9, 0x0018($sp)           
/* 01BEC 80B6B58C AFB80014 */  sw      $t8, 0x0014($sp)           
/* 01BF0 80B6B590 0C2DA70B */  jal     func_80B69C2C              
/* 01BF4 80B6B594 E7A40010 */  swc1    $f4, 0x0010($sp)           
/* 01BF8 80B6B598 8602002C */  lh      $v0, 0x002C($s0)           ## 0000002C
.L80B6B59C:
/* 01BFC 80B6B59C 2401001E */  addiu   $at, $zero, 0x001E         ## $at = 0000001E
/* 01C00 80B6B5A0 02402025 */  or      $a0, $s2, $zero            ## $a0 = 00000000
/* 01C04 80B6B5A4 04400003 */  bltz    $v0, .L80B6B5B4            
/* 01C08 80B6B5A8 24480001 */  addiu   $t0, $v0, 0x0001           ## $t0 = 00000001
/* 01C0C 80B6B5AC A608002C */  sh      $t0, 0x002C($s0)           ## 0000002C
/* 01C10 80B6B5B0 8602002C */  lh      $v0, 0x002C($s0)           ## 0000002C
.L80B6B5B4:
/* 01C14 80B6B5B4 14410004 */  bne     $v0, $at, .L80B6B5C8       
/* 01C18 80B6B5B8 240540B3 */  addiu   $a1, $zero, 0x40B3         ## $a1 = 000040B3
/* 01C1C 80B6B5BC 0C042DA0 */  jal     func_8010B680              
/* 01C20 80B6B5C0 00003025 */  or      $a2, $zero, $zero          ## $a2 = 00000000
/* 01C24 80B6B5C4 8602002C */  lh      $v0, 0x002C($s0)           ## 0000002C
.L80B6B5C8:
/* 01C28 80B6B5C8 28410064 */  slti    $at, $v0, 0x0064           
/* 01C2C 80B6B5CC 14200013 */  bne     $at, $zero, .L80B6B61C     
/* 01C30 80B6B5D0 265120D8 */  addiu   $s1, $s2, 0x20D8           ## $s1 = 000020D8
/* 01C34 80B6B5D4 0C042F6F */  jal     func_8010BDBC              
/* 01C38 80B6B5D8 02202025 */  or      $a0, $s1, $zero            ## $a0 = 000020D8
/* 01C3C 80B6B5DC 56C20010 */  bnel    $s6, $v0, .L80B6B620       
/* 01C40 80B6B5E0 26940001 */  addiu   $s4, $s4, 0x0001           ## $s4 = 0000000C
/* 01C44 80B6B5E4 0C041AF2 */  jal     func_80106BC8              
/* 01C48 80B6B5E8 02402025 */  or      $a0, $s2, $zero            ## $a0 = 00000000
/* 01C4C 80B6B5EC 14400005 */  bne     $v0, $zero, .L80B6B604     
/* 01C50 80B6B5F0 00000000 */  nop
/* 01C54 80B6B5F4 0C042F6F */  jal     func_8010BDBC              
/* 01C58 80B6B5F8 02202025 */  or      $a0, $s1, $zero            ## $a0 = 000020D8
/* 01C5C 80B6B5FC 54400008 */  bnel    $v0, $zero, .L80B6B620     
/* 01C60 80B6B600 26940001 */  addiu   $s4, $s4, 0x0001           ## $s4 = 0000000D
.L80B6B604:
/* 01C64 80B6B604 0C041B33 */  jal     func_80106CCC              
/* 01C68 80B6B608 02402025 */  or      $a0, $s2, $zero            ## $a0 = 00000000
/* 01C6C 80B6B60C 0C021CC3 */  jal     Rupees_ChangeBy              
/* 01C70 80B6B610 2404FFCE */  addiu   $a0, $zero, 0xFFCE         ## $a0 = FFFFFFCE
/* 01C74 80B6B614 2409FFFF */  addiu   $t1, $zero, 0xFFFF         ## $t1 = FFFFFFFF
/* 01C78 80B6B618 A609002C */  sh      $t1, 0x002C($s0)           ## 0000002C
.L80B6B61C:
/* 01C7C 80B6B61C 26940001 */  addiu   $s4, $s4, 0x0001           ## $s4 = 0000000E
.L80B6B620:
/* 01C80 80B6B620 0014A400 */  sll     $s4, $s4, 16               
/* 01C84 80B6B624 0014A403 */  sra     $s4, $s4, 16               
/* 01C88 80B6B628 2A810082 */  slti    $at, $s4, 0x0082           
/* 01C8C 80B6B62C 1420FE5F */  bne     $at, $zero, .L80B6AFAC     
/* 01C90 80B6B630 26100040 */  addiu   $s0, $s0, 0x0040           ## $s0 = 00000040
/* 01C94 80B6B634 8FBF006C */  lw      $ra, 0x006C($sp)           
/* 01C98 80B6B638 D7B40020 */  ldc1    $f20, 0x0020($sp)          
/* 01C9C 80B6B63C D7B60028 */  ldc1    $f22, 0x0028($sp)          
/* 01CA0 80B6B640 D7B80030 */  ldc1    $f24, 0x0030($sp)          
/* 01CA4 80B6B644 D7BA0038 */  ldc1    $f26, 0x0038($sp)          
/* 01CA8 80B6B648 D7BC0040 */  ldc1    $f28, 0x0040($sp)          
/* 01CAC 80B6B64C 8FB0004C */  lw      $s0, 0x004C($sp)           
/* 01CB0 80B6B650 8FB10050 */  lw      $s1, 0x0050($sp)           
/* 01CB4 80B6B654 8FB20054 */  lw      $s2, 0x0054($sp)           
/* 01CB8 80B6B658 8FB30058 */  lw      $s3, 0x0058($sp)           
/* 01CBC 80B6B65C 8FB4005C */  lw      $s4, 0x005C($sp)           
/* 01CC0 80B6B660 8FB50060 */  lw      $s5, 0x0060($sp)           
/* 01CC4 80B6B664 8FB60064 */  lw      $s6, 0x0064($sp)           
/* 01CC8 80B6B668 8FB70068 */  lw      $s7, 0x0068($sp)           
/* 01CCC 80B6B66C 03E00008 */  jr      $ra                        
/* 01CD0 80B6B670 27BD00B8 */  addiu   $sp, $sp, 0x00B8           ## $sp = 00000000
