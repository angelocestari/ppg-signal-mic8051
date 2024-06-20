                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 3.6.0 #9615 (MINGW64)
                                      4 ;--------------------------------------------------------
                                      5 	.module filtro
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
                                    392 	.globl _buffer
                                    393 	.globl _limites_amostras_PARM_3
                                    394 	.globl _limites_amostras_PARM_2
                                    395 	.globl _signal_sum
                                    396 	.globl _buffer_idx
                                    397 	.globl _guarda_buffer
                                    398 	.globl _limites_amostras
                                    399 ;--------------------------------------------------------
                                    400 ; special function registers
                                    401 ;--------------------------------------------------------
                                    402 	.area RSEG    (ABS,DATA)
      000000                        403 	.org 0x0000
                           000080   404 G$P0$0$0 == 0x0080
                           000080   405 _P0	=	0x0080
                           000081   406 G$SP$0$0 == 0x0081
                           000081   407 _SP	=	0x0081
                           000082   408 G$DPL$0$0 == 0x0082
                           000082   409 _DPL	=	0x0082
                           000083   410 G$DPH$0$0 == 0x0083
                           000083   411 _DPH	=	0x0083
                           000084   412 G$SFRPAGE$0$0 == 0x0084
                           000084   413 _SFRPAGE	=	0x0084
                           000085   414 G$SFRNEXT$0$0 == 0x0085
                           000085   415 _SFRNEXT	=	0x0085
                           000086   416 G$SFRLAST$0$0 == 0x0086
                           000086   417 _SFRLAST	=	0x0086
                           000087   418 G$PCON$0$0 == 0x0087
                           000087   419 _PCON	=	0x0087
                           000088   420 G$TCON$0$0 == 0x0088
                           000088   421 _TCON	=	0x0088
                           000088   422 G$CPT0CN$0$0 == 0x0088
                           000088   423 _CPT0CN	=	0x0088
                           000088   424 G$CPT1CN$0$0 == 0x0088
                           000088   425 _CPT1CN	=	0x0088
                           000088   426 G$CPT2CN$0$0 == 0x0088
                           000088   427 _CPT2CN	=	0x0088
                           000089   428 G$TMOD$0$0 == 0x0089
                           000089   429 _TMOD	=	0x0089
                           000089   430 G$CPT0MD$0$0 == 0x0089
                           000089   431 _CPT0MD	=	0x0089
                           000089   432 G$CPT1MD$0$0 == 0x0089
                           000089   433 _CPT1MD	=	0x0089
                           000089   434 G$CPT2MD$0$0 == 0x0089
                           000089   435 _CPT2MD	=	0x0089
                           00008A   436 G$TL0$0$0 == 0x008a
                           00008A   437 _TL0	=	0x008a
                           00008A   438 G$OSCICN$0$0 == 0x008a
                           00008A   439 _OSCICN	=	0x008a
                           00008B   440 G$TL1$0$0 == 0x008b
                           00008B   441 _TL1	=	0x008b
                           00008B   442 G$OSCICL$0$0 == 0x008b
                           00008B   443 _OSCICL	=	0x008b
                           00008C   444 G$TH0$0$0 == 0x008c
                           00008C   445 _TH0	=	0x008c
                           00008C   446 G$OSCXCN$0$0 == 0x008c
                           00008C   447 _OSCXCN	=	0x008c
                           00008D   448 G$TH1$0$0 == 0x008d
                           00008D   449 _TH1	=	0x008d
                           00008E   450 G$CKCON$0$0 == 0x008e
                           00008E   451 _CKCON	=	0x008e
                           00008F   452 G$PSCTL$0$0 == 0x008f
                           00008F   453 _PSCTL	=	0x008f
                           000090   454 G$P1$0$0 == 0x0090
                           000090   455 _P1	=	0x0090
                           000091   456 G$SSTA0$0$0 == 0x0091
                           000091   457 _SSTA0	=	0x0091
                           000096   458 G$SFRPGCN$0$0 == 0x0096
                           000096   459 _SFRPGCN	=	0x0096
                           000097   460 G$CLKSEL$0$0 == 0x0097
                           000097   461 _CLKSEL	=	0x0097
                           000098   462 G$SCON0$0$0 == 0x0098
                           000098   463 _SCON0	=	0x0098
                           000098   464 G$SCON1$0$0 == 0x0098
                           000098   465 _SCON1	=	0x0098
                           000099   466 G$SBUF0$0$0 == 0x0099
                           000099   467 _SBUF0	=	0x0099
                           000099   468 G$SBUF1$0$0 == 0x0099
                           000099   469 _SBUF1	=	0x0099
                           00009A   470 G$SPI0CFG$0$0 == 0x009a
                           00009A   471 _SPI0CFG	=	0x009a
                           00009B   472 G$SPI0DAT$0$0 == 0x009b
                           00009B   473 _SPI0DAT	=	0x009b
                           00009C   474 G$P4MDOUT$0$0 == 0x009c
                           00009C   475 _P4MDOUT	=	0x009c
                           00009D   476 G$SPI0CKR$0$0 == 0x009d
                           00009D   477 _SPI0CKR	=	0x009d
                           00009D   478 G$P5MDOUT$0$0 == 0x009d
                           00009D   479 _P5MDOUT	=	0x009d
                           00009E   480 G$P6MDOUT$0$0 == 0x009e
                           00009E   481 _P6MDOUT	=	0x009e
                           00009F   482 G$P7MDOUT$0$0 == 0x009f
                           00009F   483 _P7MDOUT	=	0x009f
                           0000A0   484 G$P2$0$0 == 0x00a0
                           0000A0   485 _P2	=	0x00a0
                           0000A1   486 G$EMI0TC$0$0 == 0x00a1
                           0000A1   487 _EMI0TC	=	0x00a1
                           0000A2   488 G$EMI0CN$0$0 == 0x00a2
                           0000A2   489 _EMI0CN	=	0x00a2
                           0000A3   490 G$EMI0CF$0$0 == 0x00a3
                           0000A3   491 _EMI0CF	=	0x00a3
                           0000A4   492 G$P0MDOUT$0$0 == 0x00a4
                           0000A4   493 _P0MDOUT	=	0x00a4
                           0000A5   494 G$P1MDOUT$0$0 == 0x00a5
                           0000A5   495 _P1MDOUT	=	0x00a5
                           0000A6   496 G$P2MDOUT$0$0 == 0x00a6
                           0000A6   497 _P2MDOUT	=	0x00a6
                           0000A7   498 G$P3MDOUT$0$0 == 0x00a7
                           0000A7   499 _P3MDOUT	=	0x00a7
                           0000A8   500 G$IE$0$0 == 0x00a8
                           0000A8   501 _IE	=	0x00a8
                           0000A9   502 G$SADDR0$0$0 == 0x00a9
                           0000A9   503 _SADDR0	=	0x00a9
                           0000A9   504 G$SADDR1$0$0 == 0x00a9
                           0000A9   505 _SADDR1	=	0x00a9
                           0000AD   506 G$P1MDIN$0$0 == 0x00ad
                           0000AD   507 _P1MDIN	=	0x00ad
                           0000AE   508 G$P2MDIN$0$0 == 0x00ae
                           0000AE   509 _P2MDIN	=	0x00ae
                           0000AF   510 G$P3MDIN$0$0 == 0x00af
                           0000AF   511 _P3MDIN	=	0x00af
                           0000B0   512 G$P3$0$0 == 0x00b0
                           0000B0   513 _P3	=	0x00b0
                           0000B7   514 G$FLSCL$0$0 == 0x00b7
                           0000B7   515 _FLSCL	=	0x00b7
                           0000B7   516 G$FLACL$0$0 == 0x00b7
                           0000B7   517 _FLACL	=	0x00b7
                           0000B8   518 G$IP$0$0 == 0x00b8
                           0000B8   519 _IP	=	0x00b8
                           0000B9   520 G$SADEN0$0$0 == 0x00b9
                           0000B9   521 _SADEN0	=	0x00b9
                           0000BA   522 G$AMX2CF$0$0 == 0x00ba
                           0000BA   523 _AMX2CF	=	0x00ba
                           0000BD   524 G$AMX0PRT$0$0 == 0x00bd
                           0000BD   525 _AMX0PRT	=	0x00bd
                           0000BA   526 G$AMX0CF$0$0 == 0x00ba
                           0000BA   527 _AMX0CF	=	0x00ba
                           0000BB   528 G$AMX0SL$0$0 == 0x00bb
                           0000BB   529 _AMX0SL	=	0x00bb
                           0000BB   530 G$AMX2SL$0$0 == 0x00bb
                           0000BB   531 _AMX2SL	=	0x00bb
                           0000BC   532 G$ADC0CF$0$0 == 0x00bc
                           0000BC   533 _ADC0CF	=	0x00bc
                           0000BC   534 G$ADC2CF$0$0 == 0x00bc
                           0000BC   535 _ADC2CF	=	0x00bc
                           0000BE   536 G$ADC0L$0$0 == 0x00be
                           0000BE   537 _ADC0L	=	0x00be
                           0000BE   538 G$ADC2$0$0 == 0x00be
                           0000BE   539 _ADC2	=	0x00be
                           0000BF   540 G$ADC0H$0$0 == 0x00bf
                           0000BF   541 _ADC0H	=	0x00bf
                           0000C0   542 G$SMB0CN$0$0 == 0x00c0
                           0000C0   543 _SMB0CN	=	0x00c0
                           0000C0   544 G$CAN0STA$0$0 == 0x00c0
                           0000C0   545 _CAN0STA	=	0x00c0
                           0000C1   546 G$SMB0STA$0$0 == 0x00c1
                           0000C1   547 _SMB0STA	=	0x00c1
                           0000C2   548 G$SMB0DAT$0$0 == 0x00c2
                           0000C2   549 _SMB0DAT	=	0x00c2
                           0000C3   550 G$SMB0ADR$0$0 == 0x00c3
                           0000C3   551 _SMB0ADR	=	0x00c3
                           0000C4   552 G$ADC0GTL$0$0 == 0x00c4
                           0000C4   553 _ADC0GTL	=	0x00c4
                           0000C4   554 G$ADC2GT$0$0 == 0x00c4
                           0000C4   555 _ADC2GT	=	0x00c4
                           0000C5   556 G$ADC0GTH$0$0 == 0x00c5
                           0000C5   557 _ADC0GTH	=	0x00c5
                           0000C6   558 G$ADC0LTL$0$0 == 0x00c6
                           0000C6   559 _ADC0LTL	=	0x00c6
                           0000C6   560 G$ADC2LT$0$0 == 0x00c6
                           0000C6   561 _ADC2LT	=	0x00c6
                           0000C7   562 G$ADC0LTH$0$0 == 0x00c7
                           0000C7   563 _ADC0LTH	=	0x00c7
                           0000C8   564 G$TMR2CN$0$0 == 0x00c8
                           0000C8   565 _TMR2CN	=	0x00c8
                           0000C8   566 G$TMR3CN$0$0 == 0x00c8
                           0000C8   567 _TMR3CN	=	0x00c8
                           0000C8   568 G$TMR4CN$0$0 == 0x00c8
                           0000C8   569 _TMR4CN	=	0x00c8
                           0000C8   570 G$P4$0$0 == 0x00c8
                           0000C8   571 _P4	=	0x00c8
                           0000C9   572 G$TMR2CF$0$0 == 0x00c9
                           0000C9   573 _TMR2CF	=	0x00c9
                           0000C9   574 G$TMR3CF$0$0 == 0x00c9
                           0000C9   575 _TMR3CF	=	0x00c9
                           0000C9   576 G$TMR4CF$0$0 == 0x00c9
                           0000C9   577 _TMR4CF	=	0x00c9
                           0000CA   578 G$RCAP2L$0$0 == 0x00ca
                           0000CA   579 _RCAP2L	=	0x00ca
                           0000CA   580 G$RCAP3L$0$0 == 0x00ca
                           0000CA   581 _RCAP3L	=	0x00ca
                           0000CA   582 G$RCAP4L$0$0 == 0x00ca
                           0000CA   583 _RCAP4L	=	0x00ca
                           0000CB   584 G$RCAP2H$0$0 == 0x00cb
                           0000CB   585 _RCAP2H	=	0x00cb
                           0000CB   586 G$RCAP3H$0$0 == 0x00cb
                           0000CB   587 _RCAP3H	=	0x00cb
                           0000CB   588 G$RCAP4H$0$0 == 0x00cb
                           0000CB   589 _RCAP4H	=	0x00cb
                           0000CC   590 G$TMR2L$0$0 == 0x00cc
                           0000CC   591 _TMR2L	=	0x00cc
                           0000CC   592 G$TMR3L$0$0 == 0x00cc
                           0000CC   593 _TMR3L	=	0x00cc
                           0000CC   594 G$TMR4L$0$0 == 0x00cc
                           0000CC   595 _TMR4L	=	0x00cc
                           0000CD   596 G$TMR2H$0$0 == 0x00cd
                           0000CD   597 _TMR2H	=	0x00cd
                           0000CD   598 G$TMR3H$0$0 == 0x00cd
                           0000CD   599 _TMR3H	=	0x00cd
                           0000CD   600 G$TMR4H$0$0 == 0x00cd
                           0000CD   601 _TMR4H	=	0x00cd
                           0000CF   602 G$SMB0CR$0$0 == 0x00cf
                           0000CF   603 _SMB0CR	=	0x00cf
                           0000D0   604 G$PSW$0$0 == 0x00d0
                           0000D0   605 _PSW	=	0x00d0
                           0000D1   606 G$REF0CN$0$0 == 0x00d1
                           0000D1   607 _REF0CN	=	0x00d1
                           0000D2   608 G$DAC0L$0$0 == 0x00d2
                           0000D2   609 _DAC0L	=	0x00d2
                           0000D2   610 G$DAC1L$0$0 == 0x00d2
                           0000D2   611 _DAC1L	=	0x00d2
                           0000D3   612 G$DAC0H$0$0 == 0x00d3
                           0000D3   613 _DAC0H	=	0x00d3
                           0000D3   614 G$DAC1H$0$0 == 0x00d3
                           0000D3   615 _DAC1H	=	0x00d3
                           0000D4   616 G$DAC0CN$0$0 == 0x00d4
                           0000D4   617 _DAC0CN	=	0x00d4
                           0000D4   618 G$DAC1CN$0$0 == 0x00d4
                           0000D4   619 _DAC1CN	=	0x00d4
                           0000D6   620 G$HVA0CN$0$0 == 0x00d6
                           0000D6   621 _HVA0CN	=	0x00d6
                           0000D8   622 G$PCA0CN$0$0 == 0x00d8
                           0000D8   623 _PCA0CN	=	0x00d8
                           0000D8   624 G$CAN0DATL$0$0 == 0x00d8
                           0000D8   625 _CAN0DATL	=	0x00d8
                           0000D8   626 G$P5$0$0 == 0x00d8
                           0000D8   627 _P5	=	0x00d8
                           0000D9   628 G$PCA0MD$0$0 == 0x00d9
                           0000D9   629 _PCA0MD	=	0x00d9
                           0000D9   630 G$CAN0DATH$0$0 == 0x00d9
                           0000D9   631 _CAN0DATH	=	0x00d9
                           0000DA   632 G$PCA0CPM0$0$0 == 0x00da
                           0000DA   633 _PCA0CPM0	=	0x00da
                           0000DA   634 G$CAN0ADR$0$0 == 0x00da
                           0000DA   635 _CAN0ADR	=	0x00da
                           0000DB   636 G$PCA0CPM1$0$0 == 0x00db
                           0000DB   637 _PCA0CPM1	=	0x00db
                           0000DB   638 G$CAN0TST$0$0 == 0x00db
                           0000DB   639 _CAN0TST	=	0x00db
                           0000DC   640 G$PCA0CPM2$0$0 == 0x00dc
                           0000DC   641 _PCA0CPM2	=	0x00dc
                           0000DD   642 G$PCA0CPM3$0$0 == 0x00dd
                           0000DD   643 _PCA0CPM3	=	0x00dd
                           0000DE   644 G$PCA0CPM4$0$0 == 0x00de
                           0000DE   645 _PCA0CPM4	=	0x00de
                           0000DF   646 G$PCA0CPM5$0$0 == 0x00df
                           0000DF   647 _PCA0CPM5	=	0x00df
                           0000E0   648 G$ACC$0$0 == 0x00e0
                           0000E0   649 _ACC	=	0x00e0
                           0000E1   650 G$PCA0CPL5$0$0 == 0x00e1
                           0000E1   651 _PCA0CPL5	=	0x00e1
                           0000E1   652 G$XBR0$0$0 == 0x00e1
                           0000E1   653 _XBR0	=	0x00e1
                           0000E2   654 G$PCA0CPH5$0$0 == 0x00e2
                           0000E2   655 _PCA0CPH5	=	0x00e2
                           0000E2   656 G$XBR1$0$0 == 0x00e2
                           0000E2   657 _XBR1	=	0x00e2
                           0000E3   658 G$XBR2$0$0 == 0x00e3
                           0000E3   659 _XBR2	=	0x00e3
                           0000E4   660 G$XBR3$0$0 == 0x00e4
                           0000E4   661 _XBR3	=	0x00e4
                           0000E6   662 G$EIE1$0$0 == 0x00e6
                           0000E6   663 _EIE1	=	0x00e6
                           0000E7   664 G$EIE2$0$0 == 0x00e7
                           0000E7   665 _EIE2	=	0x00e7
                           0000E8   666 G$ADC0CN$0$0 == 0x00e8
                           0000E8   667 _ADC0CN	=	0x00e8
                           0000E8   668 G$ADC2CN$0$0 == 0x00e8
                           0000E8   669 _ADC2CN	=	0x00e8
                           0000E8   670 G$P6$0$0 == 0x00e8
                           0000E8   671 _P6	=	0x00e8
                           0000E9   672 G$PCA0CPL2$0$0 == 0x00e9
                           0000E9   673 _PCA0CPL2	=	0x00e9
                           0000EA   674 G$PCA0CPH2$0$0 == 0x00ea
                           0000EA   675 _PCA0CPH2	=	0x00ea
                           0000EB   676 G$PCA0CPL3$0$0 == 0x00eb
                           0000EB   677 _PCA0CPL3	=	0x00eb
                           0000EC   678 G$PCA0CPH3$0$0 == 0x00ec
                           0000EC   679 _PCA0CPH3	=	0x00ec
                           0000ED   680 G$PCA0CPL4$0$0 == 0x00ed
                           0000ED   681 _PCA0CPL4	=	0x00ed
                           0000EE   682 G$PCA0CPH4$0$0 == 0x00ee
                           0000EE   683 _PCA0CPH4	=	0x00ee
                           0000EF   684 G$RSTSRC$0$0 == 0x00ef
                           0000EF   685 _RSTSRC	=	0x00ef
                           0000F0   686 G$B$0$0 == 0x00f0
                           0000F0   687 _B	=	0x00f0
                           0000F6   688 G$EIP1$0$0 == 0x00f6
                           0000F6   689 _EIP1	=	0x00f6
                           0000F7   690 G$EIP2$0$0 == 0x00f7
                           0000F7   691 _EIP2	=	0x00f7
                           0000F8   692 G$SPI0CN$0$0 == 0x00f8
                           0000F8   693 _SPI0CN	=	0x00f8
                           0000F8   694 G$CAN0CN$0$0 == 0x00f8
                           0000F8   695 _CAN0CN	=	0x00f8
                           0000F8   696 G$P7$0$0 == 0x00f8
                           0000F8   697 _P7	=	0x00f8
                           0000F9   698 G$PCA0L$0$0 == 0x00f9
                           0000F9   699 _PCA0L	=	0x00f9
                           0000FA   700 G$PCA0H$0$0 == 0x00fa
                           0000FA   701 _PCA0H	=	0x00fa
                           0000FB   702 G$PCA0CPL0$0$0 == 0x00fb
                           0000FB   703 _PCA0CPL0	=	0x00fb
                           0000FC   704 G$PCA0CPH0$0$0 == 0x00fc
                           0000FC   705 _PCA0CPH0	=	0x00fc
                           0000FD   706 G$PCA0CPL1$0$0 == 0x00fd
                           0000FD   707 _PCA0CPL1	=	0x00fd
                           0000FE   708 G$PCA0CPH1$0$0 == 0x00fe
                           0000FE   709 _PCA0CPH1	=	0x00fe
                           0000FF   710 G$WDTCN$0$0 == 0x00ff
                           0000FF   711 _WDTCN	=	0x00ff
                           00FAF9   712 G$PCA0$0$0 == 0xfaf9
                           00FAF9   713 _PCA0	=	0xfaf9
                           00FCFB   714 G$PCA0CP0$0$0 == 0xfcfb
                           00FCFB   715 _PCA0CP0	=	0xfcfb
                           00FEFD   716 G$PCA0CP1$0$0 == 0xfefd
                           00FEFD   717 _PCA0CP1	=	0xfefd
                           00EAE9   718 G$PCA0CP2$0$0 == 0xeae9
                           00EAE9   719 _PCA0CP2	=	0xeae9
                           00ECEB   720 G$PCA0CP3$0$0 == 0xeceb
                           00ECEB   721 _PCA0CP3	=	0xeceb
                           00EEED   722 G$PCA0CP4$0$0 == 0xeeed
                           00EEED   723 _PCA0CP4	=	0xeeed
                           00E2E1   724 G$PCA0CP5$0$0 == 0xe2e1
                           00E2E1   725 _PCA0CP5	=	0xe2e1
                           00D9D8   726 G$CAN0DAT$0$0 == 0xd9d8
                           00D9D8   727 _CAN0DAT	=	0xd9d8
                           00D3D2   728 G$DAC0$0$0 == 0xd3d2
                           00D3D2   729 _DAC0	=	0xd3d2
                           00D3D2   730 G$DAC1$0$0 == 0xd3d2
                           00D3D2   731 _DAC1	=	0xd3d2
                           00CBCA   732 G$RCAP2$0$0 == 0xcbca
                           00CBCA   733 _RCAP2	=	0xcbca
                           00CBCA   734 G$RCAP3$0$0 == 0xcbca
                           00CBCA   735 _RCAP3	=	0xcbca
                           00CBCA   736 G$RCAP4$0$0 == 0xcbca
                           00CBCA   737 _RCAP4	=	0xcbca
                           00CDCC   738 G$TMR2$0$0 == 0xcdcc
                           00CDCC   739 _TMR2	=	0xcdcc
                           00CDCC   740 G$TMR3$0$0 == 0xcdcc
                           00CDCC   741 _TMR3	=	0xcdcc
                           00CDCC   742 G$TMR4$0$0 == 0xcdcc
                           00CDCC   743 _TMR4	=	0xcdcc
                           00C5C4   744 G$ADC0GT$0$0 == 0xc5c4
                           00C5C4   745 _ADC0GT	=	0xc5c4
                           00C7C6   746 G$ADC0LT$0$0 == 0xc7c6
                           00C7C6   747 _ADC0LT	=	0xc7c6
                           00BFBE   748 G$ADC0$0$0 == 0xbfbe
                           00BFBE   749 _ADC0	=	0xbfbe
                           008382   750 G$DP$0$0 == 0x8382
                           008382   751 _DP	=	0x8382
                           0000A2   752 G$_XPAGE$0$0 == 0x00a2
                           0000A2   753 __XPAGE	=	0x00a2
                                    754 ;--------------------------------------------------------
                                    755 ; special function bits
                                    756 ;--------------------------------------------------------
                                    757 	.area RSEG    (ABS,DATA)
      000000                        758 	.org 0x0000
                           00008F   759 G$TF1$0$0 == 0x008f
                           00008F   760 _TF1	=	0x008f
                           00008E   761 G$TR1$0$0 == 0x008e
                           00008E   762 _TR1	=	0x008e
                           00008D   763 G$TF0$0$0 == 0x008d
                           00008D   764 _TF0	=	0x008d
                           00008C   765 G$TR0$0$0 == 0x008c
                           00008C   766 _TR0	=	0x008c
                           00008B   767 G$IE1$0$0 == 0x008b
                           00008B   768 _IE1	=	0x008b
                           00008A   769 G$IT1$0$0 == 0x008a
                           00008A   770 _IT1	=	0x008a
                           000089   771 G$IE0$0$0 == 0x0089
                           000089   772 _IE0	=	0x0089
                           000088   773 G$IT0$0$0 == 0x0088
                           000088   774 _IT0	=	0x0088
                           00008F   775 G$CP0EN$0$0 == 0x008f
                           00008F   776 _CP0EN	=	0x008f
                           00008E   777 G$CP0OUT$0$0 == 0x008e
                           00008E   778 _CP0OUT	=	0x008e
                           00008D   779 G$CP0RIF$0$0 == 0x008d
                           00008D   780 _CP0RIF	=	0x008d
                           00008C   781 G$CP0FIF$0$0 == 0x008c
                           00008C   782 _CP0FIF	=	0x008c
                           00008B   783 G$CP0HYP1$0$0 == 0x008b
                           00008B   784 _CP0HYP1	=	0x008b
                           00008A   785 G$CP0HYP0$0$0 == 0x008a
                           00008A   786 _CP0HYP0	=	0x008a
                           000089   787 G$CP0HYN1$0$0 == 0x0089
                           000089   788 _CP0HYN1	=	0x0089
                           000088   789 G$CP0HYN0$0$0 == 0x0088
                           000088   790 _CP0HYN0	=	0x0088
                           00008F   791 G$CP1EN$0$0 == 0x008f
                           00008F   792 _CP1EN	=	0x008f
                           00008E   793 G$CP1OUT$0$0 == 0x008e
                           00008E   794 _CP1OUT	=	0x008e
                           00008D   795 G$CP1RIF$0$0 == 0x008d
                           00008D   796 _CP1RIF	=	0x008d
                           00008C   797 G$CP1FIF$0$0 == 0x008c
                           00008C   798 _CP1FIF	=	0x008c
                           00008B   799 G$CP1HYP1$0$0 == 0x008b
                           00008B   800 _CP1HYP1	=	0x008b
                           00008A   801 G$CP1HYP0$0$0 == 0x008a
                           00008A   802 _CP1HYP0	=	0x008a
                           000089   803 G$CP1HYN1$0$0 == 0x0089
                           000089   804 _CP1HYN1	=	0x0089
                           000088   805 G$CP1HYN0$0$0 == 0x0088
                           000088   806 _CP1HYN0	=	0x0088
                           00008F   807 G$CP2EN$0$0 == 0x008f
                           00008F   808 _CP2EN	=	0x008f
                           00008E   809 G$CP2OUT$0$0 == 0x008e
                           00008E   810 _CP2OUT	=	0x008e
                           00008D   811 G$CP2RIF$0$0 == 0x008d
                           00008D   812 _CP2RIF	=	0x008d
                           00008C   813 G$CP2FIF$0$0 == 0x008c
                           00008C   814 _CP2FIF	=	0x008c
                           00008B   815 G$CP2HYP1$0$0 == 0x008b
                           00008B   816 _CP2HYP1	=	0x008b
                           00008A   817 G$CP2HYP0$0$0 == 0x008a
                           00008A   818 _CP2HYP0	=	0x008a
                           000089   819 G$CP2HYN1$0$0 == 0x0089
                           000089   820 _CP2HYN1	=	0x0089
                           000088   821 G$CP2HYN0$0$0 == 0x0088
                           000088   822 _CP2HYN0	=	0x0088
                           00009F   823 G$SM00$0$0 == 0x009f
                           00009F   824 _SM00	=	0x009f
                           00009E   825 G$SM10$0$0 == 0x009e
                           00009E   826 _SM10	=	0x009e
                           00009D   827 G$SM20$0$0 == 0x009d
                           00009D   828 _SM20	=	0x009d
                           00009C   829 G$REN0$0$0 == 0x009c
                           00009C   830 _REN0	=	0x009c
                           00009B   831 G$TB80$0$0 == 0x009b
                           00009B   832 _TB80	=	0x009b
                           00009A   833 G$RB80$0$0 == 0x009a
                           00009A   834 _RB80	=	0x009a
                           000099   835 G$TI0$0$0 == 0x0099
                           000099   836 _TI0	=	0x0099
                           000098   837 G$RI0$0$0 == 0x0098
                           000098   838 _RI0	=	0x0098
                           00009F   839 G$S1MODE$0$0 == 0x009f
                           00009F   840 _S1MODE	=	0x009f
                           00009D   841 G$MCE1$0$0 == 0x009d
                           00009D   842 _MCE1	=	0x009d
                           00009C   843 G$REN1$0$0 == 0x009c
                           00009C   844 _REN1	=	0x009c
                           00009B   845 G$TB81$0$0 == 0x009b
                           00009B   846 _TB81	=	0x009b
                           00009A   847 G$RB81$0$0 == 0x009a
                           00009A   848 _RB81	=	0x009a
                           000099   849 G$TI1$0$0 == 0x0099
                           000099   850 _TI1	=	0x0099
                           000098   851 G$RI1$0$0 == 0x0098
                           000098   852 _RI1	=	0x0098
                           0000AF   853 G$EA$0$0 == 0x00af
                           0000AF   854 _EA	=	0x00af
                           0000AD   855 G$ET2$0$0 == 0x00ad
                           0000AD   856 _ET2	=	0x00ad
                           0000AC   857 G$ES0$0$0 == 0x00ac
                           0000AC   858 _ES0	=	0x00ac
                           0000AB   859 G$ET1$0$0 == 0x00ab
                           0000AB   860 _ET1	=	0x00ab
                           0000AA   861 G$EX1$0$0 == 0x00aa
                           0000AA   862 _EX1	=	0x00aa
                           0000A9   863 G$ET0$0$0 == 0x00a9
                           0000A9   864 _ET0	=	0x00a9
                           0000A8   865 G$EX0$0$0 == 0x00a8
                           0000A8   866 _EX0	=	0x00a8
                           0000BD   867 G$PT2$0$0 == 0x00bd
                           0000BD   868 _PT2	=	0x00bd
                           0000BC   869 G$PS0$0$0 == 0x00bc
                           0000BC   870 _PS0	=	0x00bc
                           0000BB   871 G$PT1$0$0 == 0x00bb
                           0000BB   872 _PT1	=	0x00bb
                           0000BA   873 G$PX1$0$0 == 0x00ba
                           0000BA   874 _PX1	=	0x00ba
                           0000B9   875 G$PT0$0$0 == 0x00b9
                           0000B9   876 _PT0	=	0x00b9
                           0000B8   877 G$PX0$0$0 == 0x00b8
                           0000B8   878 _PX0	=	0x00b8
                           0000C7   879 G$BUSY$0$0 == 0x00c7
                           0000C7   880 _BUSY	=	0x00c7
                           0000C6   881 G$ENSMB$0$0 == 0x00c6
                           0000C6   882 _ENSMB	=	0x00c6
                           0000C5   883 G$STA$0$0 == 0x00c5
                           0000C5   884 _STA	=	0x00c5
                           0000C4   885 G$STO$0$0 == 0x00c4
                           0000C4   886 _STO	=	0x00c4
                           0000C3   887 G$SI$0$0 == 0x00c3
                           0000C3   888 _SI	=	0x00c3
                           0000C2   889 G$AA$0$0 == 0x00c2
                           0000C2   890 _AA	=	0x00c2
                           0000C1   891 G$SMBFTE$0$0 == 0x00c1
                           0000C1   892 _SMBFTE	=	0x00c1
                           0000C0   893 G$SMBTOE$0$0 == 0x00c0
                           0000C0   894 _SMBTOE	=	0x00c0
                           0000C7   895 G$BOFF$0$0 == 0x00c7
                           0000C7   896 _BOFF	=	0x00c7
                           0000C6   897 G$EWARN$0$0 == 0x00c6
                           0000C6   898 _EWARN	=	0x00c6
                           0000C5   899 G$EPASS$0$0 == 0x00c5
                           0000C5   900 _EPASS	=	0x00c5
                           0000C4   901 G$RXOK$0$0 == 0x00c4
                           0000C4   902 _RXOK	=	0x00c4
                           0000C3   903 G$TXOK$0$0 == 0x00c3
                           0000C3   904 _TXOK	=	0x00c3
                           0000C2   905 G$LEC2$0$0 == 0x00c2
                           0000C2   906 _LEC2	=	0x00c2
                           0000C1   907 G$LEC1$0$0 == 0x00c1
                           0000C1   908 _LEC1	=	0x00c1
                           0000C0   909 G$LEC0$0$0 == 0x00c0
                           0000C0   910 _LEC0	=	0x00c0
                           0000CF   911 G$TF2$0$0 == 0x00cf
                           0000CF   912 _TF2	=	0x00cf
                           0000CE   913 G$EXF2$0$0 == 0x00ce
                           0000CE   914 _EXF2	=	0x00ce
                           0000CB   915 G$EXEN2$0$0 == 0x00cb
                           0000CB   916 _EXEN2	=	0x00cb
                           0000CA   917 G$TR2$0$0 == 0x00ca
                           0000CA   918 _TR2	=	0x00ca
                           0000C9   919 G$CT2$0$0 == 0x00c9
                           0000C9   920 _CT2	=	0x00c9
                           0000C8   921 G$CPRL2$0$0 == 0x00c8
                           0000C8   922 _CPRL2	=	0x00c8
                           0000CF   923 G$TF3$0$0 == 0x00cf
                           0000CF   924 _TF3	=	0x00cf
                           0000CE   925 G$EXF3$0$0 == 0x00ce
                           0000CE   926 _EXF3	=	0x00ce
                           0000CB   927 G$EXEN3$0$0 == 0x00cb
                           0000CB   928 _EXEN3	=	0x00cb
                           0000CA   929 G$TR3$0$0 == 0x00ca
                           0000CA   930 _TR3	=	0x00ca
                           0000C9   931 G$CT3$0$0 == 0x00c9
                           0000C9   932 _CT3	=	0x00c9
                           0000C8   933 G$CPRL3$0$0 == 0x00c8
                           0000C8   934 _CPRL3	=	0x00c8
                           0000CF   935 G$TF4$0$0 == 0x00cf
                           0000CF   936 _TF4	=	0x00cf
                           0000CE   937 G$EXF4$0$0 == 0x00ce
                           0000CE   938 _EXF4	=	0x00ce
                           0000CB   939 G$EXEN4$0$0 == 0x00cb
                           0000CB   940 _EXEN4	=	0x00cb
                           0000CA   941 G$TR4$0$0 == 0x00ca
                           0000CA   942 _TR4	=	0x00ca
                           0000C9   943 G$CT4$0$0 == 0x00c9
                           0000C9   944 _CT4	=	0x00c9
                           0000C8   945 G$CPRL4$0$0 == 0x00c8
                           0000C8   946 _CPRL4	=	0x00c8
                           0000D7   947 G$CY$0$0 == 0x00d7
                           0000D7   948 _CY	=	0x00d7
                           0000D6   949 G$AC$0$0 == 0x00d6
                           0000D6   950 _AC	=	0x00d6
                           0000D5   951 G$F0$0$0 == 0x00d5
                           0000D5   952 _F0	=	0x00d5
                           0000D4   953 G$RS1$0$0 == 0x00d4
                           0000D4   954 _RS1	=	0x00d4
                           0000D3   955 G$RS0$0$0 == 0x00d3
                           0000D3   956 _RS0	=	0x00d3
                           0000D2   957 G$OV$0$0 == 0x00d2
                           0000D2   958 _OV	=	0x00d2
                           0000D1   959 G$F1$0$0 == 0x00d1
                           0000D1   960 _F1	=	0x00d1
                           0000D0   961 G$P$0$0 == 0x00d0
                           0000D0   962 _P	=	0x00d0
                           0000DF   963 G$CF$0$0 == 0x00df
                           0000DF   964 _CF	=	0x00df
                           0000DE   965 G$CR$0$0 == 0x00de
                           0000DE   966 _CR	=	0x00de
                           0000DD   967 G$CCF5$0$0 == 0x00dd
                           0000DD   968 _CCF5	=	0x00dd
                           0000DC   969 G$CCF4$0$0 == 0x00dc
                           0000DC   970 _CCF4	=	0x00dc
                           0000DB   971 G$CCF3$0$0 == 0x00db
                           0000DB   972 _CCF3	=	0x00db
                           0000DA   973 G$CCF2$0$0 == 0x00da
                           0000DA   974 _CCF2	=	0x00da
                           0000D9   975 G$CCF1$0$0 == 0x00d9
                           0000D9   976 _CCF1	=	0x00d9
                           0000D8   977 G$CCF0$0$0 == 0x00d8
                           0000D8   978 _CCF0	=	0x00d8
                           0000EF   979 G$AD0EN$0$0 == 0x00ef
                           0000EF   980 _AD0EN	=	0x00ef
                           0000EE   981 G$AD0TM$0$0 == 0x00ee
                           0000EE   982 _AD0TM	=	0x00ee
                           0000ED   983 G$AD0INT$0$0 == 0x00ed
                           0000ED   984 _AD0INT	=	0x00ed
                           0000EC   985 G$AD0BUSY$0$0 == 0x00ec
                           0000EC   986 _AD0BUSY	=	0x00ec
                           0000EB   987 G$AD0CM1$0$0 == 0x00eb
                           0000EB   988 _AD0CM1	=	0x00eb
                           0000EA   989 G$AD0CM0$0$0 == 0x00ea
                           0000EA   990 _AD0CM0	=	0x00ea
                           0000E9   991 G$AD0WINT$0$0 == 0x00e9
                           0000E9   992 _AD0WINT	=	0x00e9
                           0000E8   993 G$AD0LJST$0$0 == 0x00e8
                           0000E8   994 _AD0LJST	=	0x00e8
                           0000EF   995 G$AD2EN$0$0 == 0x00ef
                           0000EF   996 _AD2EN	=	0x00ef
                           0000EE   997 G$AD2TM$0$0 == 0x00ee
                           0000EE   998 _AD2TM	=	0x00ee
                           0000ED   999 G$AD2INT$0$0 == 0x00ed
                           0000ED  1000 _AD2INT	=	0x00ed
                           0000EC  1001 G$AD2BUSY$0$0 == 0x00ec
                           0000EC  1002 _AD2BUSY	=	0x00ec
                           0000EB  1003 G$AD2CM2$0$0 == 0x00eb
                           0000EB  1004 _AD2CM2	=	0x00eb
                           0000EA  1005 G$AD2CM1$0$0 == 0x00ea
                           0000EA  1006 _AD2CM1	=	0x00ea
                           0000E9  1007 G$AD2CM0$0$0 == 0x00e9
                           0000E9  1008 _AD2CM0	=	0x00e9
                           0000E8  1009 G$AD2WINT$0$0 == 0x00e8
                           0000E8  1010 _AD2WINT	=	0x00e8
                           0000FF  1011 G$SPIF$0$0 == 0x00ff
                           0000FF  1012 _SPIF	=	0x00ff
                           0000FE  1013 G$WCOL$0$0 == 0x00fe
                           0000FE  1014 _WCOL	=	0x00fe
                           0000FD  1015 G$MODF$0$0 == 0x00fd
                           0000FD  1016 _MODF	=	0x00fd
                           0000FC  1017 G$RXOVRN$0$0 == 0x00fc
                           0000FC  1018 _RXOVRN	=	0x00fc
                           0000FB  1019 G$NSSMD1$0$0 == 0x00fb
                           0000FB  1020 _NSSMD1	=	0x00fb
                           0000FA  1021 G$NSSMD0$0$0 == 0x00fa
                           0000FA  1022 _NSSMD0	=	0x00fa
                           0000F9  1023 G$TXBMT$0$0 == 0x00f9
                           0000F9  1024 _TXBMT	=	0x00f9
                           0000F8  1025 G$SPIEN$0$0 == 0x00f8
                           0000F8  1026 _SPIEN	=	0x00f8
                           0000F8  1027 G$CANINIT$0$0 == 0x00f8
                           0000F8  1028 _CANINIT	=	0x00f8
                           0000F9  1029 G$CANIE$0$0 == 0x00f9
                           0000F9  1030 _CANIE	=	0x00f9
                           0000FA  1031 G$CANSIE$0$0 == 0x00fa
                           0000FA  1032 _CANSIE	=	0x00fa
                           0000FB  1033 G$CANEIE$0$0 == 0x00fb
                           0000FB  1034 _CANEIE	=	0x00fb
                           0000FC  1035 G$CANIF$0$0 == 0x00fc
                           0000FC  1036 _CANIF	=	0x00fc
                           0000FD  1037 G$CANDAR$0$0 == 0x00fd
                           0000FD  1038 _CANDAR	=	0x00fd
                           0000FE  1039 G$CANCCE$0$0 == 0x00fe
                           0000FE  1040 _CANCCE	=	0x00fe
                           0000FF  1041 G$CANTEST$0$0 == 0x00ff
                           0000FF  1042 _CANTEST	=	0x00ff
                           000080  1043 G$P0_0$0$0 == 0x0080
                           000080  1044 _P0_0	=	0x0080
                           000081  1045 G$P0_1$0$0 == 0x0081
                           000081  1046 _P0_1	=	0x0081
                           000082  1047 G$P0_2$0$0 == 0x0082
                           000082  1048 _P0_2	=	0x0082
                           000083  1049 G$P0_3$0$0 == 0x0083
                           000083  1050 _P0_3	=	0x0083
                           000084  1051 G$P0_4$0$0 == 0x0084
                           000084  1052 _P0_4	=	0x0084
                           000085  1053 G$P0_5$0$0 == 0x0085
                           000085  1054 _P0_5	=	0x0085
                           000086  1055 G$P0_6$0$0 == 0x0086
                           000086  1056 _P0_6	=	0x0086
                           000087  1057 G$P0_7$0$0 == 0x0087
                           000087  1058 _P0_7	=	0x0087
                           000090  1059 G$P1_0$0$0 == 0x0090
                           000090  1060 _P1_0	=	0x0090
                           000091  1061 G$P1_1$0$0 == 0x0091
                           000091  1062 _P1_1	=	0x0091
                           000092  1063 G$P1_2$0$0 == 0x0092
                           000092  1064 _P1_2	=	0x0092
                           000093  1065 G$P1_3$0$0 == 0x0093
                           000093  1066 _P1_3	=	0x0093
                           000094  1067 G$P1_4$0$0 == 0x0094
                           000094  1068 _P1_4	=	0x0094
                           000095  1069 G$P1_5$0$0 == 0x0095
                           000095  1070 _P1_5	=	0x0095
                           000096  1071 G$P1_6$0$0 == 0x0096
                           000096  1072 _P1_6	=	0x0096
                           000097  1073 G$P1_7$0$0 == 0x0097
                           000097  1074 _P1_7	=	0x0097
                           0000A0  1075 G$P2_0$0$0 == 0x00a0
                           0000A0  1076 _P2_0	=	0x00a0
                           0000A1  1077 G$P2_1$0$0 == 0x00a1
                           0000A1  1078 _P2_1	=	0x00a1
                           0000A2  1079 G$P2_2$0$0 == 0x00a2
                           0000A2  1080 _P2_2	=	0x00a2
                           0000A3  1081 G$P2_3$0$0 == 0x00a3
                           0000A3  1082 _P2_3	=	0x00a3
                           0000A4  1083 G$P2_4$0$0 == 0x00a4
                           0000A4  1084 _P2_4	=	0x00a4
                           0000A5  1085 G$P2_5$0$0 == 0x00a5
                           0000A5  1086 _P2_5	=	0x00a5
                           0000A6  1087 G$P2_6$0$0 == 0x00a6
                           0000A6  1088 _P2_6	=	0x00a6
                           0000A7  1089 G$P2_7$0$0 == 0x00a7
                           0000A7  1090 _P2_7	=	0x00a7
                           0000B0  1091 G$P3_0$0$0 == 0x00b0
                           0000B0  1092 _P3_0	=	0x00b0
                           0000B1  1093 G$P3_1$0$0 == 0x00b1
                           0000B1  1094 _P3_1	=	0x00b1
                           0000B2  1095 G$P3_2$0$0 == 0x00b2
                           0000B2  1096 _P3_2	=	0x00b2
                           0000B3  1097 G$P3_3$0$0 == 0x00b3
                           0000B3  1098 _P3_3	=	0x00b3
                           0000B4  1099 G$P3_4$0$0 == 0x00b4
                           0000B4  1100 _P3_4	=	0x00b4
                           0000B5  1101 G$P3_5$0$0 == 0x00b5
                           0000B5  1102 _P3_5	=	0x00b5
                           0000B6  1103 G$P3_6$0$0 == 0x00b6
                           0000B6  1104 _P3_6	=	0x00b6
                           0000B7  1105 G$P3_7$0$0 == 0x00b7
                           0000B7  1106 _P3_7	=	0x00b7
                           0000C8  1107 G$P4_0$0$0 == 0x00c8
                           0000C8  1108 _P4_0	=	0x00c8
                           0000C9  1109 G$P4_1$0$0 == 0x00c9
                           0000C9  1110 _P4_1	=	0x00c9
                           0000CA  1111 G$P4_2$0$0 == 0x00ca
                           0000CA  1112 _P4_2	=	0x00ca
                           0000CB  1113 G$P4_3$0$0 == 0x00cb
                           0000CB  1114 _P4_3	=	0x00cb
                           0000CC  1115 G$P4_4$0$0 == 0x00cc
                           0000CC  1116 _P4_4	=	0x00cc
                           0000CD  1117 G$P4_5$0$0 == 0x00cd
                           0000CD  1118 _P4_5	=	0x00cd
                           0000CE  1119 G$P4_6$0$0 == 0x00ce
                           0000CE  1120 _P4_6	=	0x00ce
                           0000CF  1121 G$P4_7$0$0 == 0x00cf
                           0000CF  1122 _P4_7	=	0x00cf
                           0000D8  1123 G$P5_0$0$0 == 0x00d8
                           0000D8  1124 _P5_0	=	0x00d8
                           0000D9  1125 G$P5_1$0$0 == 0x00d9
                           0000D9  1126 _P5_1	=	0x00d9
                           0000DA  1127 G$P5_2$0$0 == 0x00da
                           0000DA  1128 _P5_2	=	0x00da
                           0000DB  1129 G$P5_3$0$0 == 0x00db
                           0000DB  1130 _P5_3	=	0x00db
                           0000DC  1131 G$P5_4$0$0 == 0x00dc
                           0000DC  1132 _P5_4	=	0x00dc
                           0000DD  1133 G$P5_5$0$0 == 0x00dd
                           0000DD  1134 _P5_5	=	0x00dd
                           0000DE  1135 G$P5_6$0$0 == 0x00de
                           0000DE  1136 _P5_6	=	0x00de
                           0000DF  1137 G$P5_7$0$0 == 0x00df
                           0000DF  1138 _P5_7	=	0x00df
                           0000E8  1139 G$P6_0$0$0 == 0x00e8
                           0000E8  1140 _P6_0	=	0x00e8
                           0000E9  1141 G$P6_1$0$0 == 0x00e9
                           0000E9  1142 _P6_1	=	0x00e9
                           0000EA  1143 G$P6_2$0$0 == 0x00ea
                           0000EA  1144 _P6_2	=	0x00ea
                           0000EB  1145 G$P6_3$0$0 == 0x00eb
                           0000EB  1146 _P6_3	=	0x00eb
                           0000EC  1147 G$P6_4$0$0 == 0x00ec
                           0000EC  1148 _P6_4	=	0x00ec
                           0000ED  1149 G$P6_5$0$0 == 0x00ed
                           0000ED  1150 _P6_5	=	0x00ed
                           0000EE  1151 G$P6_6$0$0 == 0x00ee
                           0000EE  1152 _P6_6	=	0x00ee
                           0000EF  1153 G$P6_7$0$0 == 0x00ef
                           0000EF  1154 _P6_7	=	0x00ef
                           0000F8  1155 G$P7_0$0$0 == 0x00f8
                           0000F8  1156 _P7_0	=	0x00f8
                           0000F9  1157 G$P7_1$0$0 == 0x00f9
                           0000F9  1158 _P7_1	=	0x00f9
                           0000FA  1159 G$P7_2$0$0 == 0x00fa
                           0000FA  1160 _P7_2	=	0x00fa
                           0000FB  1161 G$P7_3$0$0 == 0x00fb
                           0000FB  1162 _P7_3	=	0x00fb
                           0000FC  1163 G$P7_4$0$0 == 0x00fc
                           0000FC  1164 _P7_4	=	0x00fc
                           0000FD  1165 G$P7_5$0$0 == 0x00fd
                           0000FD  1166 _P7_5	=	0x00fd
                           0000FE  1167 G$P7_6$0$0 == 0x00fe
                           0000FE  1168 _P7_6	=	0x00fe
                           0000FF  1169 G$P7_7$0$0 == 0x00ff
                           0000FF  1170 _P7_7	=	0x00ff
                                   1171 ;--------------------------------------------------------
                                   1172 ; overlayable register banks
                                   1173 ;--------------------------------------------------------
                                   1174 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                       1175 	.ds 8
                                   1176 ;--------------------------------------------------------
                                   1177 ; internal ram data
                                   1178 ;--------------------------------------------------------
                                   1179 	.area DSEG    (DATA)
                           000000  1180 G$buffer_idx$0$0==.
      000023                       1181 _buffer_idx::
      000023                       1182 	.ds 1
                           000001  1183 G$signal_sum$0$0==.
      000024                       1184 _signal_sum::
      000024                       1185 	.ds 4
                           000005  1186 Lfiltro.guarda_buffer$sloc0$1$0==.
      000028                       1187 _guarda_buffer_sloc0_1_0:
      000028                       1188 	.ds 2
                           000007  1189 Lfiltro.limites_amostras$min$1$10==.
      00002A                       1190 _limites_amostras_PARM_2:
      00002A                       1191 	.ds 3
                           00000A  1192 Lfiltro.limites_amostras$max$1$10==.
      00002D                       1193 _limites_amostras_PARM_3:
      00002D                       1194 	.ds 3
                           00000D  1195 Lfiltro.limites_amostras$amostra$1$11==.
      000030                       1196 _limites_amostras_amostra_1_11:
      000030                       1197 	.ds 4
                           000011  1198 Lfiltro.limites_amostras$sloc0$1$0==.
      000034                       1199 _limites_amostras_sloc0_1_0:
      000034                       1200 	.ds 3
                           000014  1201 Lfiltro.limites_amostras$sloc1$1$0==.
      000037                       1202 _limites_amostras_sloc1_1_0:
      000037                       1203 	.ds 3
                                   1204 ;--------------------------------------------------------
                                   1205 ; overlayable items in internal ram 
                                   1206 ;--------------------------------------------------------
                                   1207 ;--------------------------------------------------------
                                   1208 ; indirectly addressable internal ram data
                                   1209 ;--------------------------------------------------------
                                   1210 	.area ISEG    (DATA)
                                   1211 ;--------------------------------------------------------
                                   1212 ; absolute internal ram data
                                   1213 ;--------------------------------------------------------
                                   1214 	.area IABS    (ABS,DATA)
                                   1215 	.area IABS    (ABS,DATA)
                                   1216 ;--------------------------------------------------------
                                   1217 ; bit data
                                   1218 ;--------------------------------------------------------
                                   1219 	.area BSEG    (BIT)
                                   1220 ;--------------------------------------------------------
                                   1221 ; paged external ram data
                                   1222 ;--------------------------------------------------------
                                   1223 	.area PSEG    (PAG,XDATA)
                                   1224 ;--------------------------------------------------------
                                   1225 ; external ram data
                                   1226 ;--------------------------------------------------------
                                   1227 	.area XSEG    (XDATA)
                                   1228 ;--------------------------------------------------------
                                   1229 ; absolute external ram data
                                   1230 ;--------------------------------------------------------
                                   1231 	.area XABS    (ABS,XDATA)
                                   1232 ;--------------------------------------------------------
                                   1233 ; external initialized ram data
                                   1234 ;--------------------------------------------------------
                                   1235 	.area XISEG   (XDATA)
                           000000  1236 G$buffer$0$0==.
      000001                       1237 _buffer::
      000001                       1238 	.ds 1024
                                   1239 	.area HOME    (CODE)
                                   1240 	.area GSINIT0 (CODE)
                                   1241 	.area GSINIT1 (CODE)
                                   1242 	.area GSINIT2 (CODE)
                                   1243 	.area GSINIT3 (CODE)
                                   1244 	.area GSINIT4 (CODE)
                                   1245 	.area GSINIT5 (CODE)
                                   1246 	.area GSINIT  (CODE)
                                   1247 	.area GSFINAL (CODE)
                                   1248 	.area CSEG    (CODE)
                                   1249 ;--------------------------------------------------------
                                   1250 ; global & static initialisations
                                   1251 ;--------------------------------------------------------
                                   1252 	.area HOME    (CODE)
                                   1253 	.area GSINIT  (CODE)
                                   1254 	.area GSFINAL (CODE)
                                   1255 	.area GSINIT  (CODE)
                           000000  1256 	C$filtro.c$7$1$11 ==.
                                   1257 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\filtro.c:7: unsigned char buffer_idx = 0;
      000104 75 23 00         [24] 1258 	mov	_buffer_idx,#0x00
                           000003  1259 	C$filtro.c$8$1$11 ==.
                                   1260 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\filtro.c:8: float signal_sum = 0;
      000107 E4               [12] 1261 	clr	a
      000108 F5 24            [12] 1262 	mov	_signal_sum,a
      00010A F5 25            [12] 1263 	mov	(_signal_sum + 1),a
      00010C F5 26            [12] 1264 	mov	(_signal_sum + 2),a
      00010E F5 27            [12] 1265 	mov	(_signal_sum + 3),a
                                   1266 ;--------------------------------------------------------
                                   1267 ; Home
                                   1268 ;--------------------------------------------------------
                                   1269 	.area HOME    (CODE)
                                   1270 	.area HOME    (CODE)
                                   1271 ;--------------------------------------------------------
                                   1272 ; code
                                   1273 ;--------------------------------------------------------
                                   1274 	.area CSEG    (CODE)
                                   1275 ;------------------------------------------------------------
                                   1276 ;Allocation info for local variables in function 'guarda_buffer'
                                   1277 ;------------------------------------------------------------
                                   1278 ;amostra                   Allocated to registers r6 r7 
                                   1279 ;sloc0                     Allocated with name '_guarda_buffer_sloc0_1_0'
                                   1280 ;------------------------------------------------------------
                           000000  1281 	G$guarda_buffer$0$0 ==.
                           000000  1282 	C$filtro.c$10$0$0 ==.
                                   1283 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\filtro.c:10: void guarda_buffer(unsigned int amostra) {
                                   1284 ;	-----------------------------------------
                                   1285 ;	 function guarda_buffer
                                   1286 ;	-----------------------------------------
      000A48                       1287 _guarda_buffer:
                           000007  1288 	ar7 = 0x07
                           000006  1289 	ar6 = 0x06
                           000005  1290 	ar5 = 0x05
                           000004  1291 	ar4 = 0x04
                           000003  1292 	ar3 = 0x03
                           000002  1293 	ar2 = 0x02
                           000001  1294 	ar1 = 0x01
                           000000  1295 	ar0 = 0x00
      000A48 AE 82            [24] 1296 	mov	r6,dpl
      000A4A AF 83            [24] 1297 	mov	r7,dph
                           000004  1298 	C$filtro.c$11$1$9 ==.
                                   1299 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\filtro.c:11: signal_sum -= buffer[buffer_idx];
      000A4C E5 23            [12] 1300 	mov	a,_buffer_idx
      000A4E 75 F0 04         [24] 1301 	mov	b,#0x04
      000A51 A4               [48] 1302 	mul	ab
      000A52 24 01            [12] 1303 	add	a,#_buffer
      000A54 F5 28            [12] 1304 	mov	_guarda_buffer_sloc0_1_0,a
      000A56 74 00            [12] 1305 	mov	a,#(_buffer >> 8)
      000A58 35 F0            [12] 1306 	addc	a,b
      000A5A F5 29            [12] 1307 	mov	(_guarda_buffer_sloc0_1_0 + 1),a
      000A5C 85 28 82         [24] 1308 	mov	dpl,_guarda_buffer_sloc0_1_0
      000A5F 85 29 83         [24] 1309 	mov	dph,(_guarda_buffer_sloc0_1_0 + 1)
      000A62 E0               [24] 1310 	movx	a,@dptr
      000A63 F8               [12] 1311 	mov	r0,a
      000A64 A3               [24] 1312 	inc	dptr
      000A65 E0               [24] 1313 	movx	a,@dptr
      000A66 F9               [12] 1314 	mov	r1,a
      000A67 A3               [24] 1315 	inc	dptr
      000A68 E0               [24] 1316 	movx	a,@dptr
      000A69 FA               [12] 1317 	mov	r2,a
      000A6A A3               [24] 1318 	inc	dptr
      000A6B E0               [24] 1319 	movx	a,@dptr
      000A6C FB               [12] 1320 	mov	r3,a
      000A6D C0 07            [24] 1321 	push	ar7
      000A6F C0 06            [24] 1322 	push	ar6
      000A71 C0 00            [24] 1323 	push	ar0
      000A73 C0 01            [24] 1324 	push	ar1
      000A75 C0 02            [24] 1325 	push	ar2
      000A77 C0 03            [24] 1326 	push	ar3
      000A79 85 24 82         [24] 1327 	mov	dpl,_signal_sum
      000A7C 85 25 83         [24] 1328 	mov	dph,(_signal_sum + 1)
      000A7F 85 26 F0         [24] 1329 	mov	b,(_signal_sum + 2)
      000A82 E5 27            [12] 1330 	mov	a,(_signal_sum + 3)
      000A84 12 0C DB         [24] 1331 	lcall	___fssub
      000A87 85 82 24         [24] 1332 	mov	_signal_sum,dpl
      000A8A 85 83 25         [24] 1333 	mov	(_signal_sum + 1),dph
      000A8D 85 F0 26         [24] 1334 	mov	(_signal_sum + 2),b
      000A90 F5 27            [12] 1335 	mov	(_signal_sum + 3),a
      000A92 E5 81            [12] 1336 	mov	a,sp
      000A94 24 FC            [12] 1337 	add	a,#0xfc
      000A96 F5 81            [12] 1338 	mov	sp,a
      000A98 D0 06            [24] 1339 	pop	ar6
      000A9A D0 07            [24] 1340 	pop	ar7
                           000054  1341 	C$filtro.c$12$1$9 ==.
                                   1342 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\filtro.c:12: signal_sum += amostra;
      000A9C 8E 82            [24] 1343 	mov	dpl,r6
      000A9E 8F 83            [24] 1344 	mov	dph,r7
      000AA0 12 0F 71         [24] 1345 	lcall	___uint2fs
      000AA3 AA 82            [24] 1346 	mov	r2,dpl
      000AA5 AB 83            [24] 1347 	mov	r3,dph
      000AA7 AE F0            [24] 1348 	mov	r6,b
      000AA9 FF               [12] 1349 	mov	r7,a
      000AAA C0 07            [24] 1350 	push	ar7
      000AAC C0 06            [24] 1351 	push	ar6
      000AAE C0 03            [24] 1352 	push	ar3
      000AB0 C0 02            [24] 1353 	push	ar2
      000AB2 C0 02            [24] 1354 	push	ar2
      000AB4 C0 03            [24] 1355 	push	ar3
      000AB6 C0 06            [24] 1356 	push	ar6
      000AB8 C0 07            [24] 1357 	push	ar7
      000ABA 85 24 82         [24] 1358 	mov	dpl,_signal_sum
      000ABD 85 25 83         [24] 1359 	mov	dph,(_signal_sum + 1)
      000AC0 85 26 F0         [24] 1360 	mov	b,(_signal_sum + 2)
      000AC3 E5 27            [12] 1361 	mov	a,(_signal_sum + 3)
      000AC5 12 0E CF         [24] 1362 	lcall	___fsadd
      000AC8 85 82 24         [24] 1363 	mov	_signal_sum,dpl
      000ACB 85 83 25         [24] 1364 	mov	(_signal_sum + 1),dph
      000ACE 85 F0 26         [24] 1365 	mov	(_signal_sum + 2),b
      000AD1 F5 27            [12] 1366 	mov	(_signal_sum + 3),a
      000AD3 E5 81            [12] 1367 	mov	a,sp
      000AD5 24 FC            [12] 1368 	add	a,#0xfc
      000AD7 F5 81            [12] 1369 	mov	sp,a
      000AD9 D0 02            [24] 1370 	pop	ar2
      000ADB D0 03            [24] 1371 	pop	ar3
      000ADD D0 06            [24] 1372 	pop	ar6
      000ADF D0 07            [24] 1373 	pop	ar7
                           000099  1374 	C$filtro.c$13$1$9 ==.
                                   1375 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\filtro.c:13: buffer[buffer_idx] = amostra;
      000AE1 85 28 82         [24] 1376 	mov	dpl,_guarda_buffer_sloc0_1_0
      000AE4 85 29 83         [24] 1377 	mov	dph,(_guarda_buffer_sloc0_1_0 + 1)
      000AE7 EA               [12] 1378 	mov	a,r2
      000AE8 F0               [24] 1379 	movx	@dptr,a
      000AE9 EB               [12] 1380 	mov	a,r3
      000AEA A3               [24] 1381 	inc	dptr
      000AEB F0               [24] 1382 	movx	@dptr,a
      000AEC EE               [12] 1383 	mov	a,r6
      000AED A3               [24] 1384 	inc	dptr
      000AEE F0               [24] 1385 	movx	@dptr,a
      000AEF EF               [12] 1386 	mov	a,r7
      000AF0 A3               [24] 1387 	inc	dptr
      000AF1 F0               [24] 1388 	movx	@dptr,a
                           0000AA  1389 	C$filtro.c$14$1$9 ==.
                                   1390 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\filtro.c:14: buffer[buffer_idx] -= signal_sum / BUFFER_SIZE;
      000AF2 C0 07            [24] 1391 	push	ar7
      000AF4 C0 06            [24] 1392 	push	ar6
      000AF6 C0 03            [24] 1393 	push	ar3
      000AF8 C0 02            [24] 1394 	push	ar2
      000AFA E4               [12] 1395 	clr	a
      000AFB C0 E0            [24] 1396 	push	acc
      000AFD C0 E0            [24] 1397 	push	acc
      000AFF 74 80            [12] 1398 	mov	a,#0x80
      000B01 C0 E0            [24] 1399 	push	acc
      000B03 74 43            [12] 1400 	mov	a,#0x43
      000B05 C0 E0            [24] 1401 	push	acc
      000B07 85 24 82         [24] 1402 	mov	dpl,_signal_sum
      000B0A 85 25 83         [24] 1403 	mov	dph,(_signal_sum + 1)
      000B0D 85 26 F0         [24] 1404 	mov	b,(_signal_sum + 2)
      000B10 E5 27            [12] 1405 	mov	a,(_signal_sum + 3)
      000B12 12 0F E6         [24] 1406 	lcall	___fsdiv
      000B15 A8 82            [24] 1407 	mov	r0,dpl
      000B17 A9 83            [24] 1408 	mov	r1,dph
      000B19 AC F0            [24] 1409 	mov	r4,b
      000B1B FD               [12] 1410 	mov	r5,a
      000B1C E5 81            [12] 1411 	mov	a,sp
      000B1E 24 FC            [12] 1412 	add	a,#0xfc
      000B20 F5 81            [12] 1413 	mov	sp,a
      000B22 D0 02            [24] 1414 	pop	ar2
      000B24 D0 03            [24] 1415 	pop	ar3
      000B26 D0 06            [24] 1416 	pop	ar6
      000B28 D0 07            [24] 1417 	pop	ar7
      000B2A C0 00            [24] 1418 	push	ar0
      000B2C C0 01            [24] 1419 	push	ar1
      000B2E C0 04            [24] 1420 	push	ar4
      000B30 C0 05            [24] 1421 	push	ar5
      000B32 8A 82            [24] 1422 	mov	dpl,r2
      000B34 8B 83            [24] 1423 	mov	dph,r3
      000B36 8E F0            [24] 1424 	mov	b,r6
      000B38 EF               [12] 1425 	mov	a,r7
      000B39 12 0C DB         [24] 1426 	lcall	___fssub
      000B3C AC 82            [24] 1427 	mov	r4,dpl
      000B3E AD 83            [24] 1428 	mov	r5,dph
      000B40 AE F0            [24] 1429 	mov	r6,b
      000B42 FF               [12] 1430 	mov	r7,a
      000B43 E5 81            [12] 1431 	mov	a,sp
      000B45 24 FC            [12] 1432 	add	a,#0xfc
      000B47 F5 81            [12] 1433 	mov	sp,a
      000B49 85 28 82         [24] 1434 	mov	dpl,_guarda_buffer_sloc0_1_0
      000B4C 85 29 83         [24] 1435 	mov	dph,(_guarda_buffer_sloc0_1_0 + 1)
      000B4F EC               [12] 1436 	mov	a,r4
      000B50 F0               [24] 1437 	movx	@dptr,a
      000B51 ED               [12] 1438 	mov	a,r5
      000B52 A3               [24] 1439 	inc	dptr
      000B53 F0               [24] 1440 	movx	@dptr,a
      000B54 EE               [12] 1441 	mov	a,r6
      000B55 A3               [24] 1442 	inc	dptr
      000B56 F0               [24] 1443 	movx	@dptr,a
      000B57 EF               [12] 1444 	mov	a,r7
      000B58 A3               [24] 1445 	inc	dptr
      000B59 F0               [24] 1446 	movx	@dptr,a
                           000112  1447 	C$filtro.c$15$1$9 ==.
                                   1448 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\filtro.c:15: buffer_idx = (buffer_idx + 1) % BUFFER_SIZE;
      000B5A AE 23            [24] 1449 	mov	r6,_buffer_idx
      000B5C 7F 00            [12] 1450 	mov	r7,#0x00
      000B5E 8E 82            [24] 1451 	mov	dpl,r6
      000B60 8F 83            [24] 1452 	mov	dph,r7
      000B62 A3               [24] 1453 	inc	dptr
                                   1454 ;	1-genFromRTrack replaced	mov	__modsint_PARM_2,#0x00
      000B63 8F 1C            [24] 1455 	mov	__modsint_PARM_2,r7
      000B65 75 1D 01         [24] 1456 	mov	(__modsint_PARM_2 + 1),#0x01
      000B68 12 10 CD         [24] 1457 	lcall	__modsint
      000B6B AE 82            [24] 1458 	mov	r6,dpl
      000B6D 8E 23            [24] 1459 	mov	_buffer_idx,r6
                           000127  1460 	C$filtro.c$16$1$9 ==.
                           000127  1461 	XG$guarda_buffer$0$0 ==.
      000B6F 22               [24] 1462 	ret
                                   1463 ;------------------------------------------------------------
                                   1464 ;Allocation info for local variables in function 'limites_amostras'
                                   1465 ;------------------------------------------------------------
                                   1466 ;min                       Allocated with name '_limites_amostras_PARM_2'
                                   1467 ;max                       Allocated with name '_limites_amostras_PARM_3'
                                   1468 ;n_prox                    Allocated to registers r7 
                                   1469 ;ini_idx                   Allocated to registers r6 
                                   1470 ;i                         Allocated to registers 
                                   1471 ;amostra                   Allocated with name '_limites_amostras_amostra_1_11'
                                   1472 ;sloc0                     Allocated with name '_limites_amostras_sloc0_1_0'
                                   1473 ;sloc1                     Allocated with name '_limites_amostras_sloc1_1_0'
                                   1474 ;------------------------------------------------------------
                           000128  1475 	G$limites_amostras$0$0 ==.
                           000128  1476 	C$filtro.c$18$1$9 ==.
                                   1477 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\filtro.c:18: void limites_amostras(unsigned char n_prox, float *min, float *max) {
                                   1478 ;	-----------------------------------------
                                   1479 ;	 function limites_amostras
                                   1480 ;	-----------------------------------------
      000B70                       1481 _limites_amostras:
      000B70 AF 82            [24] 1482 	mov	r7,dpl
                           00012A  1483 	C$filtro.c$19$1$9 ==.
                                   1484 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\filtro.c:19: unsigned char ini_idx = buffer_idx;
      000B72 AE 23            [24] 1485 	mov	r6,_buffer_idx
                           00012C  1486 	C$filtro.c$20$1$9 ==.
                                   1487 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\filtro.c:20: unsigned char i = ini_idx;
                           00012C  1488 	C$filtro.c$21$1$11 ==.
                                   1489 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\filtro.c:21: float amostra = buffer[i];
      000B74 EE               [12] 1490 	mov	a,r6
      000B75 FD               [12] 1491 	mov	r5,a
      000B76 75 F0 04         [24] 1492 	mov	b,#0x04
      000B79 A4               [48] 1493 	mul	ab
      000B7A 24 01            [12] 1494 	add	a,#_buffer
      000B7C F5 82            [12] 1495 	mov	dpl,a
      000B7E 74 00            [12] 1496 	mov	a,#(_buffer >> 8)
      000B80 35 F0            [12] 1497 	addc	a,b
      000B82 F5 83            [12] 1498 	mov	dph,a
      000B84 E0               [24] 1499 	movx	a,@dptr
      000B85 F5 30            [12] 1500 	mov	_limites_amostras_amostra_1_11,a
      000B87 A3               [24] 1501 	inc	dptr
      000B88 E0               [24] 1502 	movx	a,@dptr
      000B89 F5 31            [12] 1503 	mov	(_limites_amostras_amostra_1_11 + 1),a
      000B8B A3               [24] 1504 	inc	dptr
      000B8C E0               [24] 1505 	movx	a,@dptr
      000B8D F5 32            [12] 1506 	mov	(_limites_amostras_amostra_1_11 + 2),a
      000B8F A3               [24] 1507 	inc	dptr
      000B90 E0               [24] 1508 	movx	a,@dptr
      000B91 F5 33            [12] 1509 	mov	(_limites_amostras_amostra_1_11 + 3),a
                           00014B  1510 	C$filtro.c$23$1$11 ==.
                                   1511 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\filtro.c:23: *min = *max = amostra;
      000B93 85 2A 34         [24] 1512 	mov	_limites_amostras_sloc0_1_0,_limites_amostras_PARM_2
      000B96 85 2B 35         [24] 1513 	mov	(_limites_amostras_sloc0_1_0 + 1),(_limites_amostras_PARM_2 + 1)
      000B99 85 2C 36         [24] 1514 	mov	(_limites_amostras_sloc0_1_0 + 2),(_limites_amostras_PARM_2 + 2)
      000B9C 85 2D 37         [24] 1515 	mov	_limites_amostras_sloc1_1_0,_limites_amostras_PARM_3
      000B9F 85 2E 38         [24] 1516 	mov	(_limites_amostras_sloc1_1_0 + 1),(_limites_amostras_PARM_3 + 1)
      000BA2 85 2F 39         [24] 1517 	mov	(_limites_amostras_sloc1_1_0 + 2),(_limites_amostras_PARM_3 + 2)
      000BA5 85 37 82         [24] 1518 	mov	dpl,_limites_amostras_sloc1_1_0
      000BA8 85 38 83         [24] 1519 	mov	dph,(_limites_amostras_sloc1_1_0 + 1)
      000BAB 85 39 F0         [24] 1520 	mov	b,(_limites_amostras_sloc1_1_0 + 2)
      000BAE E5 30            [12] 1521 	mov	a,_limites_amostras_amostra_1_11
      000BB0 12 0E 1A         [24] 1522 	lcall	__gptrput
      000BB3 A3               [24] 1523 	inc	dptr
      000BB4 E5 31            [12] 1524 	mov	a,(_limites_amostras_amostra_1_11 + 1)
      000BB6 12 0E 1A         [24] 1525 	lcall	__gptrput
      000BB9 A3               [24] 1526 	inc	dptr
      000BBA E5 32            [12] 1527 	mov	a,(_limites_amostras_amostra_1_11 + 2)
      000BBC 12 0E 1A         [24] 1528 	lcall	__gptrput
      000BBF A3               [24] 1529 	inc	dptr
      000BC0 E5 33            [12] 1530 	mov	a,(_limites_amostras_amostra_1_11 + 3)
      000BC2 12 0E 1A         [24] 1531 	lcall	__gptrput
      000BC5 85 34 82         [24] 1532 	mov	dpl,_limites_amostras_sloc0_1_0
      000BC8 85 35 83         [24] 1533 	mov	dph,(_limites_amostras_sloc0_1_0 + 1)
      000BCB 85 36 F0         [24] 1534 	mov	b,(_limites_amostras_sloc0_1_0 + 2)
      000BCE E5 30            [12] 1535 	mov	a,_limites_amostras_amostra_1_11
      000BD0 12 0E 1A         [24] 1536 	lcall	__gptrput
      000BD3 A3               [24] 1537 	inc	dptr
      000BD4 E5 31            [12] 1538 	mov	a,(_limites_amostras_amostra_1_11 + 1)
      000BD6 12 0E 1A         [24] 1539 	lcall	__gptrput
      000BD9 A3               [24] 1540 	inc	dptr
      000BDA E5 32            [12] 1541 	mov	a,(_limites_amostras_amostra_1_11 + 2)
      000BDC 12 0E 1A         [24] 1542 	lcall	__gptrput
      000BDF A3               [24] 1543 	inc	dptr
      000BE0 E5 33            [12] 1544 	mov	a,(_limites_amostras_amostra_1_11 + 3)
      000BE2 12 0E 1A         [24] 1545 	lcall	__gptrput
                           00019D  1546 	C$filtro.c$25$1$11 ==.
                                   1547 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\filtro.c:25: do {
      000BE5 EF               [12] 1548 	mov	a,r7
      000BE6 2E               [12] 1549 	add	a,r6
      000BE7 FF               [12] 1550 	mov	r7,a
      000BE8                       1551 00105$:
                           0001A0  1552 	C$filtro.c$26$2$12 ==.
                                   1553 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\filtro.c:26: i++;
      000BE8 0D               [12] 1554 	inc	r5
                           0001A1  1555 	C$filtro.c$27$2$12 ==.
                                   1556 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\filtro.c:27: amostra = buffer[i];
      000BE9 ED               [12] 1557 	mov	a,r5
      000BEA 75 F0 04         [24] 1558 	mov	b,#0x04
      000BED A4               [48] 1559 	mul	ab
      000BEE 24 01            [12] 1560 	add	a,#_buffer
      000BF0 F5 82            [12] 1561 	mov	dpl,a
      000BF2 74 00            [12] 1562 	mov	a,#(_buffer >> 8)
      000BF4 35 F0            [12] 1563 	addc	a,b
      000BF6 F5 83            [12] 1564 	mov	dph,a
      000BF8 E0               [24] 1565 	movx	a,@dptr
      000BF9 F5 30            [12] 1566 	mov	_limites_amostras_amostra_1_11,a
      000BFB A3               [24] 1567 	inc	dptr
      000BFC E0               [24] 1568 	movx	a,@dptr
      000BFD F5 31            [12] 1569 	mov	(_limites_amostras_amostra_1_11 + 1),a
      000BFF A3               [24] 1570 	inc	dptr
      000C00 E0               [24] 1571 	movx	a,@dptr
      000C01 F5 32            [12] 1572 	mov	(_limites_amostras_amostra_1_11 + 2),a
      000C03 A3               [24] 1573 	inc	dptr
      000C04 E0               [24] 1574 	movx	a,@dptr
      000C05 F5 33            [12] 1575 	mov	(_limites_amostras_amostra_1_11 + 3),a
                           0001BF  1576 	C$filtro.c$28$2$12 ==.
                                   1577 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\filtro.c:28: if (amostra < *min)
      000C07 85 34 82         [24] 1578 	mov	dpl,_limites_amostras_sloc0_1_0
      000C0A 85 35 83         [24] 1579 	mov	dph,(_limites_amostras_sloc0_1_0 + 1)
      000C0D 85 36 F0         [24] 1580 	mov	b,(_limites_amostras_sloc0_1_0 + 2)
      000C10 12 10 A9         [24] 1581 	lcall	__gptrget
      000C13 F8               [12] 1582 	mov	r0,a
      000C14 A3               [24] 1583 	inc	dptr
      000C15 12 10 A9         [24] 1584 	lcall	__gptrget
      000C18 FB               [12] 1585 	mov	r3,a
      000C19 A3               [24] 1586 	inc	dptr
      000C1A 12 10 A9         [24] 1587 	lcall	__gptrget
      000C1D FC               [12] 1588 	mov	r4,a
      000C1E A3               [24] 1589 	inc	dptr
      000C1F 12 10 A9         [24] 1590 	lcall	__gptrget
      000C22 FE               [12] 1591 	mov	r6,a
      000C23 C0 07            [24] 1592 	push	ar7
      000C25 C0 05            [24] 1593 	push	ar5
      000C27 C0 00            [24] 1594 	push	ar0
      000C29 C0 03            [24] 1595 	push	ar3
      000C2B C0 04            [24] 1596 	push	ar4
      000C2D C0 06            [24] 1597 	push	ar6
      000C2F 85 30 82         [24] 1598 	mov	dpl,_limites_amostras_amostra_1_11
      000C32 85 31 83         [24] 1599 	mov	dph,(_limites_amostras_amostra_1_11 + 1)
      000C35 85 32 F0         [24] 1600 	mov	b,(_limites_amostras_amostra_1_11 + 2)
      000C38 E5 33            [12] 1601 	mov	a,(_limites_amostras_amostra_1_11 + 3)
      000C3A 12 0E 35         [24] 1602 	lcall	___fslt
      000C3D AE 82            [24] 1603 	mov	r6,dpl
      000C3F E5 81            [12] 1604 	mov	a,sp
      000C41 24 FC            [12] 1605 	add	a,#0xfc
      000C43 F5 81            [12] 1606 	mov	sp,a
      000C45 D0 05            [24] 1607 	pop	ar5
      000C47 D0 07            [24] 1608 	pop	ar7
      000C49 EE               [12] 1609 	mov	a,r6
      000C4A 60 20            [24] 1610 	jz	00102$
                           000204  1611 	C$filtro.c$29$2$12 ==.
                                   1612 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\filtro.c:29: *min = amostra;
      000C4C 85 34 82         [24] 1613 	mov	dpl,_limites_amostras_sloc0_1_0
      000C4F 85 35 83         [24] 1614 	mov	dph,(_limites_amostras_sloc0_1_0 + 1)
      000C52 85 36 F0         [24] 1615 	mov	b,(_limites_amostras_sloc0_1_0 + 2)
      000C55 E5 30            [12] 1616 	mov	a,_limites_amostras_amostra_1_11
      000C57 12 0E 1A         [24] 1617 	lcall	__gptrput
      000C5A A3               [24] 1618 	inc	dptr
      000C5B E5 31            [12] 1619 	mov	a,(_limites_amostras_amostra_1_11 + 1)
      000C5D 12 0E 1A         [24] 1620 	lcall	__gptrput
      000C60 A3               [24] 1621 	inc	dptr
      000C61 E5 32            [12] 1622 	mov	a,(_limites_amostras_amostra_1_11 + 2)
      000C63 12 0E 1A         [24] 1623 	lcall	__gptrput
      000C66 A3               [24] 1624 	inc	dptr
      000C67 E5 33            [12] 1625 	mov	a,(_limites_amostras_amostra_1_11 + 3)
      000C69 12 0E 1A         [24] 1626 	lcall	__gptrput
      000C6C                       1627 00102$:
                           000224  1628 	C$filtro.c$30$2$12 ==.
                                   1629 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\filtro.c:30: if (amostra > *max)
      000C6C 85 37 82         [24] 1630 	mov	dpl,_limites_amostras_sloc1_1_0
      000C6F 85 38 83         [24] 1631 	mov	dph,(_limites_amostras_sloc1_1_0 + 1)
      000C72 85 39 F0         [24] 1632 	mov	b,(_limites_amostras_sloc1_1_0 + 2)
      000C75 12 10 A9         [24] 1633 	lcall	__gptrget
      000C78 FA               [12] 1634 	mov	r2,a
      000C79 A3               [24] 1635 	inc	dptr
      000C7A 12 10 A9         [24] 1636 	lcall	__gptrget
      000C7D FB               [12] 1637 	mov	r3,a
      000C7E A3               [24] 1638 	inc	dptr
      000C7F 12 10 A9         [24] 1639 	lcall	__gptrget
      000C82 FC               [12] 1640 	mov	r4,a
      000C83 A3               [24] 1641 	inc	dptr
      000C84 12 10 A9         [24] 1642 	lcall	__gptrget
      000C87 FE               [12] 1643 	mov	r6,a
      000C88 C0 07            [24] 1644 	push	ar7
      000C8A C0 05            [24] 1645 	push	ar5
      000C8C C0 02            [24] 1646 	push	ar2
      000C8E C0 03            [24] 1647 	push	ar3
      000C90 C0 04            [24] 1648 	push	ar4
      000C92 C0 06            [24] 1649 	push	ar6
      000C94 85 30 82         [24] 1650 	mov	dpl,_limites_amostras_amostra_1_11
      000C97 85 31 83         [24] 1651 	mov	dph,(_limites_amostras_amostra_1_11 + 1)
      000C9A 85 32 F0         [24] 1652 	mov	b,(_limites_amostras_amostra_1_11 + 2)
      000C9D E5 33            [12] 1653 	mov	a,(_limites_amostras_amostra_1_11 + 3)
      000C9F 12 0D EA         [24] 1654 	lcall	___fsgt
      000CA2 AE 82            [24] 1655 	mov	r6,dpl
      000CA4 E5 81            [12] 1656 	mov	a,sp
      000CA6 24 FC            [12] 1657 	add	a,#0xfc
      000CA8 F5 81            [12] 1658 	mov	sp,a
      000CAA D0 05            [24] 1659 	pop	ar5
      000CAC D0 07            [24] 1660 	pop	ar7
      000CAE EE               [12] 1661 	mov	a,r6
      000CAF 60 20            [24] 1662 	jz	00106$
                           000269  1663 	C$filtro.c$31$2$12 ==.
                                   1664 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\filtro.c:31: *max = amostra;
      000CB1 85 37 82         [24] 1665 	mov	dpl,_limites_amostras_sloc1_1_0
      000CB4 85 38 83         [24] 1666 	mov	dph,(_limites_amostras_sloc1_1_0 + 1)
      000CB7 85 39 F0         [24] 1667 	mov	b,(_limites_amostras_sloc1_1_0 + 2)
      000CBA E5 30            [12] 1668 	mov	a,_limites_amostras_amostra_1_11
      000CBC 12 0E 1A         [24] 1669 	lcall	__gptrput
      000CBF A3               [24] 1670 	inc	dptr
      000CC0 E5 31            [12] 1671 	mov	a,(_limites_amostras_amostra_1_11 + 1)
      000CC2 12 0E 1A         [24] 1672 	lcall	__gptrput
      000CC5 A3               [24] 1673 	inc	dptr
      000CC6 E5 32            [12] 1674 	mov	a,(_limites_amostras_amostra_1_11 + 2)
      000CC8 12 0E 1A         [24] 1675 	lcall	__gptrput
      000CCB A3               [24] 1676 	inc	dptr
      000CCC E5 33            [12] 1677 	mov	a,(_limites_amostras_amostra_1_11 + 3)
      000CCE 12 0E 1A         [24] 1678 	lcall	__gptrput
      000CD1                       1679 00106$:
                           000289  1680 	C$filtro.c$32$1$11 ==.
                                   1681 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\filtro.c:32: } while (i != (unsigned char)(ini_idx + n_prox));
      000CD1 ED               [12] 1682 	mov	a,r5
      000CD2 B5 07 02         [24] 1683 	cjne	a,ar7,00122$
      000CD5 80 03            [24] 1684 	sjmp	00123$
      000CD7                       1685 00122$:
      000CD7 02 0B E8         [24] 1686 	ljmp	00105$
      000CDA                       1687 00123$:
                           000292  1688 	C$filtro.c$33$1$11 ==.
                           000292  1689 	XG$limites_amostras$0$0 ==.
      000CDA 22               [24] 1690 	ret
                                   1691 	.area CSEG    (CODE)
                                   1692 	.area CONST   (CODE)
                                   1693 	.area XINIT   (CODE)
                           000000  1694 Ffiltro$__xinit_buffer$0$0 == .
      001376                       1695 __xinit__buffer:
      001376 00 00 00 00           1696 	.byte #0x00,#0x00,#0x00,#0x00	;  0.000000e+000
      00137A 00                    1697 	.db 0x00
      00137B 00                    1698 	.db 0x00
      00137C 00                    1699 	.db 0x00
      00137D 00                    1700 	.db 0x00
      00137E 00                    1701 	.db 0x00
      00137F 00                    1702 	.db 0x00
      001380 00                    1703 	.db 0x00
      001381 00                    1704 	.db 0x00
      001382 00                    1705 	.db 0x00
      001383 00                    1706 	.db 0x00
      001384 00                    1707 	.db 0x00
      001385 00                    1708 	.db 0x00
      001386 00                    1709 	.db 0x00
      001387 00                    1710 	.db 0x00
      001388 00                    1711 	.db 0x00
      001389 00                    1712 	.db 0x00
      00138A 00                    1713 	.db 0x00
      00138B 00                    1714 	.db 0x00
      00138C 00                    1715 	.db 0x00
      00138D 00                    1716 	.db 0x00
      00138E 00                    1717 	.db 0x00
      00138F 00                    1718 	.db 0x00
      001390 00                    1719 	.db 0x00
      001391 00                    1720 	.db 0x00
      001392 00                    1721 	.db 0x00
      001393 00                    1722 	.db 0x00
      001394 00                    1723 	.db 0x00
      001395 00                    1724 	.db 0x00
      001396 00                    1725 	.db 0x00
      001397 00                    1726 	.db 0x00
      001398 00                    1727 	.db 0x00
      001399 00                    1728 	.db 0x00
      00139A 00                    1729 	.db 0x00
      00139B 00                    1730 	.db 0x00
      00139C 00                    1731 	.db 0x00
      00139D 00                    1732 	.db 0x00
      00139E 00                    1733 	.db 0x00
      00139F 00                    1734 	.db 0x00
      0013A0 00                    1735 	.db 0x00
      0013A1 00                    1736 	.db 0x00
      0013A2 00                    1737 	.db 0x00
      0013A3 00                    1738 	.db 0x00
      0013A4 00                    1739 	.db 0x00
      0013A5 00                    1740 	.db 0x00
      0013A6 00                    1741 	.db 0x00
      0013A7 00                    1742 	.db 0x00
      0013A8 00                    1743 	.db 0x00
      0013A9 00                    1744 	.db 0x00
      0013AA 00                    1745 	.db 0x00
      0013AB 00                    1746 	.db 0x00
      0013AC 00                    1747 	.db 0x00
      0013AD 00                    1748 	.db 0x00
      0013AE 00                    1749 	.db 0x00
      0013AF 00                    1750 	.db 0x00
      0013B0 00                    1751 	.db 0x00
      0013B1 00                    1752 	.db 0x00
      0013B2 00                    1753 	.db 0x00
      0013B3 00                    1754 	.db 0x00
      0013B4 00                    1755 	.db 0x00
      0013B5 00                    1756 	.db 0x00
      0013B6 00                    1757 	.db 0x00
      0013B7 00                    1758 	.db 0x00
      0013B8 00                    1759 	.db 0x00
      0013B9 00                    1760 	.db 0x00
      0013BA 00                    1761 	.db 0x00
      0013BB 00                    1762 	.db 0x00
      0013BC 00                    1763 	.db 0x00
      0013BD 00                    1764 	.db 0x00
      0013BE 00                    1765 	.db 0x00
      0013BF 00                    1766 	.db 0x00
      0013C0 00                    1767 	.db 0x00
      0013C1 00                    1768 	.db 0x00
      0013C2 00                    1769 	.db 0x00
      0013C3 00                    1770 	.db 0x00
      0013C4 00                    1771 	.db 0x00
      0013C5 00                    1772 	.db 0x00
      0013C6 00                    1773 	.db 0x00
      0013C7 00                    1774 	.db 0x00
      0013C8 00                    1775 	.db 0x00
      0013C9 00                    1776 	.db 0x00
      0013CA 00                    1777 	.db 0x00
      0013CB 00                    1778 	.db 0x00
      0013CC 00                    1779 	.db 0x00
      0013CD 00                    1780 	.db 0x00
      0013CE 00                    1781 	.db 0x00
      0013CF 00                    1782 	.db 0x00
      0013D0 00                    1783 	.db 0x00
      0013D1 00                    1784 	.db 0x00
      0013D2 00                    1785 	.db 0x00
      0013D3 00                    1786 	.db 0x00
      0013D4 00                    1787 	.db 0x00
      0013D5 00                    1788 	.db 0x00
      0013D6 00                    1789 	.db 0x00
      0013D7 00                    1790 	.db 0x00
      0013D8 00                    1791 	.db 0x00
      0013D9 00                    1792 	.db 0x00
      0013DA 00                    1793 	.db 0x00
      0013DB 00                    1794 	.db 0x00
      0013DC 00                    1795 	.db 0x00
      0013DD 00                    1796 	.db 0x00
      0013DE 00                    1797 	.db 0x00
      0013DF 00                    1798 	.db 0x00
      0013E0 00                    1799 	.db 0x00
      0013E1 00                    1800 	.db 0x00
      0013E2 00                    1801 	.db 0x00
      0013E3 00                    1802 	.db 0x00
      0013E4 00                    1803 	.db 0x00
      0013E5 00                    1804 	.db 0x00
      0013E6 00                    1805 	.db 0x00
      0013E7 00                    1806 	.db 0x00
      0013E8 00                    1807 	.db 0x00
      0013E9 00                    1808 	.db 0x00
      0013EA 00                    1809 	.db 0x00
      0013EB 00                    1810 	.db 0x00
      0013EC 00                    1811 	.db 0x00
      0013ED 00                    1812 	.db 0x00
      0013EE 00                    1813 	.db 0x00
      0013EF 00                    1814 	.db 0x00
      0013F0 00                    1815 	.db 0x00
      0013F1 00                    1816 	.db 0x00
      0013F2 00                    1817 	.db 0x00
      0013F3 00                    1818 	.db 0x00
      0013F4 00                    1819 	.db 0x00
      0013F5 00                    1820 	.db 0x00
      0013F6 00                    1821 	.db 0x00
      0013F7 00                    1822 	.db 0x00
      0013F8 00                    1823 	.db 0x00
      0013F9 00                    1824 	.db 0x00
      0013FA 00                    1825 	.db 0x00
      0013FB 00                    1826 	.db 0x00
      0013FC 00                    1827 	.db 0x00
      0013FD 00                    1828 	.db 0x00
      0013FE 00                    1829 	.db 0x00
      0013FF 00                    1830 	.db 0x00
      001400 00                    1831 	.db 0x00
      001401 00                    1832 	.db 0x00
      001402 00                    1833 	.db 0x00
      001403 00                    1834 	.db 0x00
      001404 00                    1835 	.db 0x00
      001405 00                    1836 	.db 0x00
      001406 00                    1837 	.db 0x00
      001407 00                    1838 	.db 0x00
      001408 00                    1839 	.db 0x00
      001409 00                    1840 	.db 0x00
      00140A 00                    1841 	.db 0x00
      00140B 00                    1842 	.db 0x00
      00140C 00                    1843 	.db 0x00
      00140D 00                    1844 	.db 0x00
      00140E 00                    1845 	.db 0x00
      00140F 00                    1846 	.db 0x00
      001410 00                    1847 	.db 0x00
      001411 00                    1848 	.db 0x00
      001412 00                    1849 	.db 0x00
      001413 00                    1850 	.db 0x00
      001414 00                    1851 	.db 0x00
      001415 00                    1852 	.db 0x00
      001416 00                    1853 	.db 0x00
      001417 00                    1854 	.db 0x00
      001418 00                    1855 	.db 0x00
      001419 00                    1856 	.db 0x00
      00141A 00                    1857 	.db 0x00
      00141B 00                    1858 	.db 0x00
      00141C 00                    1859 	.db 0x00
      00141D 00                    1860 	.db 0x00
      00141E 00                    1861 	.db 0x00
      00141F 00                    1862 	.db 0x00
      001420 00                    1863 	.db 0x00
      001421 00                    1864 	.db 0x00
      001422 00                    1865 	.db 0x00
      001423 00                    1866 	.db 0x00
      001424 00                    1867 	.db 0x00
      001425 00                    1868 	.db 0x00
      001426 00                    1869 	.db 0x00
      001427 00                    1870 	.db 0x00
      001428 00                    1871 	.db 0x00
      001429 00                    1872 	.db 0x00
      00142A 00                    1873 	.db 0x00
      00142B 00                    1874 	.db 0x00
      00142C 00                    1875 	.db 0x00
      00142D 00                    1876 	.db 0x00
      00142E 00                    1877 	.db 0x00
      00142F 00                    1878 	.db 0x00
      001430 00                    1879 	.db 0x00
      001431 00                    1880 	.db 0x00
      001432 00                    1881 	.db 0x00
      001433 00                    1882 	.db 0x00
      001434 00                    1883 	.db 0x00
      001435 00                    1884 	.db 0x00
      001436 00                    1885 	.db 0x00
      001437 00                    1886 	.db 0x00
      001438 00                    1887 	.db 0x00
      001439 00                    1888 	.db 0x00
      00143A 00                    1889 	.db 0x00
      00143B 00                    1890 	.db 0x00
      00143C 00                    1891 	.db 0x00
      00143D 00                    1892 	.db 0x00
      00143E 00                    1893 	.db 0x00
      00143F 00                    1894 	.db 0x00
      001440 00                    1895 	.db 0x00
      001441 00                    1896 	.db 0x00
      001442 00                    1897 	.db 0x00
      001443 00                    1898 	.db 0x00
      001444 00                    1899 	.db 0x00
      001445 00                    1900 	.db 0x00
      001446 00                    1901 	.db 0x00
      001447 00                    1902 	.db 0x00
      001448 00                    1903 	.db 0x00
      001449 00                    1904 	.db 0x00
      00144A 00                    1905 	.db 0x00
      00144B 00                    1906 	.db 0x00
      00144C 00                    1907 	.db 0x00
      00144D 00                    1908 	.db 0x00
      00144E 00                    1909 	.db 0x00
      00144F 00                    1910 	.db 0x00
      001450 00                    1911 	.db 0x00
      001451 00                    1912 	.db 0x00
      001452 00                    1913 	.db 0x00
      001453 00                    1914 	.db 0x00
      001454 00                    1915 	.db 0x00
      001455 00                    1916 	.db 0x00
      001456 00                    1917 	.db 0x00
      001457 00                    1918 	.db 0x00
      001458 00                    1919 	.db 0x00
      001459 00                    1920 	.db 0x00
      00145A 00                    1921 	.db 0x00
      00145B 00                    1922 	.db 0x00
      00145C 00                    1923 	.db 0x00
      00145D 00                    1924 	.db 0x00
      00145E 00                    1925 	.db 0x00
      00145F 00                    1926 	.db 0x00
      001460 00                    1927 	.db 0x00
      001461 00                    1928 	.db 0x00
      001462 00                    1929 	.db 0x00
      001463 00                    1930 	.db 0x00
      001464 00                    1931 	.db 0x00
      001465 00                    1932 	.db 0x00
      001466 00                    1933 	.db 0x00
      001467 00                    1934 	.db 0x00
      001468 00                    1935 	.db 0x00
      001469 00                    1936 	.db 0x00
      00146A 00                    1937 	.db 0x00
      00146B 00                    1938 	.db 0x00
      00146C 00                    1939 	.db 0x00
      00146D 00                    1940 	.db 0x00
      00146E 00                    1941 	.db 0x00
      00146F 00                    1942 	.db 0x00
      001470 00                    1943 	.db 0x00
      001471 00                    1944 	.db 0x00
      001472 00                    1945 	.db 0x00
      001473 00                    1946 	.db 0x00
      001474 00                    1947 	.db 0x00
      001475 00                    1948 	.db 0x00
      001476 00                    1949 	.db 0x00
      001477 00                    1950 	.db 0x00
      001478 00                    1951 	.db 0x00
      001479 00                    1952 	.db 0x00
      00147A 00                    1953 	.db 0x00
      00147B 00                    1954 	.db 0x00
      00147C 00                    1955 	.db 0x00
      00147D 00                    1956 	.db 0x00
      00147E 00                    1957 	.db 0x00
      00147F 00                    1958 	.db 0x00
      001480 00                    1959 	.db 0x00
      001481 00                    1960 	.db 0x00
      001482 00                    1961 	.db 0x00
      001483 00                    1962 	.db 0x00
      001484 00                    1963 	.db 0x00
      001485 00                    1964 	.db 0x00
      001486 00                    1965 	.db 0x00
      001487 00                    1966 	.db 0x00
      001488 00                    1967 	.db 0x00
      001489 00                    1968 	.db 0x00
      00148A 00                    1969 	.db 0x00
      00148B 00                    1970 	.db 0x00
      00148C 00                    1971 	.db 0x00
      00148D 00                    1972 	.db 0x00
      00148E 00                    1973 	.db 0x00
      00148F 00                    1974 	.db 0x00
      001490 00                    1975 	.db 0x00
      001491 00                    1976 	.db 0x00
      001492 00                    1977 	.db 0x00
      001493 00                    1978 	.db 0x00
      001494 00                    1979 	.db 0x00
      001495 00                    1980 	.db 0x00
      001496 00                    1981 	.db 0x00
      001497 00                    1982 	.db 0x00
      001498 00                    1983 	.db 0x00
      001499 00                    1984 	.db 0x00
      00149A 00                    1985 	.db 0x00
      00149B 00                    1986 	.db 0x00
      00149C 00                    1987 	.db 0x00
      00149D 00                    1988 	.db 0x00
      00149E 00                    1989 	.db 0x00
      00149F 00                    1990 	.db 0x00
      0014A0 00                    1991 	.db 0x00
      0014A1 00                    1992 	.db 0x00
      0014A2 00                    1993 	.db 0x00
      0014A3 00                    1994 	.db 0x00
      0014A4 00                    1995 	.db 0x00
      0014A5 00                    1996 	.db 0x00
      0014A6 00                    1997 	.db 0x00
      0014A7 00                    1998 	.db 0x00
      0014A8 00                    1999 	.db 0x00
      0014A9 00                    2000 	.db 0x00
      0014AA 00                    2001 	.db 0x00
      0014AB 00                    2002 	.db 0x00
      0014AC 00                    2003 	.db 0x00
      0014AD 00                    2004 	.db 0x00
      0014AE 00                    2005 	.db 0x00
      0014AF 00                    2006 	.db 0x00
      0014B0 00                    2007 	.db 0x00
      0014B1 00                    2008 	.db 0x00
      0014B2 00                    2009 	.db 0x00
      0014B3 00                    2010 	.db 0x00
      0014B4 00                    2011 	.db 0x00
      0014B5 00                    2012 	.db 0x00
      0014B6 00                    2013 	.db 0x00
      0014B7 00                    2014 	.db 0x00
      0014B8 00                    2015 	.db 0x00
      0014B9 00                    2016 	.db 0x00
      0014BA 00                    2017 	.db 0x00
      0014BB 00                    2018 	.db 0x00
      0014BC 00                    2019 	.db 0x00
      0014BD 00                    2020 	.db 0x00
      0014BE 00                    2021 	.db 0x00
      0014BF 00                    2022 	.db 0x00
      0014C0 00                    2023 	.db 0x00
      0014C1 00                    2024 	.db 0x00
      0014C2 00                    2025 	.db 0x00
      0014C3 00                    2026 	.db 0x00
      0014C4 00                    2027 	.db 0x00
      0014C5 00                    2028 	.db 0x00
      0014C6 00                    2029 	.db 0x00
      0014C7 00                    2030 	.db 0x00
      0014C8 00                    2031 	.db 0x00
      0014C9 00                    2032 	.db 0x00
      0014CA 00                    2033 	.db 0x00
      0014CB 00                    2034 	.db 0x00
      0014CC 00                    2035 	.db 0x00
      0014CD 00                    2036 	.db 0x00
      0014CE 00                    2037 	.db 0x00
      0014CF 00                    2038 	.db 0x00
      0014D0 00                    2039 	.db 0x00
      0014D1 00                    2040 	.db 0x00
      0014D2 00                    2041 	.db 0x00
      0014D3 00                    2042 	.db 0x00
      0014D4 00                    2043 	.db 0x00
      0014D5 00                    2044 	.db 0x00
      0014D6 00                    2045 	.db 0x00
      0014D7 00                    2046 	.db 0x00
      0014D8 00                    2047 	.db 0x00
      0014D9 00                    2048 	.db 0x00
      0014DA 00                    2049 	.db 0x00
      0014DB 00                    2050 	.db 0x00
      0014DC 00                    2051 	.db 0x00
      0014DD 00                    2052 	.db 0x00
      0014DE 00                    2053 	.db 0x00
      0014DF 00                    2054 	.db 0x00
      0014E0 00                    2055 	.db 0x00
      0014E1 00                    2056 	.db 0x00
      0014E2 00                    2057 	.db 0x00
      0014E3 00                    2058 	.db 0x00
      0014E4 00                    2059 	.db 0x00
      0014E5 00                    2060 	.db 0x00
      0014E6 00                    2061 	.db 0x00
      0014E7 00                    2062 	.db 0x00
      0014E8 00                    2063 	.db 0x00
      0014E9 00                    2064 	.db 0x00
      0014EA 00                    2065 	.db 0x00
      0014EB 00                    2066 	.db 0x00
      0014EC 00                    2067 	.db 0x00
      0014ED 00                    2068 	.db 0x00
      0014EE 00                    2069 	.db 0x00
      0014EF 00                    2070 	.db 0x00
      0014F0 00                    2071 	.db 0x00
      0014F1 00                    2072 	.db 0x00
      0014F2 00                    2073 	.db 0x00
      0014F3 00                    2074 	.db 0x00
      0014F4 00                    2075 	.db 0x00
      0014F5 00                    2076 	.db 0x00
      0014F6 00                    2077 	.db 0x00
      0014F7 00                    2078 	.db 0x00
      0014F8 00                    2079 	.db 0x00
      0014F9 00                    2080 	.db 0x00
      0014FA 00                    2081 	.db 0x00
      0014FB 00                    2082 	.db 0x00
      0014FC 00                    2083 	.db 0x00
      0014FD 00                    2084 	.db 0x00
      0014FE 00                    2085 	.db 0x00
      0014FF 00                    2086 	.db 0x00
      001500 00                    2087 	.db 0x00
      001501 00                    2088 	.db 0x00
      001502 00                    2089 	.db 0x00
      001503 00                    2090 	.db 0x00
      001504 00                    2091 	.db 0x00
      001505 00                    2092 	.db 0x00
      001506 00                    2093 	.db 0x00
      001507 00                    2094 	.db 0x00
      001508 00                    2095 	.db 0x00
      001509 00                    2096 	.db 0x00
      00150A 00                    2097 	.db 0x00
      00150B 00                    2098 	.db 0x00
      00150C 00                    2099 	.db 0x00
      00150D 00                    2100 	.db 0x00
      00150E 00                    2101 	.db 0x00
      00150F 00                    2102 	.db 0x00
      001510 00                    2103 	.db 0x00
      001511 00                    2104 	.db 0x00
      001512 00                    2105 	.db 0x00
      001513 00                    2106 	.db 0x00
      001514 00                    2107 	.db 0x00
      001515 00                    2108 	.db 0x00
      001516 00                    2109 	.db 0x00
      001517 00                    2110 	.db 0x00
      001518 00                    2111 	.db 0x00
      001519 00                    2112 	.db 0x00
      00151A 00                    2113 	.db 0x00
      00151B 00                    2114 	.db 0x00
      00151C 00                    2115 	.db 0x00
      00151D 00                    2116 	.db 0x00
      00151E 00                    2117 	.db 0x00
      00151F 00                    2118 	.db 0x00
      001520 00                    2119 	.db 0x00
      001521 00                    2120 	.db 0x00
      001522 00                    2121 	.db 0x00
      001523 00                    2122 	.db 0x00
      001524 00                    2123 	.db 0x00
      001525 00                    2124 	.db 0x00
      001526 00                    2125 	.db 0x00
      001527 00                    2126 	.db 0x00
      001528 00                    2127 	.db 0x00
      001529 00                    2128 	.db 0x00
      00152A 00                    2129 	.db 0x00
      00152B 00                    2130 	.db 0x00
      00152C 00                    2131 	.db 0x00
      00152D 00                    2132 	.db 0x00
      00152E 00                    2133 	.db 0x00
      00152F 00                    2134 	.db 0x00
      001530 00                    2135 	.db 0x00
      001531 00                    2136 	.db 0x00
      001532 00                    2137 	.db 0x00
      001533 00                    2138 	.db 0x00
      001534 00                    2139 	.db 0x00
      001535 00                    2140 	.db 0x00
      001536 00                    2141 	.db 0x00
      001537 00                    2142 	.db 0x00
      001538 00                    2143 	.db 0x00
      001539 00                    2144 	.db 0x00
      00153A 00                    2145 	.db 0x00
      00153B 00                    2146 	.db 0x00
      00153C 00                    2147 	.db 0x00
      00153D 00                    2148 	.db 0x00
      00153E 00                    2149 	.db 0x00
      00153F 00                    2150 	.db 0x00
      001540 00                    2151 	.db 0x00
      001541 00                    2152 	.db 0x00
      001542 00                    2153 	.db 0x00
      001543 00                    2154 	.db 0x00
      001544 00                    2155 	.db 0x00
      001545 00                    2156 	.db 0x00
      001546 00                    2157 	.db 0x00
      001547 00                    2158 	.db 0x00
      001548 00                    2159 	.db 0x00
      001549 00                    2160 	.db 0x00
      00154A 00                    2161 	.db 0x00
      00154B 00                    2162 	.db 0x00
      00154C 00                    2163 	.db 0x00
      00154D 00                    2164 	.db 0x00
      00154E 00                    2165 	.db 0x00
      00154F 00                    2166 	.db 0x00
      001550 00                    2167 	.db 0x00
      001551 00                    2168 	.db 0x00
      001552 00                    2169 	.db 0x00
      001553 00                    2170 	.db 0x00
      001554 00                    2171 	.db 0x00
      001555 00                    2172 	.db 0x00
      001556 00                    2173 	.db 0x00
      001557 00                    2174 	.db 0x00
      001558 00                    2175 	.db 0x00
      001559 00                    2176 	.db 0x00
      00155A 00                    2177 	.db 0x00
      00155B 00                    2178 	.db 0x00
      00155C 00                    2179 	.db 0x00
      00155D 00                    2180 	.db 0x00
      00155E 00                    2181 	.db 0x00
      00155F 00                    2182 	.db 0x00
      001560 00                    2183 	.db 0x00
      001561 00                    2184 	.db 0x00
      001562 00                    2185 	.db 0x00
      001563 00                    2186 	.db 0x00
      001564 00                    2187 	.db 0x00
      001565 00                    2188 	.db 0x00
      001566 00                    2189 	.db 0x00
      001567 00                    2190 	.db 0x00
      001568 00                    2191 	.db 0x00
      001569 00                    2192 	.db 0x00
      00156A 00                    2193 	.db 0x00
      00156B 00                    2194 	.db 0x00
      00156C 00                    2195 	.db 0x00
      00156D 00                    2196 	.db 0x00
      00156E 00                    2197 	.db 0x00
      00156F 00                    2198 	.db 0x00
      001570 00                    2199 	.db 0x00
      001571 00                    2200 	.db 0x00
      001572 00                    2201 	.db 0x00
      001573 00                    2202 	.db 0x00
      001574 00                    2203 	.db 0x00
      001575 00                    2204 	.db 0x00
      001576 00                    2205 	.db 0x00
      001577 00                    2206 	.db 0x00
      001578 00                    2207 	.db 0x00
      001579 00                    2208 	.db 0x00
      00157A 00                    2209 	.db 0x00
      00157B 00                    2210 	.db 0x00
      00157C 00                    2211 	.db 0x00
      00157D 00                    2212 	.db 0x00
      00157E 00                    2213 	.db 0x00
      00157F 00                    2214 	.db 0x00
      001580 00                    2215 	.db 0x00
      001581 00                    2216 	.db 0x00
      001582 00                    2217 	.db 0x00
      001583 00                    2218 	.db 0x00
      001584 00                    2219 	.db 0x00
      001585 00                    2220 	.db 0x00
      001586 00                    2221 	.db 0x00
      001587 00                    2222 	.db 0x00
      001588 00                    2223 	.db 0x00
      001589 00                    2224 	.db 0x00
      00158A 00                    2225 	.db 0x00
      00158B 00                    2226 	.db 0x00
      00158C 00                    2227 	.db 0x00
      00158D 00                    2228 	.db 0x00
      00158E 00                    2229 	.db 0x00
      00158F 00                    2230 	.db 0x00
      001590 00                    2231 	.db 0x00
      001591 00                    2232 	.db 0x00
      001592 00                    2233 	.db 0x00
      001593 00                    2234 	.db 0x00
      001594 00                    2235 	.db 0x00
      001595 00                    2236 	.db 0x00
      001596 00                    2237 	.db 0x00
      001597 00                    2238 	.db 0x00
      001598 00                    2239 	.db 0x00
      001599 00                    2240 	.db 0x00
      00159A 00                    2241 	.db 0x00
      00159B 00                    2242 	.db 0x00
      00159C 00                    2243 	.db 0x00
      00159D 00                    2244 	.db 0x00
      00159E 00                    2245 	.db 0x00
      00159F 00                    2246 	.db 0x00
      0015A0 00                    2247 	.db 0x00
      0015A1 00                    2248 	.db 0x00
      0015A2 00                    2249 	.db 0x00
      0015A3 00                    2250 	.db 0x00
      0015A4 00                    2251 	.db 0x00
      0015A5 00                    2252 	.db 0x00
      0015A6 00                    2253 	.db 0x00
      0015A7 00                    2254 	.db 0x00
      0015A8 00                    2255 	.db 0x00
      0015A9 00                    2256 	.db 0x00
      0015AA 00                    2257 	.db 0x00
      0015AB 00                    2258 	.db 0x00
      0015AC 00                    2259 	.db 0x00
      0015AD 00                    2260 	.db 0x00
      0015AE 00                    2261 	.db 0x00
      0015AF 00                    2262 	.db 0x00
      0015B0 00                    2263 	.db 0x00
      0015B1 00                    2264 	.db 0x00
      0015B2 00                    2265 	.db 0x00
      0015B3 00                    2266 	.db 0x00
      0015B4 00                    2267 	.db 0x00
      0015B5 00                    2268 	.db 0x00
      0015B6 00                    2269 	.db 0x00
      0015B7 00                    2270 	.db 0x00
      0015B8 00                    2271 	.db 0x00
      0015B9 00                    2272 	.db 0x00
      0015BA 00                    2273 	.db 0x00
      0015BB 00                    2274 	.db 0x00
      0015BC 00                    2275 	.db 0x00
      0015BD 00                    2276 	.db 0x00
      0015BE 00                    2277 	.db 0x00
      0015BF 00                    2278 	.db 0x00
      0015C0 00                    2279 	.db 0x00
      0015C1 00                    2280 	.db 0x00
      0015C2 00                    2281 	.db 0x00
      0015C3 00                    2282 	.db 0x00
      0015C4 00                    2283 	.db 0x00
      0015C5 00                    2284 	.db 0x00
      0015C6 00                    2285 	.db 0x00
      0015C7 00                    2286 	.db 0x00
      0015C8 00                    2287 	.db 0x00
      0015C9 00                    2288 	.db 0x00
      0015CA 00                    2289 	.db 0x00
      0015CB 00                    2290 	.db 0x00
      0015CC 00                    2291 	.db 0x00
      0015CD 00                    2292 	.db 0x00
      0015CE 00                    2293 	.db 0x00
      0015CF 00                    2294 	.db 0x00
      0015D0 00                    2295 	.db 0x00
      0015D1 00                    2296 	.db 0x00
      0015D2 00                    2297 	.db 0x00
      0015D3 00                    2298 	.db 0x00
      0015D4 00                    2299 	.db 0x00
      0015D5 00                    2300 	.db 0x00
      0015D6 00                    2301 	.db 0x00
      0015D7 00                    2302 	.db 0x00
      0015D8 00                    2303 	.db 0x00
      0015D9 00                    2304 	.db 0x00
      0015DA 00                    2305 	.db 0x00
      0015DB 00                    2306 	.db 0x00
      0015DC 00                    2307 	.db 0x00
      0015DD 00                    2308 	.db 0x00
      0015DE 00                    2309 	.db 0x00
      0015DF 00                    2310 	.db 0x00
      0015E0 00                    2311 	.db 0x00
      0015E1 00                    2312 	.db 0x00
      0015E2 00                    2313 	.db 0x00
      0015E3 00                    2314 	.db 0x00
      0015E4 00                    2315 	.db 0x00
      0015E5 00                    2316 	.db 0x00
      0015E6 00                    2317 	.db 0x00
      0015E7 00                    2318 	.db 0x00
      0015E8 00                    2319 	.db 0x00
      0015E9 00                    2320 	.db 0x00
      0015EA 00                    2321 	.db 0x00
      0015EB 00                    2322 	.db 0x00
      0015EC 00                    2323 	.db 0x00
      0015ED 00                    2324 	.db 0x00
      0015EE 00                    2325 	.db 0x00
      0015EF 00                    2326 	.db 0x00
      0015F0 00                    2327 	.db 0x00
      0015F1 00                    2328 	.db 0x00
      0015F2 00                    2329 	.db 0x00
      0015F3 00                    2330 	.db 0x00
      0015F4 00                    2331 	.db 0x00
      0015F5 00                    2332 	.db 0x00
      0015F6 00                    2333 	.db 0x00
      0015F7 00                    2334 	.db 0x00
      0015F8 00                    2335 	.db 0x00
      0015F9 00                    2336 	.db 0x00
      0015FA 00                    2337 	.db 0x00
      0015FB 00                    2338 	.db 0x00
      0015FC 00                    2339 	.db 0x00
      0015FD 00                    2340 	.db 0x00
      0015FE 00                    2341 	.db 0x00
      0015FF 00                    2342 	.db 0x00
      001600 00                    2343 	.db 0x00
      001601 00                    2344 	.db 0x00
      001602 00                    2345 	.db 0x00
      001603 00                    2346 	.db 0x00
      001604 00                    2347 	.db 0x00
      001605 00                    2348 	.db 0x00
      001606 00                    2349 	.db 0x00
      001607 00                    2350 	.db 0x00
      001608 00                    2351 	.db 0x00
      001609 00                    2352 	.db 0x00
      00160A 00                    2353 	.db 0x00
      00160B 00                    2354 	.db 0x00
      00160C 00                    2355 	.db 0x00
      00160D 00                    2356 	.db 0x00
      00160E 00                    2357 	.db 0x00
      00160F 00                    2358 	.db 0x00
      001610 00                    2359 	.db 0x00
      001611 00                    2360 	.db 0x00
      001612 00                    2361 	.db 0x00
      001613 00                    2362 	.db 0x00
      001614 00                    2363 	.db 0x00
      001615 00                    2364 	.db 0x00
      001616 00                    2365 	.db 0x00
      001617 00                    2366 	.db 0x00
      001618 00                    2367 	.db 0x00
      001619 00                    2368 	.db 0x00
      00161A 00                    2369 	.db 0x00
      00161B 00                    2370 	.db 0x00
      00161C 00                    2371 	.db 0x00
      00161D 00                    2372 	.db 0x00
      00161E 00                    2373 	.db 0x00
      00161F 00                    2374 	.db 0x00
      001620 00                    2375 	.db 0x00
      001621 00                    2376 	.db 0x00
      001622 00                    2377 	.db 0x00
      001623 00                    2378 	.db 0x00
      001624 00                    2379 	.db 0x00
      001625 00                    2380 	.db 0x00
      001626 00                    2381 	.db 0x00
      001627 00                    2382 	.db 0x00
      001628 00                    2383 	.db 0x00
      001629 00                    2384 	.db 0x00
      00162A 00                    2385 	.db 0x00
      00162B 00                    2386 	.db 0x00
      00162C 00                    2387 	.db 0x00
      00162D 00                    2388 	.db 0x00
      00162E 00                    2389 	.db 0x00
      00162F 00                    2390 	.db 0x00
      001630 00                    2391 	.db 0x00
      001631 00                    2392 	.db 0x00
      001632 00                    2393 	.db 0x00
      001633 00                    2394 	.db 0x00
      001634 00                    2395 	.db 0x00
      001635 00                    2396 	.db 0x00
      001636 00                    2397 	.db 0x00
      001637 00                    2398 	.db 0x00
      001638 00                    2399 	.db 0x00
      001639 00                    2400 	.db 0x00
      00163A 00                    2401 	.db 0x00
      00163B 00                    2402 	.db 0x00
      00163C 00                    2403 	.db 0x00
      00163D 00                    2404 	.db 0x00
      00163E 00                    2405 	.db 0x00
      00163F 00                    2406 	.db 0x00
      001640 00                    2407 	.db 0x00
      001641 00                    2408 	.db 0x00
      001642 00                    2409 	.db 0x00
      001643 00                    2410 	.db 0x00
      001644 00                    2411 	.db 0x00
      001645 00                    2412 	.db 0x00
      001646 00                    2413 	.db 0x00
      001647 00                    2414 	.db 0x00
      001648 00                    2415 	.db 0x00
      001649 00                    2416 	.db 0x00
      00164A 00                    2417 	.db 0x00
      00164B 00                    2418 	.db 0x00
      00164C 00                    2419 	.db 0x00
      00164D 00                    2420 	.db 0x00
      00164E 00                    2421 	.db 0x00
      00164F 00                    2422 	.db 0x00
      001650 00                    2423 	.db 0x00
      001651 00                    2424 	.db 0x00
      001652 00                    2425 	.db 0x00
      001653 00                    2426 	.db 0x00
      001654 00                    2427 	.db 0x00
      001655 00                    2428 	.db 0x00
      001656 00                    2429 	.db 0x00
      001657 00                    2430 	.db 0x00
      001658 00                    2431 	.db 0x00
      001659 00                    2432 	.db 0x00
      00165A 00                    2433 	.db 0x00
      00165B 00                    2434 	.db 0x00
      00165C 00                    2435 	.db 0x00
      00165D 00                    2436 	.db 0x00
      00165E 00                    2437 	.db 0x00
      00165F 00                    2438 	.db 0x00
      001660 00                    2439 	.db 0x00
      001661 00                    2440 	.db 0x00
      001662 00                    2441 	.db 0x00
      001663 00                    2442 	.db 0x00
      001664 00                    2443 	.db 0x00
      001665 00                    2444 	.db 0x00
      001666 00                    2445 	.db 0x00
      001667 00                    2446 	.db 0x00
      001668 00                    2447 	.db 0x00
      001669 00                    2448 	.db 0x00
      00166A 00                    2449 	.db 0x00
      00166B 00                    2450 	.db 0x00
      00166C 00                    2451 	.db 0x00
      00166D 00                    2452 	.db 0x00
      00166E 00                    2453 	.db 0x00
      00166F 00                    2454 	.db 0x00
      001670 00                    2455 	.db 0x00
      001671 00                    2456 	.db 0x00
      001672 00                    2457 	.db 0x00
      001673 00                    2458 	.db 0x00
      001674 00                    2459 	.db 0x00
      001675 00                    2460 	.db 0x00
      001676 00                    2461 	.db 0x00
      001677 00                    2462 	.db 0x00
      001678 00                    2463 	.db 0x00
      001679 00                    2464 	.db 0x00
      00167A 00                    2465 	.db 0x00
      00167B 00                    2466 	.db 0x00
      00167C 00                    2467 	.db 0x00
      00167D 00                    2468 	.db 0x00
      00167E 00                    2469 	.db 0x00
      00167F 00                    2470 	.db 0x00
      001680 00                    2471 	.db 0x00
      001681 00                    2472 	.db 0x00
      001682 00                    2473 	.db 0x00
      001683 00                    2474 	.db 0x00
      001684 00                    2475 	.db 0x00
      001685 00                    2476 	.db 0x00
      001686 00                    2477 	.db 0x00
      001687 00                    2478 	.db 0x00
      001688 00                    2479 	.db 0x00
      001689 00                    2480 	.db 0x00
      00168A 00                    2481 	.db 0x00
      00168B 00                    2482 	.db 0x00
      00168C 00                    2483 	.db 0x00
      00168D 00                    2484 	.db 0x00
      00168E 00                    2485 	.db 0x00
      00168F 00                    2486 	.db 0x00
      001690 00                    2487 	.db 0x00
      001691 00                    2488 	.db 0x00
      001692 00                    2489 	.db 0x00
      001693 00                    2490 	.db 0x00
      001694 00                    2491 	.db 0x00
      001695 00                    2492 	.db 0x00
      001696 00                    2493 	.db 0x00
      001697 00                    2494 	.db 0x00
      001698 00                    2495 	.db 0x00
      001699 00                    2496 	.db 0x00
      00169A 00                    2497 	.db 0x00
      00169B 00                    2498 	.db 0x00
      00169C 00                    2499 	.db 0x00
      00169D 00                    2500 	.db 0x00
      00169E 00                    2501 	.db 0x00
      00169F 00                    2502 	.db 0x00
      0016A0 00                    2503 	.db 0x00
      0016A1 00                    2504 	.db 0x00
      0016A2 00                    2505 	.db 0x00
      0016A3 00                    2506 	.db 0x00
      0016A4 00                    2507 	.db 0x00
      0016A5 00                    2508 	.db 0x00
      0016A6 00                    2509 	.db 0x00
      0016A7 00                    2510 	.db 0x00
      0016A8 00                    2511 	.db 0x00
      0016A9 00                    2512 	.db 0x00
      0016AA 00                    2513 	.db 0x00
      0016AB 00                    2514 	.db 0x00
      0016AC 00                    2515 	.db 0x00
      0016AD 00                    2516 	.db 0x00
      0016AE 00                    2517 	.db 0x00
      0016AF 00                    2518 	.db 0x00
      0016B0 00                    2519 	.db 0x00
      0016B1 00                    2520 	.db 0x00
      0016B2 00                    2521 	.db 0x00
      0016B3 00                    2522 	.db 0x00
      0016B4 00                    2523 	.db 0x00
      0016B5 00                    2524 	.db 0x00
      0016B6 00                    2525 	.db 0x00
      0016B7 00                    2526 	.db 0x00
      0016B8 00                    2527 	.db 0x00
      0016B9 00                    2528 	.db 0x00
      0016BA 00                    2529 	.db 0x00
      0016BB 00                    2530 	.db 0x00
      0016BC 00                    2531 	.db 0x00
      0016BD 00                    2532 	.db 0x00
      0016BE 00                    2533 	.db 0x00
      0016BF 00                    2534 	.db 0x00
      0016C0 00                    2535 	.db 0x00
      0016C1 00                    2536 	.db 0x00
      0016C2 00                    2537 	.db 0x00
      0016C3 00                    2538 	.db 0x00
      0016C4 00                    2539 	.db 0x00
      0016C5 00                    2540 	.db 0x00
      0016C6 00                    2541 	.db 0x00
      0016C7 00                    2542 	.db 0x00
      0016C8 00                    2543 	.db 0x00
      0016C9 00                    2544 	.db 0x00
      0016CA 00                    2545 	.db 0x00
      0016CB 00                    2546 	.db 0x00
      0016CC 00                    2547 	.db 0x00
      0016CD 00                    2548 	.db 0x00
      0016CE 00                    2549 	.db 0x00
      0016CF 00                    2550 	.db 0x00
      0016D0 00                    2551 	.db 0x00
      0016D1 00                    2552 	.db 0x00
      0016D2 00                    2553 	.db 0x00
      0016D3 00                    2554 	.db 0x00
      0016D4 00                    2555 	.db 0x00
      0016D5 00                    2556 	.db 0x00
      0016D6 00                    2557 	.db 0x00
      0016D7 00                    2558 	.db 0x00
      0016D8 00                    2559 	.db 0x00
      0016D9 00                    2560 	.db 0x00
      0016DA 00                    2561 	.db 0x00
      0016DB 00                    2562 	.db 0x00
      0016DC 00                    2563 	.db 0x00
      0016DD 00                    2564 	.db 0x00
      0016DE 00                    2565 	.db 0x00
      0016DF 00                    2566 	.db 0x00
      0016E0 00                    2567 	.db 0x00
      0016E1 00                    2568 	.db 0x00
      0016E2 00                    2569 	.db 0x00
      0016E3 00                    2570 	.db 0x00
      0016E4 00                    2571 	.db 0x00
      0016E5 00                    2572 	.db 0x00
      0016E6 00                    2573 	.db 0x00
      0016E7 00                    2574 	.db 0x00
      0016E8 00                    2575 	.db 0x00
      0016E9 00                    2576 	.db 0x00
      0016EA 00                    2577 	.db 0x00
      0016EB 00                    2578 	.db 0x00
      0016EC 00                    2579 	.db 0x00
      0016ED 00                    2580 	.db 0x00
      0016EE 00                    2581 	.db 0x00
      0016EF 00                    2582 	.db 0x00
      0016F0 00                    2583 	.db 0x00
      0016F1 00                    2584 	.db 0x00
      0016F2 00                    2585 	.db 0x00
      0016F3 00                    2586 	.db 0x00
      0016F4 00                    2587 	.db 0x00
      0016F5 00                    2588 	.db 0x00
      0016F6 00                    2589 	.db 0x00
      0016F7 00                    2590 	.db 0x00
      0016F8 00                    2591 	.db 0x00
      0016F9 00                    2592 	.db 0x00
      0016FA 00                    2593 	.db 0x00
      0016FB 00                    2594 	.db 0x00
      0016FC 00                    2595 	.db 0x00
      0016FD 00                    2596 	.db 0x00
      0016FE 00                    2597 	.db 0x00
      0016FF 00                    2598 	.db 0x00
      001700 00                    2599 	.db 0x00
      001701 00                    2600 	.db 0x00
      001702 00                    2601 	.db 0x00
      001703 00                    2602 	.db 0x00
      001704 00                    2603 	.db 0x00
      001705 00                    2604 	.db 0x00
      001706 00                    2605 	.db 0x00
      001707 00                    2606 	.db 0x00
      001708 00                    2607 	.db 0x00
      001709 00                    2608 	.db 0x00
      00170A 00                    2609 	.db 0x00
      00170B 00                    2610 	.db 0x00
      00170C 00                    2611 	.db 0x00
      00170D 00                    2612 	.db 0x00
      00170E 00                    2613 	.db 0x00
      00170F 00                    2614 	.db 0x00
      001710 00                    2615 	.db 0x00
      001711 00                    2616 	.db 0x00
      001712 00                    2617 	.db 0x00
      001713 00                    2618 	.db 0x00
      001714 00                    2619 	.db 0x00
      001715 00                    2620 	.db 0x00
      001716 00                    2621 	.db 0x00
      001717 00                    2622 	.db 0x00
      001718 00                    2623 	.db 0x00
      001719 00                    2624 	.db 0x00
      00171A 00                    2625 	.db 0x00
      00171B 00                    2626 	.db 0x00
      00171C 00                    2627 	.db 0x00
      00171D 00                    2628 	.db 0x00
      00171E 00                    2629 	.db 0x00
      00171F 00                    2630 	.db 0x00
      001720 00                    2631 	.db 0x00
      001721 00                    2632 	.db 0x00
      001722 00                    2633 	.db 0x00
      001723 00                    2634 	.db 0x00
      001724 00                    2635 	.db 0x00
      001725 00                    2636 	.db 0x00
      001726 00                    2637 	.db 0x00
      001727 00                    2638 	.db 0x00
      001728 00                    2639 	.db 0x00
      001729 00                    2640 	.db 0x00
      00172A 00                    2641 	.db 0x00
      00172B 00                    2642 	.db 0x00
      00172C 00                    2643 	.db 0x00
      00172D 00                    2644 	.db 0x00
      00172E 00                    2645 	.db 0x00
      00172F 00                    2646 	.db 0x00
      001730 00                    2647 	.db 0x00
      001731 00                    2648 	.db 0x00
      001732 00                    2649 	.db 0x00
      001733 00                    2650 	.db 0x00
      001734 00                    2651 	.db 0x00
      001735 00                    2652 	.db 0x00
      001736 00                    2653 	.db 0x00
      001737 00                    2654 	.db 0x00
      001738 00                    2655 	.db 0x00
      001739 00                    2656 	.db 0x00
      00173A 00                    2657 	.db 0x00
      00173B 00                    2658 	.db 0x00
      00173C 00                    2659 	.db 0x00
      00173D 00                    2660 	.db 0x00
      00173E 00                    2661 	.db 0x00
      00173F 00                    2662 	.db 0x00
      001740 00                    2663 	.db 0x00
      001741 00                    2664 	.db 0x00
      001742 00                    2665 	.db 0x00
      001743 00                    2666 	.db 0x00
      001744 00                    2667 	.db 0x00
      001745 00                    2668 	.db 0x00
      001746 00                    2669 	.db 0x00
      001747 00                    2670 	.db 0x00
      001748 00                    2671 	.db 0x00
      001749 00                    2672 	.db 0x00
      00174A 00                    2673 	.db 0x00
      00174B 00                    2674 	.db 0x00
      00174C 00                    2675 	.db 0x00
      00174D 00                    2676 	.db 0x00
      00174E 00                    2677 	.db 0x00
      00174F 00                    2678 	.db 0x00
      001750 00                    2679 	.db 0x00
      001751 00                    2680 	.db 0x00
      001752 00                    2681 	.db 0x00
      001753 00                    2682 	.db 0x00
      001754 00                    2683 	.db 0x00
      001755 00                    2684 	.db 0x00
      001756 00                    2685 	.db 0x00
      001757 00                    2686 	.db 0x00
      001758 00                    2687 	.db 0x00
      001759 00                    2688 	.db 0x00
      00175A 00                    2689 	.db 0x00
      00175B 00                    2690 	.db 0x00
      00175C 00                    2691 	.db 0x00
      00175D 00                    2692 	.db 0x00
      00175E 00                    2693 	.db 0x00
      00175F 00                    2694 	.db 0x00
      001760 00                    2695 	.db 0x00
      001761 00                    2696 	.db 0x00
      001762 00                    2697 	.db 0x00
      001763 00                    2698 	.db 0x00
      001764 00                    2699 	.db 0x00
      001765 00                    2700 	.db 0x00
      001766 00                    2701 	.db 0x00
      001767 00                    2702 	.db 0x00
      001768 00                    2703 	.db 0x00
      001769 00                    2704 	.db 0x00
      00176A 00                    2705 	.db 0x00
      00176B 00                    2706 	.db 0x00
      00176C 00                    2707 	.db 0x00
      00176D 00                    2708 	.db 0x00
      00176E 00                    2709 	.db 0x00
      00176F 00                    2710 	.db 0x00
      001770 00                    2711 	.db 0x00
      001771 00                    2712 	.db 0x00
      001772 00                    2713 	.db 0x00
      001773 00                    2714 	.db 0x00
      001774 00                    2715 	.db 0x00
      001775 00                    2716 	.db 0x00
                                   2717 	.area CABS    (ABS,CODE)
