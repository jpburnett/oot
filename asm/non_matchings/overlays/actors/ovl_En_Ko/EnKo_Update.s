glabel EnKo_Update
/* 02954 80A99704 27BDFFC8 */  addiu   $sp, $sp, 0xFFC8           ## $sp = FFFFFFC8
/* 02958 80A99708 AFBF0024 */  sw      $ra, 0x0024($sp)           
/* 0295C 80A9970C AFB10020 */  sw      $s1, 0x0020($sp)           
/* 02960 80A99710 AFB0001C */  sw      $s0, 0x001C($sp)           
/* 02964 80A99714 8C8F0190 */  lw      $t7, 0x0190($a0)           ## 00000190
/* 02968 80A99718 3C0E80AA */  lui     $t6, %hi(func_80A99048)    ## $t6 = 80AA0000
/* 0296C 80A9971C 25CE9048 */  addiu   $t6, $t6, %lo(func_80A99048) ## $t6 = 80A99048
/* 02970 80A99720 00808025 */  or      $s0, $a0, $zero            ## $s0 = 00000000
/* 02974 80A99724 11CF001F */  beq     $t6, $t7, .L80A997A4       
/* 02978 80A99728 00A08825 */  or      $s1, $a1, $zero            ## $s1 = 00000000
/* 0297C 80A9972C C4840220 */  lwc1    $f4, 0x0220($a0)           ## 00000220
/* 02980 80A99730 4600218D */  trunc.w.s $f6, $f4                   
/* 02984 80A99734 44193000 */  mfc1    $t9, $f6                   
/* 02988 80A99738 00000000 */  nop
/* 0298C 80A9973C 53200017 */  beql    $t9, $zero, .L80A9979C     
/* 02990 80A99740 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 02994 80A99744 80880197 */  lb      $t0, 0x0197($a0)           ## 00000197
/* 02998 80A99748 3C0B0001 */  lui     $t3, 0x0001                ## $t3 = 00010000
/* 0299C 80A9974C 3C018000 */  lui     $at, 0x8000                ## $at = 80000000
/* 029A0 80A99750 00084900 */  sll     $t1, $t0,  4               
/* 029A4 80A99754 01284821 */  addu    $t1, $t1, $t0              
/* 029A8 80A99758 00094880 */  sll     $t1, $t1,  2               
/* 029AC 80A9975C 00A95021 */  addu    $t2, $a1, $t1              
/* 029B0 80A99760 016A5821 */  addu    $t3, $t3, $t2              
/* 029B4 80A99764 8D6B17B4 */  lw      $t3, 0x17B4($t3)           ## 000117B4
/* 029B8 80A99768 2484014C */  addiu   $a0, $a0, 0x014C           ## $a0 = 0000014C
/* 029BC 80A9976C 01616021 */  addu    $t4, $t3, $at              
/* 029C0 80A99770 3C018016 */  lui     $at, %hi(gSegments+0x18)
/* 029C4 80A99774 0C02927F */  jal     SkelAnime_Update
              
/* 029C8 80A99778 AC2C6FC0 */  sw      $t4, %lo(gSegments+0x18)($at)
/* 029CC 80A9977C 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 029D0 80A99780 0C2A636D */  jal     func_80A98DB4              
/* 029D4 80A99784 02202825 */  or      $a1, $s1, $zero            ## $a1 = 00000000
/* 029D8 80A99788 0C2A6306 */  jal     func_80A98C18              
/* 029DC 80A9978C 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 029E0 80A99790 10000005 */  beq     $zero, $zero, .L80A997A8   
/* 029E4 80A99794 860D01E8 */  lh      $t5, 0x01E8($s0)           ## 000001E8
/* 029E8 80A99798 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
.L80A9979C:
/* 029EC 80A9979C 0C2A636D */  jal     func_80A98DB4              
/* 029F0 80A997A0 02202825 */  or      $a1, $s1, $zero            ## $a1 = 00000000
.L80A997A4:
/* 029F4 80A997A4 860D01E8 */  lh      $t5, 0x01E8($s0)           ## 000001E8
.L80A997A8:
/* 029F8 80A997A8 15A00003 */  bne     $t5, $zero, .L80A997B8     
/* 029FC 80A997AC 00000000 */  nop
/* 02A00 80A997B0 0C00B638 */  jal     Actor_MoveForward
              
