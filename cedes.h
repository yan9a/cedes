// File: cedes.h
// Description: Simple C functions to calculate DES (Data Encryption Standard) and 3DES (Triple DES)
// Repository: https://github.com/yan9a/ceDES
// WebSite: http://cool-emerald.blogspot.com
// MIT License (https://opensource.org/licenses/MIT)
// Copyright (c) 2023 Yan Naing Aye

// Related links
// https://www.rapidtables.com/convert/number/ascii-to-hex.html
// https://emvlab.org/descalc/
// https://paymentcardtools.com/crypto-calculators/des-calculator
// https://github.com/yan9a/cecpp/blob/master/des_cryptopp/main.cpp

#ifndef CEDES_H
#define CEDES_H

#if defined(__cplusplus)
extern "C" {
#endif

void ceDES_Encrypt(unsigned char *dMes,unsigned char *dKey);
void ceDES_Decrypt(unsigned char *dMes,unsigned char *dKey);
void ceTDES_Encrypt(unsigned char *dMes,unsigned char *dKeyL,unsigned char *dKeyR);
void ceTDES_Decrypt(unsigned char *dMes,unsigned char *dKeyL,unsigned char *dKeyR);

#if defined(__cplusplus)
}
#endif

#endif // CEDES_H