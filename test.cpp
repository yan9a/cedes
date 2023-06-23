#include <stdio.h>
#include <memory.h>
#include "cedes.h"

int main(int, char**) {
    int i;
    unsigned char buf[8];
    const char* message = "12345678";
    const char* keyL = "abcdefgh";
    const char* keyR = "ijklmnop";
    //-----------------------------------------------------
    // DES Encryption
    memcpy(buf, message, 8);
    ceDES_Encrypt((unsigned char*)buf,(unsigned char*)keyL);
    printf("Encrypted message: ");
    for(i=0;i<8;i++){
        printf("%02x",buf[i]);
    }
    printf("\n");
    // result = 21C60DA534248BCE

    //-----------------------------------------------------
    // DES Decryption
    ceDES_Decrypt((unsigned char*)buf,(unsigned char*)keyL);
    printf("Decrypted message: ");
    for(i=0;i<8;i++){
        printf("%c",buf[i]);
    }
    printf("\n");    

    //-----------------------------------------------------
    // 3DES Encryption
    ceTDES_Encrypt((unsigned char*)buf,(unsigned char*)keyL,(unsigned char*)keyR);
    printf("Encrypted message: ");
    for(i=0;i<8;i++){
        printf("%02x",buf[i]);
    }
    printf("\n");
    // result = ba0c49533453e94f
    //-----------------------------------------------------
    // 3DES Decryption
    ceTDES_Decrypt((unsigned char*)buf,(unsigned char*)keyL,(unsigned char*)keyR);
    printf("Decrypted message: ");
    for(i=0;i<8;i++){
        printf("%c",buf[i]);
    }
    printf("\n");

    return 0;
}
