                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 3.6.0 #9615 (MINGW64)
                                      4 ;--------------------------------------------------------
                                      5 	.module eeprom
                                      6 	.optsdcc -mmcs51 --model-small
                                      7 	
                                      8 ;--------------------------------------------------------
                                      9 ; Public variables in this module
                                     10 ;--------------------------------------------------------
                                     11 	.globl _esc_byte_dado
                                     12 	.globl _esc_byte_cntr
                                     13 	.globl _send_stop
                                     14 	.globl _send_start
                                     15 	.globl _reset_wdt
                                     16 	.globl _P7_7
                                     17 	.globl _P7_6
                                     18 	.globl _P7_5
                                     19 	.globl _P7_4
                                     20 	.globl _P7_3
                                     21 	.globl _P7_2
                                     22 	.globl _P7_1
                                     23 	.globl _P7_0
                                     24 	.globl _P6_7
                                     25 	.globl _P6_6
                                     26 	.globl _P6_5
                                     27 	.globl _P6_4
                                     28 	.globl _P6_3
                                     29 	.globl _P6_2
                                     30 	.globl _P6_1
                                     31 	.globl _P6_0
                                     32 	.globl _P5_7
                                     33 	.globl _P5_6
                                     34 	.globl _P5_5
                                     35 	.globl _P5_4
                                     36 	.globl _P5_3
                                     37 	.globl _P5_2
                                     38 	.globl _P5_1
                                     39 	.globl _P5_0
                                     40 	.globl _P4_7
                                     41 	.globl _P4_6
                                     42 	.globl _P4_5
                                     43 	.globl _P4_4
                                     44 	.globl _P4_3
                                     45 	.globl _P4_2
                                     46 	.globl _P4_1
                                     47 	.globl _P4_0
                                     48 	.globl _P3_7
                                     49 	.globl _P3_6
                                     50 	.globl _P3_5
                                     51 	.globl _P3_4
                                     52 	.globl _P3_3
                                     53 	.globl _P3_2
                                     54 	.globl _P3_1
                                     55 	.globl _P3_0
                                     56 	.globl _P2_7
                                     57 	.globl _P2_6
                                     58 	.globl _P2_5
                                     59 	.globl _P2_4
                                     60 	.globl _P2_3
                                     61 	.globl _P2_2
                                     62 	.globl _P2_1
                                     63 	.globl _P2_0
                                     64 	.globl _P1_7
                                     65 	.globl _P1_6
                                     66 	.globl _P1_5
                                     67 	.globl _P1_4
                                     68 	.globl _P1_3
                                     69 	.globl _P1_2
                                     70 	.globl _P1_1
                                     71 	.globl _P1_0
                                     72 	.globl _P0_7
                                     73 	.globl _P0_6
                                     74 	.globl _P0_5
                                     75 	.globl _P0_4
                                     76 	.globl _P0_3
                                     77 	.globl _P0_2
                                     78 	.globl _P0_1
                                     79 	.globl _P0_0
                                     80 	.globl _CANTEST
                                     81 	.globl _CANCCE
                                     82 	.globl _CANDAR
                                     83 	.globl _CANIF
                                     84 	.globl _CANEIE
                                     85 	.globl _CANSIE
                                     86 	.globl _CANIE
                                     87 	.globl _CANINIT
                                     88 	.globl _SPIEN
                                     89 	.globl _TXBMT
                                     90 	.globl _NSSMD0
                                     91 	.globl _NSSMD1
                                     92 	.globl _RXOVRN
                                     93 	.globl _MODF
                                     94 	.globl _WCOL
                                     95 	.globl _SPIF
                                     96 	.globl _AD2WINT
                                     97 	.globl _AD2CM0
                                     98 	.globl _AD2CM1
                                     99 	.globl _AD2CM2
                                    100 	.globl _AD2BUSY
                                    101 	.globl _AD2INT
                                    102 	.globl _AD2TM
                                    103 	.globl _AD2EN
                                    104 	.globl _AD0LJST
                                    105 	.globl _AD0WINT
                                    106 	.globl _AD0CM0
                                    107 	.globl _AD0CM1
                                    108 	.globl _AD0BUSY
                                    109 	.globl _AD0INT
                                    110 	.globl _AD0TM
                                    111 	.globl _AD0EN
                                    112 	.globl _CCF0
                                    113 	.globl _CCF1
                                    114 	.globl _CCF2
                                    115 	.globl _CCF3
                                    116 	.globl _CCF4
                                    117 	.globl _CCF5
                                    118 	.globl _CR
                                    119 	.globl _CF
                                    120 	.globl _P
                                    121 	.globl _F1
                                    122 	.globl _OV
                                    123 	.globl _RS0
                                    124 	.globl _RS1
                                    125 	.globl _F0
                                    126 	.globl _AC
                                    127 	.globl _CY
                                    128 	.globl _CPRL4
                                    129 	.globl _CT4
                                    130 	.globl _TR4
                                    131 	.globl _EXEN4
                                    132 	.globl _EXF4
                                    133 	.globl _TF4
                                    134 	.globl _CPRL3
                                    135 	.globl _CT3
                                    136 	.globl _TR3
                                    137 	.globl _EXEN3
                                    138 	.globl _EXF3
                                    139 	.globl _TF3
                                    140 	.globl _CPRL2
                                    141 	.globl _CT2
                                    142 	.globl _TR2
                                    143 	.globl _EXEN2
                                    144 	.globl _EXF2
                                    145 	.globl _TF2
                                    146 	.globl _LEC0
                                    147 	.globl _LEC1
                                    148 	.globl _LEC2
                                    149 	.globl _TXOK
                                    150 	.globl _RXOK
                                    151 	.globl _EPASS
                                    152 	.globl _EWARN
                                    153 	.globl _BOFF
                                    154 	.globl _SMBTOE
                                    155 	.globl _SMBFTE
                                    156 	.globl _AA
                                    157 	.globl _SI
                                    158 	.globl _STO
                                    159 	.globl _STA
                                    160 	.globl _ENSMB
                                    161 	.globl _BUSY
                                    162 	.globl _PX0
                                    163 	.globl _PT0
                                    164 	.globl _PX1
                                    165 	.globl _PT1
                                    166 	.globl _PS0
                                    167 	.globl _PT2
                                    168 	.globl _EX0
                                    169 	.globl _ET0
                                    170 	.globl _EX1
                                    171 	.globl _ET1
                                    172 	.globl _ES0
                                    173 	.globl _ET2
                                    174 	.globl _EA
                                    175 	.globl _RI1
                                    176 	.globl _TI1
                                    177 	.globl _RB81
                                    178 	.globl _TB81
                                    179 	.globl _REN1
                                    180 	.globl _MCE1
                                    181 	.globl _S1MODE
                                    182 	.globl _RI0
                                    183 	.globl _TI0
                                    184 	.globl _RB80
                                    185 	.globl _TB80
                                    186 	.globl _REN0
                                    187 	.globl _SM20
                                    188 	.globl _SM10
                                    189 	.globl _SM00
                                    190 	.globl _CP2HYN0
                                    191 	.globl _CP2HYN1
                                    192 	.globl _CP2HYP0
                                    193 	.globl _CP2HYP1
                                    194 	.globl _CP2FIF
                                    195 	.globl _CP2RIF
                                    196 	.globl _CP2OUT
                                    197 	.globl _CP2EN
                                    198 	.globl _CP1HYN0
                                    199 	.globl _CP1HYN1
                                    200 	.globl _CP1HYP0
                                    201 	.globl _CP1HYP1
                                    202 	.globl _CP1FIF
                                    203 	.globl _CP1RIF
                                    204 	.globl _CP1OUT
                                    205 	.globl _CP1EN
                                    206 	.globl _CP0HYN0
                                    207 	.globl _CP0HYN1
                                    208 	.globl _CP0HYP0
                                    209 	.globl _CP0HYP1
                                    210 	.globl _CP0FIF
                                    211 	.globl _CP0RIF
                                    212 	.globl _CP0OUT
                                    213 	.globl _CP0EN
                                    214 	.globl _IT0
                                    215 	.globl _IE0
                                    216 	.globl _IT1
                                    217 	.globl _IE1
                                    218 	.globl _TR0
                                    219 	.globl _TF0
                                    220 	.globl _TR1
                                    221 	.globl _TF1
                                    222 	.globl __XPAGE
                                    223 	.globl _DP
                                    224 	.globl _ADC0
                                    225 	.globl _ADC0LT
                                    226 	.globl _ADC0GT
                                    227 	.globl _TMR4
                                    228 	.globl _TMR3
                                    229 	.globl _TMR2
                                    230 	.globl _RCAP4
                                    231 	.globl _RCAP3
                                    232 	.globl _RCAP2
                                    233 	.globl _DAC1
                                    234 	.globl _DAC0
                                    235 	.globl _CAN0DAT
                                    236 	.globl _PCA0CP5
                                    237 	.globl _PCA0CP4
                                    238 	.globl _PCA0CP3
                                    239 	.globl _PCA0CP2
                                    240 	.globl _PCA0CP1
                                    241 	.globl _PCA0CP0
                                    242 	.globl _PCA0
                                    243 	.globl _WDTCN
                                    244 	.globl _PCA0CPH1
                                    245 	.globl _PCA0CPL1
                                    246 	.globl _PCA0CPH0
                                    247 	.globl _PCA0CPL0
                                    248 	.globl _PCA0H
                                    249 	.globl _PCA0L
                                    250 	.globl _P7
                                    251 	.globl _CAN0CN
                                    252 	.globl _SPI0CN
                                    253 	.globl _EIP2
                                    254 	.globl _EIP1
                                    255 	.globl _B
                                    256 	.globl _RSTSRC
                                    257 	.globl _PCA0CPH4
                                    258 	.globl _PCA0CPL4
                                    259 	.globl _PCA0CPH3
                                    260 	.globl _PCA0CPL3
                                    261 	.globl _PCA0CPH2
                                    262 	.globl _PCA0CPL2
                                    263 	.globl _P6
                                    264 	.globl _ADC2CN
                                    265 	.globl _ADC0CN
                                    266 	.globl _EIE2
                                    267 	.globl _EIE1
                                    268 	.globl _XBR3
                                    269 	.globl _XBR2
                                    270 	.globl _XBR1
                                    271 	.globl _PCA0CPH5
                                    272 	.globl _XBR0
                                    273 	.globl _PCA0CPL5
                                    274 	.globl _ACC
                                    275 	.globl _PCA0CPM5
                                    276 	.globl _PCA0CPM4
                                    277 	.globl _PCA0CPM3
                                    278 	.globl _PCA0CPM2
                                    279 	.globl _CAN0TST
                                    280 	.globl _PCA0CPM1
                                    281 	.globl _CAN0ADR
                                    282 	.globl _PCA0CPM0
                                    283 	.globl _CAN0DATH
                                    284 	.globl _PCA0MD
                                    285 	.globl _P5
                                    286 	.globl _CAN0DATL
                                    287 	.globl _PCA0CN
                                    288 	.globl _HVA0CN
                                    289 	.globl _DAC1CN
                                    290 	.globl _DAC0CN
                                    291 	.globl _DAC1H
                                    292 	.globl _DAC0H
                                    293 	.globl _DAC1L
                                    294 	.globl _DAC0L
                                    295 	.globl _REF0CN
                                    296 	.globl _PSW
                                    297 	.globl _SMB0CR
                                    298 	.globl _TMR4H
                                    299 	.globl _TMR3H
                                    300 	.globl _TMR2H
                                    301 	.globl _TMR4L
                                    302 	.globl _TMR3L
                                    303 	.globl _TMR2L
                                    304 	.globl _RCAP4H
                                    305 	.globl _RCAP3H
                                    306 	.globl _RCAP2H
                                    307 	.globl _RCAP4L
                                    308 	.globl _RCAP3L
                                    309 	.globl _RCAP2L
                                    310 	.globl _TMR4CF
                                    311 	.globl _TMR3CF
                                    312 	.globl _TMR2CF
                                    313 	.globl _P4
                                    314 	.globl _TMR4CN
                                    315 	.globl _TMR3CN
                                    316 	.globl _TMR2CN
                                    317 	.globl _ADC0LTH
                                    318 	.globl _ADC2LT
                                    319 	.globl _ADC0LTL
                                    320 	.globl _ADC0GTH
                                    321 	.globl _ADC2GT
                                    322 	.globl _ADC0GTL
                                    323 	.globl _SMB0ADR
                                    324 	.globl _SMB0DAT
                                    325 	.globl _SMB0STA
                                    326 	.globl _CAN0STA
                                    327 	.globl _SMB0CN
                                    328 	.globl _ADC0H
                                    329 	.globl _ADC2
                                    330 	.globl _ADC0L
                                    331 	.globl _ADC2CF
                                    332 	.globl _ADC0CF
                                    333 	.globl _AMX2SL
                                    334 	.globl _AMX0SL
                                    335 	.globl _AMX0CF
                                    336 	.globl _AMX0PRT
                                    337 	.globl _AMX2CF
                                    338 	.globl _SADEN0
                                    339 	.globl _IP
                                    340 	.globl _FLACL
                                    341 	.globl _FLSCL
                                    342 	.globl _P3
                                    343 	.globl _P3MDIN
                                    344 	.globl _P2MDIN
                                    345 	.globl _P1MDIN
                                    346 	.globl _SADDR1
                                    347 	.globl _SADDR0
                                    348 	.globl _IE
                                    349 	.globl _P3MDOUT
                                    350 	.globl _P2MDOUT
                                    351 	.globl _P1MDOUT
                                    352 	.globl _P0MDOUT
                                    353 	.globl _EMI0CF
                                    354 	.globl _EMI0CN
                                    355 	.globl _EMI0TC
                                    356 	.globl _P2
                                    357 	.globl _P7MDOUT
                                    358 	.globl _P6MDOUT
                                    359 	.globl _P5MDOUT
                                    360 	.globl _SPI0CKR
                                    361 	.globl _P4MDOUT
                                    362 	.globl _SPI0DAT
                                    363 	.globl _SPI0CFG
                                    364 	.globl _SBUF1
                                    365 	.globl _SBUF0
                                    366 	.globl _SCON1
                                    367 	.globl _SCON0
                                    368 	.globl _CLKSEL
                                    369 	.globl _SFRPGCN
                                    370 	.globl _SSTA0
                                    371 	.globl _P1
                                    372 	.globl _PSCTL
                                    373 	.globl _CKCON
                                    374 	.globl _TH1
                                    375 	.globl _OSCXCN
                                    376 	.globl _TH0
                                    377 	.globl _OSCICL
                                    378 	.globl _TL1
                                    379 	.globl _OSCICN
                                    380 	.globl _TL0
                                    381 	.globl _CPT2MD
                                    382 	.globl _CPT1MD
                                    383 	.globl _CPT0MD
                                    384 	.globl _TMOD
                                    385 	.globl _CPT2CN
                                    386 	.globl _CPT1CN
                                    387 	.globl _CPT0CN
                                    388 	.globl _TCON
                                    389 	.globl _PCON
                                    390 	.globl _SFRLAST
                                    391 	.globl _SFRNEXT
                                    392 	.globl _SFRPAGE
                                    393 	.globl _DPH
                                    394 	.globl _DPL
                                    395 	.globl _SP
                                    396 	.globl _P0
                                    397 	.globl _esc_byte_cntr_PARM_2
                                    398 	.globl _send_start_PARM_1
                                    399 	.globl _esc_eeprom_PARM_2
                                    400 	.globl _eeprom_idx
                                    401 	.globl _le_eeprom
                                    402 	.globl _esc_eeprom
                                    403 	.globl _guarda_eeprom
                                    404 	.globl _ISR_TC4
                                    405 ;--------------------------------------------------------
                                    406 ; special function registers
                                    407 ;--------------------------------------------------------
                                    408 	.area RSEG    (ABS,DATA)
      000000                        409 	.org 0x0000
                           000080   410 G$P0$0$0 == 0x0080
                           000080   411 _P0	=	0x0080
                           000081   412 G$SP$0$0 == 0x0081
                           000081   413 _SP	=	0x0081
                           000082   414 G$DPL$0$0 == 0x0082
                           000082   415 _DPL	=	0x0082
                           000083   416 G$DPH$0$0 == 0x0083
                           000083   417 _DPH	=	0x0083
                           000084   418 G$SFRPAGE$0$0 == 0x0084
                           000084   419 _SFRPAGE	=	0x0084
                           000085   420 G$SFRNEXT$0$0 == 0x0085
                           000085   421 _SFRNEXT	=	0x0085
                           000086   422 G$SFRLAST$0$0 == 0x0086
                           000086   423 _SFRLAST	=	0x0086
                           000087   424 G$PCON$0$0 == 0x0087
                           000087   425 _PCON	=	0x0087
                           000088   426 G$TCON$0$0 == 0x0088
                           000088   427 _TCON	=	0x0088
                           000088   428 G$CPT0CN$0$0 == 0x0088
                           000088   429 _CPT0CN	=	0x0088
                           000088   430 G$CPT1CN$0$0 == 0x0088
                           000088   431 _CPT1CN	=	0x0088
                           000088   432 G$CPT2CN$0$0 == 0x0088
                           000088   433 _CPT2CN	=	0x0088
                           000089   434 G$TMOD$0$0 == 0x0089
                           000089   435 _TMOD	=	0x0089
                           000089   436 G$CPT0MD$0$0 == 0x0089
                           000089   437 _CPT0MD	=	0x0089
                           000089   438 G$CPT1MD$0$0 == 0x0089
                           000089   439 _CPT1MD	=	0x0089
                           000089   440 G$CPT2MD$0$0 == 0x0089
                           000089   441 _CPT2MD	=	0x0089
                           00008A   442 G$TL0$0$0 == 0x008a
                           00008A   443 _TL0	=	0x008a
                           00008A   444 G$OSCICN$0$0 == 0x008a
                           00008A   445 _OSCICN	=	0x008a
                           00008B   446 G$TL1$0$0 == 0x008b
                           00008B   447 _TL1	=	0x008b
                           00008B   448 G$OSCICL$0$0 == 0x008b
                           00008B   449 _OSCICL	=	0x008b
                           00008C   450 G$TH0$0$0 == 0x008c
                           00008C   451 _TH0	=	0x008c
                           00008C   452 G$OSCXCN$0$0 == 0x008c
                           00008C   453 _OSCXCN	=	0x008c
                           00008D   454 G$TH1$0$0 == 0x008d
                           00008D   455 _TH1	=	0x008d
                           00008E   456 G$CKCON$0$0 == 0x008e
                           00008E   457 _CKCON	=	0x008e
                           00008F   458 G$PSCTL$0$0 == 0x008f
                           00008F   459 _PSCTL	=	0x008f
                           000090   460 G$P1$0$0 == 0x0090
                           000090   461 _P1	=	0x0090
                           000091   462 G$SSTA0$0$0 == 0x0091
                           000091   463 _SSTA0	=	0x0091
                           000096   464 G$SFRPGCN$0$0 == 0x0096
                           000096   465 _SFRPGCN	=	0x0096
                           000097   466 G$CLKSEL$0$0 == 0x0097
                           000097   467 _CLKSEL	=	0x0097
                           000098   468 G$SCON0$0$0 == 0x0098
                           000098   469 _SCON0	=	0x0098
                           000098   470 G$SCON1$0$0 == 0x0098
                           000098   471 _SCON1	=	0x0098
                           000099   472 G$SBUF0$0$0 == 0x0099
                           000099   473 _SBUF0	=	0x0099
                           000099   474 G$SBUF1$0$0 == 0x0099
                           000099   475 _SBUF1	=	0x0099
                           00009A   476 G$SPI0CFG$0$0 == 0x009a
                           00009A   477 _SPI0CFG	=	0x009a
                           00009B   478 G$SPI0DAT$0$0 == 0x009b
                           00009B   479 _SPI0DAT	=	0x009b
                           00009C   480 G$P4MDOUT$0$0 == 0x009c
                           00009C   481 _P4MDOUT	=	0x009c
                           00009D   482 G$SPI0CKR$0$0 == 0x009d
                           00009D   483 _SPI0CKR	=	0x009d
                           00009D   484 G$P5MDOUT$0$0 == 0x009d
                           00009D   485 _P5MDOUT	=	0x009d
                           00009E   486 G$P6MDOUT$0$0 == 0x009e
                           00009E   487 _P6MDOUT	=	0x009e
                           00009F   488 G$P7MDOUT$0$0 == 0x009f
                           00009F   489 _P7MDOUT	=	0x009f
                           0000A0   490 G$P2$0$0 == 0x00a0
                           0000A0   491 _P2	=	0x00a0
                           0000A1   492 G$EMI0TC$0$0 == 0x00a1
                           0000A1   493 _EMI0TC	=	0x00a1
                           0000A2   494 G$EMI0CN$0$0 == 0x00a2
                           0000A2   495 _EMI0CN	=	0x00a2
                           0000A3   496 G$EMI0CF$0$0 == 0x00a3
                           0000A3   497 _EMI0CF	=	0x00a3
                           0000A4   498 G$P0MDOUT$0$0 == 0x00a4
                           0000A4   499 _P0MDOUT	=	0x00a4
                           0000A5   500 G$P1MDOUT$0$0 == 0x00a5
                           0000A5   501 _P1MDOUT	=	0x00a5
                           0000A6   502 G$P2MDOUT$0$0 == 0x00a6
                           0000A6   503 _P2MDOUT	=	0x00a6
                           0000A7   504 G$P3MDOUT$0$0 == 0x00a7
                           0000A7   505 _P3MDOUT	=	0x00a7
                           0000A8   506 G$IE$0$0 == 0x00a8
                           0000A8   507 _IE	=	0x00a8
                           0000A9   508 G$SADDR0$0$0 == 0x00a9
                           0000A9   509 _SADDR0	=	0x00a9
                           0000A9   510 G$SADDR1$0$0 == 0x00a9
                           0000A9   511 _SADDR1	=	0x00a9
                           0000AD   512 G$P1MDIN$0$0 == 0x00ad
                           0000AD   513 _P1MDIN	=	0x00ad
                           0000AE   514 G$P2MDIN$0$0 == 0x00ae
                           0000AE   515 _P2MDIN	=	0x00ae
                           0000AF   516 G$P3MDIN$0$0 == 0x00af
                           0000AF   517 _P3MDIN	=	0x00af
                           0000B0   518 G$P3$0$0 == 0x00b0
                           0000B0   519 _P3	=	0x00b0
                           0000B7   520 G$FLSCL$0$0 == 0x00b7
                           0000B7   521 _FLSCL	=	0x00b7
                           0000B7   522 G$FLACL$0$0 == 0x00b7
                           0000B7   523 _FLACL	=	0x00b7
                           0000B8   524 G$IP$0$0 == 0x00b8
                           0000B8   525 _IP	=	0x00b8
                           0000B9   526 G$SADEN0$0$0 == 0x00b9
                           0000B9   527 _SADEN0	=	0x00b9
                           0000BA   528 G$AMX2CF$0$0 == 0x00ba
                           0000BA   529 _AMX2CF	=	0x00ba
                           0000BD   530 G$AMX0PRT$0$0 == 0x00bd
                           0000BD   531 _AMX0PRT	=	0x00bd
                           0000BA   532 G$AMX0CF$0$0 == 0x00ba
                           0000BA   533 _AMX0CF	=	0x00ba
                           0000BB   534 G$AMX0SL$0$0 == 0x00bb
                           0000BB   535 _AMX0SL	=	0x00bb
                           0000BB   536 G$AMX2SL$0$0 == 0x00bb
                           0000BB   537 _AMX2SL	=	0x00bb
                           0000BC   538 G$ADC0CF$0$0 == 0x00bc
                           0000BC   539 _ADC0CF	=	0x00bc
                           0000BC   540 G$ADC2CF$0$0 == 0x00bc
                           0000BC   541 _ADC2CF	=	0x00bc
                           0000BE   542 G$ADC0L$0$0 == 0x00be
                           0000BE   543 _ADC0L	=	0x00be
                           0000BE   544 G$ADC2$0$0 == 0x00be
                           0000BE   545 _ADC2	=	0x00be
                           0000BF   546 G$ADC0H$0$0 == 0x00bf
                           0000BF   547 _ADC0H	=	0x00bf
                           0000C0   548 G$SMB0CN$0$0 == 0x00c0
                           0000C0   549 _SMB0CN	=	0x00c0
                           0000C0   550 G$CAN0STA$0$0 == 0x00c0
                           0000C0   551 _CAN0STA	=	0x00c0
                           0000C1   552 G$SMB0STA$0$0 == 0x00c1
                           0000C1   553 _SMB0STA	=	0x00c1
                           0000C2   554 G$SMB0DAT$0$0 == 0x00c2
                           0000C2   555 _SMB0DAT	=	0x00c2
                           0000C3   556 G$SMB0ADR$0$0 == 0x00c3
                           0000C3   557 _SMB0ADR	=	0x00c3
                           0000C4   558 G$ADC0GTL$0$0 == 0x00c4
                           0000C4   559 _ADC0GTL	=	0x00c4
                           0000C4   560 G$ADC2GT$0$0 == 0x00c4
                           0000C4   561 _ADC2GT	=	0x00c4
                           0000C5   562 G$ADC0GTH$0$0 == 0x00c5
                           0000C5   563 _ADC0GTH	=	0x00c5
                           0000C6   564 G$ADC0LTL$0$0 == 0x00c6
                           0000C6   565 _ADC0LTL	=	0x00c6
                           0000C6   566 G$ADC2LT$0$0 == 0x00c6
                           0000C6   567 _ADC2LT	=	0x00c6
                           0000C7   568 G$ADC0LTH$0$0 == 0x00c7
                           0000C7   569 _ADC0LTH	=	0x00c7
                           0000C8   570 G$TMR2CN$0$0 == 0x00c8
                           0000C8   571 _TMR2CN	=	0x00c8
                           0000C8   572 G$TMR3CN$0$0 == 0x00c8
                           0000C8   573 _TMR3CN	=	0x00c8
                           0000C8   574 G$TMR4CN$0$0 == 0x00c8
                           0000C8   575 _TMR4CN	=	0x00c8
                           0000C8   576 G$P4$0$0 == 0x00c8
                           0000C8   577 _P4	=	0x00c8
                           0000C9   578 G$TMR2CF$0$0 == 0x00c9
                           0000C9   579 _TMR2CF	=	0x00c9
                           0000C9   580 G$TMR3CF$0$0 == 0x00c9
                           0000C9   581 _TMR3CF	=	0x00c9
                           0000C9   582 G$TMR4CF$0$0 == 0x00c9
                           0000C9   583 _TMR4CF	=	0x00c9
                           0000CA   584 G$RCAP2L$0$0 == 0x00ca
                           0000CA   585 _RCAP2L	=	0x00ca
                           0000CA   586 G$RCAP3L$0$0 == 0x00ca
                           0000CA   587 _RCAP3L	=	0x00ca
                           0000CA   588 G$RCAP4L$0$0 == 0x00ca
                           0000CA   589 _RCAP4L	=	0x00ca
                           0000CB   590 G$RCAP2H$0$0 == 0x00cb
                           0000CB   591 _RCAP2H	=	0x00cb
                           0000CB   592 G$RCAP3H$0$0 == 0x00cb
                           0000CB   593 _RCAP3H	=	0x00cb
                           0000CB   594 G$RCAP4H$0$0 == 0x00cb
                           0000CB   595 _RCAP4H	=	0x00cb
                           0000CC   596 G$TMR2L$0$0 == 0x00cc
                           0000CC   597 _TMR2L	=	0x00cc
                           0000CC   598 G$TMR3L$0$0 == 0x00cc
                           0000CC   599 _TMR3L	=	0x00cc
                           0000CC   600 G$TMR4L$0$0 == 0x00cc
                           0000CC   601 _TMR4L	=	0x00cc
                           0000CD   602 G$TMR2H$0$0 == 0x00cd
                           0000CD   603 _TMR2H	=	0x00cd
                           0000CD   604 G$TMR3H$0$0 == 0x00cd
                           0000CD   605 _TMR3H	=	0x00cd
                           0000CD   606 G$TMR4H$0$0 == 0x00cd
                           0000CD   607 _TMR4H	=	0x00cd
                           0000CF   608 G$SMB0CR$0$0 == 0x00cf
                           0000CF   609 _SMB0CR	=	0x00cf
                           0000D0   610 G$PSW$0$0 == 0x00d0
                           0000D0   611 _PSW	=	0x00d0
                           0000D1   612 G$REF0CN$0$0 == 0x00d1
                           0000D1   613 _REF0CN	=	0x00d1
                           0000D2   614 G$DAC0L$0$0 == 0x00d2
                           0000D2   615 _DAC0L	=	0x00d2
                           0000D2   616 G$DAC1L$0$0 == 0x00d2
                           0000D2   617 _DAC1L	=	0x00d2
                           0000D3   618 G$DAC0H$0$0 == 0x00d3
                           0000D3   619 _DAC0H	=	0x00d3
                           0000D3   620 G$DAC1H$0$0 == 0x00d3
                           0000D3   621 _DAC1H	=	0x00d3
                           0000D4   622 G$DAC0CN$0$0 == 0x00d4
                           0000D4   623 _DAC0CN	=	0x00d4
                           0000D4   624 G$DAC1CN$0$0 == 0x00d4
                           0000D4   625 _DAC1CN	=	0x00d4
                           0000D6   626 G$HVA0CN$0$0 == 0x00d6
                           0000D6   627 _HVA0CN	=	0x00d6
                           0000D8   628 G$PCA0CN$0$0 == 0x00d8
                           0000D8   629 _PCA0CN	=	0x00d8
                           0000D8   630 G$CAN0DATL$0$0 == 0x00d8
                           0000D8   631 _CAN0DATL	=	0x00d8
                           0000D8   632 G$P5$0$0 == 0x00d8
                           0000D8   633 _P5	=	0x00d8
                           0000D9   634 G$PCA0MD$0$0 == 0x00d9
                           0000D9   635 _PCA0MD	=	0x00d9
                           0000D9   636 G$CAN0DATH$0$0 == 0x00d9
                           0000D9   637 _CAN0DATH	=	0x00d9
                           0000DA   638 G$PCA0CPM0$0$0 == 0x00da
                           0000DA   639 _PCA0CPM0	=	0x00da
                           0000DA   640 G$CAN0ADR$0$0 == 0x00da
                           0000DA   641 _CAN0ADR	=	0x00da
                           0000DB   642 G$PCA0CPM1$0$0 == 0x00db
                           0000DB   643 _PCA0CPM1	=	0x00db
                           0000DB   644 G$CAN0TST$0$0 == 0x00db
                           0000DB   645 _CAN0TST	=	0x00db
                           0000DC   646 G$PCA0CPM2$0$0 == 0x00dc
                           0000DC   647 _PCA0CPM2	=	0x00dc
                           0000DD   648 G$PCA0CPM3$0$0 == 0x00dd
                           0000DD   649 _PCA0CPM3	=	0x00dd
                           0000DE   650 G$PCA0CPM4$0$0 == 0x00de
                           0000DE   651 _PCA0CPM4	=	0x00de
                           0000DF   652 G$PCA0CPM5$0$0 == 0x00df
                           0000DF   653 _PCA0CPM5	=	0x00df
                           0000E0   654 G$ACC$0$0 == 0x00e0
                           0000E0   655 _ACC	=	0x00e0
                           0000E1   656 G$PCA0CPL5$0$0 == 0x00e1
                           0000E1   657 _PCA0CPL5	=	0x00e1
                           0000E1   658 G$XBR0$0$0 == 0x00e1
                           0000E1   659 _XBR0	=	0x00e1
                           0000E2   660 G$PCA0CPH5$0$0 == 0x00e2
                           0000E2   661 _PCA0CPH5	=	0x00e2
                           0000E2   662 G$XBR1$0$0 == 0x00e2
                           0000E2   663 _XBR1	=	0x00e2
                           0000E3   664 G$XBR2$0$0 == 0x00e3
                           0000E3   665 _XBR2	=	0x00e3
                           0000E4   666 G$XBR3$0$0 == 0x00e4
                           0000E4   667 _XBR3	=	0x00e4
                           0000E6   668 G$EIE1$0$0 == 0x00e6
                           0000E6   669 _EIE1	=	0x00e6
                           0000E7   670 G$EIE2$0$0 == 0x00e7
                           0000E7   671 _EIE2	=	0x00e7
                           0000E8   672 G$ADC0CN$0$0 == 0x00e8
                           0000E8   673 _ADC0CN	=	0x00e8
                           0000E8   674 G$ADC2CN$0$0 == 0x00e8
                           0000E8   675 _ADC2CN	=	0x00e8
                           0000E8   676 G$P6$0$0 == 0x00e8
                           0000E8   677 _P6	=	0x00e8
                           0000E9   678 G$PCA0CPL2$0$0 == 0x00e9
                           0000E9   679 _PCA0CPL2	=	0x00e9
                           0000EA   680 G$PCA0CPH2$0$0 == 0x00ea
                           0000EA   681 _PCA0CPH2	=	0x00ea
                           0000EB   682 G$PCA0CPL3$0$0 == 0x00eb
                           0000EB   683 _PCA0CPL3	=	0x00eb
                           0000EC   684 G$PCA0CPH3$0$0 == 0x00ec
                           0000EC   685 _PCA0CPH3	=	0x00ec
                           0000ED   686 G$PCA0CPL4$0$0 == 0x00ed
                           0000ED   687 _PCA0CPL4	=	0x00ed
                           0000EE   688 G$PCA0CPH4$0$0 == 0x00ee
                           0000EE   689 _PCA0CPH4	=	0x00ee
                           0000EF   690 G$RSTSRC$0$0 == 0x00ef
                           0000EF   691 _RSTSRC	=	0x00ef
                           0000F0   692 G$B$0$0 == 0x00f0
                           0000F0   693 _B	=	0x00f0
                           0000F6   694 G$EIP1$0$0 == 0x00f6
                           0000F6   695 _EIP1	=	0x00f6
                           0000F7   696 G$EIP2$0$0 == 0x00f7
                           0000F7   697 _EIP2	=	0x00f7
                           0000F8   698 G$SPI0CN$0$0 == 0x00f8
                           0000F8   699 _SPI0CN	=	0x00f8
                           0000F8   700 G$CAN0CN$0$0 == 0x00f8
                           0000F8   701 _CAN0CN	=	0x00f8
                           0000F8   702 G$P7$0$0 == 0x00f8
                           0000F8   703 _P7	=	0x00f8
                           0000F9   704 G$PCA0L$0$0 == 0x00f9
                           0000F9   705 _PCA0L	=	0x00f9
                           0000FA   706 G$PCA0H$0$0 == 0x00fa
                           0000FA   707 _PCA0H	=	0x00fa
                           0000FB   708 G$PCA0CPL0$0$0 == 0x00fb
                           0000FB   709 _PCA0CPL0	=	0x00fb
                           0000FC   710 G$PCA0CPH0$0$0 == 0x00fc
                           0000FC   711 _PCA0CPH0	=	0x00fc
                           0000FD   712 G$PCA0CPL1$0$0 == 0x00fd
                           0000FD   713 _PCA0CPL1	=	0x00fd
                           0000FE   714 G$PCA0CPH1$0$0 == 0x00fe
                           0000FE   715 _PCA0CPH1	=	0x00fe
                           0000FF   716 G$WDTCN$0$0 == 0x00ff
                           0000FF   717 _WDTCN	=	0x00ff
                           00FAF9   718 G$PCA0$0$0 == 0xfaf9
                           00FAF9   719 _PCA0	=	0xfaf9
                           00FCFB   720 G$PCA0CP0$0$0 == 0xfcfb
                           00FCFB   721 _PCA0CP0	=	0xfcfb
                           00FEFD   722 G$PCA0CP1$0$0 == 0xfefd
                           00FEFD   723 _PCA0CP1	=	0xfefd
                           00EAE9   724 G$PCA0CP2$0$0 == 0xeae9
                           00EAE9   725 _PCA0CP2	=	0xeae9
                           00ECEB   726 G$PCA0CP3$0$0 == 0xeceb
                           00ECEB   727 _PCA0CP3	=	0xeceb
                           00EEED   728 G$PCA0CP4$0$0 == 0xeeed
                           00EEED   729 _PCA0CP4	=	0xeeed
                           00E2E1   730 G$PCA0CP5$0$0 == 0xe2e1
                           00E2E1   731 _PCA0CP5	=	0xe2e1
                           00D9D8   732 G$CAN0DAT$0$0 == 0xd9d8
                           00D9D8   733 _CAN0DAT	=	0xd9d8
                           00D3D2   734 G$DAC0$0$0 == 0xd3d2
                           00D3D2   735 _DAC0	=	0xd3d2
                           00D3D2   736 G$DAC1$0$0 == 0xd3d2
                           00D3D2   737 _DAC1	=	0xd3d2
                           00CBCA   738 G$RCAP2$0$0 == 0xcbca
                           00CBCA   739 _RCAP2	=	0xcbca
                           00CBCA   740 G$RCAP3$0$0 == 0xcbca
                           00CBCA   741 _RCAP3	=	0xcbca
                           00CBCA   742 G$RCAP4$0$0 == 0xcbca
                           00CBCA   743 _RCAP4	=	0xcbca
                           00CDCC   744 G$TMR2$0$0 == 0xcdcc
                           00CDCC   745 _TMR2	=	0xcdcc
                           00CDCC   746 G$TMR3$0$0 == 0xcdcc
                           00CDCC   747 _TMR3	=	0xcdcc
                           00CDCC   748 G$TMR4$0$0 == 0xcdcc
                           00CDCC   749 _TMR4	=	0xcdcc
                           00C5C4   750 G$ADC0GT$0$0 == 0xc5c4
                           00C5C4   751 _ADC0GT	=	0xc5c4
                           00C7C6   752 G$ADC0LT$0$0 == 0xc7c6
                           00C7C6   753 _ADC0LT	=	0xc7c6
                           00BFBE   754 G$ADC0$0$0 == 0xbfbe
                           00BFBE   755 _ADC0	=	0xbfbe
                           008382   756 G$DP$0$0 == 0x8382
                           008382   757 _DP	=	0x8382
                           0000A2   758 G$_XPAGE$0$0 == 0x00a2
                           0000A2   759 __XPAGE	=	0x00a2
                                    760 ;--------------------------------------------------------
                                    761 ; special function bits
                                    762 ;--------------------------------------------------------
                                    763 	.area RSEG    (ABS,DATA)
      000000                        764 	.org 0x0000
                           00008F   765 G$TF1$0$0 == 0x008f
                           00008F   766 _TF1	=	0x008f
                           00008E   767 G$TR1$0$0 == 0x008e
                           00008E   768 _TR1	=	0x008e
                           00008D   769 G$TF0$0$0 == 0x008d
                           00008D   770 _TF0	=	0x008d
                           00008C   771 G$TR0$0$0 == 0x008c
                           00008C   772 _TR0	=	0x008c
                           00008B   773 G$IE1$0$0 == 0x008b
                           00008B   774 _IE1	=	0x008b
                           00008A   775 G$IT1$0$0 == 0x008a
                           00008A   776 _IT1	=	0x008a
                           000089   777 G$IE0$0$0 == 0x0089
                           000089   778 _IE0	=	0x0089
                           000088   779 G$IT0$0$0 == 0x0088
                           000088   780 _IT0	=	0x0088
                           00008F   781 G$CP0EN$0$0 == 0x008f
                           00008F   782 _CP0EN	=	0x008f
                           00008E   783 G$CP0OUT$0$0 == 0x008e
                           00008E   784 _CP0OUT	=	0x008e
                           00008D   785 G$CP0RIF$0$0 == 0x008d
                           00008D   786 _CP0RIF	=	0x008d
                           00008C   787 G$CP0FIF$0$0 == 0x008c
                           00008C   788 _CP0FIF	=	0x008c
                           00008B   789 G$CP0HYP1$0$0 == 0x008b
                           00008B   790 _CP0HYP1	=	0x008b
                           00008A   791 G$CP0HYP0$0$0 == 0x008a
                           00008A   792 _CP0HYP0	=	0x008a
                           000089   793 G$CP0HYN1$0$0 == 0x0089
                           000089   794 _CP0HYN1	=	0x0089
                           000088   795 G$CP0HYN0$0$0 == 0x0088
                           000088   796 _CP0HYN0	=	0x0088
                           00008F   797 G$CP1EN$0$0 == 0x008f
                           00008F   798 _CP1EN	=	0x008f
                           00008E   799 G$CP1OUT$0$0 == 0x008e
                           00008E   800 _CP1OUT	=	0x008e
                           00008D   801 G$CP1RIF$0$0 == 0x008d
                           00008D   802 _CP1RIF	=	0x008d
                           00008C   803 G$CP1FIF$0$0 == 0x008c
                           00008C   804 _CP1FIF	=	0x008c
                           00008B   805 G$CP1HYP1$0$0 == 0x008b
                           00008B   806 _CP1HYP1	=	0x008b
                           00008A   807 G$CP1HYP0$0$0 == 0x008a
                           00008A   808 _CP1HYP0	=	0x008a
                           000089   809 G$CP1HYN1$0$0 == 0x0089
                           000089   810 _CP1HYN1	=	0x0089
                           000088   811 G$CP1HYN0$0$0 == 0x0088
                           000088   812 _CP1HYN0	=	0x0088
                           00008F   813 G$CP2EN$0$0 == 0x008f
                           00008F   814 _CP2EN	=	0x008f
                           00008E   815 G$CP2OUT$0$0 == 0x008e
                           00008E   816 _CP2OUT	=	0x008e
                           00008D   817 G$CP2RIF$0$0 == 0x008d
                           00008D   818 _CP2RIF	=	0x008d
                           00008C   819 G$CP2FIF$0$0 == 0x008c
                           00008C   820 _CP2FIF	=	0x008c
                           00008B   821 G$CP2HYP1$0$0 == 0x008b
                           00008B   822 _CP2HYP1	=	0x008b
                           00008A   823 G$CP2HYP0$0$0 == 0x008a
                           00008A   824 _CP2HYP0	=	0x008a
                           000089   825 G$CP2HYN1$0$0 == 0x0089
                           000089   826 _CP2HYN1	=	0x0089
                           000088   827 G$CP2HYN0$0$0 == 0x0088
                           000088   828 _CP2HYN0	=	0x0088
                           00009F   829 G$SM00$0$0 == 0x009f
                           00009F   830 _SM00	=	0x009f
                           00009E   831 G$SM10$0$0 == 0x009e
                           00009E   832 _SM10	=	0x009e
                           00009D   833 G$SM20$0$0 == 0x009d
                           00009D   834 _SM20	=	0x009d
                           00009C   835 G$REN0$0$0 == 0x009c
                           00009C   836 _REN0	=	0x009c
                           00009B   837 G$TB80$0$0 == 0x009b
                           00009B   838 _TB80	=	0x009b
                           00009A   839 G$RB80$0$0 == 0x009a
                           00009A   840 _RB80	=	0x009a
                           000099   841 G$TI0$0$0 == 0x0099
                           000099   842 _TI0	=	0x0099
                           000098   843 G$RI0$0$0 == 0x0098
                           000098   844 _RI0	=	0x0098
                           00009F   845 G$S1MODE$0$0 == 0x009f
                           00009F   846 _S1MODE	=	0x009f
                           00009D   847 G$MCE1$0$0 == 0x009d
                           00009D   848 _MCE1	=	0x009d
                           00009C   849 G$REN1$0$0 == 0x009c
                           00009C   850 _REN1	=	0x009c
                           00009B   851 G$TB81$0$0 == 0x009b
                           00009B   852 _TB81	=	0x009b
                           00009A   853 G$RB81$0$0 == 0x009a
                           00009A   854 _RB81	=	0x009a
                           000099   855 G$TI1$0$0 == 0x0099
                           000099   856 _TI1	=	0x0099
                           000098   857 G$RI1$0$0 == 0x0098
                           000098   858 _RI1	=	0x0098
                           0000AF   859 G$EA$0$0 == 0x00af
                           0000AF   860 _EA	=	0x00af
                           0000AD   861 G$ET2$0$0 == 0x00ad
                           0000AD   862 _ET2	=	0x00ad
                           0000AC   863 G$ES0$0$0 == 0x00ac
                           0000AC   864 _ES0	=	0x00ac
                           0000AB   865 G$ET1$0$0 == 0x00ab
                           0000AB   866 _ET1	=	0x00ab
                           0000AA   867 G$EX1$0$0 == 0x00aa
                           0000AA   868 _EX1	=	0x00aa
                           0000A9   869 G$ET0$0$0 == 0x00a9
                           0000A9   870 _ET0	=	0x00a9
                           0000A8   871 G$EX0$0$0 == 0x00a8
                           0000A8   872 _EX0	=	0x00a8
                           0000BD   873 G$PT2$0$0 == 0x00bd
                           0000BD   874 _PT2	=	0x00bd
                           0000BC   875 G$PS0$0$0 == 0x00bc
                           0000BC   876 _PS0	=	0x00bc
                           0000BB   877 G$PT1$0$0 == 0x00bb
                           0000BB   878 _PT1	=	0x00bb
                           0000BA   879 G$PX1$0$0 == 0x00ba
                           0000BA   880 _PX1	=	0x00ba
                           0000B9   881 G$PT0$0$0 == 0x00b9
                           0000B9   882 _PT0	=	0x00b9
                           0000B8   883 G$PX0$0$0 == 0x00b8
                           0000B8   884 _PX0	=	0x00b8
                           0000C7   885 G$BUSY$0$0 == 0x00c7
                           0000C7   886 _BUSY	=	0x00c7
                           0000C6   887 G$ENSMB$0$0 == 0x00c6
                           0000C6   888 _ENSMB	=	0x00c6
                           0000C5   889 G$STA$0$0 == 0x00c5
                           0000C5   890 _STA	=	0x00c5
                           0000C4   891 G$STO$0$0 == 0x00c4
                           0000C4   892 _STO	=	0x00c4
                           0000C3   893 G$SI$0$0 == 0x00c3
                           0000C3   894 _SI	=	0x00c3
                           0000C2   895 G$AA$0$0 == 0x00c2
                           0000C2   896 _AA	=	0x00c2
                           0000C1   897 G$SMBFTE$0$0 == 0x00c1
                           0000C1   898 _SMBFTE	=	0x00c1
                           0000C0   899 G$SMBTOE$0$0 == 0x00c0
                           0000C0   900 _SMBTOE	=	0x00c0
                           0000C7   901 G$BOFF$0$0 == 0x00c7
                           0000C7   902 _BOFF	=	0x00c7
                           0000C6   903 G$EWARN$0$0 == 0x00c6
                           0000C6   904 _EWARN	=	0x00c6
                           0000C5   905 G$EPASS$0$0 == 0x00c5
                           0000C5   906 _EPASS	=	0x00c5
                           0000C4   907 G$RXOK$0$0 == 0x00c4
                           0000C4   908 _RXOK	=	0x00c4
                           0000C3   909 G$TXOK$0$0 == 0x00c3
                           0000C3   910 _TXOK	=	0x00c3
                           0000C2   911 G$LEC2$0$0 == 0x00c2
                           0000C2   912 _LEC2	=	0x00c2
                           0000C1   913 G$LEC1$0$0 == 0x00c1
                           0000C1   914 _LEC1	=	0x00c1
                           0000C0   915 G$LEC0$0$0 == 0x00c0
                           0000C0   916 _LEC0	=	0x00c0
                           0000CF   917 G$TF2$0$0 == 0x00cf
                           0000CF   918 _TF2	=	0x00cf
                           0000CE   919 G$EXF2$0$0 == 0x00ce
                           0000CE   920 _EXF2	=	0x00ce
                           0000CB   921 G$EXEN2$0$0 == 0x00cb
                           0000CB   922 _EXEN2	=	0x00cb
                           0000CA   923 G$TR2$0$0 == 0x00ca
                           0000CA   924 _TR2	=	0x00ca
                           0000C9   925 G$CT2$0$0 == 0x00c9
                           0000C9   926 _CT2	=	0x00c9
                           0000C8   927 G$CPRL2$0$0 == 0x00c8
                           0000C8   928 _CPRL2	=	0x00c8
                           0000CF   929 G$TF3$0$0 == 0x00cf
                           0000CF   930 _TF3	=	0x00cf
                           0000CE   931 G$EXF3$0$0 == 0x00ce
                           0000CE   932 _EXF3	=	0x00ce
                           0000CB   933 G$EXEN3$0$0 == 0x00cb
                           0000CB   934 _EXEN3	=	0x00cb
                           0000CA   935 G$TR3$0$0 == 0x00ca
                           0000CA   936 _TR3	=	0x00ca
                           0000C9   937 G$CT3$0$0 == 0x00c9
                           0000C9   938 _CT3	=	0x00c9
                           0000C8   939 G$CPRL3$0$0 == 0x00c8
                           0000C8   940 _CPRL3	=	0x00c8
                           0000CF   941 G$TF4$0$0 == 0x00cf
                           0000CF   942 _TF4	=	0x00cf
                           0000CE   943 G$EXF4$0$0 == 0x00ce
                           0000CE   944 _EXF4	=	0x00ce
                           0000CB   945 G$EXEN4$0$0 == 0x00cb
                           0000CB   946 _EXEN4	=	0x00cb
                           0000CA   947 G$TR4$0$0 == 0x00ca
                           0000CA   948 _TR4	=	0x00ca
                           0000C9   949 G$CT4$0$0 == 0x00c9
                           0000C9   950 _CT4	=	0x00c9
                           0000C8   951 G$CPRL4$0$0 == 0x00c8
                           0000C8   952 _CPRL4	=	0x00c8
                           0000D7   953 G$CY$0$0 == 0x00d7
                           0000D7   954 _CY	=	0x00d7
                           0000D6   955 G$AC$0$0 == 0x00d6
                           0000D6   956 _AC	=	0x00d6
                           0000D5   957 G$F0$0$0 == 0x00d5
                           0000D5   958 _F0	=	0x00d5
                           0000D4   959 G$RS1$0$0 == 0x00d4
                           0000D4   960 _RS1	=	0x00d4
                           0000D3   961 G$RS0$0$0 == 0x00d3
                           0000D3   962 _RS0	=	0x00d3
                           0000D2   963 G$OV$0$0 == 0x00d2
                           0000D2   964 _OV	=	0x00d2
                           0000D1   965 G$F1$0$0 == 0x00d1
                           0000D1   966 _F1	=	0x00d1
                           0000D0   967 G$P$0$0 == 0x00d0
                           0000D0   968 _P	=	0x00d0
                           0000DF   969 G$CF$0$0 == 0x00df
                           0000DF   970 _CF	=	0x00df
                           0000DE   971 G$CR$0$0 == 0x00de
                           0000DE   972 _CR	=	0x00de
                           0000DD   973 G$CCF5$0$0 == 0x00dd
                           0000DD   974 _CCF5	=	0x00dd
                           0000DC   975 G$CCF4$0$0 == 0x00dc
                           0000DC   976 _CCF4	=	0x00dc
                           0000DB   977 G$CCF3$0$0 == 0x00db
                           0000DB   978 _CCF3	=	0x00db
                           0000DA   979 G$CCF2$0$0 == 0x00da
                           0000DA   980 _CCF2	=	0x00da
                           0000D9   981 G$CCF1$0$0 == 0x00d9
                           0000D9   982 _CCF1	=	0x00d9
                           0000D8   983 G$CCF0$0$0 == 0x00d8
                           0000D8   984 _CCF0	=	0x00d8
                           0000EF   985 G$AD0EN$0$0 == 0x00ef
                           0000EF   986 _AD0EN	=	0x00ef
                           0000EE   987 G$AD0TM$0$0 == 0x00ee
                           0000EE   988 _AD0TM	=	0x00ee
                           0000ED   989 G$AD0INT$0$0 == 0x00ed
                           0000ED   990 _AD0INT	=	0x00ed
                           0000EC   991 G$AD0BUSY$0$0 == 0x00ec
                           0000EC   992 _AD0BUSY	=	0x00ec
                           0000EB   993 G$AD0CM1$0$0 == 0x00eb
                           0000EB   994 _AD0CM1	=	0x00eb
                           0000EA   995 G$AD0CM0$0$0 == 0x00ea
                           0000EA   996 _AD0CM0	=	0x00ea
                           0000E9   997 G$AD0WINT$0$0 == 0x00e9
                           0000E9   998 _AD0WINT	=	0x00e9
                           0000E8   999 G$AD0LJST$0$0 == 0x00e8
                           0000E8  1000 _AD0LJST	=	0x00e8
                           0000EF  1001 G$AD2EN$0$0 == 0x00ef
                           0000EF  1002 _AD2EN	=	0x00ef
                           0000EE  1003 G$AD2TM$0$0 == 0x00ee
                           0000EE  1004 _AD2TM	=	0x00ee
                           0000ED  1005 G$AD2INT$0$0 == 0x00ed
                           0000ED  1006 _AD2INT	=	0x00ed
                           0000EC  1007 G$AD2BUSY$0$0 == 0x00ec
                           0000EC  1008 _AD2BUSY	=	0x00ec
                           0000EB  1009 G$AD2CM2$0$0 == 0x00eb
                           0000EB  1010 _AD2CM2	=	0x00eb
                           0000EA  1011 G$AD2CM1$0$0 == 0x00ea
                           0000EA  1012 _AD2CM1	=	0x00ea
                           0000E9  1013 G$AD2CM0$0$0 == 0x00e9
                           0000E9  1014 _AD2CM0	=	0x00e9
                           0000E8  1015 G$AD2WINT$0$0 == 0x00e8
                           0000E8  1016 _AD2WINT	=	0x00e8
                           0000FF  1017 G$SPIF$0$0 == 0x00ff
                           0000FF  1018 _SPIF	=	0x00ff
                           0000FE  1019 G$WCOL$0$0 == 0x00fe
                           0000FE  1020 _WCOL	=	0x00fe
                           0000FD  1021 G$MODF$0$0 == 0x00fd
                           0000FD  1022 _MODF	=	0x00fd
                           0000FC  1023 G$RXOVRN$0$0 == 0x00fc
                           0000FC  1024 _RXOVRN	=	0x00fc
                           0000FB  1025 G$NSSMD1$0$0 == 0x00fb
                           0000FB  1026 _NSSMD1	=	0x00fb
                           0000FA  1027 G$NSSMD0$0$0 == 0x00fa
                           0000FA  1028 _NSSMD0	=	0x00fa
                           0000F9  1029 G$TXBMT$0$0 == 0x00f9
                           0000F9  1030 _TXBMT	=	0x00f9
                           0000F8  1031 G$SPIEN$0$0 == 0x00f8
                           0000F8  1032 _SPIEN	=	0x00f8
                           0000F8  1033 G$CANINIT$0$0 == 0x00f8
                           0000F8  1034 _CANINIT	=	0x00f8
                           0000F9  1035 G$CANIE$0$0 == 0x00f9
                           0000F9  1036 _CANIE	=	0x00f9
                           0000FA  1037 G$CANSIE$0$0 == 0x00fa
                           0000FA  1038 _CANSIE	=	0x00fa
                           0000FB  1039 G$CANEIE$0$0 == 0x00fb
                           0000FB  1040 _CANEIE	=	0x00fb
                           0000FC  1041 G$CANIF$0$0 == 0x00fc
                           0000FC  1042 _CANIF	=	0x00fc
                           0000FD  1043 G$CANDAR$0$0 == 0x00fd
                           0000FD  1044 _CANDAR	=	0x00fd
                           0000FE  1045 G$CANCCE$0$0 == 0x00fe
                           0000FE  1046 _CANCCE	=	0x00fe
                           0000FF  1047 G$CANTEST$0$0 == 0x00ff
                           0000FF  1048 _CANTEST	=	0x00ff
                           000080  1049 G$P0_0$0$0 == 0x0080
                           000080  1050 _P0_0	=	0x0080
                           000081  1051 G$P0_1$0$0 == 0x0081
                           000081  1052 _P0_1	=	0x0081
                           000082  1053 G$P0_2$0$0 == 0x0082
                           000082  1054 _P0_2	=	0x0082
                           000083  1055 G$P0_3$0$0 == 0x0083
                           000083  1056 _P0_3	=	0x0083
                           000084  1057 G$P0_4$0$0 == 0x0084
                           000084  1058 _P0_4	=	0x0084
                           000085  1059 G$P0_5$0$0 == 0x0085
                           000085  1060 _P0_5	=	0x0085
                           000086  1061 G$P0_6$0$0 == 0x0086
                           000086  1062 _P0_6	=	0x0086
                           000087  1063 G$P0_7$0$0 == 0x0087
                           000087  1064 _P0_7	=	0x0087
                           000090  1065 G$P1_0$0$0 == 0x0090
                           000090  1066 _P1_0	=	0x0090
                           000091  1067 G$P1_1$0$0 == 0x0091
                           000091  1068 _P1_1	=	0x0091
                           000092  1069 G$P1_2$0$0 == 0x0092
                           000092  1070 _P1_2	=	0x0092
                           000093  1071 G$P1_3$0$0 == 0x0093
                           000093  1072 _P1_3	=	0x0093
                           000094  1073 G$P1_4$0$0 == 0x0094
                           000094  1074 _P1_4	=	0x0094
                           000095  1075 G$P1_5$0$0 == 0x0095
                           000095  1076 _P1_5	=	0x0095
                           000096  1077 G$P1_6$0$0 == 0x0096
                           000096  1078 _P1_6	=	0x0096
                           000097  1079 G$P1_7$0$0 == 0x0097
                           000097  1080 _P1_7	=	0x0097
                           0000A0  1081 G$P2_0$0$0 == 0x00a0
                           0000A0  1082 _P2_0	=	0x00a0
                           0000A1  1083 G$P2_1$0$0 == 0x00a1
                           0000A1  1084 _P2_1	=	0x00a1
                           0000A2  1085 G$P2_2$0$0 == 0x00a2
                           0000A2  1086 _P2_2	=	0x00a2
                           0000A3  1087 G$P2_3$0$0 == 0x00a3
                           0000A3  1088 _P2_3	=	0x00a3
                           0000A4  1089 G$P2_4$0$0 == 0x00a4
                           0000A4  1090 _P2_4	=	0x00a4
                           0000A5  1091 G$P2_5$0$0 == 0x00a5
                           0000A5  1092 _P2_5	=	0x00a5
                           0000A6  1093 G$P2_6$0$0 == 0x00a6
                           0000A6  1094 _P2_6	=	0x00a6
                           0000A7  1095 G$P2_7$0$0 == 0x00a7
                           0000A7  1096 _P2_7	=	0x00a7
                           0000B0  1097 G$P3_0$0$0 == 0x00b0
                           0000B0  1098 _P3_0	=	0x00b0
                           0000B1  1099 G$P3_1$0$0 == 0x00b1
                           0000B1  1100 _P3_1	=	0x00b1
                           0000B2  1101 G$P3_2$0$0 == 0x00b2
                           0000B2  1102 _P3_2	=	0x00b2
                           0000B3  1103 G$P3_3$0$0 == 0x00b3
                           0000B3  1104 _P3_3	=	0x00b3
                           0000B4  1105 G$P3_4$0$0 == 0x00b4
                           0000B4  1106 _P3_4	=	0x00b4
                           0000B5  1107 G$P3_5$0$0 == 0x00b5
                           0000B5  1108 _P3_5	=	0x00b5
                           0000B6  1109 G$P3_6$0$0 == 0x00b6
                           0000B6  1110 _P3_6	=	0x00b6
                           0000B7  1111 G$P3_7$0$0 == 0x00b7
                           0000B7  1112 _P3_7	=	0x00b7
                           0000C8  1113 G$P4_0$0$0 == 0x00c8
                           0000C8  1114 _P4_0	=	0x00c8
                           0000C9  1115 G$P4_1$0$0 == 0x00c9
                           0000C9  1116 _P4_1	=	0x00c9
                           0000CA  1117 G$P4_2$0$0 == 0x00ca
                           0000CA  1118 _P4_2	=	0x00ca
                           0000CB  1119 G$P4_3$0$0 == 0x00cb
                           0000CB  1120 _P4_3	=	0x00cb
                           0000CC  1121 G$P4_4$0$0 == 0x00cc
                           0000CC  1122 _P4_4	=	0x00cc
                           0000CD  1123 G$P4_5$0$0 == 0x00cd
                           0000CD  1124 _P4_5	=	0x00cd
                           0000CE  1125 G$P4_6$0$0 == 0x00ce
                           0000CE  1126 _P4_6	=	0x00ce
                           0000CF  1127 G$P4_7$0$0 == 0x00cf
                           0000CF  1128 _P4_7	=	0x00cf
                           0000D8  1129 G$P5_0$0$0 == 0x00d8
                           0000D8  1130 _P5_0	=	0x00d8
                           0000D9  1131 G$P5_1$0$0 == 0x00d9
                           0000D9  1132 _P5_1	=	0x00d9
                           0000DA  1133 G$P5_2$0$0 == 0x00da
                           0000DA  1134 _P5_2	=	0x00da
                           0000DB  1135 G$P5_3$0$0 == 0x00db
                           0000DB  1136 _P5_3	=	0x00db
                           0000DC  1137 G$P5_4$0$0 == 0x00dc
                           0000DC  1138 _P5_4	=	0x00dc
                           0000DD  1139 G$P5_5$0$0 == 0x00dd
                           0000DD  1140 _P5_5	=	0x00dd
                           0000DE  1141 G$P5_6$0$0 == 0x00de
                           0000DE  1142 _P5_6	=	0x00de
                           0000DF  1143 G$P5_7$0$0 == 0x00df
                           0000DF  1144 _P5_7	=	0x00df
                           0000E8  1145 G$P6_0$0$0 == 0x00e8
                           0000E8  1146 _P6_0	=	0x00e8
                           0000E9  1147 G$P6_1$0$0 == 0x00e9
                           0000E9  1148 _P6_1	=	0x00e9
                           0000EA  1149 G$P6_2$0$0 == 0x00ea
                           0000EA  1150 _P6_2	=	0x00ea
                           0000EB  1151 G$P6_3$0$0 == 0x00eb
                           0000EB  1152 _P6_3	=	0x00eb
                           0000EC  1153 G$P6_4$0$0 == 0x00ec
                           0000EC  1154 _P6_4	=	0x00ec
                           0000ED  1155 G$P6_5$0$0 == 0x00ed
                           0000ED  1156 _P6_5	=	0x00ed
                           0000EE  1157 G$P6_6$0$0 == 0x00ee
                           0000EE  1158 _P6_6	=	0x00ee
                           0000EF  1159 G$P6_7$0$0 == 0x00ef
                           0000EF  1160 _P6_7	=	0x00ef
                           0000F8  1161 G$P7_0$0$0 == 0x00f8
                           0000F8  1162 _P7_0	=	0x00f8
                           0000F9  1163 G$P7_1$0$0 == 0x00f9
                           0000F9  1164 _P7_1	=	0x00f9
                           0000FA  1165 G$P7_2$0$0 == 0x00fa
                           0000FA  1166 _P7_2	=	0x00fa
                           0000FB  1167 G$P7_3$0$0 == 0x00fb
                           0000FB  1168 _P7_3	=	0x00fb
                           0000FC  1169 G$P7_4$0$0 == 0x00fc
                           0000FC  1170 _P7_4	=	0x00fc
                           0000FD  1171 G$P7_5$0$0 == 0x00fd
                           0000FD  1172 _P7_5	=	0x00fd
                           0000FE  1173 G$P7_6$0$0 == 0x00fe
                           0000FE  1174 _P7_6	=	0x00fe
                           0000FF  1175 G$P7_7$0$0 == 0x00ff
                           0000FF  1176 _P7_7	=	0x00ff
                                   1177 ;--------------------------------------------------------
                                   1178 ; overlayable register banks
                                   1179 ;--------------------------------------------------------
                                   1180 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                       1181 	.ds 8
                                   1182 ;--------------------------------------------------------
                                   1183 ; internal ram data
                                   1184 ;--------------------------------------------------------
                                   1185 	.area DSEG    (DATA)
                           000000  1186 G$eeprom_idx$0$0==.
      000018                       1187 _eeprom_idx::
      000018                       1188 	.ds 1
                           000001  1189 Leeprom.esc_eeprom$dado$1$29==.
      000019                       1190 _esc_eeprom_PARM_2:
      000019                       1191 	.ds 1
                                   1192 ;--------------------------------------------------------
                                   1193 ; overlayable items in internal ram 
                                   1194 ;--------------------------------------------------------
                                   1195 ;--------------------------------------------------------
                                   1196 ; indirectly addressable internal ram data
                                   1197 ;--------------------------------------------------------
                                   1198 	.area ISEG    (DATA)
                                   1199 ;--------------------------------------------------------
                                   1200 ; absolute internal ram data
                                   1201 ;--------------------------------------------------------
                                   1202 	.area IABS    (ABS,DATA)
                                   1203 	.area IABS    (ABS,DATA)
                                   1204 ;--------------------------------------------------------
                                   1205 ; bit data
                                   1206 ;--------------------------------------------------------
                                   1207 	.area BSEG    (BIT)
                           000000  1208 Leeprom.send_start$first$1$13==.
      00000F                       1209 _send_start_PARM_1:
      00000F                       1210 	.ds 1
                           000001  1211 Leeprom.esc_byte_cntr$RW$1$19==.
      000010                       1212 _esc_byte_cntr_PARM_2:
      000010                       1213 	.ds 1
                           000002  1214 Leeprom.esc_byte_dado$sloc0$1$0==.
      000011                       1215 _esc_byte_dado_sloc0_1_0:
      000011                       1216 	.ds 1
                                   1217 ;--------------------------------------------------------
                                   1218 ; paged external ram data
                                   1219 ;--------------------------------------------------------
                                   1220 	.area PSEG    (PAG,XDATA)
                                   1221 ;--------------------------------------------------------
                                   1222 ; external ram data
                                   1223 ;--------------------------------------------------------
                                   1224 	.area XSEG    (XDATA)
                                   1225 ;--------------------------------------------------------
                                   1226 ; absolute external ram data
                                   1227 ;--------------------------------------------------------
                                   1228 	.area XABS    (ABS,XDATA)
                                   1229 ;--------------------------------------------------------
                                   1230 ; external initialized ram data
                                   1231 ;--------------------------------------------------------
                                   1232 	.area XISEG   (XDATA)
                                   1233 	.area HOME    (CODE)
                                   1234 	.area GSINIT0 (CODE)
                                   1235 	.area GSINIT1 (CODE)
                                   1236 	.area GSINIT2 (CODE)
                                   1237 	.area GSINIT3 (CODE)
                                   1238 	.area GSINIT4 (CODE)
                                   1239 	.area GSINIT5 (CODE)
                                   1240 	.area GSINIT  (CODE)
                                   1241 	.area GSFINAL (CODE)
                                   1242 	.area CSEG    (CODE)
                                   1243 ;--------------------------------------------------------
                                   1244 ; global & static initialisations
                                   1245 ;--------------------------------------------------------
                                   1246 	.area HOME    (CODE)
                                   1247 	.area GSINIT  (CODE)
                                   1248 	.area GSFINAL (CODE)
                                   1249 	.area GSINIT  (CODE)
                           000000  1250 	C$eeprom.c$9$1$35 ==.
                                   1251 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\eeprom.c:9: unsigned char eeprom_idx = 0;
      0000FC 75 18 00         [24] 1252 	mov	_eeprom_idx,#0x00
                                   1253 ;--------------------------------------------------------
                                   1254 ; Home
                                   1255 ;--------------------------------------------------------
                                   1256 	.area HOME    (CODE)
                                   1257 	.area HOME    (CODE)
                                   1258 ;--------------------------------------------------------
                                   1259 ; code
                                   1260 ;--------------------------------------------------------
                                   1261 	.area CSEG    (CODE)
                                   1262 ;------------------------------------------------------------
                                   1263 ;Allocation info for local variables in function 'send_start'
                                   1264 ;------------------------------------------------------------
                           000000  1265 	G$send_start$0$0 ==.
                           000000  1266 	C$eeprom.c$11$0$0 ==.
                                   1267 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\eeprom.c:11: void send_start(__bit first) {
                                   1268 ;	-----------------------------------------
                                   1269 ;	 function send_start
                                   1270 ;	-----------------------------------------
      00085C                       1271 _send_start:
                           000007  1272 	ar7 = 0x07
                           000006  1273 	ar6 = 0x06
                           000005  1274 	ar5 = 0x05
                           000004  1275 	ar4 = 0x04
                           000003  1276 	ar3 = 0x03
                           000002  1277 	ar2 = 0x02
                           000001  1278 	ar1 = 0x01
                           000000  1279 	ar0 = 0x00
                           000000  1280 	C$eeprom.c$12$1$14 ==.
                                   1281 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\eeprom.c:12: STA = first;
      00085C A2 0F            [12] 1282 	mov	c,_send_start_PARM_1
      00085E 92 C5            [24] 1283 	mov	_STA,c
                           000004  1284 	C$eeprom.c$13$1$14 ==.
                                   1285 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\eeprom.c:13: SI = 0;
      000860 C2 C3            [12] 1286 	clr	_SI
                           000006  1287 	C$eeprom.c$14$1$14 ==.
                                   1288 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\eeprom.c:14: reset_wdt();
      000862 12 02 EA         [24] 1289 	lcall	_reset_wdt
                           000009  1290 	C$eeprom.c$15$1$14 ==.
                                   1291 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\eeprom.c:15: while (SI == 0) {}
      000865                       1292 00101$:
      000865 30 C3 FD         [24] 1293 	jnb	_SI,00101$
                           00000C  1294 	C$eeprom.c$16$1$14 ==.
                           00000C  1295 	XG$send_start$0$0 ==.
      000868 22               [24] 1296 	ret
                                   1297 ;------------------------------------------------------------
                                   1298 ;Allocation info for local variables in function 'send_stop'
                                   1299 ;------------------------------------------------------------
                           00000D  1300 	G$send_stop$0$0 ==.
                           00000D  1301 	C$eeprom.c$18$1$14 ==.
                                   1302 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\eeprom.c:18: void send_stop(void) {
                                   1303 ;	-----------------------------------------
                                   1304 ;	 function send_stop
                                   1305 ;	-----------------------------------------
      000869                       1306 _send_stop:
                           00000D  1307 	C$eeprom.c$19$1$17 ==.
                                   1308 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\eeprom.c:19: STO = 1;
      000869 D2 C4            [12] 1309 	setb	_STO
                           00000F  1310 	C$eeprom.c$20$1$17 ==.
                                   1311 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\eeprom.c:20: SI = 0;
      00086B C2 C3            [12] 1312 	clr	_SI
                           000011  1313 	C$eeprom.c$21$1$17 ==.
                                   1314 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\eeprom.c:21: reset_wdt();
      00086D 12 02 EA         [24] 1315 	lcall	_reset_wdt
                           000014  1316 	C$eeprom.c$22$1$17 ==.
                                   1317 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\eeprom.c:22: while (STO == 1) {}
      000870                       1318 00101$:
      000870 20 C4 FD         [24] 1319 	jb	_STO,00101$
                           000017  1320 	C$eeprom.c$23$1$17 ==.
                           000017  1321 	XG$send_stop$0$0 ==.
      000873 22               [24] 1322 	ret
                                   1323 ;------------------------------------------------------------
                                   1324 ;Allocation info for local variables in function 'esc_byte_cntr'
                                   1325 ;------------------------------------------------------------
                                   1326 ;slave_addr                Allocated to registers r7 
                                   1327 ;------------------------------------------------------------
                           000018  1328 	G$esc_byte_cntr$0$0 ==.
                           000018  1329 	C$eeprom.c$25$1$17 ==.
                                   1330 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\eeprom.c:25: unsigned char esc_byte_cntr(unsigned char slave_addr, __bit RW) {
                                   1331 ;	-----------------------------------------
                                   1332 ;	 function esc_byte_cntr
                                   1333 ;	-----------------------------------------
      000874                       1334 _esc_byte_cntr:
      000874 AF 82            [24] 1335 	mov	r7,dpl
                           00001A  1336 	C$eeprom.c$27$1$20 ==.
                                   1337 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\eeprom.c:27: send_start(1);
      000876 D2 0F            [12] 1338 	setb	_send_start_PARM_1
      000878 C0 07            [24] 1339 	push	ar7
      00087A 12 08 5C         [24] 1340 	lcall	_send_start
      00087D D0 07            [24] 1341 	pop	ar7
                           000023  1342 	C$eeprom.c$28$1$20 ==.
                                   1343 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\eeprom.c:28: if (SMB0STA != 0x08 && SMB0STA != 0x10)
      00087F 74 08            [12] 1344 	mov	a,#0x08
      000881 B5 C1 02         [24] 1345 	cjne	a,_SMB0STA,00123$
      000884 80 0C            [24] 1346 	sjmp	00102$
      000886                       1347 00123$:
      000886 74 10            [12] 1348 	mov	a,#0x10
      000888 B5 C1 02         [24] 1349 	cjne	a,_SMB0STA,00124$
      00088B 80 05            [24] 1350 	sjmp	00102$
      00088D                       1351 00124$:
                           000031  1352 	C$eeprom.c$29$1$20 ==.
                                   1353 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\eeprom.c:29: return SMB0STA;
      00088D 85 C1 82         [24] 1354 	mov	dpl,_SMB0STA
      000890 80 29            [24] 1355 	sjmp	00109$
      000892                       1356 00102$:
                           000036  1357 	C$eeprom.c$32$1$20 ==.
                                   1358 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\eeprom.c:32: SMB0DAT = (slave_addr << 1) | RW;
      000892 EF               [12] 1359 	mov	a,r7
      000893 2F               [12] 1360 	add	a,r7
      000894 FF               [12] 1361 	mov	r7,a
      000895 A2 10            [12] 1362 	mov	c,_esc_byte_cntr_PARM_2
      000897 E4               [12] 1363 	clr	a
      000898 33               [12] 1364 	rlc	a
      000899 4F               [12] 1365 	orl	a,r7
      00089A F5 C2            [12] 1366 	mov	_SMB0DAT,a
                           000040  1367 	C$eeprom.c$34$1$20 ==.
                                   1368 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\eeprom.c:34: send_start(0);
      00089C C2 0F            [12] 1369 	clr	_send_start_PARM_1
      00089E 12 08 5C         [24] 1370 	lcall	_send_start
                           000045  1371 	C$eeprom.c$37$1$20 ==.
                                   1372 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\eeprom.c:37: if (RW == READ && SMB0STA != 0x40 || RW == WRITE && SMB0STA != 0x18) {
      0008A1 30 10 05         [24] 1373 	jnb	_esc_byte_cntr_PARM_2,00108$
      0008A4 74 40            [12] 1374 	mov	a,#0x40
      0008A6 B5 C1 0A         [24] 1375 	cjne	a,_SMB0STA,00104$
      0008A9                       1376 00108$:
      0008A9 20 10 0C         [24] 1377 	jb	_esc_byte_cntr_PARM_2,00105$
      0008AC 74 18            [12] 1378 	mov	a,#0x18
      0008AE B5 C1 02         [24] 1379 	cjne	a,_SMB0STA,00129$
      0008B1 80 05            [24] 1380 	sjmp	00105$
      0008B3                       1381 00129$:
      0008B3                       1382 00104$:
                           000057  1383 	C$eeprom.c$38$2$21 ==.
                                   1384 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\eeprom.c:38: return SMB0STA;
      0008B3 85 C1 82         [24] 1385 	mov	dpl,_SMB0STA
      0008B6 80 03            [24] 1386 	sjmp	00109$
      0008B8                       1387 00105$:
                           00005C  1388 	C$eeprom.c$41$1$20 ==.
                                   1389 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\eeprom.c:41: return 0;
      0008B8 75 82 00         [24] 1390 	mov	dpl,#0x00
      0008BB                       1391 00109$:
                           00005F  1392 	C$eeprom.c$42$1$20 ==.
                           00005F  1393 	XG$esc_byte_cntr$0$0 ==.
      0008BB 22               [24] 1394 	ret
                                   1395 ;------------------------------------------------------------
                                   1396 ;Allocation info for local variables in function 'esc_byte_dado'
                                   1397 ;------------------------------------------------------------
                                   1398 ;dado                      Allocated to registers 
                                   1399 ;------------------------------------------------------------
                           000060  1400 	G$esc_byte_dado$0$0 ==.
                           000060  1401 	C$eeprom.c$44$1$20 ==.
                                   1402 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\eeprom.c:44: unsigned char esc_byte_dado(unsigned char dado) {
                                   1403 ;	-----------------------------------------
                                   1404 ;	 function esc_byte_dado
                                   1405 ;	-----------------------------------------
      0008BC                       1406 _esc_byte_dado:
      0008BC 85 82 C2         [24] 1407 	mov	_SMB0DAT,dpl
                           000063  1408 	C$eeprom.c$46$1$23 ==.
                                   1409 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\eeprom.c:46: SI = 0;
      0008BF C2 C3            [12] 1410 	clr	_SI
                           000065  1411 	C$eeprom.c$47$1$23 ==.
                                   1412 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\eeprom.c:47: reset_wdt();
      0008C1 12 02 EA         [24] 1413 	lcall	_reset_wdt
                           000068  1414 	C$eeprom.c$48$1$23 ==.
                                   1415 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\eeprom.c:48: while (SI == 0) {}
      0008C4                       1416 00101$:
      0008C4 30 C3 FD         [24] 1417 	jnb	_SI,00101$
                           00006B  1418 	C$eeprom.c$50$1$23 ==.
                                   1419 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\eeprom.c:50: return (SMB0STA != 0x28) ? SMB0STA : 0;
      0008C7 74 28            [12] 1420 	mov	a,#0x28
      0008C9 B5 C1 03         [24] 1421 	cjne	a,_SMB0STA,00118$
      0008CC D3               [12] 1422 	setb	c
      0008CD 80 01            [24] 1423 	sjmp	00119$
      0008CF                       1424 00118$:
      0008CF C3               [12] 1425 	clr	c
      0008D0                       1426 00119$:
      0008D0 92 11            [24] 1427 	mov	_esc_byte_dado_sloc0_1_0,c
      0008D2 40 04            [24] 1428 	jc	00106$
      0008D4 AF C1            [24] 1429 	mov	r7,_SMB0STA
      0008D6 80 02            [24] 1430 	sjmp	00107$
      0008D8                       1431 00106$:
      0008D8 7F 00            [12] 1432 	mov	r7,#0x00
      0008DA                       1433 00107$:
      0008DA 8F 82            [24] 1434 	mov	dpl,r7
                           000080  1435 	C$eeprom.c$51$1$23 ==.
                           000080  1436 	XG$esc_byte_dado$0$0 ==.
      0008DC 22               [24] 1437 	ret
                                   1438 ;------------------------------------------------------------
                                   1439 ;Allocation info for local variables in function 'le_eeprom'
                                   1440 ;------------------------------------------------------------
                                   1441 ;endereco                  Allocated to registers r7 
                                   1442 ;dado                      Allocated to registers r6 r7 
                                   1443 ;status                    Allocated to registers r6 
                                   1444 ;------------------------------------------------------------
                           000081  1445 	G$le_eeprom$0$0 ==.
                           000081  1446 	C$eeprom.c$53$1$23 ==.
                                   1447 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\eeprom.c:53: int le_eeprom(unsigned char endereco) {
                                   1448 ;	-----------------------------------------
                                   1449 ;	 function le_eeprom
                                   1450 ;	-----------------------------------------
      0008DD                       1451 _le_eeprom:
      0008DD AF 82            [24] 1452 	mov	r7,dpl
                           000083  1453 	C$eeprom.c$57$1$26 ==.
                                   1454 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\eeprom.c:57: status = esc_byte_cntr(EEPROM_ADDR, WRITE);
      0008DF C2 10            [12] 1455 	clr	_esc_byte_cntr_PARM_2
      0008E1 75 82 50         [24] 1456 	mov	dpl,#0x50
      0008E4 C0 07            [24] 1457 	push	ar7
      0008E6 12 08 74         [24] 1458 	lcall	_esc_byte_cntr
      0008E9 AE 82            [24] 1459 	mov	r6,dpl
      0008EB D0 07            [24] 1460 	pop	ar7
                           000091  1461 	C$eeprom.c$58$1$26 ==.
                                   1462 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\eeprom.c:58: if (status != 0) return -(int)status;
      0008ED EE               [12] 1463 	mov	a,r6
      0008EE 60 0F            [24] 1464 	jz	00102$
      0008F0 8E 04            [24] 1465 	mov	ar4,r6
      0008F2 7D 00            [12] 1466 	mov	r5,#0x00
      0008F4 C3               [12] 1467 	clr	c
      0008F5 E4               [12] 1468 	clr	a
      0008F6 9C               [12] 1469 	subb	a,r4
      0008F7 F5 82            [12] 1470 	mov	dpl,a
      0008F9 E4               [12] 1471 	clr	a
      0008FA 9D               [12] 1472 	subb	a,r5
      0008FB F5 83            [12] 1473 	mov	dph,a
      0008FD 80 66            [24] 1474 	sjmp	00112$
      0008FF                       1475 00102$:
                           0000A3  1476 	C$eeprom.c$59$1$26 ==.
                                   1477 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\eeprom.c:59: status = esc_byte_dado(endereco);
      0008FF 8F 82            [24] 1478 	mov	dpl,r7
      000901 12 08 BC         [24] 1479 	lcall	_esc_byte_dado
                           0000A8  1480 	C$eeprom.c$60$1$26 ==.
                                   1481 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\eeprom.c:60: if (status != 0) return -(int)status;
      000904 E5 82            [12] 1482 	mov	a,dpl
      000906 FE               [12] 1483 	mov	r6,a
      000907 60 0F            [24] 1484 	jz	00104$
      000909 8E 05            [24] 1485 	mov	ar5,r6
      00090B 7F 00            [12] 1486 	mov	r7,#0x00
      00090D C3               [12] 1487 	clr	c
      00090E E4               [12] 1488 	clr	a
      00090F 9D               [12] 1489 	subb	a,r5
      000910 F5 82            [12] 1490 	mov	dpl,a
      000912 E4               [12] 1491 	clr	a
      000913 9F               [12] 1492 	subb	a,r7
      000914 F5 83            [12] 1493 	mov	dph,a
      000916 80 4D            [24] 1494 	sjmp	00112$
      000918                       1495 00104$:
                           0000BC  1496 	C$eeprom.c$61$1$26 ==.
                                   1497 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\eeprom.c:61: status = esc_byte_cntr(EEPROM_ADDR, READ);
      000918 D2 10            [12] 1498 	setb	_esc_byte_cntr_PARM_2
      00091A 75 82 50         [24] 1499 	mov	dpl,#0x50
      00091D 12 08 74         [24] 1500 	lcall	_esc_byte_cntr
                           0000C4  1501 	C$eeprom.c$62$1$26 ==.
                                   1502 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\eeprom.c:62: if (status != 0) return -(int)status;
      000920 E5 82            [12] 1503 	mov	a,dpl
      000922 FE               [12] 1504 	mov	r6,a
      000923 60 0D            [24] 1505 	jz	00106$
      000925 7F 00            [12] 1506 	mov	r7,#0x00
      000927 C3               [12] 1507 	clr	c
      000928 E4               [12] 1508 	clr	a
      000929 9E               [12] 1509 	subb	a,r6
      00092A F5 82            [12] 1510 	mov	dpl,a
      00092C E4               [12] 1511 	clr	a
      00092D 9F               [12] 1512 	subb	a,r7
      00092E F5 83            [12] 1513 	mov	dph,a
      000930 80 33            [24] 1514 	sjmp	00112$
      000932                       1515 00106$:
                           0000D6  1516 	C$eeprom.c$64$1$26 ==.
                                   1517 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\eeprom.c:64: AA = 0;
      000932 C2 C2            [12] 1518 	clr	_AA
                           0000D8  1519 	C$eeprom.c$65$1$26 ==.
                                   1520 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\eeprom.c:65: SI = 0;
      000934 C2 C3            [12] 1521 	clr	_SI
                           0000DA  1522 	C$eeprom.c$66$1$26 ==.
                                   1523 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\eeprom.c:66: reset_wdt();
      000936 12 02 EA         [24] 1524 	lcall	_reset_wdt
                           0000DD  1525 	C$eeprom.c$67$1$26 ==.
                                   1526 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\eeprom.c:67: while (SI == 0) {} // Aguarda receber byte da EEPROM
      000939                       1527 00107$:
      000939 30 C3 FD         [24] 1528 	jnb	_SI,00107$
                           0000E0  1529 	C$eeprom.c$69$1$26 ==.
                                   1530 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\eeprom.c:69: if (SMB0STA != 0x58) {
      00093C 74 58            [12] 1531 	mov	a,#0x58
      00093E B5 C1 02         [24] 1532 	cjne	a,_SMB0STA,00136$
      000941 80 0F            [24] 1533 	sjmp	00111$
      000943                       1534 00136$:
                           0000E7  1535 	C$eeprom.c$70$2$28 ==.
                                   1536 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\eeprom.c:70: return -(int)SMB0STA;
      000943 AE C1            [24] 1537 	mov	r6,_SMB0STA
      000945 7F 00            [12] 1538 	mov	r7,#0x00
      000947 C3               [12] 1539 	clr	c
      000948 E4               [12] 1540 	clr	a
      000949 9E               [12] 1541 	subb	a,r6
      00094A F5 82            [12] 1542 	mov	dpl,a
      00094C E4               [12] 1543 	clr	a
      00094D 9F               [12] 1544 	subb	a,r7
      00094E F5 83            [12] 1545 	mov	dph,a
      000950 80 13            [24] 1546 	sjmp	00112$
      000952                       1547 00111$:
                           0000F6  1548 	C$eeprom.c$73$1$26 ==.
                                   1549 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\eeprom.c:73: dado = SMB0DAT;
      000952 AE C2            [24] 1550 	mov	r6,_SMB0DAT
      000954 7F 00            [12] 1551 	mov	r7,#0x00
                           0000FA  1552 	C$eeprom.c$74$1$26 ==.
                                   1553 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\eeprom.c:74: send_stop();
      000956 C0 07            [24] 1554 	push	ar7
      000958 C0 06            [24] 1555 	push	ar6
      00095A 12 08 69         [24] 1556 	lcall	_send_stop
      00095D D0 06            [24] 1557 	pop	ar6
      00095F D0 07            [24] 1558 	pop	ar7
                           000105  1559 	C$eeprom.c$76$1$26 ==.
                                   1560 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\eeprom.c:76: return dado;
      000961 8E 82            [24] 1561 	mov	dpl,r6
      000963 8F 83            [24] 1562 	mov	dph,r7
      000965                       1563 00112$:
                           000109  1564 	C$eeprom.c$77$1$26 ==.
                           000109  1565 	XG$le_eeprom$0$0 ==.
      000965 22               [24] 1566 	ret
                                   1567 ;------------------------------------------------------------
                                   1568 ;Allocation info for local variables in function 'esc_eeprom'
                                   1569 ;------------------------------------------------------------
                                   1570 ;dado                      Allocated with name '_esc_eeprom_PARM_2'
                                   1571 ;endereco                  Allocated to registers r7 
                                   1572 ;status                    Allocated to registers r6 
                                   1573 ;------------------------------------------------------------
                           00010A  1574 	G$esc_eeprom$0$0 ==.
                           00010A  1575 	C$eeprom.c$79$1$26 ==.
                                   1576 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\eeprom.c:79: int esc_eeprom(unsigned char endereco, unsigned char dado) {
                                   1577 ;	-----------------------------------------
                                   1578 ;	 function esc_eeprom
                                   1579 ;	-----------------------------------------
      000966                       1580 _esc_eeprom:
      000966 AF 82            [24] 1581 	mov	r7,dpl
                           00010C  1582 	C$eeprom.c$82$1$30 ==.
                                   1583 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\eeprom.c:82: status = esc_byte_cntr(EEPROM_ADDR, WRITE);
      000968 C2 10            [12] 1584 	clr	_esc_byte_cntr_PARM_2
      00096A 75 82 50         [24] 1585 	mov	dpl,#0x50
      00096D C0 07            [24] 1586 	push	ar7
      00096F 12 08 74         [24] 1587 	lcall	_esc_byte_cntr
      000972 AE 82            [24] 1588 	mov	r6,dpl
      000974 D0 07            [24] 1589 	pop	ar7
                           00011A  1590 	C$eeprom.c$83$1$30 ==.
                                   1591 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\eeprom.c:83: if (status != 0) return -(int)status;
      000976 EE               [12] 1592 	mov	a,r6
      000977 60 0F            [24] 1593 	jz	00102$
      000979 8E 04            [24] 1594 	mov	ar4,r6
      00097B 7D 00            [12] 1595 	mov	r5,#0x00
      00097D C3               [12] 1596 	clr	c
      00097E E4               [12] 1597 	clr	a
      00097F 9C               [12] 1598 	subb	a,r4
      000980 F5 82            [12] 1599 	mov	dpl,a
      000982 E4               [12] 1600 	clr	a
      000983 9D               [12] 1601 	subb	a,r5
      000984 F5 83            [12] 1602 	mov	dph,a
      000986 80 53            [24] 1603 	sjmp	00110$
      000988                       1604 00102$:
                           00012C  1605 	C$eeprom.c$85$1$30 ==.
                                   1606 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\eeprom.c:85: status = esc_byte_dado(endereco);
      000988 8F 82            [24] 1607 	mov	dpl,r7
      00098A 12 08 BC         [24] 1608 	lcall	_esc_byte_dado
                           000131  1609 	C$eeprom.c$86$1$30 ==.
                                   1610 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\eeprom.c:86: if (status != 0) return -(int)status;
      00098D E5 82            [12] 1611 	mov	a,dpl
      00098F FE               [12] 1612 	mov	r6,a
      000990 60 0F            [24] 1613 	jz	00104$
      000992 8E 05            [24] 1614 	mov	ar5,r6
      000994 7F 00            [12] 1615 	mov	r7,#0x00
      000996 C3               [12] 1616 	clr	c
      000997 E4               [12] 1617 	clr	a
      000998 9D               [12] 1618 	subb	a,r5
      000999 F5 82            [12] 1619 	mov	dpl,a
      00099B E4               [12] 1620 	clr	a
      00099C 9F               [12] 1621 	subb	a,r7
      00099D F5 83            [12] 1622 	mov	dph,a
      00099F 80 3A            [24] 1623 	sjmp	00110$
      0009A1                       1624 00104$:
                           000145  1625 	C$eeprom.c$88$1$30 ==.
                                   1626 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\eeprom.c:88: status = esc_byte_dado(dado);
      0009A1 85 19 82         [24] 1627 	mov	dpl,_esc_eeprom_PARM_2
      0009A4 12 08 BC         [24] 1628 	lcall	_esc_byte_dado
                           00014B  1629 	C$eeprom.c$89$1$30 ==.
                                   1630 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\eeprom.c:89: if (status != 0) return -(int)status;
      0009A7 E5 82            [12] 1631 	mov	a,dpl
      0009A9 FE               [12] 1632 	mov	r6,a
      0009AA 60 0F            [24] 1633 	jz	00106$
      0009AC 8E 05            [24] 1634 	mov	ar5,r6
      0009AE 7F 00            [12] 1635 	mov	r7,#0x00
      0009B0 C3               [12] 1636 	clr	c
      0009B1 E4               [12] 1637 	clr	a
      0009B2 9D               [12] 1638 	subb	a,r5
      0009B3 F5 82            [12] 1639 	mov	dpl,a
      0009B5 E4               [12] 1640 	clr	a
      0009B6 9F               [12] 1641 	subb	a,r7
      0009B7 F5 83            [12] 1642 	mov	dph,a
      0009B9 80 20            [24] 1643 	sjmp	00110$
      0009BB                       1644 00106$:
                           00015F  1645 	C$eeprom.c$91$1$30 ==.
                                   1646 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\eeprom.c:91: send_stop();
      0009BB 12 08 69         [24] 1647 	lcall	_send_stop
                           000162  1648 	C$eeprom.c$93$1$30 ==.
                                   1649 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\eeprom.c:93: reset_wdt();
      0009BE 12 02 EA         [24] 1650 	lcall	_reset_wdt
                           000165  1651 	C$eeprom.c$94$1$30 ==.
                                   1652 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\eeprom.c:94: do {  // Ack polling
      0009C1                       1653 00107$:
                           000165  1654 	C$eeprom.c$95$2$31 ==.
                                   1655 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\eeprom.c:95: status = esc_byte_cntr(EEPROM_ADDR, WRITE);
      0009C1 C2 10            [12] 1656 	clr	_esc_byte_cntr_PARM_2
      0009C3 75 82 50         [24] 1657 	mov	dpl,#0x50
      0009C6 12 08 74         [24] 1658 	lcall	_esc_byte_cntr
      0009C9 AE 82            [24] 1659 	mov	r6,dpl
                           00016F  1660 	C$eeprom.c$96$1$30 ==.
                                   1661 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\eeprom.c:96: } while (status == 0x20);
      0009CB BE 20 02         [24] 1662 	cjne	r6,#0x20,00130$
      0009CE 80 F1            [24] 1663 	sjmp	00107$
      0009D0                       1664 00130$:
                           000174  1665 	C$eeprom.c$98$1$30 ==.
                                   1666 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\eeprom.c:98: return -(int)status;
      0009D0 7F 00            [12] 1667 	mov	r7,#0x00
      0009D2 C3               [12] 1668 	clr	c
      0009D3 E4               [12] 1669 	clr	a
      0009D4 9E               [12] 1670 	subb	a,r6
      0009D5 F5 82            [12] 1671 	mov	dpl,a
      0009D7 E4               [12] 1672 	clr	a
      0009D8 9F               [12] 1673 	subb	a,r7
      0009D9 F5 83            [12] 1674 	mov	dph,a
      0009DB                       1675 00110$:
                           00017F  1676 	C$eeprom.c$99$1$30 ==.
                           00017F  1677 	XG$esc_eeprom$0$0 ==.
      0009DB 22               [24] 1678 	ret
                                   1679 ;------------------------------------------------------------
                                   1680 ;Allocation info for local variables in function 'guarda_eeprom'
                                   1681 ;------------------------------------------------------------
                                   1682 ;amostra                   Allocated to registers r6 r7 
                                   1683 ;------------------------------------------------------------
                           000180  1684 	G$guarda_eeprom$0$0 ==.
                           000180  1685 	C$eeprom.c$101$1$30 ==.
                                   1686 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\eeprom.c:101: void guarda_eeprom(unsigned int amostra) {
                                   1687 ;	-----------------------------------------
                                   1688 ;	 function guarda_eeprom
                                   1689 ;	-----------------------------------------
      0009DC                       1690 _guarda_eeprom:
      0009DC AE 82            [24] 1691 	mov	r6,dpl
                           000182  1692 	C$eeprom.c$102$1$33 ==.
                                   1693 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\eeprom.c:102: esc_eeprom(eeprom_idx, amostra >> 4);  // Guarda 8 bits mais significativos
      0009DE E5 83            [12] 1694 	mov	a,dph
      0009E0 C4               [12] 1695 	swap	a
      0009E1 CE               [12] 1696 	xch	a,r6
      0009E2 C4               [12] 1697 	swap	a
      0009E3 54 0F            [12] 1698 	anl	a,#0x0f
      0009E5 6E               [12] 1699 	xrl	a,r6
      0009E6 CE               [12] 1700 	xch	a,r6
      0009E7 54 0F            [12] 1701 	anl	a,#0x0f
      0009E9 CE               [12] 1702 	xch	a,r6
      0009EA 6E               [12] 1703 	xrl	a,r6
      0009EB CE               [12] 1704 	xch	a,r6
      0009EC 8E 19            [24] 1705 	mov	_esc_eeprom_PARM_2,r6
      0009EE 85 18 82         [24] 1706 	mov	dpl,_eeprom_idx
      0009F1 12 09 66         [24] 1707 	lcall	_esc_eeprom
                           000198  1708 	C$eeprom.c$103$1$33 ==.
                                   1709 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\eeprom.c:103: eeprom_idx = (eeprom_idx + 1) % EEPROM_SIZE;
      0009F4 AE 18            [24] 1710 	mov	r6,_eeprom_idx
      0009F6 7F 00            [12] 1711 	mov	r7,#0x00
      0009F8 8E 82            [24] 1712 	mov	dpl,r6
      0009FA 8F 83            [24] 1713 	mov	dph,r7
      0009FC A3               [24] 1714 	inc	dptr
      0009FD 75 1C 80         [24] 1715 	mov	__modsint_PARM_2,#0x80
                                   1716 ;	1-genFromRTrack replaced	mov	(__modsint_PARM_2 + 1),#0x00
      000A00 8F 1D            [24] 1717 	mov	(__modsint_PARM_2 + 1),r7
      000A02 12 10 CD         [24] 1718 	lcall	__modsint
      000A05 AE 82            [24] 1719 	mov	r6,dpl
      000A07 8E 18            [24] 1720 	mov	_eeprom_idx,r6
                           0001AD  1721 	C$eeprom.c$104$1$33 ==.
                           0001AD  1722 	XG$guarda_eeprom$0$0 ==.
      000A09 22               [24] 1723 	ret
                                   1724 ;------------------------------------------------------------
                                   1725 ;Allocation info for local variables in function 'ISR_TC4'
                                   1726 ;------------------------------------------------------------
                           0001AE  1727 	G$ISR_TC4$0$0 ==.
                           0001AE  1728 	C$eeprom.c$106$1$33 ==.
                                   1729 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\eeprom.c:106: void ISR_TC4(void) __interrupt INTERRUPT_TIMER4 {
                                   1730 ;	-----------------------------------------
                                   1731 ;	 function ISR_TC4
                                   1732 ;	-----------------------------------------
      000A0A                       1733 _ISR_TC4:
                           0001AE  1734 	C$eeprom.c$107$1$35 ==.
                                   1735 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\eeprom.c:107: SMB0CN &= ~0x40;  // Desabilita SMBus
      000A0A 53 C0 BF         [24] 1736 	anl	_SMB0CN,#0xbf
                           0001B1  1737 	C$eeprom.c$108$1$35 ==.
                                   1738 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\eeprom.c:108: SMB0CN |= 0x40;  // Habilita SMBus
      000A0D 43 C0 40         [24] 1739 	orl	_SMB0CN,#0x40
                           0001B4  1740 	C$eeprom.c$109$1$35 ==.
                                   1741 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\eeprom.c:109: TF4 = 0;
      000A10 C2 CF            [12] 1742 	clr	_TF4
                           0001B6  1743 	C$eeprom.c$110$1$35 ==.
                           0001B6  1744 	XG$ISR_TC4$0$0 ==.
      000A12 32               [24] 1745 	reti
                                   1746 ;	eliminated unneeded mov psw,# (no regs used in bank)
                                   1747 ;	eliminated unneeded push/pop psw
                                   1748 ;	eliminated unneeded push/pop dpl
                                   1749 ;	eliminated unneeded push/pop dph
                                   1750 ;	eliminated unneeded push/pop b
                                   1751 ;	eliminated unneeded push/pop acc
                                   1752 	.area CSEG    (CODE)
                                   1753 	.area CONST   (CODE)
                                   1754 	.area XINIT   (CODE)
                                   1755 	.area CABS    (ABS,CODE)
