undefined8 entry(void)
{
  int iVar1;
  time_t tVar2;
  byte bVar3;
  char cVar4;
  long in_FS_OFFSET;
  int first_check;
  int count;
  int local_15c;
  uint local_158;
  uint local_154;
  size_t input_size;
  byte *input_buff;
  double local_140;
  time_t temp_time;
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
  char local_a2;  // the below have memory address in increasing order -- addr
  undefined local_a1; // addr + 1
  undefined local_a0; // addr + 2
  undefined local_9f;
  undefined local_9e;
  undefined local_9d;
  undefined local_9c;
  undefined local_9b;
  undefined local_9a;
  undefined local_99; // addr +  9
  byte local_98 [32];
  undefined local_78 [100];
  undefined local_14;
  long local_10;

  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  input_size = 41;
  first_check = 0;
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
  input_buff = (byte *)malloc(41);
  getline((char **)&input_buff,&input_size,stdin);
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
  count = 0;
  //input buff[9] to input_buff[20] is done
  //Every odd value of count first_check is inc
  while (count < 24) {
    if ( (local_98[count] == input_buff[(long)first_check + 9]) &&
       (count % 2 ==1) ) {
      first_check = first_check + 1;
    }
    count = count + 1;
  }//till here first_check max -> 12 after exiting
  if (input_size != 41) {
    first_check = 1;
  }//input size has to be definitely 41
  if ( first_check+4 %16==0 ) {
    puts("Wait 20 min please.\nMake your terminal wider to see progress bar.");
    temp_time = time((time_t *)0x0);
    count = 0;
    while (count < 0x192643) {

      //Timer code -- useless
      if (count % 100 == 0) {
        local_15c = 0;
        while (local_15c < count / 0x4062) {
          local_78[local_15c] = 0x3d;
          local_15c = local_15c + 1;
        }
        local_78[local_15c] = 0x3e;
        tVar2 = time((time_t *)0x0);
        local_110 = tVar2 - temp_time;
        local_140 = 0.00000000;
        if ((local_110 != 0) && (count != 0)) {
          local_140 = ((1648195.00000000 - (double)count) * (double)local_110) /
                      (double)count;
        }
        local_154 = (int)local_140 / 60;
        local_158 = (int)local_140 % 60;
        printf((char *)(double)((float)count / 16482.00000000),"\r%s [%s] %.2f%% ETA %d:%d",
               (undefined8 *)((long)&local_108 + (long)((count / 100) % 10) * 10),local_78,
               (ulong)local_154,(ulong)local_158);
        fflush(stdout);
      }

      usleep(1000);
      *(ulong *)(input_buff + 21) = *(ulong *)(input_buff + 33) ^ 0x45a9278d6f0be1c3;
      first_check = first_check * 2;
      count = count + 1;
    }

    first_check = 1;
    puts("");
    local_99 = 0x29;
    local_a2 = '_';
    local_9a = 0x3b;
    local_a1 = 0x74;
    local_9b = 0x6b;
    input_buff[39] = 0;//'\0'
    //All of these have to be satisfied
    if (((  ((((input_buff[1] ^ *input_buff) == 0x49) && ((input_buff[2] ^ input_buff[1]) == 0x45)) &&
          ((input_buff[3] ^ input_buff[2]) == 0x2a)) &&
         (((input_buff[4] ^ input_buff[3]) == 0x28 && ((input_buff[5] ^ input_buff[4]) == 0x46))) ) &&
        (((input_buff[6] ^ input_buff[5]) == 0x5d &&
         (((input_buff[7] ^ input_buff[6]) == 0x10 && ((input_buff[8] ^ input_buff[7]) == 0x23)))))) &&
       ((*input_buff ^ input_buff[8]) == 0x26)) {
      bVar3 = (byte)( input_buff[0] / 128  / 8;
      if (first_check == 1) {
        cVar4 = '\x19';
      }
      else {
        cVar4 = '\x18';
      }
      //cVar4 = '\x19' since first_check is set to 1
      if (cVar4 ==  ( (input_buff[0] + bVar3)%32  - bVar3)) {
        local_a0 = 0x30;
        local_9c = 0x6c;
        local_9f = 0x5f;
        local_9d = 0x34;
        local_9e = 0x77;
        iVar1 = strncmp((char *)(input_buff + 29),&local_a2,10);
        if (iVar1 == 0) {
          iVar1 = FUN_0010092a(&input_buff);
          if (iVar1 != 97) {// this block has to happen for first_check to be high
            bVar3 = (byte)((char)*input_buff >> 7) >> 4;
            first_check = (int)(char)((*input_buff + bVar3 & 0xf) - bVar3) * 256;
          }
          if (*(long *)(input_buff + 21) == 0x20c44eba3078d09c) {
            *(ulong *)(input_buff + 21) = *(ulong *)(input_buff + 21) ^ 0x45a9278d6f0be1c3;
            // 0x20c44eba3078d09c ^ 0x45a9278d6f0be1c3   gives required string in reverse
            time((time_t *)&first_check);
            if (0x5e4cf66f < first_check) {
              puts("");
              local_130 = &DAT_001012e5;
              local_128 = &DAT_001012e9;
              local_120 = &DAT_001012ed;
              local_118 = &DAT_001012f1;
              //Input is the flag :D
              printf("\nCorrect :)\nFLAG:\tSUSEC{%s}\n%s%s%s%s\n",input_buff,&DAT_001012e5,
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

  local_10 = param_1[1] ^ param_1[0];
  local_c = 0;
  while (local_c < 7) {
    local_10 = local_10 ^ param_1[(long)local_c + 2];//[2,3...8]
    local_c = local_c + 1;
  }
  return (ulong)local_10;//must be 97
}