/* 02A04 80A997B4 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
.L80A997B8:
/* 02A08 80A997B8 0C2A5F1F */  jal     func_80A97C7C              
/* 02A0C 80A997BC 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 02A10 80A997C0 1040000D */  beq     $v0, $zero, .L80A997F8     
/* 02A14 80A997C4 02202025 */  or      $a0, $s1, $zero            ## $a0 = 00000000
/* 02A18 80A997C8 44800000 */  mtc1    $zero, $f0                 ## $f0 = 0.00
/* 02A1C 80A997CC 240E0004 */  addiu   $t6, $zero, 0x0004         ## $t6 = 00000004
/* 02A20 80A997D0 AFAE0014 */  sw      $t6, 0x0014($sp)           
/* 02A24 80A997D4 44060000 */  mfc1    $a2, $f0                   
/* 02A28 80A997D8 44070000 */  mfc1    $a3, $f0                   
/* 02A2C 80A997DC 02002825 */  or      $a1, $s0, $zero            ## $a1 = 00000000
/* 02A30 80A997E0 0C00B92D */  jal     func_8002E4B4              
/* 02A34 80A997E4 E7A00010 */  swc1    $f0, 0x0010($sp)           
/* 02A38 80A997E8 3C01BF80 */  lui     $at, 0xBF80                ## $at = BF800000
/* 02A3C 80A997EC 44814000 */  mtc1    $at, $f8                   ## $f8 = -1.00
/* 02A40 80A997F0 10000004 */  beq     $zero, $zero, .L80A99804   
/* 02A44 80A997F4 E608006C */  swc1    $f8, 0x006C($s0)           ## 0000006C
.L80A997F8:
/* 02A48 80A997F8 44800000 */  mtc1    $zero, $f0                 ## $f0 = 0.00
/* 02A4C 80A997FC 00000000 */  nop
/* 02A50 80A99800 E600006C */  swc1    $f0, 0x006C($s0)           ## 0000006C
.L80A99804:
/* 02A54 80A99804 8E190190 */  lw      $t9, 0x0190($s0)           ## 00000190
/* 02A58 80A99808 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 02A5C 80A9980C 02202825 */  or      $a1, $s1, $zero            ## $a1 = 00000000
/* 02A60 80A99810 0320F809 */  jalr    $ra, $t9                   
/* 02A64 80A99814 00000000 */  nop
/* 02A68 80A99818 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 02A6C 80A9981C 0C2A61DF */  jal     func_80A9877C              
/* 02A70 80A99820 02202825 */  or      $a1, $s1, $zero            ## $a1 = 00000000
/* 02A74 80A99824 26060198 */  addiu   $a2, $s0, 0x0198           ## $a2 = 00000198
/* 02A78 80A99828 00C02825 */  or      $a1, $a2, $zero            ## $a1 = 00000198
/* 02A7C 80A9982C AFA60028 */  sw      $a2, 0x0028($sp)           
/* 02A80 80A99830 0C0189B7 */  jal     Collider_CylinderUpdate
              
/* 02A84 80A99834 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 02A88 80A99838 3C010001 */  lui     $at, 0x0001                ## $at = 00010000
/* 02A8C 80A9983C 34211E60 */  ori     $at, $at, 0x1E60           ## $at = 00011E60
/* 02A90 80A99840 8FA60028 */  lw      $a2, 0x0028($sp)           
/* 02A94 80A99844 02212821 */  addu    $a1, $s1, $at              
/* 02A98 80A99848 0C017713 */  jal     CollisionCheck_SetOC
              ## CollisionCheck_setOT
/* 02A9C 80A9984C 02202025 */  or      $a0, $s1, $zero            ## $a0 = 00000000
/* 02AA0 80A99850 8FBF0024 */  lw      $ra, 0x0024($sp)           
/* 02AA4 80A99854 8FB0001C */  lw      $s0, 0x001C($sp)           
/* 02AA8 80A99858 8FB10020 */  lw      $s1, 0x0020($sp)           
/* 02AAC 80A9985C 03E00008 */  jr      $ra                        
/* 02AB0 80A99860 27BD0038 */  addiu   $sp, $sp, 0x0038           ## $sp = 00000000
