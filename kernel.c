

int omain()
{
    char* lettre = (char*)0xb8000;

    lettre[0]  = 'H';
    lettre[1]  = 0x07;
    lettre[2]  = 'E';
    lettre[3]  = 0x04;
    lettre[4]  = 'L';
    lettre[5]  = 0x07;
    lettre[6]  = 'L';
    lettre[7]  = 0x08;
    lettre[8]  = '0';
    lettre[9]  = 0x07;
    lettre[10] = ' ';
    lettre[11] = 0x07;
    lettre[12] = 'W';
    lettre[13] = 0x07;
    lettre[14] = 'O';
    lettre[15] = 0x04;
    lettre[16] = 'R';
    lettre[17] = 0x07;
    lettre[18] = 'L';
    lettre[19] = 0x08;
    lettre[20] = 'D';
    lettre[21] = 0x07;
    lettre[22] = ' ';
    lettre[23] = 0x07;

    return 0;
}