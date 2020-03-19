
undefined8 entry(void)

{
  int iVar1;
  time_t tVar2;
  byte bVar3;
  char cVar4;
  long in_FS_OFFSET;
  int local_164;
  int local_160;
  int local_15c;
  uint local_158;
  uint local_154;
  size_t local_150;
  byte *local_148;
  double local_140;
  time_t local_138;
  undefined *local_130;
  undefined *local_128;
  undefined *local_120;
  undefined *local_118;
  long local_110;
  undefined8 local_108;
  undefined2 local_100;
  undefined8 local_fe;
  undefined2 local_f6;
  undefined8 local_f4;
  undefined2 local_ec;
  undefined8 local_ea;
  undefined2 local_e2;
  undefined8 local_e0;
  undefined2 local_d8;
  undefined8 local_d6;
  undefined2 local_ce;
  undefined8 local_cc;
  undefined2 local_c4;
  undefined8 local_c2;
  undefined2 local_ba;
  undefined8 local_b8;
  undefined2 local_b0;
  undefined8 local_ae;
  undefined2 local_a6;
  char local_a2;
  undefined local_a1;
  undefined local_a0;
  undefined local_9f;
  undefined local_9e;
  undefined local_9d;
  undefined local_9c;
  undefined local_9b;
  undefined local_9a;
  undefined local_99;
  byte local_98 [32];
  undefined local_78 [100];
  undefined local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_150 = 0x29;
  local_164 = 0;
  local_15c = 0;
  while (local_15c < 100) {
    local_78[local_15c] = 0x20;
    local_15c = local_15c + 1;
  }
  local_14 = 0;
  local_108 = 0x8ba0e2;
  local_100 = 0;
  local_fe = 0x99a0e2;
  local_f6 = 0;
  local_f4 = 0xb9a0e2;
  local_ec = 0;
  local_ea = 0xb8a0e2;
  local_e2 = 0;
  local_e0 = 0xbca0e2;
  local_d8 = 0;
  local_d6 = 0xb4a0e2;
  local_ce = 0;
  local_cc = 0xa6a0e2;
  local_c4 = 0;
  local_c2 = 0xa7a0e2;
  local_ba = 0;
  local_b8 = 0x87a0e2;
  local_b0 = 0;
  local_ae = 0x8fa0e2;
  local_a6 = 0;
  local_148 = (byte *)malloc(0x29);
  getline((char **)&local_148,&local_150,stdin);
  local_98[0] = 0x70;
  local_98[1] = 0x77;
  local_98[2] = 0x6e;
  local_98[3] = 0x34;
  local_98[4] = 0x77;
  local_98[5] = 0x6c;
  local_98[6] = 0x69;
  local_98[7] = 0x6b;
  local_98[8] = 0x37;
  local_98[9] = 0x5f;
  local_98[10] = 0x65;
  local_98[11] = 0x77;
  local_98[12] = 0x76;
  local_98[13] = 0x68;
  local_98[14] = 0x6e;
  local_98[15] = 0x33;
  local_98[16] = 0x75;
  local_98[17] = 0x6e;
  local_98[18] = 0x62;
  local_98[19] = 0x5f;
  local_98[20] = 0x37;
  local_98[21] = 0x31;
  local_98[22] = 0x30;
  local_98[23] = 0x74;
  local_160 = 0;
  while (local_160 < 0x18) {
    if ((local_98[local_160] == local_148[(long)local_164 + 9]) &&
       ((local_160 - (local_160 >> 0x1f) & 1U) + (local_160 >> 0x1f) == 1)) {
      local_164 = local_164 + 1;
    }
    local_160 = local_160 + 1;
  }
  if (local_150 != 0x29) {
    local_164 = 1;
  }
  if ((local_164 + 4U & 0xf) == 0) {
    puts("Wait 20 min please.\nMake your terminal wider to see progress bar.");
    local_138 = time((time_t *)0x0);
    local_160 = 0;
    while (local_160 < 0x192643) {
      if (local_160 % 100 == 0) {
        local_15c = 0;
        while (local_15c < local_160 / 0x4062) {
          local_78[local_15c] = 0x3d;
          local_15c = local_15c + 1;
        }
        local_78[local_15c] = 0x3e;
        tVar2 = time((time_t *)0x0);
        local_110 = tVar2 - local_138;
        local_140 = 0.00000000;
        if ((local_110 != 0) && (local_160 != 0)) {
          local_140 = ((1648195.00000000 - (double)local_160) * (double)local_110) /
                      (double)local_160;
        }
        local_154 = (int)local_140 / 0x3c;
        local_158 = (int)local_140 % 0x3c;
        printf((char *)(double)((float)local_160 / 16482.00000000),"\r%s [%s] %.2f%% ETA %d:%d",
               (undefined8 *)((long)&local_108 + (long)((local_160 / 100) % 10) * 10),local_78,
               (ulong)local_154,(ulong)local_158);
        fflush(stdout);
      }
      usleep(1000);
      *(ulong *)(local_148 + 0x15) = *(ulong *)(local_148 + 0x15) ^ 0x45a9278d6f0be1c3;
      local_164 = local_164 * 2;
      local_160 = local_160 + 1;
    }
    local_164 = 1;
    puts("");
    local_99 = 0x29;
    local_a2 = '_';
    local_9a = 0x3b;
    local_a1 = 0x74;
    local_9b = 0x6b;
    local_148[local_150 - 2] = 0;
    if (((((((local_148[1] ^ *local_148) == 0x49) && ((local_148[2] ^ local_148[1]) == 0x45)) &&
          ((local_148[3] ^ local_148[2]) == 0x2a)) &&
         (((local_148[4] ^ local_148[3]) == 0x28 && ((local_148[5] ^ local_148[4]) == 0x46)))) &&
        (((local_148[6] ^ local_148[5]) == 0x5d &&
         (((local_148[7] ^ local_148[6]) == 0x10 && ((local_148[8] ^ local_148[7]) == 0x23)))))) &&
       ((*local_148 ^ local_148[8]) == 0x26)) {
      bVar3 = (byte)((char)*local_148 >> 7) >> 3;
      if (local_164 == 1) {
        cVar4 = '\x19';
      }
      else {
        cVar4 = '\x18';
      }
      if (cVar4 == (byte)((*local_148 + bVar3 & 0x1f) - bVar3)) {
        local_a0 = 0x30;
        local_9c = 0x6c;
        local_9f = 0x5f;
        local_9d = 0x34;
        local_9e = 0x77;
        iVar1 = strncmp((char *)(local_148 + 0x1d),&local_a2,10);
        if (iVar1 == 0) {
          iVar1 = FUN_0010092a(&local_148);
          if (iVar1 != 0x61) {
            bVar3 = (byte)((char)*local_148 >> 7) >> 4;
            local_164 = (int)(char)((*local_148 + bVar3 & 0xf) - bVar3) << 8;
          }
          if (*(long *)(local_148 + 0x15) == 0x20c44eba3078d09c) {
            *(ulong *)(local_148 + 0x15) = *(ulong *)(local_148 + 0x15) ^ 0x45a9278d6f0be1c3;
            time((time_t *)&local_164);
            if (0x5e4cf66f < local_164) {
              puts("");
              local_130 = &DAT_001012e5;
              local_128 = &DAT_001012e9;
              local_120 = &DAT_001012ed;
              local_118 = &DAT_001012f1;
              printf("\nCorrect :)\nFLAG:\tSUSEC{%s}\n%s%s%s%s\n",local_148,&DAT_001012e5,
                     &DAT_001012e9,&DAT_001012ed,&DAT_001012f1);
              goto LAB_001011de;
            }
          }
        }
      }
    }
  }
  puts("Wrong!\n");
LAB_001011de:
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}


ulong FUN_0010092a(uint *param_1)

{
  uint local_10;
  int local_c;
  
  local_10 = param_1[1] ^ *param_1;
  local_c = 0;
  while (local_c < 7) {
    local_10 = local_10 ^ param_1[(long)local_c + 2];
    local_c = local_c + 1;
  }
  return (ulong)local_10;
}


