                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 3.6.0 #9615 (MINGW64)
                                      4 ;--------------------------------------------------------
                                      5 	.module adc
                                      6 	.optsdcc -mmcs51 --model-small
                                      7 	
                                      8 ;--------------------------------------------------------
                                      9 ; Public variables in this module
                                     10 ;--------------------------------------------------------
                                     11 	.globl _delay_us
                                     12 	.globl _reset_wdt
                                     13 	.globl _P7_7
                                     14 	.globl _P7_6
                                     15 	.globl _P7_5
                                     16 	.globl _P7_4
                                     17 	.globl _P7_3
                                     18 	.globl _P7_2
                                     19 	.globl _P7_1
                                     20 	.globl _P7_0
                                     21 	.globl _P6_7
                                     22 	.globl _P6_6
                                     23 	.globl _P6_5
                                     24 	.globl _P6_4
                                     25 	.globl _P6_3
                                     26 	.globl _P6_2
                                     27 	.globl _P6_1
                                     28 	.globl _P6_0
                                     29 	.globl _P5_7
                                     30 	.globl _P5_6
                                     31 	.globl _P5_5
                                     32 	.globl _P5_4
                                     33 	.globl _P5_3
                                     34 	.globl _P5_2
                                     35 	.globl _P5_1
                                     36 	.globl _P5_0
                                     37 	.globl _P4_7
                                     38 	.globl _P4_6
                                     39 	.globl _P4_5
                                     40 	.globl _P4_4
                                     41 	.globl _P4_3
                                     42 	.globl _P4_2
                                     43 	.globl _P4_1
                                     44 	.globl _P4_0
                                     45 	.globl _P3_7
                                     46 	.globl _P3_6
                                     47 	.globl _P3_5
                                     48 	.globl _P3_4
                                     49 	.globl _P3_3
                                     50 	.globl _P3_2
                                     51 	.globl _P3_1
                                     52 	.globl _P3_0
                                     53 	.globl _P2_7
                                     54 	.globl _P2_6
                                     55 	.globl _P2_5
                                     56 	.globl _P2_4
                                     57 	.globl _P2_3
                                     58 	.globl _P2_2
                                     59 	.globl _P2_1
                                     60 	.globl _P2_0
                                     61 	.globl _P1_7
                                     62 	.globl _P1_6
                                     63 	.globl _P1_5
                                     64 	.globl _P1_4
                                     65 	.globl _P1_3
                                     66 	.globl _P1_2
                                     67 	.globl _P1_1
                                     68 	.globl _P1_0
                                     69 	.globl _P0_7
                                     70 	.globl _P0_6
                                     71 	.globl _P0_5
                                     72 	.globl _P0_4
                                     73 	.globl _P0_3
                                     74 	.globl _P0_2
                                     75 	.globl _P0_1
                                     76 	.globl _P0_0
                                     77 	.globl _CANTEST
                                     78 	.globl _CANCCE
                                     79 	.globl _CANDAR
                                     80 	.globl _CANIF
                                     81 	.globl _CANEIE
                                     82 	.globl _CANSIE
                                     83 	.globl _CANIE
                                     84 	.globl _CANINIT
                                     85 	.globl _SPIEN
                                     86 	.globl _TXBMT
                                     87 	.globl _NSSMD0
                                     88 	.globl _NSSMD1
                                     89 	.globl _RXOVRN
                                     90 	.globl _MODF
                                     91 	.globl _WCOL
                                     92 	.globl _SPIF
                                     93 	.globl _AD2WINT
                                     94 	.globl _AD2CM0
                                     95 	.globl _AD2CM1
                                     96 	.globl _AD2CM2
                                     97 	.globl _AD2BUSY
                                     98 	.globl _AD2INT
                                     99 	.globl _AD2TM
                                    100 	.globl _AD2EN
                                    101 	.globl _AD0LJST
                                    102 	.globl _AD0WINT
                                    103 	.globl _AD0CM0
                                    104 	.globl _AD0CM1
                                    105 	.globl _AD0BUSY
                                    106 	.globl _AD0INT
                                    107 	.globl _AD0TM
                                    108 	.globl _AD0EN
                                    109 	.globl _CCF0
                                    110 	.globl _CCF1
                                    111 	.globl _CCF2
                                    112 	.globl _CCF3
                                    113 	.globl _CCF4
                                    114 	.globl _CCF5
                                    115 	.globl _CR
                                    116 	.globl _CF
                                    117 	.globl _P
                                    118 	.globl _F1
                                    119 	.globl _OV
                                    120 	.globl _RS0
                                    121 	.globl _RS1
                                    122 	.globl _F0
                                    123 	.globl _AC
                                    124 	.globl _CY
                                    125 	.globl _CPRL4
                                    126 	.globl _CT4
                                    127 	.globl _TR4
                                    128 	.globl _EXEN4
                                    129 	.globl _EXF4
                                    130 	.globl _TF4
                                    131 	.globl _CPRL3
                                    132 	.globl _CT3
                                    133 	.globl _TR3
                                    134 	.globl _EXEN3
                                    135 	.globl _EXF3
                                    136 	.globl _TF3
                                    137 	.globl _CPRL2
                                    138 	.globl _CT2
                                    139 	.globl _TR2
                                    140 	.globl _EXEN2
                                    141 	.globl _EXF2
                                    142 	.globl _TF2
                                    143 	.globl _LEC0
                                    144 	.globl _LEC1
                                    145 	.globl _LEC2
                                    146 	.globl _TXOK
                                    147 	.globl _RXOK
                                    148 	.globl _EPASS
                                    149 	.globl _EWARN
                                    150 	.globl _BOFF
                                    151 	.globl _SMBTOE
                                    152 	.globl _SMBFTE
                                    153 	.globl _AA
                                    154 	.globl _SI
                                    155 	.globl _STO
                                    156 	.globl _STA
                                    157 	.globl _ENSMB
                                    158 	.globl _BUSY
                                    159 	.globl _PX0
                                    160 	.globl _PT0
                                    161 	.globl _PX1
                                    162 	.globl _PT1
                                    163 	.globl _PS0
                                    164 	.globl _PT2
                                    165 	.globl _EX0
                                    166 	.globl _ET0
                                    167 	.globl _EX1
                                    168 	.globl _ET1
                                    169 	.globl _ES0
                                    170 	.globl _ET2
                                    171 	.globl _EA
                                    172 	.globl _RI1
                                    173 	.globl _TI1
                                    174 	.globl _RB81
                                    175 	.globl _TB81
                                    176 	.globl _REN1
                                    177 	.globl _MCE1
                                    178 	.globl _S1MODE
                                    179 	.globl _RI0
                                    180 	.globl _TI0
                                    181 	.globl _RB80
                                    182 	.globl _TB80
                                    183 	.globl _REN0
                                    184 	.globl _SM20
                                    185 	.globl _SM10
                                    186 	.globl _SM00
                                    187 	.globl _CP2HYN0
                                    188 	.globl _CP2HYN1
                                    189 	.globl _CP2HYP0
                                    190 	.globl _CP2HYP1
                                    191 	.globl _CP2FIF
                                    192 	.globl _CP2RIF
                                    193 	.globl _CP2OUT
                                    194 	.globl _CP2EN
                                    195 	.globl _CP1HYN0
                                    196 	.globl _CP1HYN1
                                    197 	.globl _CP1HYP0
                                    198 	.globl _CP1HYP1
                                    199 	.globl _CP1FIF
                                    200 	.globl _CP1RIF
                                    201 	.globl _CP1OUT
                                    202 	.globl _CP1EN
                                    203 	.globl _CP0HYN0
                                    204 	.globl _CP0HYN1
                                    205 	.globl _CP0HYP0
                                    206 	.globl _CP0HYP1
                                    207 	.globl _CP0FIF
                                    208 	.globl _CP0RIF
                                    209 	.globl _CP0OUT
                                    210 	.globl _CP0EN
                                    211 	.globl _IT0
                                    212 	.globl _IE0
                                    213 	.globl _IT1
                                    214 	.globl _IE1
                                    215 	.globl _TR0
                                    216 	.globl _TF0
                                    217 	.globl _TR1
                                    218 	.globl _TF1
                                    219 	.globl __XPAGE
                                    220 	.globl _DP
                                    221 	.globl _ADC0
                                    222 	.globl _ADC0LT
                                    223 	.globl _ADC0GT
                                    224 	.globl _TMR4
                                    225 	.globl _TMR3
                                    226 	.globl _TMR2
                                    227 	.globl _RCAP4
                                    228 	.globl _RCAP3
                                    229 	.globl _RCAP2
                                    230 	.globl _DAC1
                                    231 	.globl _DAC0
                                    232 	.globl _CAN0DAT
                                    233 	.globl _PCA0CP5
                                    234 	.globl _PCA0CP4
                                    235 	.globl _PCA0CP3
                                    236 	.globl _PCA0CP2
                                    237 	.globl _PCA0CP1
                                    238 	.globl _PCA0CP0
                                    239 	.globl _PCA0
                                    240 	.globl _WDTCN
                                    241 	.globl _PCA0CPH1
                                    242 	.globl _PCA0CPL1
                                    243 	.globl _PCA0CPH0
                                    244 	.globl _PCA0CPL0
                                    245 	.globl _PCA0H
                                    246 	.globl _PCA0L
                                    247 	.globl _P7
                                    248 	.globl _CAN0CN
                                    249 	.globl _SPI0CN
                                    250 	.globl _EIP2
                                    251 	.globl _EIP1
                                    252 	.globl _B
                                    253 	.globl _RSTSRC
                                    254 	.globl _PCA0CPH4
                                    255 	.globl _PCA0CPL4
                                    256 	.globl _PCA0CPH3
                                    257 	.globl _PCA0CPL3
                                    258 	.globl _PCA0CPH2
                                    259 	.globl _PCA0CPL2
                                    260 	.globl _P6
                                    261 	.globl _ADC2CN
                                    262 	.globl _ADC0CN
                                    263 	.globl _EIE2
                                    264 	.globl _EIE1
                                    265 	.globl _XBR3
                                    266 	.globl _XBR2
                                    267 	.globl _XBR1
                                    268 	.globl _PCA0CPH5
                                    269 	.globl _XBR0
                                    270 	.globl _PCA0CPL5
                                    271 	.globl _ACC
                                    272 	.globl _PCA0CPM5
                                    273 	.globl _PCA0CPM4
                                    274 	.globl _PCA0CPM3
                                    275 	.globl _PCA0CPM2
                                    276 	.globl _CAN0TST
                                    277 	.globl _PCA0CPM1
                                    278 	.globl _CAN0ADR
                                    279 	.globl _PCA0CPM0
                                    280 	.globl _CAN0DATH
                                    281 	.globl _PCA0MD
                                    282 	.globl _P5
                                    283 	.globl _CAN0DATL
                                    284 	.globl _PCA0CN
                                    285 	.globl _HVA0CN
                                    286 	.globl _DAC1CN
                                    287 	.globl _DAC0CN
                                    288 	.globl _DAC1H
                                    289 	.globl _DAC0H
                                    290 	.globl _DAC1L
                                    291 	.globl _DAC0L
                                    292 	.globl _REF0CN
                                    293 	.globl _PSW
                                    294 	.globl _SMB0CR
                                    295 	.globl _TMR4H
                                    296 	.globl _TMR3H
                                    297 	.globl _TMR2H
                                    298 	.globl _TMR4L
                                    299 	.globl _TMR3L
                                    300 	.globl _TMR2L
                                    301 	.globl _RCAP4H
                                    302 	.globl _RCAP3H
                                    303 	.globl _RCAP2H
                                    304 	.globl _RCAP4L
                                    305 	.globl _RCAP3L
                                    306 	.globl _RCAP2L
                                    307 	.globl _TMR4CF
                                    308 	.globl _TMR3CF
                                    309 	.globl _TMR2CF
                                    310 	.globl _P4
                                    311 	.globl _TMR4CN
                                    312 	.globl _TMR3CN
                                    313 	.globl _TMR2CN
                                    314 	.globl _ADC0LTH
                                    315 	.globl _ADC2LT
                                    316 	.globl _ADC0LTL
                                    317 	.globl _ADC0GTH
                                    318 	.globl _ADC2GT
                                    319 	.globl _ADC0GTL
                                    320 	.globl _SMB0ADR
                                    321 	.globl _SMB0DAT
                                    322 	.globl _SMB0STA
                                    323 	.globl _CAN0STA
                                    324 	.globl _SMB0CN
                                    325 	.globl _ADC0H
                                    326 	.globl _ADC2
                                    327 	.globl _ADC0L
                                    328 	.globl _ADC2CF
                                    329 	.globl _ADC0CF
                                    330 	.globl _AMX2SL
                                    331 	.globl _AMX0SL
                                    332 	.globl _AMX0CF
                                    333 	.globl _AMX0PRT
                                    334 	.globl _AMX2CF
                                    335 	.globl _SADEN0
                                    336 	.globl _IP
                                    337 	.globl _FLACL
                                    338 	.globl _FLSCL
                                    339 	.globl _P3
                                    340 	.globl _P3MDIN
                                    341 	.globl _P2MDIN
                                    342 	.globl _P1MDIN
                                    343 	.globl _SADDR1
                                    344 	.globl _SADDR0
                                    345 	.globl _IE
                                    346 	.globl _P3MDOUT
                                    347 	.globl _P2MDOUT
                                    348 	.globl _P1MDOUT
                                    349 	.globl _P0MDOUT
                                    350 	.globl _EMI0CF
                                    351 	.globl _EMI0CN
                                    352 	.globl _EMI0TC
                                    353 	.globl _P2
                                    354 	.globl _P7MDOUT
                                    355 	.globl _P6MDOUT
                                    356 	.globl _P5MDOUT
                                    357 	.globl _SPI0CKR
                                    358 	.globl _P4MDOUT
                                    359 	.globl _SPI0DAT
                                    360 	.globl _SPI0CFG
                                    361 	.globl _SBUF1
                                    362 	.globl _SBUF0
                                    363 	.globl _SCON1
                                    364 	.globl _SCON0
                                    365 	.globl _CLKSEL
                                    366 	.globl _SFRPGCN
                                    367 	.globl _SSTA0
                                    368 	.globl _P1
                                    369 	.globl _PSCTL
                                    370 	.globl _CKCON
                                    371 	.globl _TH1
                                    372 	.globl _OSCXCN
                                    373 	.globl _TH0
                                    374 	.globl _OSCICL
                                    375 	.globl _TL1
                                    376 	.globl _OSCICN
                                    377 	.globl _TL0
                                    378 	.globl _CPT2MD
                                    379 	.globl _CPT1MD
                                    380 	.globl _CPT0MD
                                    381 	.globl _TMOD
                                    382 	.globl _CPT2CN
                                    383 	.globl _CPT1CN
                                    384 	.globl _CPT0CN
                                    385 	.globl _TCON
                                    386 	.globl _PCON
                                    387 	.globl _SFRLAST
                                    388 	.globl _SFRNEXT
                                    389 	.globl _SFRPAGE
                                    390 	.globl _DPH
                                    391 	.globl _DPL
                                    392 	.globl _SP
                                    393 	.globl _P0
                                    394 	.globl _amostra_disp
                                    395 	.globl _config_adc0_PARM_2
                                    396 	.globl _nova_amostra
                                    397 	.globl _config_adc0
                                    398 	.globl _le_adc0
                                    399 	.globl _ISR_ADC0
                                    400 ;--------------------------------------------------------
                                    401 ; special function registers
                                    402 ;--------------------------------------------------------
                                    403 	.area RSEG    (ABS,DATA)
      000000                        404 	.org 0x0000
                           000080   405 G$P0$0$0 == 0x0080
                           000080   406 _P0	=	0x0080
                           000081   407 G$SP$0$0 == 0x0081
                           000081   408 _SP	=	0x0081
                           000082   409 G$DPL$0$0 == 0x0082
                           000082   410 _DPL	=	0x0082
                           000083   411 G$DPH$0$0 == 0x0083
                           000083   412 _DPH	=	0x0083
                           000084   413 G$SFRPAGE$0$0 == 0x0084
                           000084   414 _SFRPAGE	=	0x0084
                           000085   415 G$SFRNEXT$0$0 == 0x0085
                           000085   416 _SFRNEXT	=	0x0085
                           000086   417 G$SFRLAST$0$0 == 0x0086
                           000086   418 _SFRLAST	=	0x0086
                           000087   419 G$PCON$0$0 == 0x0087
                           000087   420 _PCON	=	0x0087
                           000088   421 G$TCON$0$0 == 0x0088
                           000088   422 _TCON	=	0x0088
                           000088   423 G$CPT0CN$0$0 == 0x0088
                           000088   424 _CPT0CN	=	0x0088
                           000088   425 G$CPT1CN$0$0 == 0x0088
                           000088   426 _CPT1CN	=	0x0088
                           000088   427 G$CPT2CN$0$0 == 0x0088
                           000088   428 _CPT2CN	=	0x0088
                           000089   429 G$TMOD$0$0 == 0x0089
                           000089   430 _TMOD	=	0x0089
                           000089   431 G$CPT0MD$0$0 == 0x0089
                           000089   432 _CPT0MD	=	0x0089
                           000089   433 G$CPT1MD$0$0 == 0x0089
                           000089   434 _CPT1MD	=	0x0089
                           000089   435 G$CPT2MD$0$0 == 0x0089
                           000089   436 _CPT2MD	=	0x0089
                           00008A   437 G$TL0$0$0 == 0x008a
                           00008A   438 _TL0	=	0x008a
                           00008A   439 G$OSCICN$0$0 == 0x008a
                           00008A   440 _OSCICN	=	0x008a
                           00008B   441 G$TL1$0$0 == 0x008b
                           00008B   442 _TL1	=	0x008b
                           00008B   443 G$OSCICL$0$0 == 0x008b
                           00008B   444 _OSCICL	=	0x008b
                           00008C   445 G$TH0$0$0 == 0x008c
                           00008C   446 _TH0	=	0x008c
                           00008C   447 G$OSCXCN$0$0 == 0x008c
                           00008C   448 _OSCXCN	=	0x008c
                           00008D   449 G$TH1$0$0 == 0x008d
                           00008D   450 _TH1	=	0x008d
                           00008E   451 G$CKCON$0$0 == 0x008e
                           00008E   452 _CKCON	=	0x008e
                           00008F   453 G$PSCTL$0$0 == 0x008f
                           00008F   454 _PSCTL	=	0x008f
                           000090   455 G$P1$0$0 == 0x0090
                           000090   456 _P1	=	0x0090
                           000091   457 G$SSTA0$0$0 == 0x0091
                           000091   458 _SSTA0	=	0x0091
                           000096   459 G$SFRPGCN$0$0 == 0x0096
                           000096   460 _SFRPGCN	=	0x0096
                           000097   461 G$CLKSEL$0$0 == 0x0097
                           000097   462 _CLKSEL	=	0x0097
                           000098   463 G$SCON0$0$0 == 0x0098
                           000098   464 _SCON0	=	0x0098
                           000098   465 G$SCON1$0$0 == 0x0098
                           000098   466 _SCON1	=	0x0098
                           000099   467 G$SBUF0$0$0 == 0x0099
                           000099   468 _SBUF0	=	0x0099
                           000099   469 G$SBUF1$0$0 == 0x0099
                           000099   470 _SBUF1	=	0x0099
                           00009A   471 G$SPI0CFG$0$0 == 0x009a
                           00009A   472 _SPI0CFG	=	0x009a
                           00009B   473 G$SPI0DAT$0$0 == 0x009b
                           00009B   474 _SPI0DAT	=	0x009b
                           00009C   475 G$P4MDOUT$0$0 == 0x009c
                           00009C   476 _P4MDOUT	=	0x009c
                           00009D   477 G$SPI0CKR$0$0 == 0x009d
                           00009D   478 _SPI0CKR	=	0x009d
                           00009D   479 G$P5MDOUT$0$0 == 0x009d
                           00009D   480 _P5MDOUT	=	0x009d
                           00009E   481 G$P6MDOUT$0$0 == 0x009e
                           00009E   482 _P6MDOUT	=	0x009e
                           00009F   483 G$P7MDOUT$0$0 == 0x009f
                           00009F   484 _P7MDOUT	=	0x009f
                           0000A0   485 G$P2$0$0 == 0x00a0
                           0000A0   486 _P2	=	0x00a0
                           0000A1   487 G$EMI0TC$0$0 == 0x00a1
                           0000A1   488 _EMI0TC	=	0x00a1
                           0000A2   489 G$EMI0CN$0$0 == 0x00a2
                           0000A2   490 _EMI0CN	=	0x00a2
                           0000A3   491 G$EMI0CF$0$0 == 0x00a3
                           0000A3   492 _EMI0CF	=	0x00a3
                           0000A4   493 G$P0MDOUT$0$0 == 0x00a4
                           0000A4   494 _P0MDOUT	=	0x00a4
                           0000A5   495 G$P1MDOUT$0$0 == 0x00a5
                           0000A5   496 _P1MDOUT	=	0x00a5
                           0000A6   497 G$P2MDOUT$0$0 == 0x00a6
                           0000A6   498 _P2MDOUT	=	0x00a6
                           0000A7   499 G$P3MDOUT$0$0 == 0x00a7
                           0000A7   500 _P3MDOUT	=	0x00a7
                           0000A8   501 G$IE$0$0 == 0x00a8
                           0000A8   502 _IE	=	0x00a8
                           0000A9   503 G$SADDR0$0$0 == 0x00a9
                           0000A9   504 _SADDR0	=	0x00a9
                           0000A9   505 G$SADDR1$0$0 == 0x00a9
                           0000A9   506 _SADDR1	=	0x00a9
                           0000AD   507 G$P1MDIN$0$0 == 0x00ad
                           0000AD   508 _P1MDIN	=	0x00ad
                           0000AE   509 G$P2MDIN$0$0 == 0x00ae
                           0000AE   510 _P2MDIN	=	0x00ae
                           0000AF   511 G$P3MDIN$0$0 == 0x00af
                           0000AF   512 _P3MDIN	=	0x00af
                           0000B0   513 G$P3$0$0 == 0x00b0
                           0000B0   514 _P3	=	0x00b0
                           0000B7   515 G$FLSCL$0$0 == 0x00b7
                           0000B7   516 _FLSCL	=	0x00b7
                           0000B7   517 G$FLACL$0$0 == 0x00b7
                           0000B7   518 _FLACL	=	0x00b7
                           0000B8   519 G$IP$0$0 == 0x00b8
                           0000B8   520 _IP	=	0x00b8
                           0000B9   521 G$SADEN0$0$0 == 0x00b9
                           0000B9   522 _SADEN0	=	0x00b9
                           0000BA   523 G$AMX2CF$0$0 == 0x00ba
                           0000BA   524 _AMX2CF	=	0x00ba
                           0000BD   525 G$AMX0PRT$0$0 == 0x00bd
                           0000BD   526 _AMX0PRT	=	0x00bd
                           0000BA   527 G$AMX0CF$0$0 == 0x00ba
                           0000BA   528 _AMX0CF	=	0x00ba
                           0000BB   529 G$AMX0SL$0$0 == 0x00bb
                           0000BB   530 _AMX0SL	=	0x00bb
                           0000BB   531 G$AMX2SL$0$0 == 0x00bb
                           0000BB   532 _AMX2SL	=	0x00bb
                           0000BC   533 G$ADC0CF$0$0 == 0x00bc
                           0000BC   534 _ADC0CF	=	0x00bc
                           0000BC   535 G$ADC2CF$0$0 == 0x00bc
                           0000BC   536 _ADC2CF	=	0x00bc
                           0000BE   537 G$ADC0L$0$0 == 0x00be
                           0000BE   538 _ADC0L	=	0x00be
                           0000BE   539 G$ADC2$0$0 == 0x00be
                           0000BE   540 _ADC2	=	0x00be
                           0000BF   541 G$ADC0H$0$0 == 0x00bf
                           0000BF   542 _ADC0H	=	0x00bf
                           0000C0   543 G$SMB0CN$0$0 == 0x00c0
                           0000C0   544 _SMB0CN	=	0x00c0
                           0000C0   545 G$CAN0STA$0$0 == 0x00c0
                           0000C0   546 _CAN0STA	=	0x00c0
                           0000C1   547 G$SMB0STA$0$0 == 0x00c1
                           0000C1   548 _SMB0STA	=	0x00c1
                           0000C2   549 G$SMB0DAT$0$0 == 0x00c2
                           0000C2   550 _SMB0DAT	=	0x00c2
                           0000C3   551 G$SMB0ADR$0$0 == 0x00c3
                           0000C3   552 _SMB0ADR	=	0x00c3
                           0000C4   553 G$ADC0GTL$0$0 == 0x00c4
                           0000C4   554 _ADC0GTL	=	0x00c4
                           0000C4   555 G$ADC2GT$0$0 == 0x00c4
                           0000C4   556 _ADC2GT	=	0x00c4
                           0000C5   557 G$ADC0GTH$0$0 == 0x00c5
                           0000C5   558 _ADC0GTH	=	0x00c5
                           0000C6   559 G$ADC0LTL$0$0 == 0x00c6
                           0000C6   560 _ADC0LTL	=	0x00c6
                           0000C6   561 G$ADC2LT$0$0 == 0x00c6
                           0000C6   562 _ADC2LT	=	0x00c6
                           0000C7   563 G$ADC0LTH$0$0 == 0x00c7
                           0000C7   564 _ADC0LTH	=	0x00c7
                           0000C8   565 G$TMR2CN$0$0 == 0x00c8
                           0000C8   566 _TMR2CN	=	0x00c8
                           0000C8   567 G$TMR3CN$0$0 == 0x00c8
                           0000C8   568 _TMR3CN	=	0x00c8
                           0000C8   569 G$TMR4CN$0$0 == 0x00c8
                           0000C8   570 _TMR4CN	=	0x00c8
                           0000C8   571 G$P4$0$0 == 0x00c8
                           0000C8   572 _P4	=	0x00c8
                           0000C9   573 G$TMR2CF$0$0 == 0x00c9
                           0000C9   574 _TMR2CF	=	0x00c9
                           0000C9   575 G$TMR3CF$0$0 == 0x00c9
                           0000C9   576 _TMR3CF	=	0x00c9
                           0000C9   577 G$TMR4CF$0$0 == 0x00c9
                           0000C9   578 _TMR4CF	=	0x00c9
                           0000CA   579 G$RCAP2L$0$0 == 0x00ca
                           0000CA   580 _RCAP2L	=	0x00ca
                           0000CA   581 G$RCAP3L$0$0 == 0x00ca
                           0000CA   582 _RCAP3L	=	0x00ca
                           0000CA   583 G$RCAP4L$0$0 == 0x00ca
                           0000CA   584 _RCAP4L	=	0x00ca
                           0000CB   585 G$RCAP2H$0$0 == 0x00cb
                           0000CB   586 _RCAP2H	=	0x00cb
                           0000CB   587 G$RCAP3H$0$0 == 0x00cb
                           0000CB   588 _RCAP3H	=	0x00cb
                           0000CB   589 G$RCAP4H$0$0 == 0x00cb
                           0000CB   590 _RCAP4H	=	0x00cb
                           0000CC   591 G$TMR2L$0$0 == 0x00cc
                           0000CC   592 _TMR2L	=	0x00cc
                           0000CC   593 G$TMR3L$0$0 == 0x00cc
                           0000CC   594 _TMR3L	=	0x00cc
                           0000CC   595 G$TMR4L$0$0 == 0x00cc
                           0000CC   596 _TMR4L	=	0x00cc
                           0000CD   597 G$TMR2H$0$0 == 0x00cd
                           0000CD   598 _TMR2H	=	0x00cd
                           0000CD   599 G$TMR3H$0$0 == 0x00cd
                           0000CD   600 _TMR3H	=	0x00cd
                           0000CD   601 G$TMR4H$0$0 == 0x00cd
                           0000CD   602 _TMR4H	=	0x00cd
                           0000CF   603 G$SMB0CR$0$0 == 0x00cf
                           0000CF   604 _SMB0CR	=	0x00cf
                           0000D0   605 G$PSW$0$0 == 0x00d0
                           0000D0   606 _PSW	=	0x00d0
                           0000D1   607 G$REF0CN$0$0 == 0x00d1
                           0000D1   608 _REF0CN	=	0x00d1
                           0000D2   609 G$DAC0L$0$0 == 0x00d2
                           0000D2   610 _DAC0L	=	0x00d2
                           0000D2   611 G$DAC1L$0$0 == 0x00d2
                           0000D2   612 _DAC1L	=	0x00d2
                           0000D3   613 G$DAC0H$0$0 == 0x00d3
                           0000D3   614 _DAC0H	=	0x00d3
                           0000D3   615 G$DAC1H$0$0 == 0x00d3
                           0000D3   616 _DAC1H	=	0x00d3
                           0000D4   617 G$DAC0CN$0$0 == 0x00d4
                           0000D4   618 _DAC0CN	=	0x00d4
                           0000D4   619 G$DAC1CN$0$0 == 0x00d4
                           0000D4   620 _DAC1CN	=	0x00d4
                           0000D6   621 G$HVA0CN$0$0 == 0x00d6
                           0000D6   622 _HVA0CN	=	0x00d6
                           0000D8   623 G$PCA0CN$0$0 == 0x00d8
                           0000D8   624 _PCA0CN	=	0x00d8
                           0000D8   625 G$CAN0DATL$0$0 == 0x00d8
                           0000D8   626 _CAN0DATL	=	0x00d8
                           0000D8   627 G$P5$0$0 == 0x00d8
                           0000D8   628 _P5	=	0x00d8
                           0000D9   629 G$PCA0MD$0$0 == 0x00d9
                           0000D9   630 _PCA0MD	=	0x00d9
                           0000D9   631 G$CAN0DATH$0$0 == 0x00d9
                           0000D9   632 _CAN0DATH	=	0x00d9
                           0000DA   633 G$PCA0CPM0$0$0 == 0x00da
                           0000DA   634 _PCA0CPM0	=	0x00da
                           0000DA   635 G$CAN0ADR$0$0 == 0x00da
                           0000DA   636 _CAN0ADR	=	0x00da
                           0000DB   637 G$PCA0CPM1$0$0 == 0x00db
                           0000DB   638 _PCA0CPM1	=	0x00db
                           0000DB   639 G$CAN0TST$0$0 == 0x00db
                           0000DB   640 _CAN0TST	=	0x00db
                           0000DC   641 G$PCA0CPM2$0$0 == 0x00dc
                           0000DC   642 _PCA0CPM2	=	0x00dc
                           0000DD   643 G$PCA0CPM3$0$0 == 0x00dd
                           0000DD   644 _PCA0CPM3	=	0x00dd
                           0000DE   645 G$PCA0CPM4$0$0 == 0x00de
                           0000DE   646 _PCA0CPM4	=	0x00de
                           0000DF   647 G$PCA0CPM5$0$0 == 0x00df
                           0000DF   648 _PCA0CPM5	=	0x00df
                           0000E0   649 G$ACC$0$0 == 0x00e0
                           0000E0   650 _ACC	=	0x00e0
                           0000E1   651 G$PCA0CPL5$0$0 == 0x00e1
                           0000E1   652 _PCA0CPL5	=	0x00e1
                           0000E1   653 G$XBR0$0$0 == 0x00e1
                           0000E1   654 _XBR0	=	0x00e1
                           0000E2   655 G$PCA0CPH5$0$0 == 0x00e2
                           0000E2   656 _PCA0CPH5	=	0x00e2
                           0000E2   657 G$XBR1$0$0 == 0x00e2
                           0000E2   658 _XBR1	=	0x00e2
                           0000E3   659 G$XBR2$0$0 == 0x00e3
                           0000E3   660 _XBR2	=	0x00e3
                           0000E4   661 G$XBR3$0$0 == 0x00e4
                           0000E4   662 _XBR3	=	0x00e4
                           0000E6   663 G$EIE1$0$0 == 0x00e6
                           0000E6   664 _EIE1	=	0x00e6
                           0000E7   665 G$EIE2$0$0 == 0x00e7
                           0000E7   666 _EIE2	=	0x00e7
                           0000E8   667 G$ADC0CN$0$0 == 0x00e8
                           0000E8   668 _ADC0CN	=	0x00e8
                           0000E8   669 G$ADC2CN$0$0 == 0x00e8
                           0000E8   670 _ADC2CN	=	0x00e8
                           0000E8   671 G$P6$0$0 == 0x00e8
                           0000E8   672 _P6	=	0x00e8
                           0000E9   673 G$PCA0CPL2$0$0 == 0x00e9
                           0000E9   674 _PCA0CPL2	=	0x00e9
                           0000EA   675 G$PCA0CPH2$0$0 == 0x00ea
                           0000EA   676 _PCA0CPH2	=	0x00ea
                           0000EB   677 G$PCA0CPL3$0$0 == 0x00eb
                           0000EB   678 _PCA0CPL3	=	0x00eb
                           0000EC   679 G$PCA0CPH3$0$0 == 0x00ec
                           0000EC   680 _PCA0CPH3	=	0x00ec
                           0000ED   681 G$PCA0CPL4$0$0 == 0x00ed
                           0000ED   682 _PCA0CPL4	=	0x00ed
                           0000EE   683 G$PCA0CPH4$0$0 == 0x00ee
                           0000EE   684 _PCA0CPH4	=	0x00ee
                           0000EF   685 G$RSTSRC$0$0 == 0x00ef
                           0000EF   686 _RSTSRC	=	0x00ef
                           0000F0   687 G$B$0$0 == 0x00f0
                           0000F0   688 _B	=	0x00f0
                           0000F6   689 G$EIP1$0$0 == 0x00f6
                           0000F6   690 _EIP1	=	0x00f6
                           0000F7   691 G$EIP2$0$0 == 0x00f7
                           0000F7   692 _EIP2	=	0x00f7
                           0000F8   693 G$SPI0CN$0$0 == 0x00f8
                           0000F8   694 _SPI0CN	=	0x00f8
                           0000F8   695 G$CAN0CN$0$0 == 0x00f8
                           0000F8   696 _CAN0CN	=	0x00f8
                           0000F8   697 G$P7$0$0 == 0x00f8
                           0000F8   698 _P7	=	0x00f8
                           0000F9   699 G$PCA0L$0$0 == 0x00f9
                           0000F9   700 _PCA0L	=	0x00f9
                           0000FA   701 G$PCA0H$0$0 == 0x00fa
                           0000FA   702 _PCA0H	=	0x00fa
                           0000FB   703 G$PCA0CPL0$0$0 == 0x00fb
                           0000FB   704 _PCA0CPL0	=	0x00fb
                           0000FC   705 G$PCA0CPH0$0$0 == 0x00fc
                           0000FC   706 _PCA0CPH0	=	0x00fc
                           0000FD   707 G$PCA0CPL1$0$0 == 0x00fd
                           0000FD   708 _PCA0CPL1	=	0x00fd
                           0000FE   709 G$PCA0CPH1$0$0 == 0x00fe
                           0000FE   710 _PCA0CPH1	=	0x00fe
                           0000FF   711 G$WDTCN$0$0 == 0x00ff
                           0000FF   712 _WDTCN	=	0x00ff
                           00FAF9   713 G$PCA0$0$0 == 0xfaf9
                           00FAF9   714 _PCA0	=	0xfaf9
                           00FCFB   715 G$PCA0CP0$0$0 == 0xfcfb
                           00FCFB   716 _PCA0CP0	=	0xfcfb
                           00FEFD   717 G$PCA0CP1$0$0 == 0xfefd
                           00FEFD   718 _PCA0CP1	=	0xfefd
                           00EAE9   719 G$PCA0CP2$0$0 == 0xeae9
                           00EAE9   720 _PCA0CP2	=	0xeae9
                           00ECEB   721 G$PCA0CP3$0$0 == 0xeceb
                           00ECEB   722 _PCA0CP3	=	0xeceb
                           00EEED   723 G$PCA0CP4$0$0 == 0xeeed
                           00EEED   724 _PCA0CP4	=	0xeeed
                           00E2E1   725 G$PCA0CP5$0$0 == 0xe2e1
                           00E2E1   726 _PCA0CP5	=	0xe2e1
                           00D9D8   727 G$CAN0DAT$0$0 == 0xd9d8
                           00D9D8   728 _CAN0DAT	=	0xd9d8
                           00D3D2   729 G$DAC0$0$0 == 0xd3d2
                           00D3D2   730 _DAC0	=	0xd3d2
                           00D3D2   731 G$DAC1$0$0 == 0xd3d2
                           00D3D2   732 _DAC1	=	0xd3d2
                           00CBCA   733 G$RCAP2$0$0 == 0xcbca
                           00CBCA   734 _RCAP2	=	0xcbca
                           00CBCA   735 G$RCAP3$0$0 == 0xcbca
                           00CBCA   736 _RCAP3	=	0xcbca
                           00CBCA   737 G$RCAP4$0$0 == 0xcbca
                           00CBCA   738 _RCAP4	=	0xcbca
                           00CDCC   739 G$TMR2$0$0 == 0xcdcc
                           00CDCC   740 _TMR2	=	0xcdcc
                           00CDCC   741 G$TMR3$0$0 == 0xcdcc
                           00CDCC   742 _TMR3	=	0xcdcc
                           00CDCC   743 G$TMR4$0$0 == 0xcdcc
                           00CDCC   744 _TMR4	=	0xcdcc
                           00C5C4   745 G$ADC0GT$0$0 == 0xc5c4
                           00C5C4   746 _ADC0GT	=	0xc5c4
                           00C7C6   747 G$ADC0LT$0$0 == 0xc7c6
                           00C7C6   748 _ADC0LT	=	0xc7c6
                           00BFBE   749 G$ADC0$0$0 == 0xbfbe
                           00BFBE   750 _ADC0	=	0xbfbe
                           008382   751 G$DP$0$0 == 0x8382
                           008382   752 _DP	=	0x8382
                           0000A2   753 G$_XPAGE$0$0 == 0x00a2
                           0000A2   754 __XPAGE	=	0x00a2
                                    755 ;--------------------------------------------------------
                                    756 ; special function bits
                                    757 ;--------------------------------------------------------
                                    758 	.area RSEG    (ABS,DATA)
      000000                        759 	.org 0x0000
                           00008F   760 G$TF1$0$0 == 0x008f
                           00008F   761 _TF1	=	0x008f
                           00008E   762 G$TR1$0$0 == 0x008e
                           00008E   763 _TR1	=	0x008e
                           00008D   764 G$TF0$0$0 == 0x008d
                           00008D   765 _TF0	=	0x008d
                           00008C   766 G$TR0$0$0 == 0x008c
                           00008C   767 _TR0	=	0x008c
                           00008B   768 G$IE1$0$0 == 0x008b
                           00008B   769 _IE1	=	0x008b
                           00008A   770 G$IT1$0$0 == 0x008a
                           00008A   771 _IT1	=	0x008a
                           000089   772 G$IE0$0$0 == 0x0089
                           000089   773 _IE0	=	0x0089
                           000088   774 G$IT0$0$0 == 0x0088
                           000088   775 _IT0	=	0x0088
                           00008F   776 G$CP0EN$0$0 == 0x008f
                           00008F   777 _CP0EN	=	0x008f
                           00008E   778 G$CP0OUT$0$0 == 0x008e
                           00008E   779 _CP0OUT	=	0x008e
                           00008D   780 G$CP0RIF$0$0 == 0x008d
                           00008D   781 _CP0RIF	=	0x008d
                           00008C   782 G$CP0FIF$0$0 == 0x008c
                           00008C   783 _CP0FIF	=	0x008c
                           00008B   784 G$CP0HYP1$0$0 == 0x008b
                           00008B   785 _CP0HYP1	=	0x008b
                           00008A   786 G$CP0HYP0$0$0 == 0x008a
                           00008A   787 _CP0HYP0	=	0x008a
                           000089   788 G$CP0HYN1$0$0 == 0x0089
                           000089   789 _CP0HYN1	=	0x0089
                           000088   790 G$CP0HYN0$0$0 == 0x0088
                           000088   791 _CP0HYN0	=	0x0088
                           00008F   792 G$CP1EN$0$0 == 0x008f
                           00008F   793 _CP1EN	=	0x008f
                           00008E   794 G$CP1OUT$0$0 == 0x008e
                           00008E   795 _CP1OUT	=	0x008e
                           00008D   796 G$CP1RIF$0$0 == 0x008d
                           00008D   797 _CP1RIF	=	0x008d
                           00008C   798 G$CP1FIF$0$0 == 0x008c
                           00008C   799 _CP1FIF	=	0x008c
                           00008B   800 G$CP1HYP1$0$0 == 0x008b
                           00008B   801 _CP1HYP1	=	0x008b
                           00008A   802 G$CP1HYP0$0$0 == 0x008a
                           00008A   803 _CP1HYP0	=	0x008a
                           000089   804 G$CP1HYN1$0$0 == 0x0089
                           000089   805 _CP1HYN1	=	0x0089
                           000088   806 G$CP1HYN0$0$0 == 0x0088
                           000088   807 _CP1HYN0	=	0x0088
                           00008F   808 G$CP2EN$0$0 == 0x008f
                           00008F   809 _CP2EN	=	0x008f
                           00008E   810 G$CP2OUT$0$0 == 0x008e
                           00008E   811 _CP2OUT	=	0x008e
                           00008D   812 G$CP2RIF$0$0 == 0x008d
                           00008D   813 _CP2RIF	=	0x008d
                           00008C   814 G$CP2FIF$0$0 == 0x008c
                           00008C   815 _CP2FIF	=	0x008c
                           00008B   816 G$CP2HYP1$0$0 == 0x008b
                           00008B   817 _CP2HYP1	=	0x008b
                           00008A   818 G$CP2HYP0$0$0 == 0x008a
                           00008A   819 _CP2HYP0	=	0x008a
                           000089   820 G$CP2HYN1$0$0 == 0x0089
                           000089   821 _CP2HYN1	=	0x0089
                           000088   822 G$CP2HYN0$0$0 == 0x0088
                           000088   823 _CP2HYN0	=	0x0088
                           00009F   824 G$SM00$0$0 == 0x009f
                           00009F   825 _SM00	=	0x009f
                           00009E   826 G$SM10$0$0 == 0x009e
                           00009E   827 _SM10	=	0x009e
                           00009D   828 G$SM20$0$0 == 0x009d
                           00009D   829 _SM20	=	0x009d
                           00009C   830 G$REN0$0$0 == 0x009c
                           00009C   831 _REN0	=	0x009c
                           00009B   832 G$TB80$0$0 == 0x009b
                           00009B   833 _TB80	=	0x009b
                           00009A   834 G$RB80$0$0 == 0x009a
                           00009A   835 _RB80	=	0x009a
                           000099   836 G$TI0$0$0 == 0x0099
                           000099   837 _TI0	=	0x0099
                           000098   838 G$RI0$0$0 == 0x0098
                           000098   839 _RI0	=	0x0098
                           00009F   840 G$S1MODE$0$0 == 0x009f
                           00009F   841 _S1MODE	=	0x009f
                           00009D   842 G$MCE1$0$0 == 0x009d
                           00009D   843 _MCE1	=	0x009d
                           00009C   844 G$REN1$0$0 == 0x009c
                           00009C   845 _REN1	=	0x009c
                           00009B   846 G$TB81$0$0 == 0x009b
                           00009B   847 _TB81	=	0x009b
                           00009A   848 G$RB81$0$0 == 0x009a
                           00009A   849 _RB81	=	0x009a
                           000099   850 G$TI1$0$0 == 0x0099
                           000099   851 _TI1	=	0x0099
                           000098   852 G$RI1$0$0 == 0x0098
                           000098   853 _RI1	=	0x0098
                           0000AF   854 G$EA$0$0 == 0x00af
                           0000AF   855 _EA	=	0x00af
                           0000AD   856 G$ET2$0$0 == 0x00ad
                           0000AD   857 _ET2	=	0x00ad
                           0000AC   858 G$ES0$0$0 == 0x00ac
                           0000AC   859 _ES0	=	0x00ac
                           0000AB   860 G$ET1$0$0 == 0x00ab
                           0000AB   861 _ET1	=	0x00ab
                           0000AA   862 G$EX1$0$0 == 0x00aa
                           0000AA   863 _EX1	=	0x00aa
                           0000A9   864 G$ET0$0$0 == 0x00a9
                           0000A9   865 _ET0	=	0x00a9
                           0000A8   866 G$EX0$0$0 == 0x00a8
                           0000A8   867 _EX0	=	0x00a8
                           0000BD   868 G$PT2$0$0 == 0x00bd
                           0000BD   869 _PT2	=	0x00bd
                           0000BC   870 G$PS0$0$0 == 0x00bc
                           0000BC   871 _PS0	=	0x00bc
                           0000BB   872 G$PT1$0$0 == 0x00bb
                           0000BB   873 _PT1	=	0x00bb
                           0000BA   874 G$PX1$0$0 == 0x00ba
                           0000BA   875 _PX1	=	0x00ba
                           0000B9   876 G$PT0$0$0 == 0x00b9
                           0000B9   877 _PT0	=	0x00b9
                           0000B8   878 G$PX0$0$0 == 0x00b8
                           0000B8   879 _PX0	=	0x00b8
                           0000C7   880 G$BUSY$0$0 == 0x00c7
                           0000C7   881 _BUSY	=	0x00c7
                           0000C6   882 G$ENSMB$0$0 == 0x00c6
                           0000C6   883 _ENSMB	=	0x00c6
                           0000C5   884 G$STA$0$0 == 0x00c5
                           0000C5   885 _STA	=	0x00c5
                           0000C4   886 G$STO$0$0 == 0x00c4
                           0000C4   887 _STO	=	0x00c4
                           0000C3   888 G$SI$0$0 == 0x00c3
                           0000C3   889 _SI	=	0x00c3
                           0000C2   890 G$AA$0$0 == 0x00c2
                           0000C2   891 _AA	=	0x00c2
                           0000C1   892 G$SMBFTE$0$0 == 0x00c1
                           0000C1   893 _SMBFTE	=	0x00c1
                           0000C0   894 G$SMBTOE$0$0 == 0x00c0
                           0000C0   895 _SMBTOE	=	0x00c0
                           0000C7   896 G$BOFF$0$0 == 0x00c7
                           0000C7   897 _BOFF	=	0x00c7
                           0000C6   898 G$EWARN$0$0 == 0x00c6
                           0000C6   899 _EWARN	=	0x00c6
                           0000C5   900 G$EPASS$0$0 == 0x00c5
                           0000C5   901 _EPASS	=	0x00c5
                           0000C4   902 G$RXOK$0$0 == 0x00c4
                           0000C4   903 _RXOK	=	0x00c4
                           0000C3   904 G$TXOK$0$0 == 0x00c3
                           0000C3   905 _TXOK	=	0x00c3
                           0000C2   906 G$LEC2$0$0 == 0x00c2
                           0000C2   907 _LEC2	=	0x00c2
                           0000C1   908 G$LEC1$0$0 == 0x00c1
                           0000C1   909 _LEC1	=	0x00c1
                           0000C0   910 G$LEC0$0$0 == 0x00c0
                           0000C0   911 _LEC0	=	0x00c0
                           0000CF   912 G$TF2$0$0 == 0x00cf
                           0000CF   913 _TF2	=	0x00cf
                           0000CE   914 G$EXF2$0$0 == 0x00ce
                           0000CE   915 _EXF2	=	0x00ce
                           0000CB   916 G$EXEN2$0$0 == 0x00cb
                           0000CB   917 _EXEN2	=	0x00cb
                           0000CA   918 G$TR2$0$0 == 0x00ca
                           0000CA   919 _TR2	=	0x00ca
                           0000C9   920 G$CT2$0$0 == 0x00c9
                           0000C9   921 _CT2	=	0x00c9
                           0000C8   922 G$CPRL2$0$0 == 0x00c8
                           0000C8   923 _CPRL2	=	0x00c8
                           0000CF   924 G$TF3$0$0 == 0x00cf
                           0000CF   925 _TF3	=	0x00cf
                           0000CE   926 G$EXF3$0$0 == 0x00ce
                           0000CE   927 _EXF3	=	0x00ce
                           0000CB   928 G$EXEN3$0$0 == 0x00cb
                           0000CB   929 _EXEN3	=	0x00cb
                           0000CA   930 G$TR3$0$0 == 0x00ca
                           0000CA   931 _TR3	=	0x00ca
                           0000C9   932 G$CT3$0$0 == 0x00c9
                           0000C9   933 _CT3	=	0x00c9
                           0000C8   934 G$CPRL3$0$0 == 0x00c8
                           0000C8   935 _CPRL3	=	0x00c8
                           0000CF   936 G$TF4$0$0 == 0x00cf
                           0000CF   937 _TF4	=	0x00cf
                           0000CE   938 G$EXF4$0$0 == 0x00ce
                           0000CE   939 _EXF4	=	0x00ce
                           0000CB   940 G$EXEN4$0$0 == 0x00cb
                           0000CB   941 _EXEN4	=	0x00cb
                           0000CA   942 G$TR4$0$0 == 0x00ca
                           0000CA   943 _TR4	=	0x00ca
                           0000C9   944 G$CT4$0$0 == 0x00c9
                           0000C9   945 _CT4	=	0x00c9
                           0000C8   946 G$CPRL4$0$0 == 0x00c8
                           0000C8   947 _CPRL4	=	0x00c8
                           0000D7   948 G$CY$0$0 == 0x00d7
                           0000D7   949 _CY	=	0x00d7
                           0000D6   950 G$AC$0$0 == 0x00d6
                           0000D6   951 _AC	=	0x00d6
                           0000D5   952 G$F0$0$0 == 0x00d5
                           0000D5   953 _F0	=	0x00d5
                           0000D4   954 G$RS1$0$0 == 0x00d4
                           0000D4   955 _RS1	=	0x00d4
                           0000D3   956 G$RS0$0$0 == 0x00d3
                           0000D3   957 _RS0	=	0x00d3
                           0000D2   958 G$OV$0$0 == 0x00d2
                           0000D2   959 _OV	=	0x00d2
                           0000D1   960 G$F1$0$0 == 0x00d1
                           0000D1   961 _F1	=	0x00d1
                           0000D0   962 G$P$0$0 == 0x00d0
                           0000D0   963 _P	=	0x00d0
                           0000DF   964 G$CF$0$0 == 0x00df
                           0000DF   965 _CF	=	0x00df
                           0000DE   966 G$CR$0$0 == 0x00de
                           0000DE   967 _CR	=	0x00de
                           0000DD   968 G$CCF5$0$0 == 0x00dd
                           0000DD   969 _CCF5	=	0x00dd
                           0000DC   970 G$CCF4$0$0 == 0x00dc
                           0000DC   971 _CCF4	=	0x00dc
                           0000DB   972 G$CCF3$0$0 == 0x00db
                           0000DB   973 _CCF3	=	0x00db
                           0000DA   974 G$CCF2$0$0 == 0x00da
                           0000DA   975 _CCF2	=	0x00da
                           0000D9   976 G$CCF1$0$0 == 0x00d9
                           0000D9   977 _CCF1	=	0x00d9
                           0000D8   978 G$CCF0$0$0 == 0x00d8
                           0000D8   979 _CCF0	=	0x00d8
                           0000EF   980 G$AD0EN$0$0 == 0x00ef
                           0000EF   981 _AD0EN	=	0x00ef
                           0000EE   982 G$AD0TM$0$0 == 0x00ee
                           0000EE   983 _AD0TM	=	0x00ee
                           0000ED   984 G$AD0INT$0$0 == 0x00ed
                           0000ED   985 _AD0INT	=	0x00ed
                           0000EC   986 G$AD0BUSY$0$0 == 0x00ec
                           0000EC   987 _AD0BUSY	=	0x00ec
                           0000EB   988 G$AD0CM1$0$0 == 0x00eb
                           0000EB   989 _AD0CM1	=	0x00eb
                           0000EA   990 G$AD0CM0$0$0 == 0x00ea
                           0000EA   991 _AD0CM0	=	0x00ea
                           0000E9   992 G$AD0WINT$0$0 == 0x00e9
                           0000E9   993 _AD0WINT	=	0x00e9
                           0000E8   994 G$AD0LJST$0$0 == 0x00e8
                           0000E8   995 _AD0LJST	=	0x00e8
                           0000EF   996 G$AD2EN$0$0 == 0x00ef
                           0000EF   997 _AD2EN	=	0x00ef
                           0000EE   998 G$AD2TM$0$0 == 0x00ee
                           0000EE   999 _AD2TM	=	0x00ee
                           0000ED  1000 G$AD2INT$0$0 == 0x00ed
                           0000ED  1001 _AD2INT	=	0x00ed
                           0000EC  1002 G$AD2BUSY$0$0 == 0x00ec
                           0000EC  1003 _AD2BUSY	=	0x00ec
                           0000EB  1004 G$AD2CM2$0$0 == 0x00eb
                           0000EB  1005 _AD2CM2	=	0x00eb
                           0000EA  1006 G$AD2CM1$0$0 == 0x00ea
                           0000EA  1007 _AD2CM1	=	0x00ea
                           0000E9  1008 G$AD2CM0$0$0 == 0x00e9
                           0000E9  1009 _AD2CM0	=	0x00e9
                           0000E8  1010 G$AD2WINT$0$0 == 0x00e8
                           0000E8  1011 _AD2WINT	=	0x00e8
                           0000FF  1012 G$SPIF$0$0 == 0x00ff
                           0000FF  1013 _SPIF	=	0x00ff
                           0000FE  1014 G$WCOL$0$0 == 0x00fe
                           0000FE  1015 _WCOL	=	0x00fe
                           0000FD  1016 G$MODF$0$0 == 0x00fd
                           0000FD  1017 _MODF	=	0x00fd
                           0000FC  1018 G$RXOVRN$0$0 == 0x00fc
                           0000FC  1019 _RXOVRN	=	0x00fc
                           0000FB  1020 G$NSSMD1$0$0 == 0x00fb
                           0000FB  1021 _NSSMD1	=	0x00fb
                           0000FA  1022 G$NSSMD0$0$0 == 0x00fa
                           0000FA  1023 _NSSMD0	=	0x00fa
                           0000F9  1024 G$TXBMT$0$0 == 0x00f9
                           0000F9  1025 _TXBMT	=	0x00f9
                           0000F8  1026 G$SPIEN$0$0 == 0x00f8
                           0000F8  1027 _SPIEN	=	0x00f8
                           0000F8  1028 G$CANINIT$0$0 == 0x00f8
                           0000F8  1029 _CANINIT	=	0x00f8
                           0000F9  1030 G$CANIE$0$0 == 0x00f9
                           0000F9  1031 _CANIE	=	0x00f9
                           0000FA  1032 G$CANSIE$0$0 == 0x00fa
                           0000FA  1033 _CANSIE	=	0x00fa
                           0000FB  1034 G$CANEIE$0$0 == 0x00fb
                           0000FB  1035 _CANEIE	=	0x00fb
                           0000FC  1036 G$CANIF$0$0 == 0x00fc
                           0000FC  1037 _CANIF	=	0x00fc
                           0000FD  1038 G$CANDAR$0$0 == 0x00fd
                           0000FD  1039 _CANDAR	=	0x00fd
                           0000FE  1040 G$CANCCE$0$0 == 0x00fe
                           0000FE  1041 _CANCCE	=	0x00fe
                           0000FF  1042 G$CANTEST$0$0 == 0x00ff
                           0000FF  1043 _CANTEST	=	0x00ff
                           000080  1044 G$P0_0$0$0 == 0x0080
                           000080  1045 _P0_0	=	0x0080
                           000081  1046 G$P0_1$0$0 == 0x0081
                           000081  1047 _P0_1	=	0x0081
                           000082  1048 G$P0_2$0$0 == 0x0082
                           000082  1049 _P0_2	=	0x0082
                           000083  1050 G$P0_3$0$0 == 0x0083
                           000083  1051 _P0_3	=	0x0083
                           000084  1052 G$P0_4$0$0 == 0x0084
                           000084  1053 _P0_4	=	0x0084
                           000085  1054 G$P0_5$0$0 == 0x0085
                           000085  1055 _P0_5	=	0x0085
                           000086  1056 G$P0_6$0$0 == 0x0086
                           000086  1057 _P0_6	=	0x0086
                           000087  1058 G$P0_7$0$0 == 0x0087
                           000087  1059 _P0_7	=	0x0087
                           000090  1060 G$P1_0$0$0 == 0x0090
                           000090  1061 _P1_0	=	0x0090
                           000091  1062 G$P1_1$0$0 == 0x0091
                           000091  1063 _P1_1	=	0x0091
                           000092  1064 G$P1_2$0$0 == 0x0092
                           000092  1065 _P1_2	=	0x0092
                           000093  1066 G$P1_3$0$0 == 0x0093
                           000093  1067 _P1_3	=	0x0093
                           000094  1068 G$P1_4$0$0 == 0x0094
                           000094  1069 _P1_4	=	0x0094
                           000095  1070 G$P1_5$0$0 == 0x0095
                           000095  1071 _P1_5	=	0x0095
                           000096  1072 G$P1_6$0$0 == 0x0096
                           000096  1073 _P1_6	=	0x0096
                           000097  1074 G$P1_7$0$0 == 0x0097
                           000097  1075 _P1_7	=	0x0097
                           0000A0  1076 G$P2_0$0$0 == 0x00a0
                           0000A0  1077 _P2_0	=	0x00a0
                           0000A1  1078 G$P2_1$0$0 == 0x00a1
                           0000A1  1079 _P2_1	=	0x00a1
                           0000A2  1080 G$P2_2$0$0 == 0x00a2
                           0000A2  1081 _P2_2	=	0x00a2
                           0000A3  1082 G$P2_3$0$0 == 0x00a3
                           0000A3  1083 _P2_3	=	0x00a3
                           0000A4  1084 G$P2_4$0$0 == 0x00a4
                           0000A4  1085 _P2_4	=	0x00a4
                           0000A5  1086 G$P2_5$0$0 == 0x00a5
                           0000A5  1087 _P2_5	=	0x00a5
                           0000A6  1088 G$P2_6$0$0 == 0x00a6
                           0000A6  1089 _P2_6	=	0x00a6
                           0000A7  1090 G$P2_7$0$0 == 0x00a7
                           0000A7  1091 _P2_7	=	0x00a7
                           0000B0  1092 G$P3_0$0$0 == 0x00b0
                           0000B0  1093 _P3_0	=	0x00b0
                           0000B1  1094 G$P3_1$0$0 == 0x00b1
                           0000B1  1095 _P3_1	=	0x00b1
                           0000B2  1096 G$P3_2$0$0 == 0x00b2
                           0000B2  1097 _P3_2	=	0x00b2
                           0000B3  1098 G$P3_3$0$0 == 0x00b3
                           0000B3  1099 _P3_3	=	0x00b3
                           0000B4  1100 G$P3_4$0$0 == 0x00b4
                           0000B4  1101 _P3_4	=	0x00b4
                           0000B5  1102 G$P3_5$0$0 == 0x00b5
                           0000B5  1103 _P3_5	=	0x00b5
                           0000B6  1104 G$P3_6$0$0 == 0x00b6
                           0000B6  1105 _P3_6	=	0x00b6
                           0000B7  1106 G$P3_7$0$0 == 0x00b7
                           0000B7  1107 _P3_7	=	0x00b7
                           0000C8  1108 G$P4_0$0$0 == 0x00c8
                           0000C8  1109 _P4_0	=	0x00c8
                           0000C9  1110 G$P4_1$0$0 == 0x00c9
                           0000C9  1111 _P4_1	=	0x00c9
                           0000CA  1112 G$P4_2$0$0 == 0x00ca
                           0000CA  1113 _P4_2	=	0x00ca
                           0000CB  1114 G$P4_3$0$0 == 0x00cb
                           0000CB  1115 _P4_3	=	0x00cb
                           0000CC  1116 G$P4_4$0$0 == 0x00cc
                           0000CC  1117 _P4_4	=	0x00cc
                           0000CD  1118 G$P4_5$0$0 == 0x00cd
                           0000CD  1119 _P4_5	=	0x00cd
                           0000CE  1120 G$P4_6$0$0 == 0x00ce
                           0000CE  1121 _P4_6	=	0x00ce
                           0000CF  1122 G$P4_7$0$0 == 0x00cf
                           0000CF  1123 _P4_7	=	0x00cf
                           0000D8  1124 G$P5_0$0$0 == 0x00d8
                           0000D8  1125 _P5_0	=	0x00d8
                           0000D9  1126 G$P5_1$0$0 == 0x00d9
                           0000D9  1127 _P5_1	=	0x00d9
                           0000DA  1128 G$P5_2$0$0 == 0x00da
                           0000DA  1129 _P5_2	=	0x00da
                           0000DB  1130 G$P5_3$0$0 == 0x00db
                           0000DB  1131 _P5_3	=	0x00db
                           0000DC  1132 G$P5_4$0$0 == 0x00dc
                           0000DC  1133 _P5_4	=	0x00dc
                           0000DD  1134 G$P5_5$0$0 == 0x00dd
                           0000DD  1135 _P5_5	=	0x00dd
                           0000DE  1136 G$P5_6$0$0 == 0x00de
                           0000DE  1137 _P5_6	=	0x00de
                           0000DF  1138 G$P5_7$0$0 == 0x00df
                           0000DF  1139 _P5_7	=	0x00df
                           0000E8  1140 G$P6_0$0$0 == 0x00e8
                           0000E8  1141 _P6_0	=	0x00e8
                           0000E9  1142 G$P6_1$0$0 == 0x00e9
                           0000E9  1143 _P6_1	=	0x00e9
                           0000EA  1144 G$P6_2$0$0 == 0x00ea
                           0000EA  1145 _P6_2	=	0x00ea
                           0000EB  1146 G$P6_3$0$0 == 0x00eb
                           0000EB  1147 _P6_3	=	0x00eb
                           0000EC  1148 G$P6_4$0$0 == 0x00ec
                           0000EC  1149 _P6_4	=	0x00ec
                           0000ED  1150 G$P6_5$0$0 == 0x00ed
                           0000ED  1151 _P6_5	=	0x00ed
                           0000EE  1152 G$P6_6$0$0 == 0x00ee
                           0000EE  1153 _P6_6	=	0x00ee
                           0000EF  1154 G$P6_7$0$0 == 0x00ef
                           0000EF  1155 _P6_7	=	0x00ef
                           0000F8  1156 G$P7_0$0$0 == 0x00f8
                           0000F8  1157 _P7_0	=	0x00f8
                           0000F9  1158 G$P7_1$0$0 == 0x00f9
                           0000F9  1159 _P7_1	=	0x00f9
                           0000FA  1160 G$P7_2$0$0 == 0x00fa
                           0000FA  1161 _P7_2	=	0x00fa
                           0000FB  1162 G$P7_3$0$0 == 0x00fb
                           0000FB  1163 _P7_3	=	0x00fb
                           0000FC  1164 G$P7_4$0$0 == 0x00fc
                           0000FC  1165 _P7_4	=	0x00fc
                           0000FD  1166 G$P7_5$0$0 == 0x00fd
                           0000FD  1167 _P7_5	=	0x00fd
                           0000FE  1168 G$P7_6$0$0 == 0x00fe
                           0000FE  1169 _P7_6	=	0x00fe
                           0000FF  1170 G$P7_7$0$0 == 0x00ff
                           0000FF  1171 _P7_7	=	0x00ff
                                   1172 ;--------------------------------------------------------
                                   1173 ; overlayable register banks
                                   1174 ;--------------------------------------------------------
                                   1175 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                       1176 	.ds 8
                                   1177 ;--------------------------------------------------------
                                   1178 ; internal ram data
                                   1179 ;--------------------------------------------------------
                                   1180 	.area DSEG    (DATA)
                           000000  1181 G$nova_amostra$0$0==.
      000015                       1182 _nova_amostra::
      000015                       1183 	.ds 2
                           000002  1184 Ladc.config_adc0$ganho$1$12==.
      000017                       1185 _config_adc0_PARM_2:
      000017                       1186 	.ds 1
                                   1187 ;--------------------------------------------------------
                                   1188 ; overlayable items in internal ram 
                                   1189 ;--------------------------------------------------------
                                   1190 ;--------------------------------------------------------
                                   1191 ; indirectly addressable internal ram data
                                   1192 ;--------------------------------------------------------
                                   1193 	.area ISEG    (DATA)
                                   1194 ;--------------------------------------------------------
                                   1195 ; absolute internal ram data
                                   1196 ;--------------------------------------------------------
                                   1197 	.area IABS    (ABS,DATA)
                                   1198 	.area IABS    (ABS,DATA)
                                   1199 ;--------------------------------------------------------
                                   1200 ; bit data
                                   1201 ;--------------------------------------------------------
                                   1202 	.area BSEG    (BIT)
                           000000  1203 G$amostra_disp$0$0==.
      00000E                       1204 _amostra_disp::
      00000E                       1205 	.ds 1
                                   1206 ;--------------------------------------------------------
                                   1207 ; paged external ram data
                                   1208 ;--------------------------------------------------------
                                   1209 	.area PSEG    (PAG,XDATA)
                                   1210 ;--------------------------------------------------------
                                   1211 ; external ram data
                                   1212 ;--------------------------------------------------------
                                   1213 	.area XSEG    (XDATA)
                                   1214 ;--------------------------------------------------------
                                   1215 ; absolute external ram data
                                   1216 ;--------------------------------------------------------
                                   1217 	.area XABS    (ABS,XDATA)
                                   1218 ;--------------------------------------------------------
                                   1219 ; external initialized ram data
                                   1220 ;--------------------------------------------------------
                                   1221 	.area XISEG   (XDATA)
                                   1222 	.area HOME    (CODE)
                                   1223 	.area GSINIT0 (CODE)
                                   1224 	.area GSINIT1 (CODE)
                                   1225 	.area GSINIT2 (CODE)
                                   1226 	.area GSINIT3 (CODE)
                                   1227 	.area GSINIT4 (CODE)
                                   1228 	.area GSINIT5 (CODE)
                                   1229 	.area GSINIT  (CODE)
                                   1230 	.area GSFINAL (CODE)
                                   1231 	.area CSEG    (CODE)
                                   1232 ;--------------------------------------------------------
                                   1233 ; global & static initialisations
                                   1234 ;--------------------------------------------------------
                                   1235 	.area HOME    (CODE)
                                   1236 	.area GSINIT  (CODE)
                                   1237 	.area GSFINAL (CODE)
                                   1238 	.area GSINIT  (CODE)
                           000000  1239 	C$adc.c$5$1$18 ==.
                                   1240 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\adc.c:5: volatile unsigned int nova_amostra = 0;
      0000F5 E4               [12] 1241 	clr	a
      0000F6 F5 15            [12] 1242 	mov	_nova_amostra,a
      0000F8 F5 16            [12] 1243 	mov	(_nova_amostra + 1),a
                           000005  1244 	C$adc.c$6$1$18 ==.
                                   1245 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\adc.c:6: volatile __bit amostra_disp = 0;
      0000FA C2 0E            [12] 1246 	clr	_amostra_disp
                                   1247 ;--------------------------------------------------------
                                   1248 ; Home
                                   1249 ;--------------------------------------------------------
                                   1250 	.area HOME    (CODE)
                                   1251 	.area HOME    (CODE)
                                   1252 ;--------------------------------------------------------
                                   1253 ; code
                                   1254 ;--------------------------------------------------------
                                   1255 	.area CSEG    (CODE)
                                   1256 ;------------------------------------------------------------
                                   1257 ;Allocation info for local variables in function 'config_adc0'
                                   1258 ;------------------------------------------------------------
                                   1259 ;ganho                     Allocated with name '_config_adc0_PARM_2'
                                   1260 ;canal                     Allocated to registers r7 
                                   1261 ;------------------------------------------------------------
                           000000  1262 	G$config_adc0$0$0 ==.
                           000000  1263 	C$adc.c$8$0$0 ==.
                                   1264 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\adc.c:8: void config_adc0(unsigned char canal, unsigned char ganho) {
                                   1265 ;	-----------------------------------------
                                   1266 ;	 function config_adc0
                                   1267 ;	-----------------------------------------
      000800                       1268 _config_adc0:
                           000007  1269 	ar7 = 0x07
                           000006  1270 	ar6 = 0x06
                           000005  1271 	ar5 = 0x05
                           000004  1272 	ar4 = 0x04
                           000003  1273 	ar3 = 0x03
                           000002  1274 	ar2 = 0x02
                           000001  1275 	ar1 = 0x01
                           000000  1276 	ar0 = 0x00
      000800 AF 82            [24] 1277 	mov	r7,dpl
                           000002  1278 	C$adc.c$9$1$13 ==.
                                   1279 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\adc.c:9: ADC0CF = ADC0CF & 0xf8 | ganho;  // Set gain bits
      000802 74 F8            [12] 1280 	mov	a,#0xf8
      000804 55 BC            [12] 1281 	anl	a,_ADC0CF
      000806 45 17            [12] 1282 	orl	a,_config_adc0_PARM_2
      000808 F5 BC            [12] 1283 	mov	_ADC0CF,a
                           00000A  1284 	C$adc.c$10$1$13 ==.
                                   1285 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\adc.c:10: AMX0SL = canal;
      00080A 8F BB            [24] 1286 	mov	_AMX0SL,r7
                           00000C  1287 	C$adc.c$11$1$13 ==.
                                   1288 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\adc.c:11: delay_us(1);  // (Rmux,Csample)
      00080C 90 00 01         [24] 1289 	mov	dptr,#0x0001
      00080F 12 03 21         [24] 1290 	lcall	_delay_us
                           000012  1291 	C$adc.c$12$1$13 ==.
                           000012  1292 	XG$config_adc0$0$0 ==.
      000812 22               [24] 1293 	ret
                                   1294 ;------------------------------------------------------------
                                   1295 ;Allocation info for local variables in function 'le_adc0'
                                   1296 ;------------------------------------------------------------
                           000013  1297 	G$le_adc0$0$0 ==.
                           000013  1298 	C$adc.c$14$1$13 ==.
                                   1299 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\adc.c:14: unsigned int le_adc0(void) {
                                   1300 ;	-----------------------------------------
                                   1301 ;	 function le_adc0
                                   1302 ;	-----------------------------------------
      000813                       1303 _le_adc0:
                           000013  1304 	C$adc.c$16$1$15 ==.
                                   1305 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\adc.c:16: AD0BUSY = 1;
      000813 D2 EC            [12] 1306 	setb	_AD0BUSY
                           000015  1307 	C$adc.c$17$1$15 ==.
                                   1308 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\adc.c:17: reset_wdt();
      000815 12 02 EA         [24] 1309 	lcall	_reset_wdt
                           000018  1310 	C$adc.c$18$1$15 ==.
                                   1311 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\adc.c:18: while (AD0BUSY) {}
      000818                       1312 00101$:
      000818 20 EC FD         [24] 1313 	jb	_AD0BUSY,00101$
                           00001B  1314 	C$adc.c$20$1$15 ==.
                                   1315 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\adc.c:20: return ADC0H << 8 | ADC0L;
      00081B AF BF            [24] 1316 	mov	r7,_ADC0H
      00081D 7E 00            [12] 1317 	mov	r6,#0x00
      00081F AC BE            [24] 1318 	mov	r4,_ADC0L
      000821 7D 00            [12] 1319 	mov	r5,#0x00
      000823 EC               [12] 1320 	mov	a,r4
      000824 4E               [12] 1321 	orl	a,r6
      000825 F5 82            [12] 1322 	mov	dpl,a
      000827 ED               [12] 1323 	mov	a,r5
      000828 4F               [12] 1324 	orl	a,r7
      000829 F5 83            [12] 1325 	mov	dph,a
                           00002B  1326 	C$adc.c$21$1$15 ==.
                           00002B  1327 	XG$le_adc0$0$0 ==.
      00082B 22               [24] 1328 	ret
                                   1329 ;------------------------------------------------------------
                                   1330 ;Allocation info for local variables in function 'ISR_ADC0'
                                   1331 ;------------------------------------------------------------
                           00002C  1332 	G$ISR_ADC0$0$0 ==.
                           00002C  1333 	C$adc.c$34$1$15 ==.
                                   1334 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\adc.c:34: void ISR_ADC0(void) __interrupt INTERRUPT_ADC0_EOC {
                                   1335 ;	-----------------------------------------
                                   1336 ;	 function ISR_ADC0
                                   1337 ;	-----------------------------------------
      00082C                       1338 _ISR_ADC0:
      00082C C0 E0            [24] 1339 	push	acc
      00082E C0 07            [24] 1340 	push	ar7
      000830 C0 06            [24] 1341 	push	ar6
      000832 C0 05            [24] 1342 	push	ar5
      000834 C0 04            [24] 1343 	push	ar4
      000836 C0 D0            [24] 1344 	push	psw
      000838 75 D0 00         [24] 1345 	mov	psw,#0x00
                           00003B  1346 	C$adc.c$35$1$18 ==.
                                   1347 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\adc.c:35: nova_amostra = (ADC0H << 8 | ADC0L);
      00083B AF BF            [24] 1348 	mov	r7,_ADC0H
      00083D 7E 00            [12] 1349 	mov	r6,#0x00
      00083F AC BE            [24] 1350 	mov	r4,_ADC0L
      000841 7D 00            [12] 1351 	mov	r5,#0x00
      000843 EC               [12] 1352 	mov	a,r4
      000844 4E               [12] 1353 	orl	a,r6
      000845 F5 15            [12] 1354 	mov	_nova_amostra,a
      000847 ED               [12] 1355 	mov	a,r5
      000848 4F               [12] 1356 	orl	a,r7
      000849 F5 16            [12] 1357 	mov	(_nova_amostra + 1),a
                           00004B  1358 	C$adc.c$36$1$18 ==.
                                   1359 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\adc.c:36: amostra_disp = 1;
      00084B D2 0E            [12] 1360 	setb	_amostra_disp
                           00004D  1361 	C$adc.c$37$1$18 ==.
                                   1362 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\adc.c:37: AD0INT = 0;
      00084D C2 ED            [12] 1363 	clr	_AD0INT
      00084F D0 D0            [24] 1364 	pop	psw
      000851 D0 04            [24] 1365 	pop	ar4
      000853 D0 05            [24] 1366 	pop	ar5
      000855 D0 06            [24] 1367 	pop	ar6
      000857 D0 07            [24] 1368 	pop	ar7
      000859 D0 E0            [24] 1369 	pop	acc
                           00005B  1370 	C$adc.c$38$1$18 ==.
                           00005B  1371 	XG$ISR_ADC0$0$0 ==.
      00085B 32               [24] 1372 	reti
                                   1373 ;	eliminated unneeded push/pop dpl
                                   1374 ;	eliminated unneeded push/pop dph
                                   1375 ;	eliminated unneeded push/pop b
                                   1376 	.area CSEG    (CODE)
                                   1377 	.area CONST   (CODE)
                                   1378 	.area XINIT   (CODE)
                                   1379 	.area CABS    (ABS,CODE)
