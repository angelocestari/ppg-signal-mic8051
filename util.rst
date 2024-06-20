                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 3.6.0 #9615 (MINGW64)
                                      4 ;--------------------------------------------------------
                                      5 	.module util
                                      6 	.optsdcc -mmcs51 --model-small
                                      7 	
                                      8 ;--------------------------------------------------------
                                      9 ; Public variables in this module
                                     10 ;--------------------------------------------------------
                                     11 	.globl _P7_7
                                     12 	.globl _P7_6
                                     13 	.globl _P7_5
                                     14 	.globl _P7_4
                                     15 	.globl _P7_3
                                     16 	.globl _P7_2
                                     17 	.globl _P7_1
                                     18 	.globl _P7_0
                                     19 	.globl _P6_7
                                     20 	.globl _P6_6
                                     21 	.globl _P6_5
                                     22 	.globl _P6_4
                                     23 	.globl _P6_3
                                     24 	.globl _P6_2
                                     25 	.globl _P6_1
                                     26 	.globl _P6_0
                                     27 	.globl _P5_7
                                     28 	.globl _P5_6
                                     29 	.globl _P5_5
                                     30 	.globl _P5_4
                                     31 	.globl _P5_3
                                     32 	.globl _P5_2
                                     33 	.globl _P5_1
                                     34 	.globl _P5_0
                                     35 	.globl _P4_7
                                     36 	.globl _P4_6
                                     37 	.globl _P4_5
                                     38 	.globl _P4_4
                                     39 	.globl _P4_3
                                     40 	.globl _P4_2
                                     41 	.globl _P4_1
                                     42 	.globl _P4_0
                                     43 	.globl _P3_7
                                     44 	.globl _P3_6
                                     45 	.globl _P3_5
                                     46 	.globl _P3_4
                                     47 	.globl _P3_3
                                     48 	.globl _P3_2
                                     49 	.globl _P3_1
                                     50 	.globl _P3_0
                                     51 	.globl _P2_7
                                     52 	.globl _P2_6
                                     53 	.globl _P2_5
                                     54 	.globl _P2_4
                                     55 	.globl _P2_3
                                     56 	.globl _P2_2
                                     57 	.globl _P2_1
                                     58 	.globl _P2_0
                                     59 	.globl _P1_7
                                     60 	.globl _P1_6
                                     61 	.globl _P1_5
                                     62 	.globl _P1_4
                                     63 	.globl _P1_3
                                     64 	.globl _P1_2
                                     65 	.globl _P1_1
                                     66 	.globl _P1_0
                                     67 	.globl _P0_7
                                     68 	.globl _P0_6
                                     69 	.globl _P0_5
                                     70 	.globl _P0_4
                                     71 	.globl _P0_3
                                     72 	.globl _P0_2
                                     73 	.globl _P0_1
                                     74 	.globl _P0_0
                                     75 	.globl _CANTEST
                                     76 	.globl _CANCCE
                                     77 	.globl _CANDAR
                                     78 	.globl _CANIF
                                     79 	.globl _CANEIE
                                     80 	.globl _CANSIE
                                     81 	.globl _CANIE
                                     82 	.globl _CANINIT
                                     83 	.globl _SPIEN
                                     84 	.globl _TXBMT
                                     85 	.globl _NSSMD0
                                     86 	.globl _NSSMD1
                                     87 	.globl _RXOVRN
                                     88 	.globl _MODF
                                     89 	.globl _WCOL
                                     90 	.globl _SPIF
                                     91 	.globl _AD2WINT
                                     92 	.globl _AD2CM0
                                     93 	.globl _AD2CM1
                                     94 	.globl _AD2CM2
                                     95 	.globl _AD2BUSY
                                     96 	.globl _AD2INT
                                     97 	.globl _AD2TM
                                     98 	.globl _AD2EN
                                     99 	.globl _AD0LJST
                                    100 	.globl _AD0WINT
                                    101 	.globl _AD0CM0
                                    102 	.globl _AD0CM1
                                    103 	.globl _AD0BUSY
                                    104 	.globl _AD0INT
                                    105 	.globl _AD0TM
                                    106 	.globl _AD0EN
                                    107 	.globl _CCF0
                                    108 	.globl _CCF1
                                    109 	.globl _CCF2
                                    110 	.globl _CCF3
                                    111 	.globl _CCF4
                                    112 	.globl _CCF5
                                    113 	.globl _CR
                                    114 	.globl _CF
                                    115 	.globl _P
                                    116 	.globl _F1
                                    117 	.globl _OV
                                    118 	.globl _RS0
                                    119 	.globl _RS1
                                    120 	.globl _F0
                                    121 	.globl _AC
                                    122 	.globl _CY
                                    123 	.globl _CPRL4
                                    124 	.globl _CT4
                                    125 	.globl _TR4
                                    126 	.globl _EXEN4
                                    127 	.globl _EXF4
                                    128 	.globl _TF4
                                    129 	.globl _CPRL3
                                    130 	.globl _CT3
                                    131 	.globl _TR3
                                    132 	.globl _EXEN3
                                    133 	.globl _EXF3
                                    134 	.globl _TF3
                                    135 	.globl _CPRL2
                                    136 	.globl _CT2
                                    137 	.globl _TR2
                                    138 	.globl _EXEN2
                                    139 	.globl _EXF2
                                    140 	.globl _TF2
                                    141 	.globl _LEC0
                                    142 	.globl _LEC1
                                    143 	.globl _LEC2
                                    144 	.globl _TXOK
                                    145 	.globl _RXOK
                                    146 	.globl _EPASS
                                    147 	.globl _EWARN
                                    148 	.globl _BOFF
                                    149 	.globl _SMBTOE
                                    150 	.globl _SMBFTE
                                    151 	.globl _AA
                                    152 	.globl _SI
                                    153 	.globl _STO
                                    154 	.globl _STA
                                    155 	.globl _ENSMB
                                    156 	.globl _BUSY
                                    157 	.globl _PX0
                                    158 	.globl _PT0
                                    159 	.globl _PX1
                                    160 	.globl _PT1
                                    161 	.globl _PS0
                                    162 	.globl _PT2
                                    163 	.globl _EX0
                                    164 	.globl _ET0
                                    165 	.globl _EX1
                                    166 	.globl _ET1
                                    167 	.globl _ES0
                                    168 	.globl _ET2
                                    169 	.globl _EA
                                    170 	.globl _RI1
                                    171 	.globl _TI1
                                    172 	.globl _RB81
                                    173 	.globl _TB81
                                    174 	.globl _REN1
                                    175 	.globl _MCE1
                                    176 	.globl _S1MODE
                                    177 	.globl _RI0
                                    178 	.globl _TI0
                                    179 	.globl _RB80
                                    180 	.globl _TB80
                                    181 	.globl _REN0
                                    182 	.globl _SM20
                                    183 	.globl _SM10
                                    184 	.globl _SM00
                                    185 	.globl _CP2HYN0
                                    186 	.globl _CP2HYN1
                                    187 	.globl _CP2HYP0
                                    188 	.globl _CP2HYP1
                                    189 	.globl _CP2FIF
                                    190 	.globl _CP2RIF
                                    191 	.globl _CP2OUT
                                    192 	.globl _CP2EN
                                    193 	.globl _CP1HYN0
                                    194 	.globl _CP1HYN1
                                    195 	.globl _CP1HYP0
                                    196 	.globl _CP1HYP1
                                    197 	.globl _CP1FIF
                                    198 	.globl _CP1RIF
                                    199 	.globl _CP1OUT
                                    200 	.globl _CP1EN
                                    201 	.globl _CP0HYN0
                                    202 	.globl _CP0HYN1
                                    203 	.globl _CP0HYP0
                                    204 	.globl _CP0HYP1
                                    205 	.globl _CP0FIF
                                    206 	.globl _CP0RIF
                                    207 	.globl _CP0OUT
                                    208 	.globl _CP0EN
                                    209 	.globl _IT0
                                    210 	.globl _IE0
                                    211 	.globl _IT1
                                    212 	.globl _IE1
                                    213 	.globl _TR0
                                    214 	.globl _TF0
                                    215 	.globl _TR1
                                    216 	.globl _TF1
                                    217 	.globl __XPAGE
                                    218 	.globl _DP
                                    219 	.globl _ADC0
                                    220 	.globl _ADC0LT
                                    221 	.globl _ADC0GT
                                    222 	.globl _TMR4
                                    223 	.globl _TMR3
                                    224 	.globl _TMR2
                                    225 	.globl _RCAP4
                                    226 	.globl _RCAP3
                                    227 	.globl _RCAP2
                                    228 	.globl _DAC1
                                    229 	.globl _DAC0
                                    230 	.globl _CAN0DAT
                                    231 	.globl _PCA0CP5
                                    232 	.globl _PCA0CP4
                                    233 	.globl _PCA0CP3
                                    234 	.globl _PCA0CP2
                                    235 	.globl _PCA0CP1
                                    236 	.globl _PCA0CP0
                                    237 	.globl _PCA0
                                    238 	.globl _WDTCN
                                    239 	.globl _PCA0CPH1
                                    240 	.globl _PCA0CPL1
                                    241 	.globl _PCA0CPH0
                                    242 	.globl _PCA0CPL0
                                    243 	.globl _PCA0H
                                    244 	.globl _PCA0L
                                    245 	.globl _P7
                                    246 	.globl _CAN0CN
                                    247 	.globl _SPI0CN
                                    248 	.globl _EIP2
                                    249 	.globl _EIP1
                                    250 	.globl _B
                                    251 	.globl _RSTSRC
                                    252 	.globl _PCA0CPH4
                                    253 	.globl _PCA0CPL4
                                    254 	.globl _PCA0CPH3
                                    255 	.globl _PCA0CPL3
                                    256 	.globl _PCA0CPH2
                                    257 	.globl _PCA0CPL2
                                    258 	.globl _P6
                                    259 	.globl _ADC2CN
                                    260 	.globl _ADC0CN
                                    261 	.globl _EIE2
                                    262 	.globl _EIE1
                                    263 	.globl _XBR3
                                    264 	.globl _XBR2
                                    265 	.globl _XBR1
                                    266 	.globl _PCA0CPH5
                                    267 	.globl _XBR0
                                    268 	.globl _PCA0CPL5
                                    269 	.globl _ACC
                                    270 	.globl _PCA0CPM5
                                    271 	.globl _PCA0CPM4
                                    272 	.globl _PCA0CPM3
                                    273 	.globl _PCA0CPM2
                                    274 	.globl _CAN0TST
                                    275 	.globl _PCA0CPM1
                                    276 	.globl _CAN0ADR
                                    277 	.globl _PCA0CPM0
                                    278 	.globl _CAN0DATH
                                    279 	.globl _PCA0MD
                                    280 	.globl _P5
                                    281 	.globl _CAN0DATL
                                    282 	.globl _PCA0CN
                                    283 	.globl _HVA0CN
                                    284 	.globl _DAC1CN
                                    285 	.globl _DAC0CN
                                    286 	.globl _DAC1H
                                    287 	.globl _DAC0H
                                    288 	.globl _DAC1L
                                    289 	.globl _DAC0L
                                    290 	.globl _REF0CN
                                    291 	.globl _PSW
                                    292 	.globl _SMB0CR
                                    293 	.globl _TMR4H
                                    294 	.globl _TMR3H
                                    295 	.globl _TMR2H
                                    296 	.globl _TMR4L
                                    297 	.globl _TMR3L
                                    298 	.globl _TMR2L
                                    299 	.globl _RCAP4H
                                    300 	.globl _RCAP3H
                                    301 	.globl _RCAP2H
                                    302 	.globl _RCAP4L
                                    303 	.globl _RCAP3L
                                    304 	.globl _RCAP2L
                                    305 	.globl _TMR4CF
                                    306 	.globl _TMR3CF
                                    307 	.globl _TMR2CF
                                    308 	.globl _P4
                                    309 	.globl _TMR4CN
                                    310 	.globl _TMR3CN
                                    311 	.globl _TMR2CN
                                    312 	.globl _ADC0LTH
                                    313 	.globl _ADC2LT
                                    314 	.globl _ADC0LTL
                                    315 	.globl _ADC0GTH
                                    316 	.globl _ADC2GT
                                    317 	.globl _ADC0GTL
                                    318 	.globl _SMB0ADR
                                    319 	.globl _SMB0DAT
                                    320 	.globl _SMB0STA
                                    321 	.globl _CAN0STA
                                    322 	.globl _SMB0CN
                                    323 	.globl _ADC0H
                                    324 	.globl _ADC2
                                    325 	.globl _ADC0L
                                    326 	.globl _ADC2CF
                                    327 	.globl _ADC0CF
                                    328 	.globl _AMX2SL
                                    329 	.globl _AMX0SL
                                    330 	.globl _AMX0CF
                                    331 	.globl _AMX0PRT
                                    332 	.globl _AMX2CF
                                    333 	.globl _SADEN0
                                    334 	.globl _IP
                                    335 	.globl _FLACL
                                    336 	.globl _FLSCL
                                    337 	.globl _P3
                                    338 	.globl _P3MDIN
                                    339 	.globl _P2MDIN
                                    340 	.globl _P1MDIN
                                    341 	.globl _SADDR1
                                    342 	.globl _SADDR0
                                    343 	.globl _IE
                                    344 	.globl _P3MDOUT
                                    345 	.globl _P2MDOUT
                                    346 	.globl _P1MDOUT
                                    347 	.globl _P0MDOUT
                                    348 	.globl _EMI0CF
                                    349 	.globl _EMI0CN
                                    350 	.globl _EMI0TC
                                    351 	.globl _P2
                                    352 	.globl _P7MDOUT
                                    353 	.globl _P6MDOUT
                                    354 	.globl _P5MDOUT
                                    355 	.globl _SPI0CKR
                                    356 	.globl _P4MDOUT
                                    357 	.globl _SPI0DAT
                                    358 	.globl _SPI0CFG
                                    359 	.globl _SBUF1
                                    360 	.globl _SBUF0
                                    361 	.globl _SCON1
                                    362 	.globl _SCON0
                                    363 	.globl _CLKSEL
                                    364 	.globl _SFRPGCN
                                    365 	.globl _SSTA0
                                    366 	.globl _P1
                                    367 	.globl _PSCTL
                                    368 	.globl _CKCON
                                    369 	.globl _TH1
                                    370 	.globl _OSCXCN
                                    371 	.globl _TH0
                                    372 	.globl _OSCICL
                                    373 	.globl _TL1
                                    374 	.globl _OSCICN
                                    375 	.globl _TL0
                                    376 	.globl _CPT2MD
                                    377 	.globl _CPT1MD
                                    378 	.globl _CPT0MD
                                    379 	.globl _TMOD
                                    380 	.globl _CPT2CN
                                    381 	.globl _CPT1CN
                                    382 	.globl _CPT0CN
                                    383 	.globl _TCON
                                    384 	.globl _PCON
                                    385 	.globl _SFRLAST
                                    386 	.globl _SFRNEXT
                                    387 	.globl _SFRPAGE
                                    388 	.globl _DPH
                                    389 	.globl _DPL
                                    390 	.globl _SP
                                    391 	.globl _P0
                                    392 	.globl _tempo_us
                                    393 	.globl _reset_wdt
                                    394 	.globl _config_tc0
                                    395 	.globl _delay_ms
                                    396 	.globl _delay_us
                                    397 	.globl _ISR_TC0
                                    398 ;--------------------------------------------------------
                                    399 ; special function registers
                                    400 ;--------------------------------------------------------
                                    401 	.area RSEG    (ABS,DATA)
      000000                        402 	.org 0x0000
                           000080   403 G$P0$0$0 == 0x0080
                           000080   404 _P0	=	0x0080
                           000081   405 G$SP$0$0 == 0x0081
                           000081   406 _SP	=	0x0081
                           000082   407 G$DPL$0$0 == 0x0082
                           000082   408 _DPL	=	0x0082
                           000083   409 G$DPH$0$0 == 0x0083
                           000083   410 _DPH	=	0x0083
                           000084   411 G$SFRPAGE$0$0 == 0x0084
                           000084   412 _SFRPAGE	=	0x0084
                           000085   413 G$SFRNEXT$0$0 == 0x0085
                           000085   414 _SFRNEXT	=	0x0085
                           000086   415 G$SFRLAST$0$0 == 0x0086
                           000086   416 _SFRLAST	=	0x0086
                           000087   417 G$PCON$0$0 == 0x0087
                           000087   418 _PCON	=	0x0087
                           000088   419 G$TCON$0$0 == 0x0088
                           000088   420 _TCON	=	0x0088
                           000088   421 G$CPT0CN$0$0 == 0x0088
                           000088   422 _CPT0CN	=	0x0088
                           000088   423 G$CPT1CN$0$0 == 0x0088
                           000088   424 _CPT1CN	=	0x0088
                           000088   425 G$CPT2CN$0$0 == 0x0088
                           000088   426 _CPT2CN	=	0x0088
                           000089   427 G$TMOD$0$0 == 0x0089
                           000089   428 _TMOD	=	0x0089
                           000089   429 G$CPT0MD$0$0 == 0x0089
                           000089   430 _CPT0MD	=	0x0089
                           000089   431 G$CPT1MD$0$0 == 0x0089
                           000089   432 _CPT1MD	=	0x0089
                           000089   433 G$CPT2MD$0$0 == 0x0089
                           000089   434 _CPT2MD	=	0x0089
                           00008A   435 G$TL0$0$0 == 0x008a
                           00008A   436 _TL0	=	0x008a
                           00008A   437 G$OSCICN$0$0 == 0x008a
                           00008A   438 _OSCICN	=	0x008a
                           00008B   439 G$TL1$0$0 == 0x008b
                           00008B   440 _TL1	=	0x008b
                           00008B   441 G$OSCICL$0$0 == 0x008b
                           00008B   442 _OSCICL	=	0x008b
                           00008C   443 G$TH0$0$0 == 0x008c
                           00008C   444 _TH0	=	0x008c
                           00008C   445 G$OSCXCN$0$0 == 0x008c
                           00008C   446 _OSCXCN	=	0x008c
                           00008D   447 G$TH1$0$0 == 0x008d
                           00008D   448 _TH1	=	0x008d
                           00008E   449 G$CKCON$0$0 == 0x008e
                           00008E   450 _CKCON	=	0x008e
                           00008F   451 G$PSCTL$0$0 == 0x008f
                           00008F   452 _PSCTL	=	0x008f
                           000090   453 G$P1$0$0 == 0x0090
                           000090   454 _P1	=	0x0090
                           000091   455 G$SSTA0$0$0 == 0x0091
                           000091   456 _SSTA0	=	0x0091
                           000096   457 G$SFRPGCN$0$0 == 0x0096
                           000096   458 _SFRPGCN	=	0x0096
                           000097   459 G$CLKSEL$0$0 == 0x0097
                           000097   460 _CLKSEL	=	0x0097
                           000098   461 G$SCON0$0$0 == 0x0098
                           000098   462 _SCON0	=	0x0098
                           000098   463 G$SCON1$0$0 == 0x0098
                           000098   464 _SCON1	=	0x0098
                           000099   465 G$SBUF0$0$0 == 0x0099
                           000099   466 _SBUF0	=	0x0099
                           000099   467 G$SBUF1$0$0 == 0x0099
                           000099   468 _SBUF1	=	0x0099
                           00009A   469 G$SPI0CFG$0$0 == 0x009a
                           00009A   470 _SPI0CFG	=	0x009a
                           00009B   471 G$SPI0DAT$0$0 == 0x009b
                           00009B   472 _SPI0DAT	=	0x009b
                           00009C   473 G$P4MDOUT$0$0 == 0x009c
                           00009C   474 _P4MDOUT	=	0x009c
                           00009D   475 G$SPI0CKR$0$0 == 0x009d
                           00009D   476 _SPI0CKR	=	0x009d
                           00009D   477 G$P5MDOUT$0$0 == 0x009d
                           00009D   478 _P5MDOUT	=	0x009d
                           00009E   479 G$P6MDOUT$0$0 == 0x009e
                           00009E   480 _P6MDOUT	=	0x009e
                           00009F   481 G$P7MDOUT$0$0 == 0x009f
                           00009F   482 _P7MDOUT	=	0x009f
                           0000A0   483 G$P2$0$0 == 0x00a0
                           0000A0   484 _P2	=	0x00a0
                           0000A1   485 G$EMI0TC$0$0 == 0x00a1
                           0000A1   486 _EMI0TC	=	0x00a1
                           0000A2   487 G$EMI0CN$0$0 == 0x00a2
                           0000A2   488 _EMI0CN	=	0x00a2
                           0000A3   489 G$EMI0CF$0$0 == 0x00a3
                           0000A3   490 _EMI0CF	=	0x00a3
                           0000A4   491 G$P0MDOUT$0$0 == 0x00a4
                           0000A4   492 _P0MDOUT	=	0x00a4
                           0000A5   493 G$P1MDOUT$0$0 == 0x00a5
                           0000A5   494 _P1MDOUT	=	0x00a5
                           0000A6   495 G$P2MDOUT$0$0 == 0x00a6
                           0000A6   496 _P2MDOUT	=	0x00a6
                           0000A7   497 G$P3MDOUT$0$0 == 0x00a7
                           0000A7   498 _P3MDOUT	=	0x00a7
                           0000A8   499 G$IE$0$0 == 0x00a8
                           0000A8   500 _IE	=	0x00a8
                           0000A9   501 G$SADDR0$0$0 == 0x00a9
                           0000A9   502 _SADDR0	=	0x00a9
                           0000A9   503 G$SADDR1$0$0 == 0x00a9
                           0000A9   504 _SADDR1	=	0x00a9
                           0000AD   505 G$P1MDIN$0$0 == 0x00ad
                           0000AD   506 _P1MDIN	=	0x00ad
                           0000AE   507 G$P2MDIN$0$0 == 0x00ae
                           0000AE   508 _P2MDIN	=	0x00ae
                           0000AF   509 G$P3MDIN$0$0 == 0x00af
                           0000AF   510 _P3MDIN	=	0x00af
                           0000B0   511 G$P3$0$0 == 0x00b0
                           0000B0   512 _P3	=	0x00b0
                           0000B7   513 G$FLSCL$0$0 == 0x00b7
                           0000B7   514 _FLSCL	=	0x00b7
                           0000B7   515 G$FLACL$0$0 == 0x00b7
                           0000B7   516 _FLACL	=	0x00b7
                           0000B8   517 G$IP$0$0 == 0x00b8
                           0000B8   518 _IP	=	0x00b8
                           0000B9   519 G$SADEN0$0$0 == 0x00b9
                           0000B9   520 _SADEN0	=	0x00b9
                           0000BA   521 G$AMX2CF$0$0 == 0x00ba
                           0000BA   522 _AMX2CF	=	0x00ba
                           0000BD   523 G$AMX0PRT$0$0 == 0x00bd
                           0000BD   524 _AMX0PRT	=	0x00bd
                           0000BA   525 G$AMX0CF$0$0 == 0x00ba
                           0000BA   526 _AMX0CF	=	0x00ba
                           0000BB   527 G$AMX0SL$0$0 == 0x00bb
                           0000BB   528 _AMX0SL	=	0x00bb
                           0000BB   529 G$AMX2SL$0$0 == 0x00bb
                           0000BB   530 _AMX2SL	=	0x00bb
                           0000BC   531 G$ADC0CF$0$0 == 0x00bc
                           0000BC   532 _ADC0CF	=	0x00bc
                           0000BC   533 G$ADC2CF$0$0 == 0x00bc
                           0000BC   534 _ADC2CF	=	0x00bc
                           0000BE   535 G$ADC0L$0$0 == 0x00be
                           0000BE   536 _ADC0L	=	0x00be
                           0000BE   537 G$ADC2$0$0 == 0x00be
                           0000BE   538 _ADC2	=	0x00be
                           0000BF   539 G$ADC0H$0$0 == 0x00bf
                           0000BF   540 _ADC0H	=	0x00bf
                           0000C0   541 G$SMB0CN$0$0 == 0x00c0
                           0000C0   542 _SMB0CN	=	0x00c0
                           0000C0   543 G$CAN0STA$0$0 == 0x00c0
                           0000C0   544 _CAN0STA	=	0x00c0
                           0000C1   545 G$SMB0STA$0$0 == 0x00c1
                           0000C1   546 _SMB0STA	=	0x00c1
                           0000C2   547 G$SMB0DAT$0$0 == 0x00c2
                           0000C2   548 _SMB0DAT	=	0x00c2
                           0000C3   549 G$SMB0ADR$0$0 == 0x00c3
                           0000C3   550 _SMB0ADR	=	0x00c3
                           0000C4   551 G$ADC0GTL$0$0 == 0x00c4
                           0000C4   552 _ADC0GTL	=	0x00c4
                           0000C4   553 G$ADC2GT$0$0 == 0x00c4
                           0000C4   554 _ADC2GT	=	0x00c4
                           0000C5   555 G$ADC0GTH$0$0 == 0x00c5
                           0000C5   556 _ADC0GTH	=	0x00c5
                           0000C6   557 G$ADC0LTL$0$0 == 0x00c6
                           0000C6   558 _ADC0LTL	=	0x00c6
                           0000C6   559 G$ADC2LT$0$0 == 0x00c6
                           0000C6   560 _ADC2LT	=	0x00c6
                           0000C7   561 G$ADC0LTH$0$0 == 0x00c7
                           0000C7   562 _ADC0LTH	=	0x00c7
                           0000C8   563 G$TMR2CN$0$0 == 0x00c8
                           0000C8   564 _TMR2CN	=	0x00c8
                           0000C8   565 G$TMR3CN$0$0 == 0x00c8
                           0000C8   566 _TMR3CN	=	0x00c8
                           0000C8   567 G$TMR4CN$0$0 == 0x00c8
                           0000C8   568 _TMR4CN	=	0x00c8
                           0000C8   569 G$P4$0$0 == 0x00c8
                           0000C8   570 _P4	=	0x00c8
                           0000C9   571 G$TMR2CF$0$0 == 0x00c9
                           0000C9   572 _TMR2CF	=	0x00c9
                           0000C9   573 G$TMR3CF$0$0 == 0x00c9
                           0000C9   574 _TMR3CF	=	0x00c9
                           0000C9   575 G$TMR4CF$0$0 == 0x00c9
                           0000C9   576 _TMR4CF	=	0x00c9
                           0000CA   577 G$RCAP2L$0$0 == 0x00ca
                           0000CA   578 _RCAP2L	=	0x00ca
                           0000CA   579 G$RCAP3L$0$0 == 0x00ca
                           0000CA   580 _RCAP3L	=	0x00ca
                           0000CA   581 G$RCAP4L$0$0 == 0x00ca
                           0000CA   582 _RCAP4L	=	0x00ca
                           0000CB   583 G$RCAP2H$0$0 == 0x00cb
                           0000CB   584 _RCAP2H	=	0x00cb
                           0000CB   585 G$RCAP3H$0$0 == 0x00cb
                           0000CB   586 _RCAP3H	=	0x00cb
                           0000CB   587 G$RCAP4H$0$0 == 0x00cb
                           0000CB   588 _RCAP4H	=	0x00cb
                           0000CC   589 G$TMR2L$0$0 == 0x00cc
                           0000CC   590 _TMR2L	=	0x00cc
                           0000CC   591 G$TMR3L$0$0 == 0x00cc
                           0000CC   592 _TMR3L	=	0x00cc
                           0000CC   593 G$TMR4L$0$0 == 0x00cc
                           0000CC   594 _TMR4L	=	0x00cc
                           0000CD   595 G$TMR2H$0$0 == 0x00cd
                           0000CD   596 _TMR2H	=	0x00cd
                           0000CD   597 G$TMR3H$0$0 == 0x00cd
                           0000CD   598 _TMR3H	=	0x00cd
                           0000CD   599 G$TMR4H$0$0 == 0x00cd
                           0000CD   600 _TMR4H	=	0x00cd
                           0000CF   601 G$SMB0CR$0$0 == 0x00cf
                           0000CF   602 _SMB0CR	=	0x00cf
                           0000D0   603 G$PSW$0$0 == 0x00d0
                           0000D0   604 _PSW	=	0x00d0
                           0000D1   605 G$REF0CN$0$0 == 0x00d1
                           0000D1   606 _REF0CN	=	0x00d1
                           0000D2   607 G$DAC0L$0$0 == 0x00d2
                           0000D2   608 _DAC0L	=	0x00d2
                           0000D2   609 G$DAC1L$0$0 == 0x00d2
                           0000D2   610 _DAC1L	=	0x00d2
                           0000D3   611 G$DAC0H$0$0 == 0x00d3
                           0000D3   612 _DAC0H	=	0x00d3
                           0000D3   613 G$DAC1H$0$0 == 0x00d3
                           0000D3   614 _DAC1H	=	0x00d3
                           0000D4   615 G$DAC0CN$0$0 == 0x00d4
                           0000D4   616 _DAC0CN	=	0x00d4
                           0000D4   617 G$DAC1CN$0$0 == 0x00d4
                           0000D4   618 _DAC1CN	=	0x00d4
                           0000D6   619 G$HVA0CN$0$0 == 0x00d6
                           0000D6   620 _HVA0CN	=	0x00d6
                           0000D8   621 G$PCA0CN$0$0 == 0x00d8
                           0000D8   622 _PCA0CN	=	0x00d8
                           0000D8   623 G$CAN0DATL$0$0 == 0x00d8
                           0000D8   624 _CAN0DATL	=	0x00d8
                           0000D8   625 G$P5$0$0 == 0x00d8
                           0000D8   626 _P5	=	0x00d8
                           0000D9   627 G$PCA0MD$0$0 == 0x00d9
                           0000D9   628 _PCA0MD	=	0x00d9
                           0000D9   629 G$CAN0DATH$0$0 == 0x00d9
                           0000D9   630 _CAN0DATH	=	0x00d9
                           0000DA   631 G$PCA0CPM0$0$0 == 0x00da
                           0000DA   632 _PCA0CPM0	=	0x00da
                           0000DA   633 G$CAN0ADR$0$0 == 0x00da
                           0000DA   634 _CAN0ADR	=	0x00da
                           0000DB   635 G$PCA0CPM1$0$0 == 0x00db
                           0000DB   636 _PCA0CPM1	=	0x00db
                           0000DB   637 G$CAN0TST$0$0 == 0x00db
                           0000DB   638 _CAN0TST	=	0x00db
                           0000DC   639 G$PCA0CPM2$0$0 == 0x00dc
                           0000DC   640 _PCA0CPM2	=	0x00dc
                           0000DD   641 G$PCA0CPM3$0$0 == 0x00dd
                           0000DD   642 _PCA0CPM3	=	0x00dd
                           0000DE   643 G$PCA0CPM4$0$0 == 0x00de
                           0000DE   644 _PCA0CPM4	=	0x00de
                           0000DF   645 G$PCA0CPM5$0$0 == 0x00df
                           0000DF   646 _PCA0CPM5	=	0x00df
                           0000E0   647 G$ACC$0$0 == 0x00e0
                           0000E0   648 _ACC	=	0x00e0
                           0000E1   649 G$PCA0CPL5$0$0 == 0x00e1
                           0000E1   650 _PCA0CPL5	=	0x00e1
                           0000E1   651 G$XBR0$0$0 == 0x00e1
                           0000E1   652 _XBR0	=	0x00e1
                           0000E2   653 G$PCA0CPH5$0$0 == 0x00e2
                           0000E2   654 _PCA0CPH5	=	0x00e2
                           0000E2   655 G$XBR1$0$0 == 0x00e2
                           0000E2   656 _XBR1	=	0x00e2
                           0000E3   657 G$XBR2$0$0 == 0x00e3
                           0000E3   658 _XBR2	=	0x00e3
                           0000E4   659 G$XBR3$0$0 == 0x00e4
                           0000E4   660 _XBR3	=	0x00e4
                           0000E6   661 G$EIE1$0$0 == 0x00e6
                           0000E6   662 _EIE1	=	0x00e6
                           0000E7   663 G$EIE2$0$0 == 0x00e7
                           0000E7   664 _EIE2	=	0x00e7
                           0000E8   665 G$ADC0CN$0$0 == 0x00e8
                           0000E8   666 _ADC0CN	=	0x00e8
                           0000E8   667 G$ADC2CN$0$0 == 0x00e8
                           0000E8   668 _ADC2CN	=	0x00e8
                           0000E8   669 G$P6$0$0 == 0x00e8
                           0000E8   670 _P6	=	0x00e8
                           0000E9   671 G$PCA0CPL2$0$0 == 0x00e9
                           0000E9   672 _PCA0CPL2	=	0x00e9
                           0000EA   673 G$PCA0CPH2$0$0 == 0x00ea
                           0000EA   674 _PCA0CPH2	=	0x00ea
                           0000EB   675 G$PCA0CPL3$0$0 == 0x00eb
                           0000EB   676 _PCA0CPL3	=	0x00eb
                           0000EC   677 G$PCA0CPH3$0$0 == 0x00ec
                           0000EC   678 _PCA0CPH3	=	0x00ec
                           0000ED   679 G$PCA0CPL4$0$0 == 0x00ed
                           0000ED   680 _PCA0CPL4	=	0x00ed
                           0000EE   681 G$PCA0CPH4$0$0 == 0x00ee
                           0000EE   682 _PCA0CPH4	=	0x00ee
                           0000EF   683 G$RSTSRC$0$0 == 0x00ef
                           0000EF   684 _RSTSRC	=	0x00ef
                           0000F0   685 G$B$0$0 == 0x00f0
                           0000F0   686 _B	=	0x00f0
                           0000F6   687 G$EIP1$0$0 == 0x00f6
                           0000F6   688 _EIP1	=	0x00f6
                           0000F7   689 G$EIP2$0$0 == 0x00f7
                           0000F7   690 _EIP2	=	0x00f7
                           0000F8   691 G$SPI0CN$0$0 == 0x00f8
                           0000F8   692 _SPI0CN	=	0x00f8
                           0000F8   693 G$CAN0CN$0$0 == 0x00f8
                           0000F8   694 _CAN0CN	=	0x00f8
                           0000F8   695 G$P7$0$0 == 0x00f8
                           0000F8   696 _P7	=	0x00f8
                           0000F9   697 G$PCA0L$0$0 == 0x00f9
                           0000F9   698 _PCA0L	=	0x00f9
                           0000FA   699 G$PCA0H$0$0 == 0x00fa
                           0000FA   700 _PCA0H	=	0x00fa
                           0000FB   701 G$PCA0CPL0$0$0 == 0x00fb
                           0000FB   702 _PCA0CPL0	=	0x00fb
                           0000FC   703 G$PCA0CPH0$0$0 == 0x00fc
                           0000FC   704 _PCA0CPH0	=	0x00fc
                           0000FD   705 G$PCA0CPL1$0$0 == 0x00fd
                           0000FD   706 _PCA0CPL1	=	0x00fd
                           0000FE   707 G$PCA0CPH1$0$0 == 0x00fe
                           0000FE   708 _PCA0CPH1	=	0x00fe
                           0000FF   709 G$WDTCN$0$0 == 0x00ff
                           0000FF   710 _WDTCN	=	0x00ff
                           00FAF9   711 G$PCA0$0$0 == 0xfaf9
                           00FAF9   712 _PCA0	=	0xfaf9
                           00FCFB   713 G$PCA0CP0$0$0 == 0xfcfb
                           00FCFB   714 _PCA0CP0	=	0xfcfb
                           00FEFD   715 G$PCA0CP1$0$0 == 0xfefd
                           00FEFD   716 _PCA0CP1	=	0xfefd
                           00EAE9   717 G$PCA0CP2$0$0 == 0xeae9
                           00EAE9   718 _PCA0CP2	=	0xeae9
                           00ECEB   719 G$PCA0CP3$0$0 == 0xeceb
                           00ECEB   720 _PCA0CP3	=	0xeceb
                           00EEED   721 G$PCA0CP4$0$0 == 0xeeed
                           00EEED   722 _PCA0CP4	=	0xeeed
                           00E2E1   723 G$PCA0CP5$0$0 == 0xe2e1
                           00E2E1   724 _PCA0CP5	=	0xe2e1
                           00D9D8   725 G$CAN0DAT$0$0 == 0xd9d8
                           00D9D8   726 _CAN0DAT	=	0xd9d8
                           00D3D2   727 G$DAC0$0$0 == 0xd3d2
                           00D3D2   728 _DAC0	=	0xd3d2
                           00D3D2   729 G$DAC1$0$0 == 0xd3d2
                           00D3D2   730 _DAC1	=	0xd3d2
                           00CBCA   731 G$RCAP2$0$0 == 0xcbca
                           00CBCA   732 _RCAP2	=	0xcbca
                           00CBCA   733 G$RCAP3$0$0 == 0xcbca
                           00CBCA   734 _RCAP3	=	0xcbca
                           00CBCA   735 G$RCAP4$0$0 == 0xcbca
                           00CBCA   736 _RCAP4	=	0xcbca
                           00CDCC   737 G$TMR2$0$0 == 0xcdcc
                           00CDCC   738 _TMR2	=	0xcdcc
                           00CDCC   739 G$TMR3$0$0 == 0xcdcc
                           00CDCC   740 _TMR3	=	0xcdcc
                           00CDCC   741 G$TMR4$0$0 == 0xcdcc
                           00CDCC   742 _TMR4	=	0xcdcc
                           00C5C4   743 G$ADC0GT$0$0 == 0xc5c4
                           00C5C4   744 _ADC0GT	=	0xc5c4
                           00C7C6   745 G$ADC0LT$0$0 == 0xc7c6
                           00C7C6   746 _ADC0LT	=	0xc7c6
                           00BFBE   747 G$ADC0$0$0 == 0xbfbe
                           00BFBE   748 _ADC0	=	0xbfbe
                           008382   749 G$DP$0$0 == 0x8382
                           008382   750 _DP	=	0x8382
                           0000A2   751 G$_XPAGE$0$0 == 0x00a2
                           0000A2   752 __XPAGE	=	0x00a2
                                    753 ;--------------------------------------------------------
                                    754 ; special function bits
                                    755 ;--------------------------------------------------------
                                    756 	.area RSEG    (ABS,DATA)
      000000                        757 	.org 0x0000
                           00008F   758 G$TF1$0$0 == 0x008f
                           00008F   759 _TF1	=	0x008f
                           00008E   760 G$TR1$0$0 == 0x008e
                           00008E   761 _TR1	=	0x008e
                           00008D   762 G$TF0$0$0 == 0x008d
                           00008D   763 _TF0	=	0x008d
                           00008C   764 G$TR0$0$0 == 0x008c
                           00008C   765 _TR0	=	0x008c
                           00008B   766 G$IE1$0$0 == 0x008b
                           00008B   767 _IE1	=	0x008b
                           00008A   768 G$IT1$0$0 == 0x008a
                           00008A   769 _IT1	=	0x008a
                           000089   770 G$IE0$0$0 == 0x0089
                           000089   771 _IE0	=	0x0089
                           000088   772 G$IT0$0$0 == 0x0088
                           000088   773 _IT0	=	0x0088
                           00008F   774 G$CP0EN$0$0 == 0x008f
                           00008F   775 _CP0EN	=	0x008f
                           00008E   776 G$CP0OUT$0$0 == 0x008e
                           00008E   777 _CP0OUT	=	0x008e
                           00008D   778 G$CP0RIF$0$0 == 0x008d
                           00008D   779 _CP0RIF	=	0x008d
                           00008C   780 G$CP0FIF$0$0 == 0x008c
                           00008C   781 _CP0FIF	=	0x008c
                           00008B   782 G$CP0HYP1$0$0 == 0x008b
                           00008B   783 _CP0HYP1	=	0x008b
                           00008A   784 G$CP0HYP0$0$0 == 0x008a
                           00008A   785 _CP0HYP0	=	0x008a
                           000089   786 G$CP0HYN1$0$0 == 0x0089
                           000089   787 _CP0HYN1	=	0x0089
                           000088   788 G$CP0HYN0$0$0 == 0x0088
                           000088   789 _CP0HYN0	=	0x0088
                           00008F   790 G$CP1EN$0$0 == 0x008f
                           00008F   791 _CP1EN	=	0x008f
                           00008E   792 G$CP1OUT$0$0 == 0x008e
                           00008E   793 _CP1OUT	=	0x008e
                           00008D   794 G$CP1RIF$0$0 == 0x008d
                           00008D   795 _CP1RIF	=	0x008d
                           00008C   796 G$CP1FIF$0$0 == 0x008c
                           00008C   797 _CP1FIF	=	0x008c
                           00008B   798 G$CP1HYP1$0$0 == 0x008b
                           00008B   799 _CP1HYP1	=	0x008b
                           00008A   800 G$CP1HYP0$0$0 == 0x008a
                           00008A   801 _CP1HYP0	=	0x008a
                           000089   802 G$CP1HYN1$0$0 == 0x0089
                           000089   803 _CP1HYN1	=	0x0089
                           000088   804 G$CP1HYN0$0$0 == 0x0088
                           000088   805 _CP1HYN0	=	0x0088
                           00008F   806 G$CP2EN$0$0 == 0x008f
                           00008F   807 _CP2EN	=	0x008f
                           00008E   808 G$CP2OUT$0$0 == 0x008e
                           00008E   809 _CP2OUT	=	0x008e
                           00008D   810 G$CP2RIF$0$0 == 0x008d
                           00008D   811 _CP2RIF	=	0x008d
                           00008C   812 G$CP2FIF$0$0 == 0x008c
                           00008C   813 _CP2FIF	=	0x008c
                           00008B   814 G$CP2HYP1$0$0 == 0x008b
                           00008B   815 _CP2HYP1	=	0x008b
                           00008A   816 G$CP2HYP0$0$0 == 0x008a
                           00008A   817 _CP2HYP0	=	0x008a
                           000089   818 G$CP2HYN1$0$0 == 0x0089
                           000089   819 _CP2HYN1	=	0x0089
                           000088   820 G$CP2HYN0$0$0 == 0x0088
                           000088   821 _CP2HYN0	=	0x0088
                           00009F   822 G$SM00$0$0 == 0x009f
                           00009F   823 _SM00	=	0x009f
                           00009E   824 G$SM10$0$0 == 0x009e
                           00009E   825 _SM10	=	0x009e
                           00009D   826 G$SM20$0$0 == 0x009d
                           00009D   827 _SM20	=	0x009d
                           00009C   828 G$REN0$0$0 == 0x009c
                           00009C   829 _REN0	=	0x009c
                           00009B   830 G$TB80$0$0 == 0x009b
                           00009B   831 _TB80	=	0x009b
                           00009A   832 G$RB80$0$0 == 0x009a
                           00009A   833 _RB80	=	0x009a
                           000099   834 G$TI0$0$0 == 0x0099
                           000099   835 _TI0	=	0x0099
                           000098   836 G$RI0$0$0 == 0x0098
                           000098   837 _RI0	=	0x0098
                           00009F   838 G$S1MODE$0$0 == 0x009f
                           00009F   839 _S1MODE	=	0x009f
                           00009D   840 G$MCE1$0$0 == 0x009d
                           00009D   841 _MCE1	=	0x009d
                           00009C   842 G$REN1$0$0 == 0x009c
                           00009C   843 _REN1	=	0x009c
                           00009B   844 G$TB81$0$0 == 0x009b
                           00009B   845 _TB81	=	0x009b
                           00009A   846 G$RB81$0$0 == 0x009a
                           00009A   847 _RB81	=	0x009a
                           000099   848 G$TI1$0$0 == 0x0099
                           000099   849 _TI1	=	0x0099
                           000098   850 G$RI1$0$0 == 0x0098
                           000098   851 _RI1	=	0x0098
                           0000AF   852 G$EA$0$0 == 0x00af
                           0000AF   853 _EA	=	0x00af
                           0000AD   854 G$ET2$0$0 == 0x00ad
                           0000AD   855 _ET2	=	0x00ad
                           0000AC   856 G$ES0$0$0 == 0x00ac
                           0000AC   857 _ES0	=	0x00ac
                           0000AB   858 G$ET1$0$0 == 0x00ab
                           0000AB   859 _ET1	=	0x00ab
                           0000AA   860 G$EX1$0$0 == 0x00aa
                           0000AA   861 _EX1	=	0x00aa
                           0000A9   862 G$ET0$0$0 == 0x00a9
                           0000A9   863 _ET0	=	0x00a9
                           0000A8   864 G$EX0$0$0 == 0x00a8
                           0000A8   865 _EX0	=	0x00a8
                           0000BD   866 G$PT2$0$0 == 0x00bd
                           0000BD   867 _PT2	=	0x00bd
                           0000BC   868 G$PS0$0$0 == 0x00bc
                           0000BC   869 _PS0	=	0x00bc
                           0000BB   870 G$PT1$0$0 == 0x00bb
                           0000BB   871 _PT1	=	0x00bb
                           0000BA   872 G$PX1$0$0 == 0x00ba
                           0000BA   873 _PX1	=	0x00ba
                           0000B9   874 G$PT0$0$0 == 0x00b9
                           0000B9   875 _PT0	=	0x00b9
                           0000B8   876 G$PX0$0$0 == 0x00b8
                           0000B8   877 _PX0	=	0x00b8
                           0000C7   878 G$BUSY$0$0 == 0x00c7
                           0000C7   879 _BUSY	=	0x00c7
                           0000C6   880 G$ENSMB$0$0 == 0x00c6
                           0000C6   881 _ENSMB	=	0x00c6
                           0000C5   882 G$STA$0$0 == 0x00c5
                           0000C5   883 _STA	=	0x00c5
                           0000C4   884 G$STO$0$0 == 0x00c4
                           0000C4   885 _STO	=	0x00c4
                           0000C3   886 G$SI$0$0 == 0x00c3
                           0000C3   887 _SI	=	0x00c3
                           0000C2   888 G$AA$0$0 == 0x00c2
                           0000C2   889 _AA	=	0x00c2
                           0000C1   890 G$SMBFTE$0$0 == 0x00c1
                           0000C1   891 _SMBFTE	=	0x00c1
                           0000C0   892 G$SMBTOE$0$0 == 0x00c0
                           0000C0   893 _SMBTOE	=	0x00c0
                           0000C7   894 G$BOFF$0$0 == 0x00c7
                           0000C7   895 _BOFF	=	0x00c7
                           0000C6   896 G$EWARN$0$0 == 0x00c6
                           0000C6   897 _EWARN	=	0x00c6
                           0000C5   898 G$EPASS$0$0 == 0x00c5
                           0000C5   899 _EPASS	=	0x00c5
                           0000C4   900 G$RXOK$0$0 == 0x00c4
                           0000C4   901 _RXOK	=	0x00c4
                           0000C3   902 G$TXOK$0$0 == 0x00c3
                           0000C3   903 _TXOK	=	0x00c3
                           0000C2   904 G$LEC2$0$0 == 0x00c2
                           0000C2   905 _LEC2	=	0x00c2
                           0000C1   906 G$LEC1$0$0 == 0x00c1
                           0000C1   907 _LEC1	=	0x00c1
                           0000C0   908 G$LEC0$0$0 == 0x00c0
                           0000C0   909 _LEC0	=	0x00c0
                           0000CF   910 G$TF2$0$0 == 0x00cf
                           0000CF   911 _TF2	=	0x00cf
                           0000CE   912 G$EXF2$0$0 == 0x00ce
                           0000CE   913 _EXF2	=	0x00ce
                           0000CB   914 G$EXEN2$0$0 == 0x00cb
                           0000CB   915 _EXEN2	=	0x00cb
                           0000CA   916 G$TR2$0$0 == 0x00ca
                           0000CA   917 _TR2	=	0x00ca
                           0000C9   918 G$CT2$0$0 == 0x00c9
                           0000C9   919 _CT2	=	0x00c9
                           0000C8   920 G$CPRL2$0$0 == 0x00c8
                           0000C8   921 _CPRL2	=	0x00c8
                           0000CF   922 G$TF3$0$0 == 0x00cf
                           0000CF   923 _TF3	=	0x00cf
                           0000CE   924 G$EXF3$0$0 == 0x00ce
                           0000CE   925 _EXF3	=	0x00ce
                           0000CB   926 G$EXEN3$0$0 == 0x00cb
                           0000CB   927 _EXEN3	=	0x00cb
                           0000CA   928 G$TR3$0$0 == 0x00ca
                           0000CA   929 _TR3	=	0x00ca
                           0000C9   930 G$CT3$0$0 == 0x00c9
                           0000C9   931 _CT3	=	0x00c9
                           0000C8   932 G$CPRL3$0$0 == 0x00c8
                           0000C8   933 _CPRL3	=	0x00c8
                           0000CF   934 G$TF4$0$0 == 0x00cf
                           0000CF   935 _TF4	=	0x00cf
                           0000CE   936 G$EXF4$0$0 == 0x00ce
                           0000CE   937 _EXF4	=	0x00ce
                           0000CB   938 G$EXEN4$0$0 == 0x00cb
                           0000CB   939 _EXEN4	=	0x00cb
                           0000CA   940 G$TR4$0$0 == 0x00ca
                           0000CA   941 _TR4	=	0x00ca
                           0000C9   942 G$CT4$0$0 == 0x00c9
                           0000C9   943 _CT4	=	0x00c9
                           0000C8   944 G$CPRL4$0$0 == 0x00c8
                           0000C8   945 _CPRL4	=	0x00c8
                           0000D7   946 G$CY$0$0 == 0x00d7
                           0000D7   947 _CY	=	0x00d7
                           0000D6   948 G$AC$0$0 == 0x00d6
                           0000D6   949 _AC	=	0x00d6
                           0000D5   950 G$F0$0$0 == 0x00d5
                           0000D5   951 _F0	=	0x00d5
                           0000D4   952 G$RS1$0$0 == 0x00d4
                           0000D4   953 _RS1	=	0x00d4
                           0000D3   954 G$RS0$0$0 == 0x00d3
                           0000D3   955 _RS0	=	0x00d3
                           0000D2   956 G$OV$0$0 == 0x00d2
                           0000D2   957 _OV	=	0x00d2
                           0000D1   958 G$F1$0$0 == 0x00d1
                           0000D1   959 _F1	=	0x00d1
                           0000D0   960 G$P$0$0 == 0x00d0
                           0000D0   961 _P	=	0x00d0
                           0000DF   962 G$CF$0$0 == 0x00df
                           0000DF   963 _CF	=	0x00df
                           0000DE   964 G$CR$0$0 == 0x00de
                           0000DE   965 _CR	=	0x00de
                           0000DD   966 G$CCF5$0$0 == 0x00dd
                           0000DD   967 _CCF5	=	0x00dd
                           0000DC   968 G$CCF4$0$0 == 0x00dc
                           0000DC   969 _CCF4	=	0x00dc
                           0000DB   970 G$CCF3$0$0 == 0x00db
                           0000DB   971 _CCF3	=	0x00db
                           0000DA   972 G$CCF2$0$0 == 0x00da
                           0000DA   973 _CCF2	=	0x00da
                           0000D9   974 G$CCF1$0$0 == 0x00d9
                           0000D9   975 _CCF1	=	0x00d9
                           0000D8   976 G$CCF0$0$0 == 0x00d8
                           0000D8   977 _CCF0	=	0x00d8
                           0000EF   978 G$AD0EN$0$0 == 0x00ef
                           0000EF   979 _AD0EN	=	0x00ef
                           0000EE   980 G$AD0TM$0$0 == 0x00ee
                           0000EE   981 _AD0TM	=	0x00ee
                           0000ED   982 G$AD0INT$0$0 == 0x00ed
                           0000ED   983 _AD0INT	=	0x00ed
                           0000EC   984 G$AD0BUSY$0$0 == 0x00ec
                           0000EC   985 _AD0BUSY	=	0x00ec
                           0000EB   986 G$AD0CM1$0$0 == 0x00eb
                           0000EB   987 _AD0CM1	=	0x00eb
                           0000EA   988 G$AD0CM0$0$0 == 0x00ea
                           0000EA   989 _AD0CM0	=	0x00ea
                           0000E9   990 G$AD0WINT$0$0 == 0x00e9
                           0000E9   991 _AD0WINT	=	0x00e9
                           0000E8   992 G$AD0LJST$0$0 == 0x00e8
                           0000E8   993 _AD0LJST	=	0x00e8
                           0000EF   994 G$AD2EN$0$0 == 0x00ef
                           0000EF   995 _AD2EN	=	0x00ef
                           0000EE   996 G$AD2TM$0$0 == 0x00ee
                           0000EE   997 _AD2TM	=	0x00ee
                           0000ED   998 G$AD2INT$0$0 == 0x00ed
                           0000ED   999 _AD2INT	=	0x00ed
                           0000EC  1000 G$AD2BUSY$0$0 == 0x00ec
                           0000EC  1001 _AD2BUSY	=	0x00ec
                           0000EB  1002 G$AD2CM2$0$0 == 0x00eb
                           0000EB  1003 _AD2CM2	=	0x00eb
                           0000EA  1004 G$AD2CM1$0$0 == 0x00ea
                           0000EA  1005 _AD2CM1	=	0x00ea
                           0000E9  1006 G$AD2CM0$0$0 == 0x00e9
                           0000E9  1007 _AD2CM0	=	0x00e9
                           0000E8  1008 G$AD2WINT$0$0 == 0x00e8
                           0000E8  1009 _AD2WINT	=	0x00e8
                           0000FF  1010 G$SPIF$0$0 == 0x00ff
                           0000FF  1011 _SPIF	=	0x00ff
                           0000FE  1012 G$WCOL$0$0 == 0x00fe
                           0000FE  1013 _WCOL	=	0x00fe
                           0000FD  1014 G$MODF$0$0 == 0x00fd
                           0000FD  1015 _MODF	=	0x00fd
                           0000FC  1016 G$RXOVRN$0$0 == 0x00fc
                           0000FC  1017 _RXOVRN	=	0x00fc
                           0000FB  1018 G$NSSMD1$0$0 == 0x00fb
                           0000FB  1019 _NSSMD1	=	0x00fb
                           0000FA  1020 G$NSSMD0$0$0 == 0x00fa
                           0000FA  1021 _NSSMD0	=	0x00fa
                           0000F9  1022 G$TXBMT$0$0 == 0x00f9
                           0000F9  1023 _TXBMT	=	0x00f9
                           0000F8  1024 G$SPIEN$0$0 == 0x00f8
                           0000F8  1025 _SPIEN	=	0x00f8
                           0000F8  1026 G$CANINIT$0$0 == 0x00f8
                           0000F8  1027 _CANINIT	=	0x00f8
                           0000F9  1028 G$CANIE$0$0 == 0x00f9
                           0000F9  1029 _CANIE	=	0x00f9
                           0000FA  1030 G$CANSIE$0$0 == 0x00fa
                           0000FA  1031 _CANSIE	=	0x00fa
                           0000FB  1032 G$CANEIE$0$0 == 0x00fb
                           0000FB  1033 _CANEIE	=	0x00fb
                           0000FC  1034 G$CANIF$0$0 == 0x00fc
                           0000FC  1035 _CANIF	=	0x00fc
                           0000FD  1036 G$CANDAR$0$0 == 0x00fd
                           0000FD  1037 _CANDAR	=	0x00fd
                           0000FE  1038 G$CANCCE$0$0 == 0x00fe
                           0000FE  1039 _CANCCE	=	0x00fe
                           0000FF  1040 G$CANTEST$0$0 == 0x00ff
                           0000FF  1041 _CANTEST	=	0x00ff
                           000080  1042 G$P0_0$0$0 == 0x0080
                           000080  1043 _P0_0	=	0x0080
                           000081  1044 G$P0_1$0$0 == 0x0081
                           000081  1045 _P0_1	=	0x0081
                           000082  1046 G$P0_2$0$0 == 0x0082
                           000082  1047 _P0_2	=	0x0082
                           000083  1048 G$P0_3$0$0 == 0x0083
                           000083  1049 _P0_3	=	0x0083
                           000084  1050 G$P0_4$0$0 == 0x0084
                           000084  1051 _P0_4	=	0x0084
                           000085  1052 G$P0_5$0$0 == 0x0085
                           000085  1053 _P0_5	=	0x0085
                           000086  1054 G$P0_6$0$0 == 0x0086
                           000086  1055 _P0_6	=	0x0086
                           000087  1056 G$P0_7$0$0 == 0x0087
                           000087  1057 _P0_7	=	0x0087
                           000090  1058 G$P1_0$0$0 == 0x0090
                           000090  1059 _P1_0	=	0x0090
                           000091  1060 G$P1_1$0$0 == 0x0091
                           000091  1061 _P1_1	=	0x0091
                           000092  1062 G$P1_2$0$0 == 0x0092
                           000092  1063 _P1_2	=	0x0092
                           000093  1064 G$P1_3$0$0 == 0x0093
                           000093  1065 _P1_3	=	0x0093
                           000094  1066 G$P1_4$0$0 == 0x0094
                           000094  1067 _P1_4	=	0x0094
                           000095  1068 G$P1_5$0$0 == 0x0095
                           000095  1069 _P1_5	=	0x0095
                           000096  1070 G$P1_6$0$0 == 0x0096
                           000096  1071 _P1_6	=	0x0096
                           000097  1072 G$P1_7$0$0 == 0x0097
                           000097  1073 _P1_7	=	0x0097
                           0000A0  1074 G$P2_0$0$0 == 0x00a0
                           0000A0  1075 _P2_0	=	0x00a0
                           0000A1  1076 G$P2_1$0$0 == 0x00a1
                           0000A1  1077 _P2_1	=	0x00a1
                           0000A2  1078 G$P2_2$0$0 == 0x00a2
                           0000A2  1079 _P2_2	=	0x00a2
                           0000A3  1080 G$P2_3$0$0 == 0x00a3
                           0000A3  1081 _P2_3	=	0x00a3
                           0000A4  1082 G$P2_4$0$0 == 0x00a4
                           0000A4  1083 _P2_4	=	0x00a4
                           0000A5  1084 G$P2_5$0$0 == 0x00a5
                           0000A5  1085 _P2_5	=	0x00a5
                           0000A6  1086 G$P2_6$0$0 == 0x00a6
                           0000A6  1087 _P2_6	=	0x00a6
                           0000A7  1088 G$P2_7$0$0 == 0x00a7
                           0000A7  1089 _P2_7	=	0x00a7
                           0000B0  1090 G$P3_0$0$0 == 0x00b0
                           0000B0  1091 _P3_0	=	0x00b0
                           0000B1  1092 G$P3_1$0$0 == 0x00b1
                           0000B1  1093 _P3_1	=	0x00b1
                           0000B2  1094 G$P3_2$0$0 == 0x00b2
                           0000B2  1095 _P3_2	=	0x00b2
                           0000B3  1096 G$P3_3$0$0 == 0x00b3
                           0000B3  1097 _P3_3	=	0x00b3
                           0000B4  1098 G$P3_4$0$0 == 0x00b4
                           0000B4  1099 _P3_4	=	0x00b4
                           0000B5  1100 G$P3_5$0$0 == 0x00b5
                           0000B5  1101 _P3_5	=	0x00b5
                           0000B6  1102 G$P3_6$0$0 == 0x00b6
                           0000B6  1103 _P3_6	=	0x00b6
                           0000B7  1104 G$P3_7$0$0 == 0x00b7
                           0000B7  1105 _P3_7	=	0x00b7
                           0000C8  1106 G$P4_0$0$0 == 0x00c8
                           0000C8  1107 _P4_0	=	0x00c8
                           0000C9  1108 G$P4_1$0$0 == 0x00c9
                           0000C9  1109 _P4_1	=	0x00c9
                           0000CA  1110 G$P4_2$0$0 == 0x00ca
                           0000CA  1111 _P4_2	=	0x00ca
                           0000CB  1112 G$P4_3$0$0 == 0x00cb
                           0000CB  1113 _P4_3	=	0x00cb
                           0000CC  1114 G$P4_4$0$0 == 0x00cc
                           0000CC  1115 _P4_4	=	0x00cc
                           0000CD  1116 G$P4_5$0$0 == 0x00cd
                           0000CD  1117 _P4_5	=	0x00cd
                           0000CE  1118 G$P4_6$0$0 == 0x00ce
                           0000CE  1119 _P4_6	=	0x00ce
                           0000CF  1120 G$P4_7$0$0 == 0x00cf
                           0000CF  1121 _P4_7	=	0x00cf
                           0000D8  1122 G$P5_0$0$0 == 0x00d8
                           0000D8  1123 _P5_0	=	0x00d8
                           0000D9  1124 G$P5_1$0$0 == 0x00d9
                           0000D9  1125 _P5_1	=	0x00d9
                           0000DA  1126 G$P5_2$0$0 == 0x00da
                           0000DA  1127 _P5_2	=	0x00da
                           0000DB  1128 G$P5_3$0$0 == 0x00db
                           0000DB  1129 _P5_3	=	0x00db
                           0000DC  1130 G$P5_4$0$0 == 0x00dc
                           0000DC  1131 _P5_4	=	0x00dc
                           0000DD  1132 G$P5_5$0$0 == 0x00dd
                           0000DD  1133 _P5_5	=	0x00dd
                           0000DE  1134 G$P5_6$0$0 == 0x00de
                           0000DE  1135 _P5_6	=	0x00de
                           0000DF  1136 G$P5_7$0$0 == 0x00df
                           0000DF  1137 _P5_7	=	0x00df
                           0000E8  1138 G$P6_0$0$0 == 0x00e8
                           0000E8  1139 _P6_0	=	0x00e8
                           0000E9  1140 G$P6_1$0$0 == 0x00e9
                           0000E9  1141 _P6_1	=	0x00e9
                           0000EA  1142 G$P6_2$0$0 == 0x00ea
                           0000EA  1143 _P6_2	=	0x00ea
                           0000EB  1144 G$P6_3$0$0 == 0x00eb
                           0000EB  1145 _P6_3	=	0x00eb
                           0000EC  1146 G$P6_4$0$0 == 0x00ec
                           0000EC  1147 _P6_4	=	0x00ec
                           0000ED  1148 G$P6_5$0$0 == 0x00ed
                           0000ED  1149 _P6_5	=	0x00ed
                           0000EE  1150 G$P6_6$0$0 == 0x00ee
                           0000EE  1151 _P6_6	=	0x00ee
                           0000EF  1152 G$P6_7$0$0 == 0x00ef
                           0000EF  1153 _P6_7	=	0x00ef
                           0000F8  1154 G$P7_0$0$0 == 0x00f8
                           0000F8  1155 _P7_0	=	0x00f8
                           0000F9  1156 G$P7_1$0$0 == 0x00f9
                           0000F9  1157 _P7_1	=	0x00f9
                           0000FA  1158 G$P7_2$0$0 == 0x00fa
                           0000FA  1159 _P7_2	=	0x00fa
                           0000FB  1160 G$P7_3$0$0 == 0x00fb
                           0000FB  1161 _P7_3	=	0x00fb
                           0000FC  1162 G$P7_4$0$0 == 0x00fc
                           0000FC  1163 _P7_4	=	0x00fc
                           0000FD  1164 G$P7_5$0$0 == 0x00fd
                           0000FD  1165 _P7_5	=	0x00fd
                           0000FE  1166 G$P7_6$0$0 == 0x00fe
                           0000FE  1167 _P7_6	=	0x00fe
                           0000FF  1168 G$P7_7$0$0 == 0x00ff
                           0000FF  1169 _P7_7	=	0x00ff
                                   1170 ;--------------------------------------------------------
                                   1171 ; overlayable register banks
                                   1172 ;--------------------------------------------------------
                                   1173 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                       1174 	.ds 8
                                   1175 ;--------------------------------------------------------
                                   1176 ; internal ram data
                                   1177 ;--------------------------------------------------------
                                   1178 	.area DSEG    (DATA)
                           000000  1179 G$tempo_us$0$0==.
      000008                       1180 _tempo_us::
      000008                       1181 	.ds 2
                                   1182 ;--------------------------------------------------------
                                   1183 ; overlayable items in internal ram 
                                   1184 ;--------------------------------------------------------
                                   1185 	.area	OSEG    (OVR,DATA)
                                   1186 ;--------------------------------------------------------
                                   1187 ; indirectly addressable internal ram data
                                   1188 ;--------------------------------------------------------
                                   1189 	.area ISEG    (DATA)
                                   1190 ;--------------------------------------------------------
                                   1191 ; absolute internal ram data
                                   1192 ;--------------------------------------------------------
                                   1193 	.area IABS    (ABS,DATA)
                                   1194 	.area IABS    (ABS,DATA)
                                   1195 ;--------------------------------------------------------
                                   1196 ; bit data
                                   1197 ;--------------------------------------------------------
                                   1198 	.area BSEG    (BIT)
                                   1199 ;--------------------------------------------------------
                                   1200 ; paged external ram data
                                   1201 ;--------------------------------------------------------
                                   1202 	.area PSEG    (PAG,XDATA)
                                   1203 ;--------------------------------------------------------
                                   1204 ; external ram data
                                   1205 ;--------------------------------------------------------
                                   1206 	.area XSEG    (XDATA)
                                   1207 ;--------------------------------------------------------
                                   1208 ; absolute external ram data
                                   1209 ;--------------------------------------------------------
                                   1210 	.area XABS    (ABS,XDATA)
                                   1211 ;--------------------------------------------------------
                                   1212 ; external initialized ram data
                                   1213 ;--------------------------------------------------------
                                   1214 	.area XISEG   (XDATA)
                                   1215 	.area HOME    (CODE)
                                   1216 	.area GSINIT0 (CODE)
                                   1217 	.area GSINIT1 (CODE)
                                   1218 	.area GSINIT2 (CODE)
                                   1219 	.area GSINIT3 (CODE)
                                   1220 	.area GSINIT4 (CODE)
                                   1221 	.area GSINIT5 (CODE)
                                   1222 	.area GSINIT  (CODE)
                                   1223 	.area GSFINAL (CODE)
                                   1224 	.area CSEG    (CODE)
                                   1225 ;--------------------------------------------------------
                                   1226 ; global & static initialisations
                                   1227 ;--------------------------------------------------------
                                   1228 	.area HOME    (CODE)
                                   1229 	.area GSINIT  (CODE)
                                   1230 	.area GSFINAL (CODE)
                                   1231 	.area GSINIT  (CODE)
                           000000  1232 	C$util.c$4$1$21 ==.
                                   1233 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\util.c:4: volatile unsigned int tempo_us = 0;
      0000E8 E4               [12] 1234 	clr	a
      0000E9 F5 08            [12] 1235 	mov	_tempo_us,a
      0000EB F5 09            [12] 1236 	mov	(_tempo_us + 1),a
                                   1237 ;--------------------------------------------------------
                                   1238 ; Home
                                   1239 ;--------------------------------------------------------
                                   1240 	.area HOME    (CODE)
                                   1241 	.area HOME    (CODE)
                                   1242 ;--------------------------------------------------------
                                   1243 ; code
                                   1244 ;--------------------------------------------------------
                                   1245 	.area CSEG    (CODE)
                                   1246 ;------------------------------------------------------------
                                   1247 ;Allocation info for local variables in function 'reset_wdt'
                                   1248 ;------------------------------------------------------------
                           000000  1249 	G$reset_wdt$0$0 ==.
                           000000  1250 	C$util.c$6$0$0 ==.
                                   1251 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\util.c:6: void reset_wdt(void) {  // max 41,943 ms
                                   1252 ;	-----------------------------------------
                                   1253 ;	 function reset_wdt
                                   1254 ;	-----------------------------------------
      0002EA                       1255 _reset_wdt:
                           000007  1256 	ar7 = 0x07
                           000006  1257 	ar6 = 0x06
                           000005  1258 	ar5 = 0x05
                           000004  1259 	ar4 = 0x04
                           000003  1260 	ar3 = 0x03
                           000002  1261 	ar2 = 0x02
                           000001  1262 	ar1 = 0x01
                           000000  1263 	ar0 = 0x00
                           000000  1264 	C$util.c$7$1$11 ==.
                                   1265 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\util.c:7: WDTCN = 0xA5;
      0002EA 75 FF A5         [24] 1266 	mov	_WDTCN,#0xa5
                           000003  1267 	C$util.c$8$1$11 ==.
                           000003  1268 	XG$reset_wdt$0$0 ==.
      0002ED 22               [24] 1269 	ret
                                   1270 ;------------------------------------------------------------
                                   1271 ;Allocation info for local variables in function 'config_tc0'
                                   1272 ;------------------------------------------------------------
                           000004  1273 	G$config_tc0$0$0 ==.
                           000004  1274 	C$util.c$10$1$11 ==.
                                   1275 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\util.c:10: void config_tc0(void) {
                                   1276 ;	-----------------------------------------
                                   1277 ;	 function config_tc0
                                   1278 ;	-----------------------------------------
      0002EE                       1279 _config_tc0:
                           000004  1280 	C$util.c$11$1$13 ==.
                                   1281 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\util.c:11: TMOD &= ~0x01;
      0002EE 53 89 FE         [24] 1282 	anl	_TMOD,#0xfe
                           000007  1283 	C$util.c$12$1$13 ==.
                                   1284 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\util.c:12: TMOD |= 0x02;
      0002F1 43 89 02         [24] 1285 	orl	_TMOD,#0x02
                           00000A  1286 	C$util.c$14$1$13 ==.
                                   1287 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\util.c:14: TR0 = 0;
      0002F4 C2 8C            [12] 1288 	clr	_TR0
                           00000C  1289 	C$util.c$15$1$13 ==.
                                   1290 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\util.c:15: TF0 = 0;
      0002F6 C2 8D            [12] 1291 	clr	_TF0
                           00000E  1292 	C$util.c$16$1$13 ==.
                                   1293 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\util.c:16: TH0 = 0xe7;
      0002F8 75 8C E7         [24] 1294 	mov	_TH0,#0xe7
                           000011  1295 	C$util.c$17$1$13 ==.
                                   1296 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\util.c:17: TL0 = 0xe7;
      0002FB 75 8A E7         [24] 1297 	mov	_TL0,#0xe7
                           000014  1298 	C$util.c$18$1$13 ==.
                                   1299 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\util.c:18: ET0 = 1;
      0002FE D2 A9            [12] 1300 	setb	_ET0
                           000016  1301 	C$util.c$19$1$13 ==.
                                   1302 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\util.c:19: TR0 = 1;
      000300 D2 8C            [12] 1303 	setb	_TR0
                           000018  1304 	C$util.c$20$1$13 ==.
                           000018  1305 	XG$config_tc0$0$0 ==.
      000302 22               [24] 1306 	ret
                                   1307 ;------------------------------------------------------------
                                   1308 ;Allocation info for local variables in function 'delay_ms'
                                   1309 ;------------------------------------------------------------
                                   1310 ;t                         Allocated to registers 
                                   1311 ;------------------------------------------------------------
                           000019  1312 	G$delay_ms$0$0 ==.
                           000019  1313 	C$util.c$22$1$13 ==.
                                   1314 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\util.c:22: void delay_ms(unsigned int t) {
                                   1315 ;	-----------------------------------------
                                   1316 ;	 function delay_ms
                                   1317 ;	-----------------------------------------
      000303                       1318 _delay_ms:
      000303 AE 82            [24] 1319 	mov	r6,dpl
      000305 AF 83            [24] 1320 	mov	r7,dph
      000307                       1321 00103$:
                           00001D  1322 	C$util.c$23$1$15 ==.
                                   1323 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\util.c:23: for (; t > 0; t--) {
      000307 EE               [12] 1324 	mov	a,r6
      000308 4F               [12] 1325 	orl	a,r7
      000309 60 15            [24] 1326 	jz	00105$
                           000021  1327 	C$util.c$24$2$16 ==.
                                   1328 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\util.c:24: delay_us(1000);
      00030B 90 03 E8         [24] 1329 	mov	dptr,#0x03e8
      00030E C0 07            [24] 1330 	push	ar7
      000310 C0 06            [24] 1331 	push	ar6
      000312 12 03 21         [24] 1332 	lcall	_delay_us
      000315 D0 06            [24] 1333 	pop	ar6
      000317 D0 07            [24] 1334 	pop	ar7
                           00002F  1335 	C$util.c$23$1$15 ==.
                                   1336 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\util.c:23: for (; t > 0; t--) {
      000319 1E               [12] 1337 	dec	r6
      00031A BE FF 01         [24] 1338 	cjne	r6,#0xff,00117$
      00031D 1F               [12] 1339 	dec	r7
      00031E                       1340 00117$:
      00031E 80 E7            [24] 1341 	sjmp	00103$
      000320                       1342 00105$:
                           000036  1343 	C$util.c$26$1$15 ==.
                           000036  1344 	XG$delay_ms$0$0 ==.
      000320 22               [24] 1345 	ret
                                   1346 ;------------------------------------------------------------
                                   1347 ;Allocation info for local variables in function 'delay_us'
                                   1348 ;------------------------------------------------------------
                                   1349 ;t                         Allocated to registers r6 r7 
                                   1350 ;t_inicial                 Allocated to registers r4 r5 
                                   1351 ;------------------------------------------------------------
                           000037  1352 	G$delay_us$0$0 ==.
                           000037  1353 	C$util.c$28$1$15 ==.
                                   1354 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\util.c:28: void delay_us(unsigned int t) {
                                   1355 ;	-----------------------------------------
                                   1356 ;	 function delay_us
                                   1357 ;	-----------------------------------------
      000321                       1358 _delay_us:
      000321 AE 82            [24] 1359 	mov	r6,dpl
      000323 AF 83            [24] 1360 	mov	r7,dph
                           00003B  1361 	C$util.c$29$1$15 ==.
                                   1362 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\util.c:29: unsigned int t_inicial = tempo_us;
      000325 AC 08            [24] 1363 	mov	r4,_tempo_us
      000327 AD 09            [24] 1364 	mov	r5,(_tempo_us + 1)
                           00003F  1365 	C$util.c$30$1$18 ==.
                                   1366 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\util.c:30: while (tempo_us - t_inicial < t) {}
      000329                       1367 00101$:
      000329 E5 08            [12] 1368 	mov	a,_tempo_us
      00032B C3               [12] 1369 	clr	c
      00032C 9C               [12] 1370 	subb	a,r4
      00032D FA               [12] 1371 	mov	r2,a
      00032E E5 09            [12] 1372 	mov	a,(_tempo_us + 1)
      000330 9D               [12] 1373 	subb	a,r5
      000331 FB               [12] 1374 	mov	r3,a
      000332 C3               [12] 1375 	clr	c
      000333 EA               [12] 1376 	mov	a,r2
      000334 9E               [12] 1377 	subb	a,r6
      000335 EB               [12] 1378 	mov	a,r3
      000336 9F               [12] 1379 	subb	a,r7
      000337 40 F0            [24] 1380 	jc	00101$
                           00004F  1381 	C$util.c$31$1$18 ==.
                           00004F  1382 	XG$delay_us$0$0 ==.
      000339 22               [24] 1383 	ret
                                   1384 ;------------------------------------------------------------
                                   1385 ;Allocation info for local variables in function 'ISR_TC0'
                                   1386 ;------------------------------------------------------------
                           000050  1387 	G$ISR_TC0$0$0 ==.
                           000050  1388 	C$util.c$33$1$18 ==.
                                   1389 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\util.c:33: void ISR_TC0(void) __interrupt INTERRUPT_TIMER0 {
                                   1390 ;	-----------------------------------------
                                   1391 ;	 function ISR_TC0
                                   1392 ;	-----------------------------------------
      00033A                       1393 _ISR_TC0:
      00033A C0 E0            [24] 1394 	push	acc
      00033C C0 D0            [24] 1395 	push	psw
                           000054  1396 	C$util.c$34$1$21 ==.
                                   1397 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\util.c:34: tempo_us++;
      00033E 74 01            [12] 1398 	mov	a,#0x01
      000340 25 08            [12] 1399 	add	a,_tempo_us
      000342 F5 08            [12] 1400 	mov	_tempo_us,a
      000344 E4               [12] 1401 	clr	a
      000345 35 09            [12] 1402 	addc	a,(_tempo_us + 1)
      000347 F5 09            [12] 1403 	mov	(_tempo_us + 1),a
                           00005F  1404 	C$util.c$35$1$21 ==.
                                   1405 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\util.c:35: TF0 = 0;
      000349 C2 8D            [12] 1406 	clr	_TF0
      00034B D0 D0            [24] 1407 	pop	psw
      00034D D0 E0            [24] 1408 	pop	acc
                           000065  1409 	C$util.c$36$1$21 ==.
                           000065  1410 	XG$ISR_TC0$0$0 ==.
      00034F 32               [24] 1411 	reti
                                   1412 ;	eliminated unneeded mov psw,# (no regs used in bank)
                                   1413 ;	eliminated unneeded push/pop dpl
                                   1414 ;	eliminated unneeded push/pop dph
                                   1415 ;	eliminated unneeded push/pop b
                                   1416 	.area CSEG    (CODE)
                                   1417 	.area CONST   (CODE)
                                   1418 	.area XINIT   (CODE)
                                   1419 	.area CABS    (ABS,CODE)
