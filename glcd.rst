                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 3.6.0 #9615 (MINGW64)
                                      4 ;--------------------------------------------------------
                                      5 	.module glcd
                                      6 	.optsdcc -mmcs51 --model-small
                                      7 	
                                      8 ;--------------------------------------------------------
                                      9 ; Public variables in this module
                                     10 ;--------------------------------------------------------
                                     11 	.globl _fonte
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
                                    394 	.globl _conf_pag_PARM_2
                                    395 	.globl _conf_Y_PARM_2
                                    396 	.globl _esc_glcd_PARM_3
                                    397 	.globl _esc_glcd_PARM_2
                                    398 	.globl _le_glcd_PARM_2
                                    399 	.globl _le_glcd_PARM_1
                                    400 	.globl _ponto_glcd_PARM_2
                                    401 	.globl _escala_glcd_PARM_3
                                    402 	.globl _escala_glcd_PARM_2
                                    403 	.globl _le_glcd
                                    404 	.globl _esc_glcd
                                    405 	.globl _conf_Y
                                    406 	.globl _conf_pag
                                    407 	.globl _limpa_glcd
                                    408 	.globl _init_GLCD
                                    409 	.globl _putchar
                                    410 	.globl _limpa_col_glcd
                                    411 	.globl _escala_glcd
                                    412 	.globl _ponto_glcd
                                    413 ;--------------------------------------------------------
                                    414 ; special function registers
                                    415 ;--------------------------------------------------------
                                    416 	.area RSEG    (ABS,DATA)
      000000                        417 	.org 0x0000
                           000080   418 G$P0$0$0 == 0x0080
                           000080   419 _P0	=	0x0080
                           000081   420 G$SP$0$0 == 0x0081
                           000081   421 _SP	=	0x0081
                           000082   422 G$DPL$0$0 == 0x0082
                           000082   423 _DPL	=	0x0082
                           000083   424 G$DPH$0$0 == 0x0083
                           000083   425 _DPH	=	0x0083
                           000084   426 G$SFRPAGE$0$0 == 0x0084
                           000084   427 _SFRPAGE	=	0x0084
                           000085   428 G$SFRNEXT$0$0 == 0x0085
                           000085   429 _SFRNEXT	=	0x0085
                           000086   430 G$SFRLAST$0$0 == 0x0086
                           000086   431 _SFRLAST	=	0x0086
                           000087   432 G$PCON$0$0 == 0x0087
                           000087   433 _PCON	=	0x0087
                           000088   434 G$TCON$0$0 == 0x0088
                           000088   435 _TCON	=	0x0088
                           000088   436 G$CPT0CN$0$0 == 0x0088
                           000088   437 _CPT0CN	=	0x0088
                           000088   438 G$CPT1CN$0$0 == 0x0088
                           000088   439 _CPT1CN	=	0x0088
                           000088   440 G$CPT2CN$0$0 == 0x0088
                           000088   441 _CPT2CN	=	0x0088
                           000089   442 G$TMOD$0$0 == 0x0089
                           000089   443 _TMOD	=	0x0089
                           000089   444 G$CPT0MD$0$0 == 0x0089
                           000089   445 _CPT0MD	=	0x0089
                           000089   446 G$CPT1MD$0$0 == 0x0089
                           000089   447 _CPT1MD	=	0x0089
                           000089   448 G$CPT2MD$0$0 == 0x0089
                           000089   449 _CPT2MD	=	0x0089
                           00008A   450 G$TL0$0$0 == 0x008a
                           00008A   451 _TL0	=	0x008a
                           00008A   452 G$OSCICN$0$0 == 0x008a
                           00008A   453 _OSCICN	=	0x008a
                           00008B   454 G$TL1$0$0 == 0x008b
                           00008B   455 _TL1	=	0x008b
                           00008B   456 G$OSCICL$0$0 == 0x008b
                           00008B   457 _OSCICL	=	0x008b
                           00008C   458 G$TH0$0$0 == 0x008c
                           00008C   459 _TH0	=	0x008c
                           00008C   460 G$OSCXCN$0$0 == 0x008c
                           00008C   461 _OSCXCN	=	0x008c
                           00008D   462 G$TH1$0$0 == 0x008d
                           00008D   463 _TH1	=	0x008d
                           00008E   464 G$CKCON$0$0 == 0x008e
                           00008E   465 _CKCON	=	0x008e
                           00008F   466 G$PSCTL$0$0 == 0x008f
                           00008F   467 _PSCTL	=	0x008f
                           000090   468 G$P1$0$0 == 0x0090
                           000090   469 _P1	=	0x0090
                           000091   470 G$SSTA0$0$0 == 0x0091
                           000091   471 _SSTA0	=	0x0091
                           000096   472 G$SFRPGCN$0$0 == 0x0096
                           000096   473 _SFRPGCN	=	0x0096
                           000097   474 G$CLKSEL$0$0 == 0x0097
                           000097   475 _CLKSEL	=	0x0097
                           000098   476 G$SCON0$0$0 == 0x0098
                           000098   477 _SCON0	=	0x0098
                           000098   478 G$SCON1$0$0 == 0x0098
                           000098   479 _SCON1	=	0x0098
                           000099   480 G$SBUF0$0$0 == 0x0099
                           000099   481 _SBUF0	=	0x0099
                           000099   482 G$SBUF1$0$0 == 0x0099
                           000099   483 _SBUF1	=	0x0099
                           00009A   484 G$SPI0CFG$0$0 == 0x009a
                           00009A   485 _SPI0CFG	=	0x009a
                           00009B   486 G$SPI0DAT$0$0 == 0x009b
                           00009B   487 _SPI0DAT	=	0x009b
                           00009C   488 G$P4MDOUT$0$0 == 0x009c
                           00009C   489 _P4MDOUT	=	0x009c
                           00009D   490 G$SPI0CKR$0$0 == 0x009d
                           00009D   491 _SPI0CKR	=	0x009d
                           00009D   492 G$P5MDOUT$0$0 == 0x009d
                           00009D   493 _P5MDOUT	=	0x009d
                           00009E   494 G$P6MDOUT$0$0 == 0x009e
                           00009E   495 _P6MDOUT	=	0x009e
                           00009F   496 G$P7MDOUT$0$0 == 0x009f
                           00009F   497 _P7MDOUT	=	0x009f
                           0000A0   498 G$P2$0$0 == 0x00a0
                           0000A0   499 _P2	=	0x00a0
                           0000A1   500 G$EMI0TC$0$0 == 0x00a1
                           0000A1   501 _EMI0TC	=	0x00a1
                           0000A2   502 G$EMI0CN$0$0 == 0x00a2
                           0000A2   503 _EMI0CN	=	0x00a2
                           0000A3   504 G$EMI0CF$0$0 == 0x00a3
                           0000A3   505 _EMI0CF	=	0x00a3
                           0000A4   506 G$P0MDOUT$0$0 == 0x00a4
                           0000A4   507 _P0MDOUT	=	0x00a4
                           0000A5   508 G$P1MDOUT$0$0 == 0x00a5
                           0000A5   509 _P1MDOUT	=	0x00a5
                           0000A6   510 G$P2MDOUT$0$0 == 0x00a6
                           0000A6   511 _P2MDOUT	=	0x00a6
                           0000A7   512 G$P3MDOUT$0$0 == 0x00a7
                           0000A7   513 _P3MDOUT	=	0x00a7
                           0000A8   514 G$IE$0$0 == 0x00a8
                           0000A8   515 _IE	=	0x00a8
                           0000A9   516 G$SADDR0$0$0 == 0x00a9
                           0000A9   517 _SADDR0	=	0x00a9
                           0000A9   518 G$SADDR1$0$0 == 0x00a9
                           0000A9   519 _SADDR1	=	0x00a9
                           0000AD   520 G$P1MDIN$0$0 == 0x00ad
                           0000AD   521 _P1MDIN	=	0x00ad
                           0000AE   522 G$P2MDIN$0$0 == 0x00ae
                           0000AE   523 _P2MDIN	=	0x00ae
                           0000AF   524 G$P3MDIN$0$0 == 0x00af
                           0000AF   525 _P3MDIN	=	0x00af
                           0000B0   526 G$P3$0$0 == 0x00b0
                           0000B0   527 _P3	=	0x00b0
                           0000B7   528 G$FLSCL$0$0 == 0x00b7
                           0000B7   529 _FLSCL	=	0x00b7
                           0000B7   530 G$FLACL$0$0 == 0x00b7
                           0000B7   531 _FLACL	=	0x00b7
                           0000B8   532 G$IP$0$0 == 0x00b8
                           0000B8   533 _IP	=	0x00b8
                           0000B9   534 G$SADEN0$0$0 == 0x00b9
                           0000B9   535 _SADEN0	=	0x00b9
                           0000BA   536 G$AMX2CF$0$0 == 0x00ba
                           0000BA   537 _AMX2CF	=	0x00ba
                           0000BD   538 G$AMX0PRT$0$0 == 0x00bd
                           0000BD   539 _AMX0PRT	=	0x00bd
                           0000BA   540 G$AMX0CF$0$0 == 0x00ba
                           0000BA   541 _AMX0CF	=	0x00ba
                           0000BB   542 G$AMX0SL$0$0 == 0x00bb
                           0000BB   543 _AMX0SL	=	0x00bb
                           0000BB   544 G$AMX2SL$0$0 == 0x00bb
                           0000BB   545 _AMX2SL	=	0x00bb
                           0000BC   546 G$ADC0CF$0$0 == 0x00bc
                           0000BC   547 _ADC0CF	=	0x00bc
                           0000BC   548 G$ADC2CF$0$0 == 0x00bc
                           0000BC   549 _ADC2CF	=	0x00bc
                           0000BE   550 G$ADC0L$0$0 == 0x00be
                           0000BE   551 _ADC0L	=	0x00be
                           0000BE   552 G$ADC2$0$0 == 0x00be
                           0000BE   553 _ADC2	=	0x00be
                           0000BF   554 G$ADC0H$0$0 == 0x00bf
                           0000BF   555 _ADC0H	=	0x00bf
                           0000C0   556 G$SMB0CN$0$0 == 0x00c0
                           0000C0   557 _SMB0CN	=	0x00c0
                           0000C0   558 G$CAN0STA$0$0 == 0x00c0
                           0000C0   559 _CAN0STA	=	0x00c0
                           0000C1   560 G$SMB0STA$0$0 == 0x00c1
                           0000C1   561 _SMB0STA	=	0x00c1
                           0000C2   562 G$SMB0DAT$0$0 == 0x00c2
                           0000C2   563 _SMB0DAT	=	0x00c2
                           0000C3   564 G$SMB0ADR$0$0 == 0x00c3
                           0000C3   565 _SMB0ADR	=	0x00c3
                           0000C4   566 G$ADC0GTL$0$0 == 0x00c4
                           0000C4   567 _ADC0GTL	=	0x00c4
                           0000C4   568 G$ADC2GT$0$0 == 0x00c4
                           0000C4   569 _ADC2GT	=	0x00c4
                           0000C5   570 G$ADC0GTH$0$0 == 0x00c5
                           0000C5   571 _ADC0GTH	=	0x00c5
                           0000C6   572 G$ADC0LTL$0$0 == 0x00c6
                           0000C6   573 _ADC0LTL	=	0x00c6
                           0000C6   574 G$ADC2LT$0$0 == 0x00c6
                           0000C6   575 _ADC2LT	=	0x00c6
                           0000C7   576 G$ADC0LTH$0$0 == 0x00c7
                           0000C7   577 _ADC0LTH	=	0x00c7
                           0000C8   578 G$TMR2CN$0$0 == 0x00c8
                           0000C8   579 _TMR2CN	=	0x00c8
                           0000C8   580 G$TMR3CN$0$0 == 0x00c8
                           0000C8   581 _TMR3CN	=	0x00c8
                           0000C8   582 G$TMR4CN$0$0 == 0x00c8
                           0000C8   583 _TMR4CN	=	0x00c8
                           0000C8   584 G$P4$0$0 == 0x00c8
                           0000C8   585 _P4	=	0x00c8
                           0000C9   586 G$TMR2CF$0$0 == 0x00c9
                           0000C9   587 _TMR2CF	=	0x00c9
                           0000C9   588 G$TMR3CF$0$0 == 0x00c9
                           0000C9   589 _TMR3CF	=	0x00c9
                           0000C9   590 G$TMR4CF$0$0 == 0x00c9
                           0000C9   591 _TMR4CF	=	0x00c9
                           0000CA   592 G$RCAP2L$0$0 == 0x00ca
                           0000CA   593 _RCAP2L	=	0x00ca
                           0000CA   594 G$RCAP3L$0$0 == 0x00ca
                           0000CA   595 _RCAP3L	=	0x00ca
                           0000CA   596 G$RCAP4L$0$0 == 0x00ca
                           0000CA   597 _RCAP4L	=	0x00ca
                           0000CB   598 G$RCAP2H$0$0 == 0x00cb
                           0000CB   599 _RCAP2H	=	0x00cb
                           0000CB   600 G$RCAP3H$0$0 == 0x00cb
                           0000CB   601 _RCAP3H	=	0x00cb
                           0000CB   602 G$RCAP4H$0$0 == 0x00cb
                           0000CB   603 _RCAP4H	=	0x00cb
                           0000CC   604 G$TMR2L$0$0 == 0x00cc
                           0000CC   605 _TMR2L	=	0x00cc
                           0000CC   606 G$TMR3L$0$0 == 0x00cc
                           0000CC   607 _TMR3L	=	0x00cc
                           0000CC   608 G$TMR4L$0$0 == 0x00cc
                           0000CC   609 _TMR4L	=	0x00cc
                           0000CD   610 G$TMR2H$0$0 == 0x00cd
                           0000CD   611 _TMR2H	=	0x00cd
                           0000CD   612 G$TMR3H$0$0 == 0x00cd
                           0000CD   613 _TMR3H	=	0x00cd
                           0000CD   614 G$TMR4H$0$0 == 0x00cd
                           0000CD   615 _TMR4H	=	0x00cd
                           0000CF   616 G$SMB0CR$0$0 == 0x00cf
                           0000CF   617 _SMB0CR	=	0x00cf
                           0000D0   618 G$PSW$0$0 == 0x00d0
                           0000D0   619 _PSW	=	0x00d0
                           0000D1   620 G$REF0CN$0$0 == 0x00d1
                           0000D1   621 _REF0CN	=	0x00d1
                           0000D2   622 G$DAC0L$0$0 == 0x00d2
                           0000D2   623 _DAC0L	=	0x00d2
                           0000D2   624 G$DAC1L$0$0 == 0x00d2
                           0000D2   625 _DAC1L	=	0x00d2
                           0000D3   626 G$DAC0H$0$0 == 0x00d3
                           0000D3   627 _DAC0H	=	0x00d3
                           0000D3   628 G$DAC1H$0$0 == 0x00d3
                           0000D3   629 _DAC1H	=	0x00d3
                           0000D4   630 G$DAC0CN$0$0 == 0x00d4
                           0000D4   631 _DAC0CN	=	0x00d4
                           0000D4   632 G$DAC1CN$0$0 == 0x00d4
                           0000D4   633 _DAC1CN	=	0x00d4
                           0000D6   634 G$HVA0CN$0$0 == 0x00d6
                           0000D6   635 _HVA0CN	=	0x00d6
                           0000D8   636 G$PCA0CN$0$0 == 0x00d8
                           0000D8   637 _PCA0CN	=	0x00d8
                           0000D8   638 G$CAN0DATL$0$0 == 0x00d8
                           0000D8   639 _CAN0DATL	=	0x00d8
                           0000D8   640 G$P5$0$0 == 0x00d8
                           0000D8   641 _P5	=	0x00d8
                           0000D9   642 G$PCA0MD$0$0 == 0x00d9
                           0000D9   643 _PCA0MD	=	0x00d9
                           0000D9   644 G$CAN0DATH$0$0 == 0x00d9
                           0000D9   645 _CAN0DATH	=	0x00d9
                           0000DA   646 G$PCA0CPM0$0$0 == 0x00da
                           0000DA   647 _PCA0CPM0	=	0x00da
                           0000DA   648 G$CAN0ADR$0$0 == 0x00da
                           0000DA   649 _CAN0ADR	=	0x00da
                           0000DB   650 G$PCA0CPM1$0$0 == 0x00db
                           0000DB   651 _PCA0CPM1	=	0x00db
                           0000DB   652 G$CAN0TST$0$0 == 0x00db
                           0000DB   653 _CAN0TST	=	0x00db
                           0000DC   654 G$PCA0CPM2$0$0 == 0x00dc
                           0000DC   655 _PCA0CPM2	=	0x00dc
                           0000DD   656 G$PCA0CPM3$0$0 == 0x00dd
                           0000DD   657 _PCA0CPM3	=	0x00dd
                           0000DE   658 G$PCA0CPM4$0$0 == 0x00de
                           0000DE   659 _PCA0CPM4	=	0x00de
                           0000DF   660 G$PCA0CPM5$0$0 == 0x00df
                           0000DF   661 _PCA0CPM5	=	0x00df
                           0000E0   662 G$ACC$0$0 == 0x00e0
                           0000E0   663 _ACC	=	0x00e0
                           0000E1   664 G$PCA0CPL5$0$0 == 0x00e1
                           0000E1   665 _PCA0CPL5	=	0x00e1
                           0000E1   666 G$XBR0$0$0 == 0x00e1
                           0000E1   667 _XBR0	=	0x00e1
                           0000E2   668 G$PCA0CPH5$0$0 == 0x00e2
                           0000E2   669 _PCA0CPH5	=	0x00e2
                           0000E2   670 G$XBR1$0$0 == 0x00e2
                           0000E2   671 _XBR1	=	0x00e2
                           0000E3   672 G$XBR2$0$0 == 0x00e3
                           0000E3   673 _XBR2	=	0x00e3
                           0000E4   674 G$XBR3$0$0 == 0x00e4
                           0000E4   675 _XBR3	=	0x00e4
                           0000E6   676 G$EIE1$0$0 == 0x00e6
                           0000E6   677 _EIE1	=	0x00e6
                           0000E7   678 G$EIE2$0$0 == 0x00e7
                           0000E7   679 _EIE2	=	0x00e7
                           0000E8   680 G$ADC0CN$0$0 == 0x00e8
                           0000E8   681 _ADC0CN	=	0x00e8
                           0000E8   682 G$ADC2CN$0$0 == 0x00e8
                           0000E8   683 _ADC2CN	=	0x00e8
                           0000E8   684 G$P6$0$0 == 0x00e8
                           0000E8   685 _P6	=	0x00e8
                           0000E9   686 G$PCA0CPL2$0$0 == 0x00e9
                           0000E9   687 _PCA0CPL2	=	0x00e9
                           0000EA   688 G$PCA0CPH2$0$0 == 0x00ea
                           0000EA   689 _PCA0CPH2	=	0x00ea
                           0000EB   690 G$PCA0CPL3$0$0 == 0x00eb
                           0000EB   691 _PCA0CPL3	=	0x00eb
                           0000EC   692 G$PCA0CPH3$0$0 == 0x00ec
                           0000EC   693 _PCA0CPH3	=	0x00ec
                           0000ED   694 G$PCA0CPL4$0$0 == 0x00ed
                           0000ED   695 _PCA0CPL4	=	0x00ed
                           0000EE   696 G$PCA0CPH4$0$0 == 0x00ee
                           0000EE   697 _PCA0CPH4	=	0x00ee
                           0000EF   698 G$RSTSRC$0$0 == 0x00ef
                           0000EF   699 _RSTSRC	=	0x00ef
                           0000F0   700 G$B$0$0 == 0x00f0
                           0000F0   701 _B	=	0x00f0
                           0000F6   702 G$EIP1$0$0 == 0x00f6
                           0000F6   703 _EIP1	=	0x00f6
                           0000F7   704 G$EIP2$0$0 == 0x00f7
                           0000F7   705 _EIP2	=	0x00f7
                           0000F8   706 G$SPI0CN$0$0 == 0x00f8
                           0000F8   707 _SPI0CN	=	0x00f8
                           0000F8   708 G$CAN0CN$0$0 == 0x00f8
                           0000F8   709 _CAN0CN	=	0x00f8
                           0000F8   710 G$P7$0$0 == 0x00f8
                           0000F8   711 _P7	=	0x00f8
                           0000F9   712 G$PCA0L$0$0 == 0x00f9
                           0000F9   713 _PCA0L	=	0x00f9
                           0000FA   714 G$PCA0H$0$0 == 0x00fa
                           0000FA   715 _PCA0H	=	0x00fa
                           0000FB   716 G$PCA0CPL0$0$0 == 0x00fb
                           0000FB   717 _PCA0CPL0	=	0x00fb
                           0000FC   718 G$PCA0CPH0$0$0 == 0x00fc
                           0000FC   719 _PCA0CPH0	=	0x00fc
                           0000FD   720 G$PCA0CPL1$0$0 == 0x00fd
                           0000FD   721 _PCA0CPL1	=	0x00fd
                           0000FE   722 G$PCA0CPH1$0$0 == 0x00fe
                           0000FE   723 _PCA0CPH1	=	0x00fe
                           0000FF   724 G$WDTCN$0$0 == 0x00ff
                           0000FF   725 _WDTCN	=	0x00ff
                           00FAF9   726 G$PCA0$0$0 == 0xfaf9
                           00FAF9   727 _PCA0	=	0xfaf9
                           00FCFB   728 G$PCA0CP0$0$0 == 0xfcfb
                           00FCFB   729 _PCA0CP0	=	0xfcfb
                           00FEFD   730 G$PCA0CP1$0$0 == 0xfefd
                           00FEFD   731 _PCA0CP1	=	0xfefd
                           00EAE9   732 G$PCA0CP2$0$0 == 0xeae9
                           00EAE9   733 _PCA0CP2	=	0xeae9
                           00ECEB   734 G$PCA0CP3$0$0 == 0xeceb
                           00ECEB   735 _PCA0CP3	=	0xeceb
                           00EEED   736 G$PCA0CP4$0$0 == 0xeeed
                           00EEED   737 _PCA0CP4	=	0xeeed
                           00E2E1   738 G$PCA0CP5$0$0 == 0xe2e1
                           00E2E1   739 _PCA0CP5	=	0xe2e1
                           00D9D8   740 G$CAN0DAT$0$0 == 0xd9d8
                           00D9D8   741 _CAN0DAT	=	0xd9d8
                           00D3D2   742 G$DAC0$0$0 == 0xd3d2
                           00D3D2   743 _DAC0	=	0xd3d2
                           00D3D2   744 G$DAC1$0$0 == 0xd3d2
                           00D3D2   745 _DAC1	=	0xd3d2
                           00CBCA   746 G$RCAP2$0$0 == 0xcbca
                           00CBCA   747 _RCAP2	=	0xcbca
                           00CBCA   748 G$RCAP3$0$0 == 0xcbca
                           00CBCA   749 _RCAP3	=	0xcbca
                           00CBCA   750 G$RCAP4$0$0 == 0xcbca
                           00CBCA   751 _RCAP4	=	0xcbca
                           00CDCC   752 G$TMR2$0$0 == 0xcdcc
                           00CDCC   753 _TMR2	=	0xcdcc
                           00CDCC   754 G$TMR3$0$0 == 0xcdcc
                           00CDCC   755 _TMR3	=	0xcdcc
                           00CDCC   756 G$TMR4$0$0 == 0xcdcc
                           00CDCC   757 _TMR4	=	0xcdcc
                           00C5C4   758 G$ADC0GT$0$0 == 0xc5c4
                           00C5C4   759 _ADC0GT	=	0xc5c4
                           00C7C6   760 G$ADC0LT$0$0 == 0xc7c6
                           00C7C6   761 _ADC0LT	=	0xc7c6
                           00BFBE   762 G$ADC0$0$0 == 0xbfbe
                           00BFBE   763 _ADC0	=	0xbfbe
                           008382   764 G$DP$0$0 == 0x8382
                           008382   765 _DP	=	0x8382
                           0000A2   766 G$_XPAGE$0$0 == 0x00a2
                           0000A2   767 __XPAGE	=	0x00a2
                                    768 ;--------------------------------------------------------
                                    769 ; special function bits
                                    770 ;--------------------------------------------------------
                                    771 	.area RSEG    (ABS,DATA)
      000000                        772 	.org 0x0000
                           00008F   773 G$TF1$0$0 == 0x008f
                           00008F   774 _TF1	=	0x008f
                           00008E   775 G$TR1$0$0 == 0x008e
                           00008E   776 _TR1	=	0x008e
                           00008D   777 G$TF0$0$0 == 0x008d
                           00008D   778 _TF0	=	0x008d
                           00008C   779 G$TR0$0$0 == 0x008c
                           00008C   780 _TR0	=	0x008c
                           00008B   781 G$IE1$0$0 == 0x008b
                           00008B   782 _IE1	=	0x008b
                           00008A   783 G$IT1$0$0 == 0x008a
                           00008A   784 _IT1	=	0x008a
                           000089   785 G$IE0$0$0 == 0x0089
                           000089   786 _IE0	=	0x0089
                           000088   787 G$IT0$0$0 == 0x0088
                           000088   788 _IT0	=	0x0088
                           00008F   789 G$CP0EN$0$0 == 0x008f
                           00008F   790 _CP0EN	=	0x008f
                           00008E   791 G$CP0OUT$0$0 == 0x008e
                           00008E   792 _CP0OUT	=	0x008e
                           00008D   793 G$CP0RIF$0$0 == 0x008d
                           00008D   794 _CP0RIF	=	0x008d
                           00008C   795 G$CP0FIF$0$0 == 0x008c
                           00008C   796 _CP0FIF	=	0x008c
                           00008B   797 G$CP0HYP1$0$0 == 0x008b
                           00008B   798 _CP0HYP1	=	0x008b
                           00008A   799 G$CP0HYP0$0$0 == 0x008a
                           00008A   800 _CP0HYP0	=	0x008a
                           000089   801 G$CP0HYN1$0$0 == 0x0089
                           000089   802 _CP0HYN1	=	0x0089
                           000088   803 G$CP0HYN0$0$0 == 0x0088
                           000088   804 _CP0HYN0	=	0x0088
                           00008F   805 G$CP1EN$0$0 == 0x008f
                           00008F   806 _CP1EN	=	0x008f
                           00008E   807 G$CP1OUT$0$0 == 0x008e
                           00008E   808 _CP1OUT	=	0x008e
                           00008D   809 G$CP1RIF$0$0 == 0x008d
                           00008D   810 _CP1RIF	=	0x008d
                           00008C   811 G$CP1FIF$0$0 == 0x008c
                           00008C   812 _CP1FIF	=	0x008c
                           00008B   813 G$CP1HYP1$0$0 == 0x008b
                           00008B   814 _CP1HYP1	=	0x008b
                           00008A   815 G$CP1HYP0$0$0 == 0x008a
                           00008A   816 _CP1HYP0	=	0x008a
                           000089   817 G$CP1HYN1$0$0 == 0x0089
                           000089   818 _CP1HYN1	=	0x0089
                           000088   819 G$CP1HYN0$0$0 == 0x0088
                           000088   820 _CP1HYN0	=	0x0088
                           00008F   821 G$CP2EN$0$0 == 0x008f
                           00008F   822 _CP2EN	=	0x008f
                           00008E   823 G$CP2OUT$0$0 == 0x008e
                           00008E   824 _CP2OUT	=	0x008e
                           00008D   825 G$CP2RIF$0$0 == 0x008d
                           00008D   826 _CP2RIF	=	0x008d
                           00008C   827 G$CP2FIF$0$0 == 0x008c
                           00008C   828 _CP2FIF	=	0x008c
                           00008B   829 G$CP2HYP1$0$0 == 0x008b
                           00008B   830 _CP2HYP1	=	0x008b
                           00008A   831 G$CP2HYP0$0$0 == 0x008a
                           00008A   832 _CP2HYP0	=	0x008a
                           000089   833 G$CP2HYN1$0$0 == 0x0089
                           000089   834 _CP2HYN1	=	0x0089
                           000088   835 G$CP2HYN0$0$0 == 0x0088
                           000088   836 _CP2HYN0	=	0x0088
                           00009F   837 G$SM00$0$0 == 0x009f
                           00009F   838 _SM00	=	0x009f
                           00009E   839 G$SM10$0$0 == 0x009e
                           00009E   840 _SM10	=	0x009e
                           00009D   841 G$SM20$0$0 == 0x009d
                           00009D   842 _SM20	=	0x009d
                           00009C   843 G$REN0$0$0 == 0x009c
                           00009C   844 _REN0	=	0x009c
                           00009B   845 G$TB80$0$0 == 0x009b
                           00009B   846 _TB80	=	0x009b
                           00009A   847 G$RB80$0$0 == 0x009a
                           00009A   848 _RB80	=	0x009a
                           000099   849 G$TI0$0$0 == 0x0099
                           000099   850 _TI0	=	0x0099
                           000098   851 G$RI0$0$0 == 0x0098
                           000098   852 _RI0	=	0x0098
                           00009F   853 G$S1MODE$0$0 == 0x009f
                           00009F   854 _S1MODE	=	0x009f
                           00009D   855 G$MCE1$0$0 == 0x009d
                           00009D   856 _MCE1	=	0x009d
                           00009C   857 G$REN1$0$0 == 0x009c
                           00009C   858 _REN1	=	0x009c
                           00009B   859 G$TB81$0$0 == 0x009b
                           00009B   860 _TB81	=	0x009b
                           00009A   861 G$RB81$0$0 == 0x009a
                           00009A   862 _RB81	=	0x009a
                           000099   863 G$TI1$0$0 == 0x0099
                           000099   864 _TI1	=	0x0099
                           000098   865 G$RI1$0$0 == 0x0098
                           000098   866 _RI1	=	0x0098
                           0000AF   867 G$EA$0$0 == 0x00af
                           0000AF   868 _EA	=	0x00af
                           0000AD   869 G$ET2$0$0 == 0x00ad
                           0000AD   870 _ET2	=	0x00ad
                           0000AC   871 G$ES0$0$0 == 0x00ac
                           0000AC   872 _ES0	=	0x00ac
                           0000AB   873 G$ET1$0$0 == 0x00ab
                           0000AB   874 _ET1	=	0x00ab
                           0000AA   875 G$EX1$0$0 == 0x00aa
                           0000AA   876 _EX1	=	0x00aa
                           0000A9   877 G$ET0$0$0 == 0x00a9
                           0000A9   878 _ET0	=	0x00a9
                           0000A8   879 G$EX0$0$0 == 0x00a8
                           0000A8   880 _EX0	=	0x00a8
                           0000BD   881 G$PT2$0$0 == 0x00bd
                           0000BD   882 _PT2	=	0x00bd
                           0000BC   883 G$PS0$0$0 == 0x00bc
                           0000BC   884 _PS0	=	0x00bc
                           0000BB   885 G$PT1$0$0 == 0x00bb
                           0000BB   886 _PT1	=	0x00bb
                           0000BA   887 G$PX1$0$0 == 0x00ba
                           0000BA   888 _PX1	=	0x00ba
                           0000B9   889 G$PT0$0$0 == 0x00b9
                           0000B9   890 _PT0	=	0x00b9
                           0000B8   891 G$PX0$0$0 == 0x00b8
                           0000B8   892 _PX0	=	0x00b8
                           0000C7   893 G$BUSY$0$0 == 0x00c7
                           0000C7   894 _BUSY	=	0x00c7
                           0000C6   895 G$ENSMB$0$0 == 0x00c6
                           0000C6   896 _ENSMB	=	0x00c6
                           0000C5   897 G$STA$0$0 == 0x00c5
                           0000C5   898 _STA	=	0x00c5
                           0000C4   899 G$STO$0$0 == 0x00c4
                           0000C4   900 _STO	=	0x00c4
                           0000C3   901 G$SI$0$0 == 0x00c3
                           0000C3   902 _SI	=	0x00c3
                           0000C2   903 G$AA$0$0 == 0x00c2
                           0000C2   904 _AA	=	0x00c2
                           0000C1   905 G$SMBFTE$0$0 == 0x00c1
                           0000C1   906 _SMBFTE	=	0x00c1
                           0000C0   907 G$SMBTOE$0$0 == 0x00c0
                           0000C0   908 _SMBTOE	=	0x00c0
                           0000C7   909 G$BOFF$0$0 == 0x00c7
                           0000C7   910 _BOFF	=	0x00c7
                           0000C6   911 G$EWARN$0$0 == 0x00c6
                           0000C6   912 _EWARN	=	0x00c6
                           0000C5   913 G$EPASS$0$0 == 0x00c5
                           0000C5   914 _EPASS	=	0x00c5
                           0000C4   915 G$RXOK$0$0 == 0x00c4
                           0000C4   916 _RXOK	=	0x00c4
                           0000C3   917 G$TXOK$0$0 == 0x00c3
                           0000C3   918 _TXOK	=	0x00c3
                           0000C2   919 G$LEC2$0$0 == 0x00c2
                           0000C2   920 _LEC2	=	0x00c2
                           0000C1   921 G$LEC1$0$0 == 0x00c1
                           0000C1   922 _LEC1	=	0x00c1
                           0000C0   923 G$LEC0$0$0 == 0x00c0
                           0000C0   924 _LEC0	=	0x00c0
                           0000CF   925 G$TF2$0$0 == 0x00cf
                           0000CF   926 _TF2	=	0x00cf
                           0000CE   927 G$EXF2$0$0 == 0x00ce
                           0000CE   928 _EXF2	=	0x00ce
                           0000CB   929 G$EXEN2$0$0 == 0x00cb
                           0000CB   930 _EXEN2	=	0x00cb
                           0000CA   931 G$TR2$0$0 == 0x00ca
                           0000CA   932 _TR2	=	0x00ca
                           0000C9   933 G$CT2$0$0 == 0x00c9
                           0000C9   934 _CT2	=	0x00c9
                           0000C8   935 G$CPRL2$0$0 == 0x00c8
                           0000C8   936 _CPRL2	=	0x00c8
                           0000CF   937 G$TF3$0$0 == 0x00cf
                           0000CF   938 _TF3	=	0x00cf
                           0000CE   939 G$EXF3$0$0 == 0x00ce
                           0000CE   940 _EXF3	=	0x00ce
                           0000CB   941 G$EXEN3$0$0 == 0x00cb
                           0000CB   942 _EXEN3	=	0x00cb
                           0000CA   943 G$TR3$0$0 == 0x00ca
                           0000CA   944 _TR3	=	0x00ca
                           0000C9   945 G$CT3$0$0 == 0x00c9
                           0000C9   946 _CT3	=	0x00c9
                           0000C8   947 G$CPRL3$0$0 == 0x00c8
                           0000C8   948 _CPRL3	=	0x00c8
                           0000CF   949 G$TF4$0$0 == 0x00cf
                           0000CF   950 _TF4	=	0x00cf
                           0000CE   951 G$EXF4$0$0 == 0x00ce
                           0000CE   952 _EXF4	=	0x00ce
                           0000CB   953 G$EXEN4$0$0 == 0x00cb
                           0000CB   954 _EXEN4	=	0x00cb
                           0000CA   955 G$TR4$0$0 == 0x00ca
                           0000CA   956 _TR4	=	0x00ca
                           0000C9   957 G$CT4$0$0 == 0x00c9
                           0000C9   958 _CT4	=	0x00c9
                           0000C8   959 G$CPRL4$0$0 == 0x00c8
                           0000C8   960 _CPRL4	=	0x00c8
                           0000D7   961 G$CY$0$0 == 0x00d7
                           0000D7   962 _CY	=	0x00d7
                           0000D6   963 G$AC$0$0 == 0x00d6
                           0000D6   964 _AC	=	0x00d6
                           0000D5   965 G$F0$0$0 == 0x00d5
                           0000D5   966 _F0	=	0x00d5
                           0000D4   967 G$RS1$0$0 == 0x00d4
                           0000D4   968 _RS1	=	0x00d4
                           0000D3   969 G$RS0$0$0 == 0x00d3
                           0000D3   970 _RS0	=	0x00d3
                           0000D2   971 G$OV$0$0 == 0x00d2
                           0000D2   972 _OV	=	0x00d2
                           0000D1   973 G$F1$0$0 == 0x00d1
                           0000D1   974 _F1	=	0x00d1
                           0000D0   975 G$P$0$0 == 0x00d0
                           0000D0   976 _P	=	0x00d0
                           0000DF   977 G$CF$0$0 == 0x00df
                           0000DF   978 _CF	=	0x00df
                           0000DE   979 G$CR$0$0 == 0x00de
                           0000DE   980 _CR	=	0x00de
                           0000DD   981 G$CCF5$0$0 == 0x00dd
                           0000DD   982 _CCF5	=	0x00dd
                           0000DC   983 G$CCF4$0$0 == 0x00dc
                           0000DC   984 _CCF4	=	0x00dc
                           0000DB   985 G$CCF3$0$0 == 0x00db
                           0000DB   986 _CCF3	=	0x00db
                           0000DA   987 G$CCF2$0$0 == 0x00da
                           0000DA   988 _CCF2	=	0x00da
                           0000D9   989 G$CCF1$0$0 == 0x00d9
                           0000D9   990 _CCF1	=	0x00d9
                           0000D8   991 G$CCF0$0$0 == 0x00d8
                           0000D8   992 _CCF0	=	0x00d8
                           0000EF   993 G$AD0EN$0$0 == 0x00ef
                           0000EF   994 _AD0EN	=	0x00ef
                           0000EE   995 G$AD0TM$0$0 == 0x00ee
                           0000EE   996 _AD0TM	=	0x00ee
                           0000ED   997 G$AD0INT$0$0 == 0x00ed
                           0000ED   998 _AD0INT	=	0x00ed
                           0000EC   999 G$AD0BUSY$0$0 == 0x00ec
                           0000EC  1000 _AD0BUSY	=	0x00ec
                           0000EB  1001 G$AD0CM1$0$0 == 0x00eb
                           0000EB  1002 _AD0CM1	=	0x00eb
                           0000EA  1003 G$AD0CM0$0$0 == 0x00ea
                           0000EA  1004 _AD0CM0	=	0x00ea
                           0000E9  1005 G$AD0WINT$0$0 == 0x00e9
                           0000E9  1006 _AD0WINT	=	0x00e9
                           0000E8  1007 G$AD0LJST$0$0 == 0x00e8
                           0000E8  1008 _AD0LJST	=	0x00e8
                           0000EF  1009 G$AD2EN$0$0 == 0x00ef
                           0000EF  1010 _AD2EN	=	0x00ef
                           0000EE  1011 G$AD2TM$0$0 == 0x00ee
                           0000EE  1012 _AD2TM	=	0x00ee
                           0000ED  1013 G$AD2INT$0$0 == 0x00ed
                           0000ED  1014 _AD2INT	=	0x00ed
                           0000EC  1015 G$AD2BUSY$0$0 == 0x00ec
                           0000EC  1016 _AD2BUSY	=	0x00ec
                           0000EB  1017 G$AD2CM2$0$0 == 0x00eb
                           0000EB  1018 _AD2CM2	=	0x00eb
                           0000EA  1019 G$AD2CM1$0$0 == 0x00ea
                           0000EA  1020 _AD2CM1	=	0x00ea
                           0000E9  1021 G$AD2CM0$0$0 == 0x00e9
                           0000E9  1022 _AD2CM0	=	0x00e9
                           0000E8  1023 G$AD2WINT$0$0 == 0x00e8
                           0000E8  1024 _AD2WINT	=	0x00e8
                           0000FF  1025 G$SPIF$0$0 == 0x00ff
                           0000FF  1026 _SPIF	=	0x00ff
                           0000FE  1027 G$WCOL$0$0 == 0x00fe
                           0000FE  1028 _WCOL	=	0x00fe
                           0000FD  1029 G$MODF$0$0 == 0x00fd
                           0000FD  1030 _MODF	=	0x00fd
                           0000FC  1031 G$RXOVRN$0$0 == 0x00fc
                           0000FC  1032 _RXOVRN	=	0x00fc
                           0000FB  1033 G$NSSMD1$0$0 == 0x00fb
                           0000FB  1034 _NSSMD1	=	0x00fb
                           0000FA  1035 G$NSSMD0$0$0 == 0x00fa
                           0000FA  1036 _NSSMD0	=	0x00fa
                           0000F9  1037 G$TXBMT$0$0 == 0x00f9
                           0000F9  1038 _TXBMT	=	0x00f9
                           0000F8  1039 G$SPIEN$0$0 == 0x00f8
                           0000F8  1040 _SPIEN	=	0x00f8
                           0000F8  1041 G$CANINIT$0$0 == 0x00f8
                           0000F8  1042 _CANINIT	=	0x00f8
                           0000F9  1043 G$CANIE$0$0 == 0x00f9
                           0000F9  1044 _CANIE	=	0x00f9
                           0000FA  1045 G$CANSIE$0$0 == 0x00fa
                           0000FA  1046 _CANSIE	=	0x00fa
                           0000FB  1047 G$CANEIE$0$0 == 0x00fb
                           0000FB  1048 _CANEIE	=	0x00fb
                           0000FC  1049 G$CANIF$0$0 == 0x00fc
                           0000FC  1050 _CANIF	=	0x00fc
                           0000FD  1051 G$CANDAR$0$0 == 0x00fd
                           0000FD  1052 _CANDAR	=	0x00fd
                           0000FE  1053 G$CANCCE$0$0 == 0x00fe
                           0000FE  1054 _CANCCE	=	0x00fe
                           0000FF  1055 G$CANTEST$0$0 == 0x00ff
                           0000FF  1056 _CANTEST	=	0x00ff
                           000080  1057 G$P0_0$0$0 == 0x0080
                           000080  1058 _P0_0	=	0x0080
                           000081  1059 G$P0_1$0$0 == 0x0081
                           000081  1060 _P0_1	=	0x0081
                           000082  1061 G$P0_2$0$0 == 0x0082
                           000082  1062 _P0_2	=	0x0082
                           000083  1063 G$P0_3$0$0 == 0x0083
                           000083  1064 _P0_3	=	0x0083
                           000084  1065 G$P0_4$0$0 == 0x0084
                           000084  1066 _P0_4	=	0x0084
                           000085  1067 G$P0_5$0$0 == 0x0085
                           000085  1068 _P0_5	=	0x0085
                           000086  1069 G$P0_6$0$0 == 0x0086
                           000086  1070 _P0_6	=	0x0086
                           000087  1071 G$P0_7$0$0 == 0x0087
                           000087  1072 _P0_7	=	0x0087
                           000090  1073 G$P1_0$0$0 == 0x0090
                           000090  1074 _P1_0	=	0x0090
                           000091  1075 G$P1_1$0$0 == 0x0091
                           000091  1076 _P1_1	=	0x0091
                           000092  1077 G$P1_2$0$0 == 0x0092
                           000092  1078 _P1_2	=	0x0092
                           000093  1079 G$P1_3$0$0 == 0x0093
                           000093  1080 _P1_3	=	0x0093
                           000094  1081 G$P1_4$0$0 == 0x0094
                           000094  1082 _P1_4	=	0x0094
                           000095  1083 G$P1_5$0$0 == 0x0095
                           000095  1084 _P1_5	=	0x0095
                           000096  1085 G$P1_6$0$0 == 0x0096
                           000096  1086 _P1_6	=	0x0096
                           000097  1087 G$P1_7$0$0 == 0x0097
                           000097  1088 _P1_7	=	0x0097
                           0000A0  1089 G$P2_0$0$0 == 0x00a0
                           0000A0  1090 _P2_0	=	0x00a0
                           0000A1  1091 G$P2_1$0$0 == 0x00a1
                           0000A1  1092 _P2_1	=	0x00a1
                           0000A2  1093 G$P2_2$0$0 == 0x00a2
                           0000A2  1094 _P2_2	=	0x00a2
                           0000A3  1095 G$P2_3$0$0 == 0x00a3
                           0000A3  1096 _P2_3	=	0x00a3
                           0000A4  1097 G$P2_4$0$0 == 0x00a4
                           0000A4  1098 _P2_4	=	0x00a4
                           0000A5  1099 G$P2_5$0$0 == 0x00a5
                           0000A5  1100 _P2_5	=	0x00a5
                           0000A6  1101 G$P2_6$0$0 == 0x00a6
                           0000A6  1102 _P2_6	=	0x00a6
                           0000A7  1103 G$P2_7$0$0 == 0x00a7
                           0000A7  1104 _P2_7	=	0x00a7
                           0000B0  1105 G$P3_0$0$0 == 0x00b0
                           0000B0  1106 _P3_0	=	0x00b0
                           0000B1  1107 G$P3_1$0$0 == 0x00b1
                           0000B1  1108 _P3_1	=	0x00b1
                           0000B2  1109 G$P3_2$0$0 == 0x00b2
                           0000B2  1110 _P3_2	=	0x00b2
                           0000B3  1111 G$P3_3$0$0 == 0x00b3
                           0000B3  1112 _P3_3	=	0x00b3
                           0000B4  1113 G$P3_4$0$0 == 0x00b4
                           0000B4  1114 _P3_4	=	0x00b4
                           0000B5  1115 G$P3_5$0$0 == 0x00b5
                           0000B5  1116 _P3_5	=	0x00b5
                           0000B6  1117 G$P3_6$0$0 == 0x00b6
                           0000B6  1118 _P3_6	=	0x00b6
                           0000B7  1119 G$P3_7$0$0 == 0x00b7
                           0000B7  1120 _P3_7	=	0x00b7
                           0000C8  1121 G$P4_0$0$0 == 0x00c8
                           0000C8  1122 _P4_0	=	0x00c8
                           0000C9  1123 G$P4_1$0$0 == 0x00c9
                           0000C9  1124 _P4_1	=	0x00c9
                           0000CA  1125 G$P4_2$0$0 == 0x00ca
                           0000CA  1126 _P4_2	=	0x00ca
                           0000CB  1127 G$P4_3$0$0 == 0x00cb
                           0000CB  1128 _P4_3	=	0x00cb
                           0000CC  1129 G$P4_4$0$0 == 0x00cc
                           0000CC  1130 _P4_4	=	0x00cc
                           0000CD  1131 G$P4_5$0$0 == 0x00cd
                           0000CD  1132 _P4_5	=	0x00cd
                           0000CE  1133 G$P4_6$0$0 == 0x00ce
                           0000CE  1134 _P4_6	=	0x00ce
                           0000CF  1135 G$P4_7$0$0 == 0x00cf
                           0000CF  1136 _P4_7	=	0x00cf
                           0000D8  1137 G$P5_0$0$0 == 0x00d8
                           0000D8  1138 _P5_0	=	0x00d8
                           0000D9  1139 G$P5_1$0$0 == 0x00d9
                           0000D9  1140 _P5_1	=	0x00d9
                           0000DA  1141 G$P5_2$0$0 == 0x00da
                           0000DA  1142 _P5_2	=	0x00da
                           0000DB  1143 G$P5_3$0$0 == 0x00db
                           0000DB  1144 _P5_3	=	0x00db
                           0000DC  1145 G$P5_4$0$0 == 0x00dc
                           0000DC  1146 _P5_4	=	0x00dc
                           0000DD  1147 G$P5_5$0$0 == 0x00dd
                           0000DD  1148 _P5_5	=	0x00dd
                           0000DE  1149 G$P5_6$0$0 == 0x00de
                           0000DE  1150 _P5_6	=	0x00de
                           0000DF  1151 G$P5_7$0$0 == 0x00df
                           0000DF  1152 _P5_7	=	0x00df
                           0000E8  1153 G$P6_0$0$0 == 0x00e8
                           0000E8  1154 _P6_0	=	0x00e8
                           0000E9  1155 G$P6_1$0$0 == 0x00e9
                           0000E9  1156 _P6_1	=	0x00e9
                           0000EA  1157 G$P6_2$0$0 == 0x00ea
                           0000EA  1158 _P6_2	=	0x00ea
                           0000EB  1159 G$P6_3$0$0 == 0x00eb
                           0000EB  1160 _P6_3	=	0x00eb
                           0000EC  1161 G$P6_4$0$0 == 0x00ec
                           0000EC  1162 _P6_4	=	0x00ec
                           0000ED  1163 G$P6_5$0$0 == 0x00ed
                           0000ED  1164 _P6_5	=	0x00ed
                           0000EE  1165 G$P6_6$0$0 == 0x00ee
                           0000EE  1166 _P6_6	=	0x00ee
                           0000EF  1167 G$P6_7$0$0 == 0x00ef
                           0000EF  1168 _P6_7	=	0x00ef
                           0000F8  1169 G$P7_0$0$0 == 0x00f8
                           0000F8  1170 _P7_0	=	0x00f8
                           0000F9  1171 G$P7_1$0$0 == 0x00f9
                           0000F9  1172 _P7_1	=	0x00f9
                           0000FA  1173 G$P7_2$0$0 == 0x00fa
                           0000FA  1174 _P7_2	=	0x00fa
                           0000FB  1175 G$P7_3$0$0 == 0x00fb
                           0000FB  1176 _P7_3	=	0x00fb
                           0000FC  1177 G$P7_4$0$0 == 0x00fc
                           0000FC  1178 _P7_4	=	0x00fc
                           0000FD  1179 G$P7_5$0$0 == 0x00fd
                           0000FD  1180 _P7_5	=	0x00fd
                           0000FE  1181 G$P7_6$0$0 == 0x00fe
                           0000FE  1182 _P7_6	=	0x00fe
                           0000FF  1183 G$P7_7$0$0 == 0x00ff
                           0000FF  1184 _P7_7	=	0x00ff
                                   1185 ;--------------------------------------------------------
                                   1186 ; overlayable register banks
                                   1187 ;--------------------------------------------------------
                                   1188 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                       1189 	.ds 8
                                   1190 ;--------------------------------------------------------
                                   1191 ; internal ram data
                                   1192 ;--------------------------------------------------------
                                   1193 	.area DSEG    (DATA)
                           000000  1194 Lglcd.putchar$coluna$1$71==.
      00000B                       1195 _putchar_coluna_1_71:
      00000B                       1196 	.ds 1
                           000001  1197 Lglcd.escala_glcd$lim_inf$1$77==.
      00000C                       1198 _escala_glcd_PARM_2:
      00000C                       1199 	.ds 4
                           000005  1200 Lglcd.escala_glcd$lim_sup$1$77==.
      000010                       1201 _escala_glcd_PARM_3:
      000010                       1202 	.ds 4
                           000009  1203 Lglcd.ponto_glcd$ver$1$79==.
      000014                       1204 _ponto_glcd_PARM_2:
      000014                       1205 	.ds 1
                                   1206 ;--------------------------------------------------------
                                   1207 ; overlayable items in internal ram 
                                   1208 ;--------------------------------------------------------
                                   1209 	.area	OSEG    (OVR,DATA)
                                   1210 ;--------------------------------------------------------
                                   1211 ; indirectly addressable internal ram data
                                   1212 ;--------------------------------------------------------
                                   1213 	.area ISEG    (DATA)
                                   1214 ;--------------------------------------------------------
                                   1215 ; absolute internal ram data
                                   1216 ;--------------------------------------------------------
                                   1217 	.area IABS    (ABS,DATA)
                                   1218 	.area IABS    (ABS,DATA)
                                   1219 ;--------------------------------------------------------
                                   1220 ; bit data
                                   1221 ;--------------------------------------------------------
                                   1222 	.area BSEG    (BIT)
                           000000  1223 Lglcd.le_glcd$cd$1$53==.
      000004                       1224 _le_glcd_PARM_1:
      000004                       1225 	.ds 1
                           000001  1226 Lglcd.le_glcd$cs$1$53==.
      000005                       1227 _le_glcd_PARM_2:
      000005                       1228 	.ds 1
                           000002  1229 Lglcd.esc_glcd$cd$1$55==.
      000006                       1230 _esc_glcd_PARM_2:
      000006                       1231 	.ds 1
                           000003  1232 Lglcd.esc_glcd$cs$1$55==.
      000007                       1233 _esc_glcd_PARM_3:
      000007                       1234 	.ds 1
                           000004  1235 Lglcd.conf_Y$cs$1$58==.
      000008                       1236 _conf_Y_PARM_2:
      000008                       1237 	.ds 1
                           000005  1238 Lglcd.conf_pag$cs$1$60==.
      000009                       1239 _conf_pag_PARM_2:
      000009                       1240 	.ds 1
                           000006  1241 Lglcd.putchar$sloc0$1$0==.
      00000A                       1242 _putchar_sloc0_1_0:
      00000A                       1243 	.ds 1
                           000007  1244 Lglcd.limpa_col_glcd$sloc0$1$0==.
      00000B                       1245 _limpa_col_glcd_sloc0_1_0:
      00000B                       1246 	.ds 1
                           000008  1247 Lglcd.escala_glcd$sloc0$1$0==.
      00000C                       1248 _escala_glcd_sloc0_1_0:
      00000C                       1249 	.ds 1
                           000009  1250 Lglcd.ponto_glcd$sloc0$1$0==.
      00000D                       1251 _ponto_glcd_sloc0_1_0:
      00000D                       1252 	.ds 1
                                   1253 ;--------------------------------------------------------
                                   1254 ; paged external ram data
                                   1255 ;--------------------------------------------------------
                                   1256 	.area PSEG    (PAG,XDATA)
                                   1257 ;--------------------------------------------------------
                                   1258 ; external ram data
                                   1259 ;--------------------------------------------------------
                                   1260 	.area XSEG    (XDATA)
                                   1261 ;--------------------------------------------------------
                                   1262 ; absolute external ram data
                                   1263 ;--------------------------------------------------------
                                   1264 	.area XABS    (ABS,XDATA)
                                   1265 ;--------------------------------------------------------
                                   1266 ; external initialized ram data
                                   1267 ;--------------------------------------------------------
                                   1268 	.area XISEG   (XDATA)
                                   1269 	.area HOME    (CODE)
                                   1270 	.area GSINIT0 (CODE)
                                   1271 	.area GSINIT1 (CODE)
                                   1272 	.area GSINIT2 (CODE)
                                   1273 	.area GSINIT3 (CODE)
                                   1274 	.area GSINIT4 (CODE)
                                   1275 	.area GSINIT5 (CODE)
                                   1276 	.area GSINIT  (CODE)
                                   1277 	.area GSFINAL (CODE)
                                   1278 	.area CSEG    (CODE)
                                   1279 ;--------------------------------------------------------
                                   1280 ; global & static initialisations
                                   1281 ;--------------------------------------------------------
                                   1282 	.area HOME    (CODE)
                                   1283 	.area GSINIT  (CODE)
                                   1284 	.area GSFINAL (CODE)
                                   1285 	.area GSINIT  (CODE)
                                   1286 ;------------------------------------------------------------
                                   1287 ;Allocation info for local variables in function 'putchar'
                                   1288 ;------------------------------------------------------------
                                   1289 ;coluna                    Allocated with name '_putchar_coluna_1_71'
                                   1290 ;c                         Allocated to registers r7 
                                   1291 ;lado                      Allocated to registers r6 
                                   1292 ;------------------------------------------------------------
                           000000  1293 	G$putchar$0$0 ==.
                           000000  1294 	C$glcd.c$127$1$71 ==.
                                   1295 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:127: static unsigned char coluna = 0;
      0000F2 75 0B 00         [24] 1296 	mov	_putchar_coluna_1_71,#0x00
                                   1297 ;--------------------------------------------------------
                                   1298 ; Home
                                   1299 ;--------------------------------------------------------
                                   1300 	.area HOME    (CODE)
                                   1301 	.area HOME    (CODE)
                                   1302 ;--------------------------------------------------------
                                   1303 ; code
                                   1304 ;--------------------------------------------------------
                                   1305 	.area CSEG    (CODE)
                                   1306 ;------------------------------------------------------------
                                   1307 ;Allocation info for local variables in function 'le_glcd'
                                   1308 ;------------------------------------------------------------
                                   1309 ;dado                      Allocated to registers 
                                   1310 ;------------------------------------------------------------
                           000000  1311 	G$le_glcd$0$0 ==.
                           000000  1312 	C$glcd.c$24$0$0 ==.
                                   1313 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:24: unsigned char le_glcd(__bit cd, __bit cs) {
                                   1314 ;	-----------------------------------------
                                   1315 ;	 function le_glcd
                                   1316 ;	-----------------------------------------
      000373                       1317 _le_glcd:
                           000007  1318 	ar7 = 0x07
                           000006  1319 	ar6 = 0x06
                           000005  1320 	ar5 = 0x05
                           000004  1321 	ar4 = 0x04
                           000003  1322 	ar3 = 0x03
                           000002  1323 	ar2 = 0x02
                           000001  1324 	ar1 = 0x01
                           000000  1325 	ar0 = 0x00
                           000000  1326 	C$glcd.c$26$1$54 ==.
                                   1327 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:26: GLCD_RW = 1; // Leitura
      000373 D2 A3            [12] 1328 	setb	_P2_3
                           000002  1329 	C$glcd.c$27$1$54 ==.
                                   1330 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:27: GLCD_CS1 = cs; // Escolhe lado do display
      000375 A2 05            [12] 1331 	mov	c,_le_glcd_PARM_2
      000377 92 A0            [24] 1332 	mov	_P2_0,c
                           000006  1333 	C$glcd.c$28$1$54 ==.
                                   1334 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:28: GLCD_CS2 = !cs;
      000379 A2 05            [12] 1335 	mov	c,_le_glcd_PARM_2
      00037B B3               [12] 1336 	cpl	c
      00037C 92 A1            [24] 1337 	mov	_P2_1,c
                           00000B  1338 	C$glcd.c$29$1$54 ==.
                                   1339 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:29: GLCD_RS = cd; // Comando ou dado. RS == D/I
      00037E A2 04            [12] 1340 	mov	c,_le_glcd_PARM_1
      000380 92 A2            [24] 1341 	mov	_P2_2,c
                           00000F  1342 	C$glcd.c$30$1$54 ==.
                                   1343 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:30: NOP4();
      000382 00               [12] 1344 	NOP	
      000383 00               [12] 1345 	NOP	
      000384 00               [12] 1346 	NOP	
      000385 00               [12] 1347 	NOP	
                           000013  1348 	C$glcd.c$31$1$54 ==.
                                   1349 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:31: GLCD_ENABLE = 1;
      000386 D2 A4            [12] 1350 	setb	_P2_4
                           000015  1351 	C$glcd.c$32$1$54 ==.
                                   1352 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:32: NOP8();
      000388 00               [12] 1353 	NOP	
      000389 00               [12] 1354 	NOP	
      00038A 00               [12] 1355 	NOP	
      00038B 00               [12] 1356 	NOP	
      00038C 00               [12] 1357 	NOP	
      00038D 00               [12] 1358 	NOP	
      00038E 00               [12] 1359 	NOP	
      00038F 00               [12] 1360 	NOP	
                           00001D  1361 	C$glcd.c$33$1$54 ==.
                                   1362 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:33: SFRPAGE = CONFIG_PAGE; // Para acessar P4 (para ler DB)
      000390 75 84 0F         [24] 1363 	mov	_SFRPAGE,#0x0f
                           000020  1364 	C$glcd.c$34$1$54 ==.
                                   1365 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:34: dado = GLCD_DB;
      000393 85 C8 82         [24] 1366 	mov	dpl,_P4
                           000023  1367 	C$glcd.c$35$1$54 ==.
                                   1368 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:35: SFRPAGE = LEGACY_PAGE; // Volto para P0
      000396 75 84 00         [24] 1369 	mov	_SFRPAGE,#0x00
                           000026  1370 	C$glcd.c$36$1$54 ==.
                                   1371 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:36: NOP4();
      000399 00               [12] 1372 	NOP	
      00039A 00               [12] 1373 	NOP	
      00039B 00               [12] 1374 	NOP	
      00039C 00               [12] 1375 	NOP	
                           00002A  1376 	C$glcd.c$37$1$54 ==.
                                   1377 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:37: GLCD_ENABLE = 0;
      00039D C2 A4            [12] 1378 	clr	_P2_4
                           00002C  1379 	C$glcd.c$38$1$54 ==.
                                   1380 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:38: NOP12();
      00039F 00               [12] 1381 	NOP	
      0003A0 00               [12] 1382 	NOP	
      0003A1 00               [12] 1383 	NOP	
      0003A2 00               [12] 1384 	NOP	
      0003A3 00               [12] 1385 	NOP	
      0003A4 00               [12] 1386 	NOP	
      0003A5 00               [12] 1387 	NOP	
      0003A6 00               [12] 1388 	NOP	
      0003A7 00               [12] 1389 	NOP	
      0003A8 00               [12] 1390 	NOP	
      0003A9 00               [12] 1391 	NOP	
      0003AA 00               [12] 1392 	NOP	
                           000038  1393 	C$glcd.c$39$1$54 ==.
                                   1394 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:39: return dado;
                           000038  1395 	C$glcd.c$40$1$54 ==.
                           000038  1396 	XG$le_glcd$0$0 ==.
      0003AB 22               [24] 1397 	ret
                                   1398 ;------------------------------------------------------------
                                   1399 ;Allocation info for local variables in function 'esc_glcd'
                                   1400 ;------------------------------------------------------------
                                   1401 ;dado                      Allocated to registers r7 
                                   1402 ;status                    Allocated to registers 
                                   1403 ;------------------------------------------------------------
                           000039  1404 	G$esc_glcd$0$0 ==.
                           000039  1405 	C$glcd.c$42$1$54 ==.
                                   1406 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:42: void esc_glcd(unsigned char dado, __bit cd, __bit cs) {
                                   1407 ;	-----------------------------------------
                                   1408 ;	 function esc_glcd
                                   1409 ;	-----------------------------------------
      0003AC                       1410 _esc_glcd:
      0003AC AF 82            [24] 1411 	mov	r7,dpl
                           00003B  1412 	C$glcd.c$45$1$56 ==.
                                   1413 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:45: reset_wdt();
      0003AE C0 07            [24] 1414 	push	ar7
      0003B0 12 02 EA         [24] 1415 	lcall	_reset_wdt
      0003B3 D0 07            [24] 1416 	pop	ar7
                           000042  1417 	C$glcd.c$46$1$56 ==.
                                   1418 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:46: do {  // Checa status
      0003B5                       1419 00101$:
                           000042  1420 	C$glcd.c$47$2$57 ==.
                                   1421 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:47: status = le_glcd(GLCD_COD, cs);
      0003B5 C2 04            [12] 1422 	clr	_le_glcd_PARM_1
      0003B7 A2 07            [12] 1423 	mov	c,_esc_glcd_PARM_3
      0003B9 92 05            [24] 1424 	mov	_le_glcd_PARM_2,c
      0003BB C0 07            [24] 1425 	push	ar7
      0003BD 12 03 73         [24] 1426 	lcall	_le_glcd
      0003C0 E5 82            [12] 1427 	mov	a,dpl
      0003C2 D0 07            [24] 1428 	pop	ar7
                           000051  1429 	C$glcd.c$48$1$56 ==.
                                   1430 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:48: } while (status & 0x80);
      0003C4 20 E7 EE         [24] 1431 	jb	acc.7,00101$
                           000054  1432 	C$glcd.c$50$1$56 ==.
                                   1433 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:50: GLCD_RW = 0; // Escrita
      0003C7 C2 A3            [12] 1434 	clr	_P2_3
                           000056  1435 	C$glcd.c$51$1$56 ==.
                                   1436 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:51: GLCD_CS1 = cs; // Escolhe lado do display
      0003C9 A2 07            [12] 1437 	mov	c,_esc_glcd_PARM_3
      0003CB 92 A0            [24] 1438 	mov	_P2_0,c
                           00005A  1439 	C$glcd.c$52$1$56 ==.
                                   1440 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:52: GLCD_CS2 = !cs;
      0003CD A2 07            [12] 1441 	mov	c,_esc_glcd_PARM_3
      0003CF B3               [12] 1442 	cpl	c
      0003D0 92 A1            [24] 1443 	mov	_P2_1,c
                           00005F  1444 	C$glcd.c$53$1$56 ==.
                                   1445 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:53: GLCD_RS = cd; // Comando ou dado. RS == D/I
      0003D2 A2 06            [12] 1446 	mov	c,_esc_glcd_PARM_2
      0003D4 92 A2            [24] 1447 	mov	_P2_2,c
                           000063  1448 	C$glcd.c$54$1$56 ==.
                                   1449 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:54: SFRPAGE = CONFIG_PAGE; // Para acessar P4 (para ler DB)
      0003D6 75 84 0F         [24] 1450 	mov	_SFRPAGE,#0x0f
                           000066  1451 	C$glcd.c$55$1$56 ==.
                                   1452 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:55: GLCD_DB = dado;
      0003D9 8F C8            [24] 1453 	mov	_P4,r7
                           000068  1454 	C$glcd.c$56$1$56 ==.
                                   1455 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:56: SFRPAGE = LEGACY_PAGE; // Volto para P0
      0003DB 75 84 00         [24] 1456 	mov	_SFRPAGE,#0x00
                           00006B  1457 	C$glcd.c$57$1$56 ==.
                                   1458 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:57: NOP4();
      0003DE 00               [12] 1459 	NOP	
      0003DF 00               [12] 1460 	NOP	
      0003E0 00               [12] 1461 	NOP	
      0003E1 00               [12] 1462 	NOP	
                           00006F  1463 	C$glcd.c$58$1$56 ==.
                                   1464 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:58: GLCD_ENABLE = 1;
      0003E2 D2 A4            [12] 1465 	setb	_P2_4
                           000071  1466 	C$glcd.c$59$1$56 ==.
                                   1467 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:59: NOP12();
      0003E4 00               [12] 1468 	NOP	
      0003E5 00               [12] 1469 	NOP	
      0003E6 00               [12] 1470 	NOP	
      0003E7 00               [12] 1471 	NOP	
      0003E8 00               [12] 1472 	NOP	
      0003E9 00               [12] 1473 	NOP	
      0003EA 00               [12] 1474 	NOP	
      0003EB 00               [12] 1475 	NOP	
      0003EC 00               [12] 1476 	NOP	
      0003ED 00               [12] 1477 	NOP	
      0003EE 00               [12] 1478 	NOP	
      0003EF 00               [12] 1479 	NOP	
                           00007D  1480 	C$glcd.c$60$1$56 ==.
                                   1481 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:60: GLCD_ENABLE = 0;
      0003F0 C2 A4            [12] 1482 	clr	_P2_4
                           00007F  1483 	C$glcd.c$61$1$56 ==.
                                   1484 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:61: SFRPAGE = CONFIG_PAGE; // Para acessar P4 (para ler DB)
      0003F2 75 84 0F         [24] 1485 	mov	_SFRPAGE,#0x0f
                           000082  1486 	C$glcd.c$62$1$56 ==.
                                   1487 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:62: GLCD_DB = 0xFF;
      0003F5 75 C8 FF         [24] 1488 	mov	_P4,#0xff
                           000085  1489 	C$glcd.c$63$1$56 ==.
                                   1490 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:63: SFRPAGE = LEGACY_PAGE; // Volto para P0
      0003F8 75 84 00         [24] 1491 	mov	_SFRPAGE,#0x00
                           000088  1492 	C$glcd.c$64$1$56 ==.
                                   1493 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:64: GLCD_RW = 1; // Necess?rio para desabilitar SRAM que usa o mesmo pino
      0003FB D2 A3            [12] 1494 	setb	_P2_3
                           00008A  1495 	C$glcd.c$65$1$56 ==.
                                   1496 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:65: NOP12();
      0003FD 00               [12] 1497 	NOP	
      0003FE 00               [12] 1498 	NOP	
      0003FF 00               [12] 1499 	NOP	
      000400 00               [12] 1500 	NOP	
      000401 00               [12] 1501 	NOP	
      000402 00               [12] 1502 	NOP	
      000403 00               [12] 1503 	NOP	
      000404 00               [12] 1504 	NOP	
      000405 00               [12] 1505 	NOP	
      000406 00               [12] 1506 	NOP	
      000407 00               [12] 1507 	NOP	
      000408 00               [12] 1508 	NOP	
                           000096  1509 	C$glcd.c$66$1$56 ==.
                           000096  1510 	XG$esc_glcd$0$0 ==.
      000409 22               [24] 1511 	ret
                                   1512 ;------------------------------------------------------------
                                   1513 ;Allocation info for local variables in function 'conf_Y'
                                   1514 ;------------------------------------------------------------
                                   1515 ;y                         Allocated to registers r7 
                                   1516 ;------------------------------------------------------------
                           000097  1517 	G$conf_Y$0$0 ==.
                           000097  1518 	C$glcd.c$68$1$56 ==.
                                   1519 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:68: void conf_Y(unsigned  char y, __bit cs) {
                                   1520 ;	-----------------------------------------
                                   1521 ;	 function conf_Y
                                   1522 ;	-----------------------------------------
      00040A                       1523 _conf_Y:
      00040A AF 82            [24] 1524 	mov	r7,dpl
                           000099  1525 	C$glcd.c$69$1$59 ==.
                                   1526 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:69: y = y & 0x7F;
      00040C 53 07 7F         [24] 1527 	anl	ar7,#0x7f
                           00009C  1528 	C$glcd.c$70$1$59 ==.
                                   1529 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:70: y = y | 0x40;
      00040F 43 07 40         [24] 1530 	orl	ar7,#0x40
                           00009F  1531 	C$glcd.c$71$1$59 ==.
                                   1532 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:71: esc_glcd(y, GLCD_COD, cs);
      000412 C2 06            [12] 1533 	clr	_esc_glcd_PARM_2
      000414 A2 08            [12] 1534 	mov	c,_conf_Y_PARM_2
      000416 92 07            [24] 1535 	mov	_esc_glcd_PARM_3,c
      000418 8F 82            [24] 1536 	mov	dpl,r7
      00041A 12 03 AC         [24] 1537 	lcall	_esc_glcd
                           0000AA  1538 	C$glcd.c$72$1$59 ==.
                           0000AA  1539 	XG$conf_Y$0$0 ==.
      00041D 22               [24] 1540 	ret
                                   1541 ;------------------------------------------------------------
                                   1542 ;Allocation info for local variables in function 'conf_pag'
                                   1543 ;------------------------------------------------------------
                                   1544 ;pag                       Allocated to registers r7 
                                   1545 ;------------------------------------------------------------
                           0000AB  1546 	G$conf_pag$0$0 ==.
                           0000AB  1547 	C$glcd.c$74$1$59 ==.
                                   1548 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:74: void conf_pag(unsigned  char pag, __bit cs) {
                                   1549 ;	-----------------------------------------
                                   1550 ;	 function conf_pag
                                   1551 ;	-----------------------------------------
      00041E                       1552 _conf_pag:
      00041E AF 82            [24] 1553 	mov	r7,dpl
                           0000AD  1554 	C$glcd.c$75$1$61 ==.
                                   1555 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:75: pag = pag & 0x07; // estou protegendo os bits que me interessam
      000420 53 07 07         [24] 1556 	anl	ar7,#0x07
                           0000B0  1557 	C$glcd.c$76$1$61 ==.
                                   1558 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:76: pag = pag | 0xB8;
      000423 43 07 B8         [24] 1559 	orl	ar7,#0xb8
                           0000B3  1560 	C$glcd.c$77$1$61 ==.
                                   1561 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:77: esc_glcd(pag, GLCD_COD, cs);
      000426 C2 06            [12] 1562 	clr	_esc_glcd_PARM_2
      000428 A2 09            [12] 1563 	mov	c,_conf_pag_PARM_2
      00042A 92 07            [24] 1564 	mov	_esc_glcd_PARM_3,c
      00042C 8F 82            [24] 1565 	mov	dpl,r7
      00042E 12 03 AC         [24] 1566 	lcall	_esc_glcd
                           0000BE  1567 	C$glcd.c$78$1$61 ==.
                           0000BE  1568 	XG$conf_pag$0$0 ==.
      000431 22               [24] 1569 	ret
                                   1570 ;------------------------------------------------------------
                                   1571 ;Allocation info for local variables in function 'limpa_glcd'
                                   1572 ;------------------------------------------------------------
                                   1573 ;pag                       Allocated to registers r7 
                                   1574 ;hor                       Allocated to registers r6 
                                   1575 ;------------------------------------------------------------
                           0000BF  1576 	G$limpa_glcd$0$0 ==.
                           0000BF  1577 	C$glcd.c$80$1$61 ==.
                                   1578 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:80: void limpa_glcd(void) {
                                   1579 ;	-----------------------------------------
                                   1580 ;	 function limpa_glcd
                                   1581 ;	-----------------------------------------
      000432                       1582 _limpa_glcd:
                           0000BF  1583 	C$glcd.c$83$1$63 ==.
                                   1584 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:83: for (pag = 0; pag < 8; pag++) {
      000432 7F 00            [12] 1585 	mov	r7,#0x00
      000434                       1586 00105$:
                           0000C1  1587 	C$glcd.c$84$2$64 ==.
                                   1588 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:84: conf_pag(pag, GLCD_ESQ);
      000434 C2 09            [12] 1589 	clr	_conf_pag_PARM_2
      000436 8F 82            [24] 1590 	mov	dpl,r7
      000438 C0 07            [24] 1591 	push	ar7
      00043A 12 04 1E         [24] 1592 	lcall	_conf_pag
      00043D D0 07            [24] 1593 	pop	ar7
                           0000CC  1594 	C$glcd.c$85$2$64 ==.
                                   1595 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:85: conf_pag(pag, GLCD_DIR);
      00043F D2 09            [12] 1596 	setb	_conf_pag_PARM_2
      000441 8F 82            [24] 1597 	mov	dpl,r7
      000443 C0 07            [24] 1598 	push	ar7
      000445 12 04 1E         [24] 1599 	lcall	_conf_pag
                           0000D5  1600 	C$glcd.c$86$2$64 ==.
                                   1601 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:86: conf_Y(0, GLCD_ESQ);
      000448 C2 08            [12] 1602 	clr	_conf_Y_PARM_2
      00044A 75 82 00         [24] 1603 	mov	dpl,#0x00
      00044D 12 04 0A         [24] 1604 	lcall	_conf_Y
                           0000DD  1605 	C$glcd.c$87$2$64 ==.
                                   1606 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:87: conf_Y(0, GLCD_DIR);
      000450 D2 08            [12] 1607 	setb	_conf_Y_PARM_2
      000452 75 82 00         [24] 1608 	mov	dpl,#0x00
      000455 12 04 0A         [24] 1609 	lcall	_conf_Y
      000458 D0 07            [24] 1610 	pop	ar7
                           0000E7  1611 	C$glcd.c$88$1$63 ==.
                                   1612 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:88: for (hor = 0; hor < 64; hor++) {
      00045A 7E 00            [12] 1613 	mov	r6,#0x00
      00045C                       1614 00103$:
                           0000E9  1615 	C$glcd.c$89$3$65 ==.
                                   1616 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:89: esc_glcd(0, GLCD_DAT, GLCD_ESQ);
      00045C D2 06            [12] 1617 	setb	_esc_glcd_PARM_2
      00045E C2 07            [12] 1618 	clr	_esc_glcd_PARM_3
      000460 75 82 00         [24] 1619 	mov	dpl,#0x00
      000463 C0 07            [24] 1620 	push	ar7
      000465 C0 06            [24] 1621 	push	ar6
      000467 12 03 AC         [24] 1622 	lcall	_esc_glcd
                           0000F7  1623 	C$glcd.c$90$3$65 ==.
                                   1624 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:90: esc_glcd(0, GLCD_DAT, GLCD_DIR);
      00046A D2 06            [12] 1625 	setb	_esc_glcd_PARM_2
      00046C D2 07            [12] 1626 	setb	_esc_glcd_PARM_3
      00046E 75 82 00         [24] 1627 	mov	dpl,#0x00
      000471 12 03 AC         [24] 1628 	lcall	_esc_glcd
      000474 D0 06            [24] 1629 	pop	ar6
      000476 D0 07            [24] 1630 	pop	ar7
                           000105  1631 	C$glcd.c$88$2$64 ==.
                                   1632 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:88: for (hor = 0; hor < 64; hor++) {
      000478 0E               [12] 1633 	inc	r6
      000479 BE 40 00         [24] 1634 	cjne	r6,#0x40,00120$
      00047C                       1635 00120$:
      00047C 40 DE            [24] 1636 	jc	00103$
                           00010B  1637 	C$glcd.c$83$1$63 ==.
                                   1638 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:83: for (pag = 0; pag < 8; pag++) {
      00047E 0F               [12] 1639 	inc	r7
      00047F BF 08 00         [24] 1640 	cjne	r7,#0x08,00122$
      000482                       1641 00122$:
      000482 40 B0            [24] 1642 	jc	00105$
                           000111  1643 	C$glcd.c$93$1$63 ==.
                           000111  1644 	XG$limpa_glcd$0$0 ==.
      000484 22               [24] 1645 	ret
                                   1646 ;------------------------------------------------------------
                                   1647 ;Allocation info for local variables in function 'init_GLCD'
                                   1648 ;------------------------------------------------------------
                           000112  1649 	G$init_GLCD$0$0 ==.
                           000112  1650 	C$glcd.c$95$1$63 ==.
                                   1651 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:95: void init_GLCD(void) {
                                   1652 ;	-----------------------------------------
                                   1653 ;	 function init_GLCD
                                   1654 ;	-----------------------------------------
      000485                       1655 _init_GLCD:
                           000112  1656 	C$glcd.c$97$1$67 ==.
                                   1657 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:97: GLCD_ENABLE = 0;
      000485 C2 A4            [12] 1658 	clr	_P2_4
                           000114  1659 	C$glcd.c$98$1$67 ==.
                                   1660 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:98: GLCD_CS1 = GLCD_CS2 = GLCD_RST = 1;
      000487 D2 A5            [12] 1661 	setb	_P2_5
      000489 A2 A5            [12] 1662 	mov	c,_P2_5
      00048B 92 A1            [24] 1663 	mov	_P2_1,c
      00048D A2 A1            [12] 1664 	mov	c,_P2_1
      00048F 92 A0            [24] 1665 	mov	_P2_0,c
                           00011E  1666 	C$glcd.c$99$1$67 ==.
                                   1667 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:99: SFRPAGE = CONFIG_PAGE;
      000491 75 84 0F         [24] 1668 	mov	_SFRPAGE,#0x0f
                           000121  1669 	C$glcd.c$100$1$67 ==.
                                   1670 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:100: GLCD_DB = 0xFF;
      000494 75 C8 FF         [24] 1671 	mov	_P4,#0xff
                           000124  1672 	C$glcd.c$101$1$67 ==.
                                   1673 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:101: SFRPAGE = LEGACY_PAGE;
      000497 75 84 00         [24] 1674 	mov	_SFRPAGE,#0x00
                           000127  1675 	C$glcd.c$104$1$67 ==.
                                   1676 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:104: reset_wdt();
      00049A 12 02 EA         [24] 1677 	lcall	_reset_wdt
                           00012A  1678 	C$glcd.c$105$1$67 ==.
                                   1679 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:105: while (le_glcd(GLCD_COD, GLCD_ESQ) & 0x80) {}
      00049D                       1680 00101$:
      00049D C2 04            [12] 1681 	clr	_le_glcd_PARM_1
      00049F C2 05            [12] 1682 	clr	_le_glcd_PARM_2
      0004A1 12 03 73         [24] 1683 	lcall	_le_glcd
      0004A4 E5 82            [12] 1684 	mov	a,dpl
      0004A6 20 E7 F4         [24] 1685 	jb	acc.7,00101$
                           000136  1686 	C$glcd.c$106$1$67 ==.
                                   1687 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:106: reset_wdt();
      0004A9 12 02 EA         [24] 1688 	lcall	_reset_wdt
                           000139  1689 	C$glcd.c$107$1$67 ==.
                                   1690 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:107: while (le_glcd(GLCD_COD, GLCD_DIR) & 0x80) {}
      0004AC                       1691 00104$:
      0004AC C2 04            [12] 1692 	clr	_le_glcd_PARM_1
      0004AE D2 05            [12] 1693 	setb	_le_glcd_PARM_2
      0004B0 12 03 73         [24] 1694 	lcall	_le_glcd
      0004B3 E5 82            [12] 1695 	mov	a,dpl
      0004B5 20 E7 F4         [24] 1696 	jb	acc.7,00104$
                           000145  1697 	C$glcd.c$110$1$67 ==.
                                   1698 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:110: esc_glcd(0x3F, GLCD_COD, GLCD_ESQ);
      0004B8 C2 06            [12] 1699 	clr	_esc_glcd_PARM_2
      0004BA C2 07            [12] 1700 	clr	_esc_glcd_PARM_3
      0004BC 75 82 3F         [24] 1701 	mov	dpl,#0x3f
      0004BF 12 03 AC         [24] 1702 	lcall	_esc_glcd
                           00014F  1703 	C$glcd.c$111$1$67 ==.
                                   1704 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:111: esc_glcd(0x3F, GLCD_COD, GLCD_DIR);
      0004C2 C2 06            [12] 1705 	clr	_esc_glcd_PARM_2
      0004C4 D2 07            [12] 1706 	setb	_esc_glcd_PARM_3
      0004C6 75 82 3F         [24] 1707 	mov	dpl,#0x3f
      0004C9 12 03 AC         [24] 1708 	lcall	_esc_glcd
                           000159  1709 	C$glcd.c$114$1$67 ==.
                                   1710 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:114: esc_glcd(0x40, GLCD_COD, GLCD_ESQ);
      0004CC C2 06            [12] 1711 	clr	_esc_glcd_PARM_2
      0004CE C2 07            [12] 1712 	clr	_esc_glcd_PARM_3
      0004D0 75 82 40         [24] 1713 	mov	dpl,#0x40
      0004D3 12 03 AC         [24] 1714 	lcall	_esc_glcd
                           000163  1715 	C$glcd.c$115$1$67 ==.
                                   1716 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:115: esc_glcd(0x40, GLCD_COD, GLCD_DIR);
      0004D6 C2 06            [12] 1717 	clr	_esc_glcd_PARM_2
      0004D8 D2 07            [12] 1718 	setb	_esc_glcd_PARM_3
      0004DA 75 82 40         [24] 1719 	mov	dpl,#0x40
      0004DD 12 03 AC         [24] 1720 	lcall	_esc_glcd
                           00016D  1721 	C$glcd.c$118$1$67 ==.
                                   1722 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:118: esc_glcd(0xB8, GLCD_COD, GLCD_ESQ);
      0004E0 C2 06            [12] 1723 	clr	_esc_glcd_PARM_2
      0004E2 C2 07            [12] 1724 	clr	_esc_glcd_PARM_3
      0004E4 75 82 B8         [24] 1725 	mov	dpl,#0xb8
      0004E7 12 03 AC         [24] 1726 	lcall	_esc_glcd
                           000177  1727 	C$glcd.c$119$1$67 ==.
                                   1728 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:119: esc_glcd(0xB8, GLCD_COD, GLCD_DIR);
      0004EA C2 06            [12] 1729 	clr	_esc_glcd_PARM_2
      0004EC D2 07            [12] 1730 	setb	_esc_glcd_PARM_3
      0004EE 75 82 B8         [24] 1731 	mov	dpl,#0xb8
      0004F1 12 03 AC         [24] 1732 	lcall	_esc_glcd
                           000181  1733 	C$glcd.c$122$1$67 ==.
                                   1734 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:122: esc_glcd(0xC0, GLCD_COD, GLCD_ESQ);
      0004F4 C2 06            [12] 1735 	clr	_esc_glcd_PARM_2
      0004F6 C2 07            [12] 1736 	clr	_esc_glcd_PARM_3
      0004F8 75 82 C0         [24] 1737 	mov	dpl,#0xc0
      0004FB 12 03 AC         [24] 1738 	lcall	_esc_glcd
                           00018B  1739 	C$glcd.c$123$1$67 ==.
                                   1740 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:123: esc_glcd(0xC0, GLCD_COD, GLCD_DIR);
      0004FE C2 06            [12] 1741 	clr	_esc_glcd_PARM_2
      000500 D2 07            [12] 1742 	setb	_esc_glcd_PARM_3
      000502 75 82 C0         [24] 1743 	mov	dpl,#0xc0
      000505 12 03 AC         [24] 1744 	lcall	_esc_glcd
                           000195  1745 	C$glcd.c$124$1$67 ==.
                           000195  1746 	XG$init_GLCD$0$0 ==.
      000508 22               [24] 1747 	ret
                                   1748 ;------------------------------------------------------------
                                   1749 ;Allocation info for local variables in function 'putchar'
                                   1750 ;------------------------------------------------------------
                                   1751 ;coluna                    Allocated with name '_putchar_coluna_1_71'
                                   1752 ;c                         Allocated to registers r7 
                                   1753 ;lado                      Allocated to registers r6 
                                   1754 ;------------------------------------------------------------
                           000196  1755 	G$putchar$0$0 ==.
                           000196  1756 	C$glcd.c$126$1$67 ==.
                                   1757 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:126: void putchar(char c) {
                                   1758 ;	-----------------------------------------
                                   1759 ;	 function putchar
                                   1760 ;	-----------------------------------------
      000509                       1761 _putchar:
      000509 AF 82            [24] 1762 	mov	r7,dpl
                           000198  1763 	C$glcd.c$128$1$71 ==.
                                   1764 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:128: unsigned char lado = (coluna < 8) ? GLCD_ESQ : GLCD_DIR;
      00050B 74 F8            [12] 1765 	mov	a,#0x100 - 0x08
      00050D 25 0B            [12] 1766 	add	a,_putchar_coluna_1_71
      00050F 40 04            [24] 1767 	jc	00107$
      000511 7E 00            [12] 1768 	mov	r6,#0x00
      000513 80 02            [24] 1769 	sjmp	00108$
      000515                       1770 00107$:
      000515 7E 01            [12] 1771 	mov	r6,#0x01
      000517                       1772 00108$:
                           0001A4  1773 	C$glcd.c$130$1$71 ==.
                                   1774 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:130: if (1 <= c && c <= 8) {
      000517 BF 01 00         [24] 1775 	cjne	r7,#0x01,00119$
      00051A                       1776 00119$:
      00051A 40 30            [24] 1777 	jc	00102$
      00051C EF               [12] 1778 	mov	a,r7
      00051D 24 F7            [12] 1779 	add	a,#0xff - 0x08
      00051F 40 2B            [24] 1780 	jc	00102$
                           0001AE  1781 	C$glcd.c$131$2$72 ==.
                                   1782 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:131: conf_pag(c-1, GLCD_ESQ);
      000521 EF               [12] 1783 	mov	a,r7
      000522 14               [12] 1784 	dec	a
      000523 FD               [12] 1785 	mov	r5,a
      000524 C2 09            [12] 1786 	clr	_conf_pag_PARM_2
      000526 8D 82            [24] 1787 	mov	dpl,r5
      000528 C0 05            [24] 1788 	push	ar5
      00052A 12 04 1E         [24] 1789 	lcall	_conf_pag
      00052D D0 05            [24] 1790 	pop	ar5
                           0001BC  1791 	C$glcd.c$132$2$72 ==.
                                   1792 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:132: conf_pag(c-1, GLCD_DIR);
      00052F D2 09            [12] 1793 	setb	_conf_pag_PARM_2
      000531 8D 82            [24] 1794 	mov	dpl,r5
      000533 12 04 1E         [24] 1795 	lcall	_conf_pag
                           0001C3  1796 	C$glcd.c$133$2$72 ==.
                                   1797 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:133: conf_Y(0, GLCD_ESQ);
      000536 C2 08            [12] 1798 	clr	_conf_Y_PARM_2
      000538 75 82 00         [24] 1799 	mov	dpl,#0x00
      00053B 12 04 0A         [24] 1800 	lcall	_conf_Y
                           0001CB  1801 	C$glcd.c$134$2$72 ==.
                                   1802 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:134: conf_Y(0, GLCD_DIR);
      00053E D2 08            [12] 1803 	setb	_conf_Y_PARM_2
      000540 75 82 00         [24] 1804 	mov	dpl,#0x00
      000543 12 04 0A         [24] 1805 	lcall	_conf_Y
                           0001D3  1806 	C$glcd.c$135$2$72 ==.
                                   1807 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:135: coluna = 0;
      000546 75 0B 00         [24] 1808 	mov	_putchar_coluna_1_71,#0x00
      000549 02 06 22         [24] 1809 	ljmp	00105$
      00054C                       1810 00102$:
                           0001D9  1811 	C$glcd.c$138$2$73 ==.
                                   1812 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:138: esc_glcd(fonte[c-32][0], GLCD_DAT, lado);
      00054C 7D 00            [12] 1813 	mov	r5,#0x00
      00054E EF               [12] 1814 	mov	a,r7
      00054F 24 E0            [12] 1815 	add	a,#0xe0
      000551 F5 1C            [12] 1816 	mov	__mulint_PARM_2,a
      000553 ED               [12] 1817 	mov	a,r5
      000554 34 FF            [12] 1818 	addc	a,#0xff
      000556 F5 1D            [12] 1819 	mov	(__mulint_PARM_2 + 1),a
      000558 90 00 05         [24] 1820 	mov	dptr,#0x0005
      00055B C0 06            [24] 1821 	push	ar6
      00055D 12 0E 65         [24] 1822 	lcall	__mulint
      000560 AD 82            [24] 1823 	mov	r5,dpl
      000562 AF 83            [24] 1824 	mov	r7,dph
      000564 D0 06            [24] 1825 	pop	ar6
      000566 ED               [12] 1826 	mov	a,r5
      000567 24 96            [12] 1827 	add	a,#_fonte
      000569 FD               [12] 1828 	mov	r5,a
      00056A EF               [12] 1829 	mov	a,r7
      00056B 34 11            [12] 1830 	addc	a,#(_fonte >> 8)
      00056D FF               [12] 1831 	mov	r7,a
      00056E 8D 82            [24] 1832 	mov	dpl,r5
      000570 8F 83            [24] 1833 	mov	dph,r7
      000572 E4               [12] 1834 	clr	a
      000573 93               [24] 1835 	movc	a,@a+dptr
      000574 FC               [12] 1836 	mov	r4,a
      000575 EE               [12] 1837 	mov	a,r6
      000576 24 FF            [12] 1838 	add	a,#0xff
      000578 92 0A            [24] 1839 	mov	_putchar_sloc0_1_0,c
      00057A D2 06            [12] 1840 	setb	_esc_glcd_PARM_2
      00057C A2 0A            [12] 1841 	mov	c,_putchar_sloc0_1_0
      00057E 92 07            [24] 1842 	mov	_esc_glcd_PARM_3,c
      000580 8C 82            [24] 1843 	mov	dpl,r4
      000582 C0 07            [24] 1844 	push	ar7
      000584 C0 05            [24] 1845 	push	ar5
      000586 12 03 AC         [24] 1846 	lcall	_esc_glcd
      000589 D0 05            [24] 1847 	pop	ar5
      00058B D0 07            [24] 1848 	pop	ar7
                           00021A  1849 	C$glcd.c$139$2$73 ==.
                                   1850 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:139: esc_glcd(fonte[c-32][1], GLCD_DAT, lado);
      00058D 8D 82            [24] 1851 	mov	dpl,r5
      00058F 8F 83            [24] 1852 	mov	dph,r7
      000591 A3               [24] 1853 	inc	dptr
      000592 E4               [12] 1854 	clr	a
      000593 93               [24] 1855 	movc	a,@a+dptr
      000594 FE               [12] 1856 	mov	r6,a
      000595 D2 06            [12] 1857 	setb	_esc_glcd_PARM_2
      000597 A2 0A            [12] 1858 	mov	c,_putchar_sloc0_1_0
      000599 92 07            [24] 1859 	mov	_esc_glcd_PARM_3,c
      00059B 8E 82            [24] 1860 	mov	dpl,r6
      00059D C0 07            [24] 1861 	push	ar7
      00059F C0 05            [24] 1862 	push	ar5
      0005A1 12 03 AC         [24] 1863 	lcall	_esc_glcd
      0005A4 D0 05            [24] 1864 	pop	ar5
      0005A6 D0 07            [24] 1865 	pop	ar7
                           000235  1866 	C$glcd.c$140$2$73 ==.
                                   1867 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:140: esc_glcd(fonte[c-32][2], GLCD_DAT, lado);
      0005A8 8D 82            [24] 1868 	mov	dpl,r5
      0005AA 8F 83            [24] 1869 	mov	dph,r7
      0005AC A3               [24] 1870 	inc	dptr
      0005AD A3               [24] 1871 	inc	dptr
      0005AE E4               [12] 1872 	clr	a
      0005AF 93               [24] 1873 	movc	a,@a+dptr
      0005B0 FE               [12] 1874 	mov	r6,a
      0005B1 D2 06            [12] 1875 	setb	_esc_glcd_PARM_2
      0005B3 A2 0A            [12] 1876 	mov	c,_putchar_sloc0_1_0
      0005B5 92 07            [24] 1877 	mov	_esc_glcd_PARM_3,c
      0005B7 8E 82            [24] 1878 	mov	dpl,r6
      0005B9 C0 07            [24] 1879 	push	ar7
      0005BB C0 05            [24] 1880 	push	ar5
      0005BD 12 03 AC         [24] 1881 	lcall	_esc_glcd
      0005C0 D0 05            [24] 1882 	pop	ar5
      0005C2 D0 07            [24] 1883 	pop	ar7
                           000251  1884 	C$glcd.c$141$2$73 ==.
                                   1885 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:141: esc_glcd(fonte[c-32][3], GLCD_DAT, lado);
      0005C4 8D 82            [24] 1886 	mov	dpl,r5
      0005C6 8F 83            [24] 1887 	mov	dph,r7
      0005C8 A3               [24] 1888 	inc	dptr
      0005C9 A3               [24] 1889 	inc	dptr
      0005CA A3               [24] 1890 	inc	dptr
      0005CB E4               [12] 1891 	clr	a
      0005CC 93               [24] 1892 	movc	a,@a+dptr
      0005CD FE               [12] 1893 	mov	r6,a
      0005CE D2 06            [12] 1894 	setb	_esc_glcd_PARM_2
      0005D0 A2 0A            [12] 1895 	mov	c,_putchar_sloc0_1_0
      0005D2 92 07            [24] 1896 	mov	_esc_glcd_PARM_3,c
      0005D4 8E 82            [24] 1897 	mov	dpl,r6
      0005D6 C0 07            [24] 1898 	push	ar7
      0005D8 C0 05            [24] 1899 	push	ar5
      0005DA 12 03 AC         [24] 1900 	lcall	_esc_glcd
      0005DD D0 05            [24] 1901 	pop	ar5
      0005DF D0 07            [24] 1902 	pop	ar7
                           00026E  1903 	C$glcd.c$142$2$73 ==.
                                   1904 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:142: esc_glcd(fonte[c-32][4], GLCD_DAT, lado);
      0005E1 8D 82            [24] 1905 	mov	dpl,r5
      0005E3 8F 83            [24] 1906 	mov	dph,r7
      0005E5 A3               [24] 1907 	inc	dptr
      0005E6 A3               [24] 1908 	inc	dptr
      0005E7 A3               [24] 1909 	inc	dptr
      0005E8 A3               [24] 1910 	inc	dptr
      0005E9 E4               [12] 1911 	clr	a
      0005EA 93               [24] 1912 	movc	a,@a+dptr
      0005EB FF               [12] 1913 	mov	r7,a
      0005EC D2 06            [12] 1914 	setb	_esc_glcd_PARM_2
      0005EE A2 0A            [12] 1915 	mov	c,_putchar_sloc0_1_0
      0005F0 92 07            [24] 1916 	mov	_esc_glcd_PARM_3,c
      0005F2 8F 82            [24] 1917 	mov	dpl,r7
      0005F4 12 03 AC         [24] 1918 	lcall	_esc_glcd
                           000284  1919 	C$glcd.c$144$2$73 ==.
                                   1920 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:144: esc_glcd(0, GLCD_DAT, lado);
      0005F7 D2 06            [12] 1921 	setb	_esc_glcd_PARM_2
      0005F9 A2 0A            [12] 1922 	mov	c,_putchar_sloc0_1_0
      0005FB 92 07            [24] 1923 	mov	_esc_glcd_PARM_3,c
      0005FD 75 82 00         [24] 1924 	mov	dpl,#0x00
      000600 12 03 AC         [24] 1925 	lcall	_esc_glcd
                           000290  1926 	C$glcd.c$145$2$73 ==.
                                   1927 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:145: esc_glcd(0, GLCD_DAT, lado);
      000603 D2 06            [12] 1928 	setb	_esc_glcd_PARM_2
      000605 A2 0A            [12] 1929 	mov	c,_putchar_sloc0_1_0
      000607 92 07            [24] 1930 	mov	_esc_glcd_PARM_3,c
      000609 75 82 00         [24] 1931 	mov	dpl,#0x00
      00060C 12 03 AC         [24] 1932 	lcall	_esc_glcd
                           00029C  1933 	C$glcd.c$146$2$73 ==.
                                   1934 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:146: esc_glcd(0, GLCD_DAT, lado);
      00060F D2 06            [12] 1935 	setb	_esc_glcd_PARM_2
      000611 A2 0A            [12] 1936 	mov	c,_putchar_sloc0_1_0
      000613 92 07            [24] 1937 	mov	_esc_glcd_PARM_3,c
      000615 75 82 00         [24] 1938 	mov	dpl,#0x00
      000618 12 03 AC         [24] 1939 	lcall	_esc_glcd
                           0002A8  1940 	C$glcd.c$148$2$73 ==.
                                   1941 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:148: coluna = (coluna + 1) & 0xf;
      00061B E5 0B            [12] 1942 	mov	a,_putchar_coluna_1_71
      00061D 04               [12] 1943 	inc	a
      00061E 54 0F            [12] 1944 	anl	a,#0x0f
      000620 F5 0B            [12] 1945 	mov	_putchar_coluna_1_71,a
      000622                       1946 00105$:
                           0002AF  1947 	C$glcd.c$150$1$71 ==.
                           0002AF  1948 	XG$putchar$0$0 ==.
      000622 22               [24] 1949 	ret
                                   1950 ;------------------------------------------------------------
                                   1951 ;Allocation info for local variables in function 'limpa_col_glcd'
                                   1952 ;------------------------------------------------------------
                                   1953 ;hor                       Allocated to registers r7 
                                   1954 ;pag                       Allocated to registers r5 
                                   1955 ;lado                      Allocated to registers r6 
                                   1956 ;------------------------------------------------------------
                           0002B0  1957 	G$limpa_col_glcd$0$0 ==.
                           0002B0  1958 	C$glcd.c$152$1$71 ==.
                                   1959 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:152: void limpa_col_glcd(unsigned char hor) {
                                   1960 ;	-----------------------------------------
                                   1961 ;	 function limpa_col_glcd
                                   1962 ;	-----------------------------------------
      000623                       1963 _limpa_col_glcd:
      000623 AF 82            [24] 1964 	mov	r7,dpl
                           0002B2  1965 	C$glcd.c$153$1$75 ==.
                                   1966 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:153: unsigned char pag, lado = hor & 0x40;
      000625 74 40            [12] 1967 	mov	a,#0x40
      000627 5F               [12] 1968 	anl	a,r7
      000628 FE               [12] 1969 	mov	r6,a
                           0002B6  1970 	C$glcd.c$155$2$76 ==.
                                   1971 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:155: for (pag = 0; pag < 8; pag++) {
      000629 53 07 3F         [24] 1972 	anl	ar7,#0x3f
      00062C 7D 00            [12] 1973 	mov	r5,#0x00
      00062E                       1974 00102$:
                           0002BB  1975 	C$glcd.c$156$2$76 ==.
                                   1976 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:156: conf_pag(pag, lado);
      00062E EE               [12] 1977 	mov	a,r6
      00062F 24 FF            [12] 1978 	add	a,#0xff
      000631 92 0B            [24] 1979 	mov  _limpa_col_glcd_sloc0_1_0,c
      000633 92 09            [24] 1980 	mov	_conf_pag_PARM_2,c
      000635 8D 82            [24] 1981 	mov	dpl,r5
      000637 C0 07            [24] 1982 	push	ar7
      000639 C0 06            [24] 1983 	push	ar6
      00063B C0 05            [24] 1984 	push	ar5
      00063D 12 04 1E         [24] 1985 	lcall	_conf_pag
      000640 D0 05            [24] 1986 	pop	ar5
      000642 D0 06            [24] 1987 	pop	ar6
      000644 D0 07            [24] 1988 	pop	ar7
                           0002D3  1989 	C$glcd.c$157$2$76 ==.
                                   1990 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:157: conf_Y(hor & 0x3f, lado);
      000646 A2 0B            [12] 1991 	mov	c,_limpa_col_glcd_sloc0_1_0
      000648 92 08            [24] 1992 	mov	_conf_Y_PARM_2,c
      00064A 8F 82            [24] 1993 	mov	dpl,r7
      00064C C0 07            [24] 1994 	push	ar7
      00064E C0 06            [24] 1995 	push	ar6
      000650 C0 05            [24] 1996 	push	ar5
      000652 12 04 0A         [24] 1997 	lcall	_conf_Y
                           0002E2  1998 	C$glcd.c$158$2$76 ==.
                                   1999 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:158: esc_glcd(0, GLCD_DAT, lado);
      000655 D2 06            [12] 2000 	setb	_esc_glcd_PARM_2
      000657 A2 0B            [12] 2001 	mov	c,_limpa_col_glcd_sloc0_1_0
      000659 92 07            [24] 2002 	mov	_esc_glcd_PARM_3,c
      00065B 75 82 00         [24] 2003 	mov	dpl,#0x00
      00065E 12 03 AC         [24] 2004 	lcall	_esc_glcd
      000661 D0 05            [24] 2005 	pop	ar5
      000663 D0 06            [24] 2006 	pop	ar6
      000665 D0 07            [24] 2007 	pop	ar7
                           0002F4  2008 	C$glcd.c$155$1$75 ==.
                                   2009 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:155: for (pag = 0; pag < 8; pag++) {
      000667 0D               [12] 2010 	inc	r5
      000668 BD 08 00         [24] 2011 	cjne	r5,#0x08,00110$
      00066B                       2012 00110$:
      00066B 40 C1            [24] 2013 	jc	00102$
                           0002FA  2014 	C$glcd.c$160$1$75 ==.
                           0002FA  2015 	XG$limpa_col_glcd$0$0 ==.
      00066D 22               [24] 2016 	ret
                                   2017 ;------------------------------------------------------------
                                   2018 ;Allocation info for local variables in function 'escala_glcd'
                                   2019 ;------------------------------------------------------------
                                   2020 ;lim_inf                   Allocated with name '_escala_glcd_PARM_2'
                                   2021 ;lim_sup                   Allocated with name '_escala_glcd_PARM_3'
                                   2022 ;valor                     Allocated to registers r4 r5 r6 r7 
                                   2023 ;ajustado                  Allocated to registers r4 r5 r6 r7 
                                   2024 ;------------------------------------------------------------
                           0002FB  2025 	G$escala_glcd$0$0 ==.
                           0002FB  2026 	C$glcd.c$162$1$75 ==.
                                   2027 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:162: unsigned char escala_glcd(float valor, float lim_inf, float lim_sup) {
                                   2028 ;	-----------------------------------------
                                   2029 ;	 function escala_glcd
                                   2030 ;	-----------------------------------------
      00066E                       2031 _escala_glcd:
      00066E AC 82            [24] 2032 	mov	r4,dpl
      000670 AD 83            [24] 2033 	mov	r5,dph
      000672 AE F0            [24] 2034 	mov	r6,b
      000674 FF               [12] 2035 	mov	r7,a
                           000302  2036 	C$glcd.c$163$1$78 ==.
                                   2037 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:163: float ajustado = VER_MAX * (valor - lim_inf) / (lim_sup - lim_inf);
      000675 C0 0C            [24] 2038 	push	_escala_glcd_PARM_2
      000677 C0 0D            [24] 2039 	push	(_escala_glcd_PARM_2 + 1)
      000679 C0 0E            [24] 2040 	push	(_escala_glcd_PARM_2 + 2)
      00067B C0 0F            [24] 2041 	push	(_escala_glcd_PARM_2 + 3)
      00067D 8C 82            [24] 2042 	mov	dpl,r4
      00067F 8D 83            [24] 2043 	mov	dph,r5
      000681 8E F0            [24] 2044 	mov	b,r6
      000683 EF               [12] 2045 	mov	a,r7
      000684 12 0C DB         [24] 2046 	lcall	___fssub
      000687 AC 82            [24] 2047 	mov	r4,dpl
      000689 AD 83            [24] 2048 	mov	r5,dph
      00068B AE F0            [24] 2049 	mov	r6,b
      00068D FF               [12] 2050 	mov	r7,a
      00068E E5 81            [12] 2051 	mov	a,sp
      000690 24 FC            [12] 2052 	add	a,#0xfc
      000692 F5 81            [12] 2053 	mov	sp,a
      000694 C0 04            [24] 2054 	push	ar4
      000696 C0 05            [24] 2055 	push	ar5
      000698 C0 06            [24] 2056 	push	ar6
      00069A C0 07            [24] 2057 	push	ar7
      00069C 90 00 00         [24] 2058 	mov	dptr,#0x0000
      00069F 75 F0 7C         [24] 2059 	mov	b,#0x7c
      0006A2 74 42            [12] 2060 	mov	a,#0x42
      0006A4 12 0C E6         [24] 2061 	lcall	___fsmul
      0006A7 AC 82            [24] 2062 	mov	r4,dpl
      0006A9 AD 83            [24] 2063 	mov	r5,dph
      0006AB AE F0            [24] 2064 	mov	r6,b
      0006AD FF               [12] 2065 	mov	r7,a
      0006AE E5 81            [12] 2066 	mov	a,sp
      0006B0 24 FC            [12] 2067 	add	a,#0xfc
      0006B2 F5 81            [12] 2068 	mov	sp,a
      0006B4 C0 07            [24] 2069 	push	ar7
      0006B6 C0 06            [24] 2070 	push	ar6
      0006B8 C0 05            [24] 2071 	push	ar5
      0006BA C0 04            [24] 2072 	push	ar4
      0006BC C0 0C            [24] 2073 	push	_escala_glcd_PARM_2
      0006BE C0 0D            [24] 2074 	push	(_escala_glcd_PARM_2 + 1)
      0006C0 C0 0E            [24] 2075 	push	(_escala_glcd_PARM_2 + 2)
      0006C2 C0 0F            [24] 2076 	push	(_escala_glcd_PARM_2 + 3)
      0006C4 85 10 82         [24] 2077 	mov	dpl,_escala_glcd_PARM_3
      0006C7 85 11 83         [24] 2078 	mov	dph,(_escala_glcd_PARM_3 + 1)
      0006CA 85 12 F0         [24] 2079 	mov	b,(_escala_glcd_PARM_3 + 2)
      0006CD E5 13            [12] 2080 	mov	a,(_escala_glcd_PARM_3 + 3)
      0006CF 12 0C DB         [24] 2081 	lcall	___fssub
      0006D2 A8 82            [24] 2082 	mov	r0,dpl
      0006D4 A9 83            [24] 2083 	mov	r1,dph
      0006D6 AA F0            [24] 2084 	mov	r2,b
      0006D8 FB               [12] 2085 	mov	r3,a
      0006D9 E5 81            [12] 2086 	mov	a,sp
      0006DB 24 FC            [12] 2087 	add	a,#0xfc
      0006DD F5 81            [12] 2088 	mov	sp,a
      0006DF D0 04            [24] 2089 	pop	ar4
      0006E1 D0 05            [24] 2090 	pop	ar5
      0006E3 D0 06            [24] 2091 	pop	ar6
      0006E5 D0 07            [24] 2092 	pop	ar7
      0006E7 C0 00            [24] 2093 	push	ar0
      0006E9 C0 01            [24] 2094 	push	ar1
      0006EB C0 02            [24] 2095 	push	ar2
      0006ED C0 03            [24] 2096 	push	ar3
      0006EF 8C 82            [24] 2097 	mov	dpl,r4
      0006F1 8D 83            [24] 2098 	mov	dph,r5
      0006F3 8E F0            [24] 2099 	mov	b,r6
      0006F5 EF               [12] 2100 	mov	a,r7
      0006F6 12 0F E6         [24] 2101 	lcall	___fsdiv
      0006F9 AC 82            [24] 2102 	mov	r4,dpl
      0006FB AD 83            [24] 2103 	mov	r5,dph
      0006FD AE F0            [24] 2104 	mov	r6,b
      0006FF FF               [12] 2105 	mov	r7,a
      000700 E5 81            [12] 2106 	mov	a,sp
      000702 24 FC            [12] 2107 	add	a,#0xfc
      000704 F5 81            [12] 2108 	mov	sp,a
                           000393  2109 	C$glcd.c$165$1$78 ==.
                                   2110 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:165: if (ajustado >= VER_MAX)
      000706 C0 07            [24] 2111 	push	ar7
      000708 C0 06            [24] 2112 	push	ar6
      00070A C0 05            [24] 2113 	push	ar5
      00070C C0 04            [24] 2114 	push	ar4
      00070E E4               [12] 2115 	clr	a
      00070F C0 E0            [24] 2116 	push	acc
      000711 C0 E0            [24] 2117 	push	acc
      000713 74 7C            [12] 2118 	mov	a,#0x7c
      000715 C0 E0            [24] 2119 	push	acc
      000717 74 42            [12] 2120 	mov	a,#0x42
      000719 C0 E0            [24] 2121 	push	acc
      00071B 8C 82            [24] 2122 	mov	dpl,r4
      00071D 8D 83            [24] 2123 	mov	dph,r5
      00071F 8E F0            [24] 2124 	mov	b,r6
      000721 EF               [12] 2125 	mov	a,r7
      000722 12 0E 35         [24] 2126 	lcall	___fslt
      000725 E5 81            [12] 2127 	mov	a,sp
      000727 24 FC            [12] 2128 	add	a,#0xfc
      000729 F5 81            [12] 2129 	mov	sp,a
      00072B D0 04            [24] 2130 	pop	ar4
      00072D D0 05            [24] 2131 	pop	ar5
      00072F D0 06            [24] 2132 	pop	ar6
      000731 D0 07            [24] 2133 	pop	ar7
      000733 E5 82            [12] 2134 	mov	a,dpl
      000735 24 FF            [12] 2135 	add	a,#0xff
      000737 92 0C            [24] 2136 	mov	_escala_glcd_sloc0_1_0,c
      000739 40 05            [24] 2137 	jc	00104$
                           0003C8  2138 	C$glcd.c$166$1$78 ==.
                                   2139 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:166: return VER_MAX;
      00073B 75 82 3F         [24] 2140 	mov	dpl,#0x3f
      00073E 80 62            [24] 2141 	sjmp	00106$
      000740                       2142 00104$:
                           0003CD  2143 	C$glcd.c$167$1$78 ==.
                                   2144 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:167: else if (ajustado <= 0)
      000740 C0 07            [24] 2145 	push	ar7
      000742 C0 06            [24] 2146 	push	ar6
      000744 C0 05            [24] 2147 	push	ar5
      000746 C0 04            [24] 2148 	push	ar4
      000748 E4               [12] 2149 	clr	a
      000749 C0 E0            [24] 2150 	push	acc
      00074B C0 E0            [24] 2151 	push	acc
      00074D C0 E0            [24] 2152 	push	acc
      00074F C0 E0            [24] 2153 	push	acc
      000751 8C 82            [24] 2154 	mov	dpl,r4
      000753 8D 83            [24] 2155 	mov	dph,r5
      000755 8E F0            [24] 2156 	mov	b,r6
      000757 EF               [12] 2157 	mov	a,r7
      000758 12 0D EA         [24] 2158 	lcall	___fsgt
      00075B E5 81            [12] 2159 	mov	a,sp
      00075D 24 FC            [12] 2160 	add	a,#0xfc
      00075F F5 81            [12] 2161 	mov	sp,a
      000761 D0 04            [24] 2162 	pop	ar4
      000763 D0 05            [24] 2163 	pop	ar5
      000765 D0 06            [24] 2164 	pop	ar6
      000767 D0 07            [24] 2165 	pop	ar7
      000769 E5 82            [12] 2166 	mov	a,dpl
      00076B 24 FF            [12] 2167 	add	a,#0xff
      00076D 92 0C            [24] 2168 	mov	_escala_glcd_sloc0_1_0,c
      00076F 40 05            [24] 2169 	jc	00105$
                           0003FE  2170 	C$glcd.c$168$1$78 ==.
                                   2171 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:168: return 0;
      000771 75 82 00         [24] 2172 	mov	dpl,#0x00
      000774 80 2C            [24] 2173 	sjmp	00106$
      000776                       2174 00105$:
                           000403  2175 	C$glcd.c$170$1$78 ==.
                                   2176 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:170: return (unsigned char)(ajustado + 0.5f);
      000776 E4               [12] 2177 	clr	a
      000777 C0 E0            [24] 2178 	push	acc
      000779 C0 E0            [24] 2179 	push	acc
      00077B C0 E0            [24] 2180 	push	acc
      00077D 74 3F            [12] 2181 	mov	a,#0x3f
      00077F C0 E0            [24] 2182 	push	acc
      000781 8C 82            [24] 2183 	mov	dpl,r4
      000783 8D 83            [24] 2184 	mov	dph,r5
      000785 8E F0            [24] 2185 	mov	b,r6
      000787 EF               [12] 2186 	mov	a,r7
      000788 12 0E CF         [24] 2187 	lcall	___fsadd
      00078B AC 82            [24] 2188 	mov	r4,dpl
      00078D AD 83            [24] 2189 	mov	r5,dph
      00078F AE F0            [24] 2190 	mov	r6,b
      000791 FF               [12] 2191 	mov	r7,a
      000792 E5 81            [12] 2192 	mov	a,sp
      000794 24 FC            [12] 2193 	add	a,#0xfc
      000796 F5 81            [12] 2194 	mov	sp,a
      000798 8C 82            [24] 2195 	mov	dpl,r4
      00079A 8D 83            [24] 2196 	mov	dph,r5
      00079C 8E F0            [24] 2197 	mov	b,r6
      00079E EF               [12] 2198 	mov	a,r7
      00079F 12 10 C5         [24] 2199 	lcall	___fs2uchar
      0007A2                       2200 00106$:
                           00042F  2201 	C$glcd.c$171$1$78 ==.
                           00042F  2202 	XG$escala_glcd$0$0 ==.
      0007A2 22               [24] 2203 	ret
                                   2204 ;------------------------------------------------------------
                                   2205 ;Allocation info for local variables in function 'ponto_glcd'
                                   2206 ;------------------------------------------------------------
                                   2207 ;ver                       Allocated with name '_ponto_glcd_PARM_2'
                                   2208 ;hor                       Allocated to registers r7 
                                   2209 ;lado                      Allocated to registers r6 
                                   2210 ;bitv                      Allocated to registers r5 
                                   2211 ;pag                       Allocated to registers 
                                   2212 ;------------------------------------------------------------
                           000430  2213 	G$ponto_glcd$0$0 ==.
                           000430  2214 	C$glcd.c$173$1$78 ==.
                                   2215 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:173: void ponto_glcd(unsigned char hor, unsigned char ver) {
                                   2216 ;	-----------------------------------------
                                   2217 ;	 function ponto_glcd
                                   2218 ;	-----------------------------------------
      0007A3                       2219 _ponto_glcd:
                           000430  2220 	C$glcd.c$174$1$80 ==.
                                   2221 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:174: unsigned char lado = (hor & 0x40) ? GLCD_DIR : GLCD_ESQ;
      0007A3 E5 82            [12] 2222 	mov	a,dpl
      0007A5 FF               [12] 2223 	mov	r7,a
      0007A6 30 E6 04         [24] 2224 	jnb	acc.6,00103$
      0007A9 7E 01            [12] 2225 	mov	r6,#0x01
      0007AB 80 02            [24] 2226 	sjmp	00104$
      0007AD                       2227 00103$:
      0007AD 7E 00            [12] 2228 	mov	r6,#0x00
      0007AF                       2229 00104$:
                           00043C  2230 	C$glcd.c$175$1$80 ==.
                                   2231 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:175: unsigned char bitv = 7 - (ver & 7);
      0007AF 74 07            [12] 2232 	mov	a,#0x07
      0007B1 55 14            [12] 2233 	anl	a,_ponto_glcd_PARM_2
      0007B3 D3               [12] 2234 	setb	c
      0007B4 94 07            [12] 2235 	subb	a,#0x07
      0007B6 F4               [12] 2236 	cpl	a
      0007B7 FD               [12] 2237 	mov	r5,a
                           000445  2238 	C$glcd.c$176$1$80 ==.
                                   2239 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:176: unsigned char pag  = 7 - (ver >> 3);
      0007B8 E5 14            [12] 2240 	mov	a,_ponto_glcd_PARM_2
      0007BA C4               [12] 2241 	swap	a
      0007BB 23               [12] 2242 	rl	a
      0007BC 54 1F            [12] 2243 	anl	a,#0x1f
      0007BE FC               [12] 2244 	mov	r4,a
      0007BF 74 07            [12] 2245 	mov	a,#0x07
      0007C1 C3               [12] 2246 	clr	c
      0007C2 9C               [12] 2247 	subb	a,r4
      0007C3 F5 82            [12] 2248 	mov	dpl,a
                           000452  2249 	C$glcd.c$178$1$80 ==.
                                   2250 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:178: conf_pag(pag, lado);
      0007C5 EE               [12] 2251 	mov	a,r6
      0007C6 24 FF            [12] 2252 	add	a,#0xff
      0007C8 92 0D            [24] 2253 	mov  _ponto_glcd_sloc0_1_0,c
      0007CA 92 09            [24] 2254 	mov	_conf_pag_PARM_2,c
      0007CC C0 07            [24] 2255 	push	ar7
      0007CE C0 05            [24] 2256 	push	ar5
      0007D0 12 04 1E         [24] 2257 	lcall	_conf_pag
      0007D3 D0 05            [24] 2258 	pop	ar5
      0007D5 D0 07            [24] 2259 	pop	ar7
                           000464  2260 	C$glcd.c$179$1$80 ==.
                                   2261 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:179: conf_Y(hor & 0x3f, lado);
      0007D7 74 3F            [12] 2262 	mov	a,#0x3f
      0007D9 5F               [12] 2263 	anl	a,r7
      0007DA F5 82            [12] 2264 	mov	dpl,a
      0007DC A2 0D            [12] 2265 	mov	c,_ponto_glcd_sloc0_1_0
      0007DE 92 08            [24] 2266 	mov	_conf_Y_PARM_2,c
      0007E0 C0 05            [24] 2267 	push	ar5
      0007E2 12 04 0A         [24] 2268 	lcall	_conf_Y
      0007E5 D0 05            [24] 2269 	pop	ar5
                           000474  2270 	C$glcd.c$180$1$80 ==.
                                   2271 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\glcd.c:180: esc_glcd(3u << bitv, GLCD_DAT, lado);
      0007E7 8D F0            [24] 2272 	mov	b,r5
      0007E9 05 F0            [12] 2273 	inc	b
      0007EB 74 03            [12] 2274 	mov	a,#0x03
      0007ED 80 02            [24] 2275 	sjmp	00111$
      0007EF                       2276 00109$:
      0007EF 25 E0            [12] 2277 	add	a,acc
      0007F1                       2278 00111$:
      0007F1 D5 F0 FB         [24] 2279 	djnz	b,00109$
      0007F4 F5 82            [12] 2280 	mov	dpl,a
      0007F6 D2 06            [12] 2281 	setb	_esc_glcd_PARM_2
      0007F8 A2 0D            [12] 2282 	mov	c,_ponto_glcd_sloc0_1_0
      0007FA 92 07            [24] 2283 	mov	_esc_glcd_PARM_3,c
      0007FC 12 03 AC         [24] 2284 	lcall	_esc_glcd
                           00048C  2285 	C$glcd.c$181$1$80 ==.
                           00048C  2286 	XG$ponto_glcd$0$0 ==.
      0007FF 22               [24] 2287 	ret
                                   2288 	.area CSEG    (CODE)
                                   2289 	.area CONST   (CODE)
                           000000  2290 G$fonte$0$0 == .
      001196                       2291 _fonte:
      001196 00                    2292 	.db #0x00	; 0
      001197 00                    2293 	.db #0x00	; 0
      001198 00                    2294 	.db #0x00	; 0
      001199 00                    2295 	.db #0x00	; 0
      00119A 00                    2296 	.db #0x00	; 0
      00119B 00                    2297 	.db #0x00	; 0
      00119C 00                    2298 	.db #0x00	; 0
      00119D 5F                    2299 	.db #0x5f	; 95
      00119E 00                    2300 	.db #0x00	; 0
      00119F 00                    2301 	.db #0x00	; 0
      0011A0 00                    2302 	.db #0x00	; 0
      0011A1 07                    2303 	.db #0x07	; 7
      0011A2 00                    2304 	.db #0x00	; 0
      0011A3 07                    2305 	.db #0x07	; 7
      0011A4 00                    2306 	.db #0x00	; 0
      0011A5 14                    2307 	.db #0x14	; 20
      0011A6 7F                    2308 	.db #0x7f	; 127
      0011A7 14                    2309 	.db #0x14	; 20
      0011A8 7F                    2310 	.db #0x7f	; 127
      0011A9 14                    2311 	.db #0x14	; 20
      0011AA 24                    2312 	.db #0x24	; 36
      0011AB 2A                    2313 	.db #0x2a	; 42
      0011AC 7F                    2314 	.db #0x7f	; 127
      0011AD 2A                    2315 	.db #0x2a	; 42
      0011AE 12                    2316 	.db #0x12	; 18
      0011AF 23                    2317 	.db #0x23	; 35
      0011B0 13                    2318 	.db #0x13	; 19
      0011B1 08                    2319 	.db #0x08	; 8
      0011B2 64                    2320 	.db #0x64	; 100	'd'
      0011B3 62                    2321 	.db #0x62	; 98	'b'
      0011B4 36                    2322 	.db #0x36	; 54	'6'
      0011B5 49                    2323 	.db #0x49	; 73	'I'
      0011B6 55                    2324 	.db #0x55	; 85	'U'
      0011B7 22                    2325 	.db #0x22	; 34
      0011B8 50                    2326 	.db #0x50	; 80	'P'
      0011B9 00                    2327 	.db #0x00	; 0
      0011BA 05                    2328 	.db #0x05	; 5
      0011BB 03                    2329 	.db #0x03	; 3
      0011BC 00                    2330 	.db #0x00	; 0
      0011BD 00                    2331 	.db #0x00	; 0
      0011BE 00                    2332 	.db #0x00	; 0
      0011BF 1C                    2333 	.db #0x1c	; 28
      0011C0 22                    2334 	.db #0x22	; 34
      0011C1 41                    2335 	.db #0x41	; 65	'A'
      0011C2 00                    2336 	.db #0x00	; 0
      0011C3 00                    2337 	.db #0x00	; 0
      0011C4 41                    2338 	.db #0x41	; 65	'A'
      0011C5 22                    2339 	.db #0x22	; 34
      0011C6 1C                    2340 	.db #0x1c	; 28
      0011C7 00                    2341 	.db #0x00	; 0
      0011C8 08                    2342 	.db #0x08	; 8
      0011C9 2A                    2343 	.db #0x2a	; 42
      0011CA 1C                    2344 	.db #0x1c	; 28
      0011CB 2A                    2345 	.db #0x2a	; 42
      0011CC 08                    2346 	.db #0x08	; 8
      0011CD 08                    2347 	.db #0x08	; 8
      0011CE 08                    2348 	.db #0x08	; 8
      0011CF 3E                    2349 	.db #0x3e	; 62
      0011D0 08                    2350 	.db #0x08	; 8
      0011D1 08                    2351 	.db #0x08	; 8
      0011D2 00                    2352 	.db #0x00	; 0
      0011D3 50                    2353 	.db #0x50	; 80	'P'
      0011D4 30                    2354 	.db #0x30	; 48	'0'
      0011D5 00                    2355 	.db #0x00	; 0
      0011D6 00                    2356 	.db #0x00	; 0
      0011D7 08                    2357 	.db #0x08	; 8
      0011D8 08                    2358 	.db #0x08	; 8
      0011D9 08                    2359 	.db #0x08	; 8
      0011DA 08                    2360 	.db #0x08	; 8
      0011DB 08                    2361 	.db #0x08	; 8
      0011DC 00                    2362 	.db #0x00	; 0
      0011DD 30                    2363 	.db #0x30	; 48	'0'
      0011DE 30                    2364 	.db #0x30	; 48	'0'
      0011DF 00                    2365 	.db #0x00	; 0
      0011E0 00                    2366 	.db #0x00	; 0
      0011E1 20                    2367 	.db #0x20	; 32
      0011E2 10                    2368 	.db #0x10	; 16
      0011E3 08                    2369 	.db #0x08	; 8
      0011E4 04                    2370 	.db #0x04	; 4
      0011E5 02                    2371 	.db #0x02	; 2
      0011E6 3E                    2372 	.db #0x3e	; 62
      0011E7 51                    2373 	.db #0x51	; 81	'Q'
      0011E8 49                    2374 	.db #0x49	; 73	'I'
      0011E9 45                    2375 	.db #0x45	; 69	'E'
      0011EA 3E                    2376 	.db #0x3e	; 62
      0011EB 00                    2377 	.db #0x00	; 0
      0011EC 42                    2378 	.db #0x42	; 66	'B'
      0011ED 7F                    2379 	.db #0x7f	; 127
      0011EE 40                    2380 	.db #0x40	; 64
      0011EF 00                    2381 	.db #0x00	; 0
      0011F0 42                    2382 	.db #0x42	; 66	'B'
      0011F1 61                    2383 	.db #0x61	; 97	'a'
      0011F2 51                    2384 	.db #0x51	; 81	'Q'
      0011F3 49                    2385 	.db #0x49	; 73	'I'
      0011F4 46                    2386 	.db #0x46	; 70	'F'
      0011F5 21                    2387 	.db #0x21	; 33
      0011F6 41                    2388 	.db #0x41	; 65	'A'
      0011F7 45                    2389 	.db #0x45	; 69	'E'
      0011F8 4B                    2390 	.db #0x4b	; 75	'K'
      0011F9 31                    2391 	.db #0x31	; 49	'1'
      0011FA 18                    2392 	.db #0x18	; 24
      0011FB 14                    2393 	.db #0x14	; 20
      0011FC 12                    2394 	.db #0x12	; 18
      0011FD 7F                    2395 	.db #0x7f	; 127
      0011FE 10                    2396 	.db #0x10	; 16
      0011FF 27                    2397 	.db #0x27	; 39
      001200 45                    2398 	.db #0x45	; 69	'E'
      001201 45                    2399 	.db #0x45	; 69	'E'
      001202 45                    2400 	.db #0x45	; 69	'E'
      001203 39                    2401 	.db #0x39	; 57	'9'
      001204 3C                    2402 	.db #0x3c	; 60
      001205 4A                    2403 	.db #0x4a	; 74	'J'
      001206 49                    2404 	.db #0x49	; 73	'I'
      001207 49                    2405 	.db #0x49	; 73	'I'
      001208 30                    2406 	.db #0x30	; 48	'0'
      001209 01                    2407 	.db #0x01	; 1
      00120A 71                    2408 	.db #0x71	; 113	'q'
      00120B 09                    2409 	.db #0x09	; 9
      00120C 05                    2410 	.db #0x05	; 5
      00120D 03                    2411 	.db #0x03	; 3
      00120E 36                    2412 	.db #0x36	; 54	'6'
      00120F 49                    2413 	.db #0x49	; 73	'I'
      001210 49                    2414 	.db #0x49	; 73	'I'
      001211 49                    2415 	.db #0x49	; 73	'I'
      001212 36                    2416 	.db #0x36	; 54	'6'
      001213 06                    2417 	.db #0x06	; 6
      001214 49                    2418 	.db #0x49	; 73	'I'
      001215 49                    2419 	.db #0x49	; 73	'I'
      001216 29                    2420 	.db #0x29	; 41
      001217 1E                    2421 	.db #0x1e	; 30
      001218 00                    2422 	.db #0x00	; 0
      001219 36                    2423 	.db #0x36	; 54	'6'
      00121A 36                    2424 	.db #0x36	; 54	'6'
      00121B 00                    2425 	.db #0x00	; 0
      00121C 00                    2426 	.db #0x00	; 0
      00121D 00                    2427 	.db #0x00	; 0
      00121E 56                    2428 	.db #0x56	; 86	'V'
      00121F 36                    2429 	.db #0x36	; 54	'6'
      001220 00                    2430 	.db #0x00	; 0
      001221 00                    2431 	.db #0x00	; 0
      001222 00                    2432 	.db #0x00	; 0
      001223 08                    2433 	.db #0x08	; 8
      001224 14                    2434 	.db #0x14	; 20
      001225 22                    2435 	.db #0x22	; 34
      001226 41                    2436 	.db #0x41	; 65	'A'
      001227 14                    2437 	.db #0x14	; 20
      001228 14                    2438 	.db #0x14	; 20
      001229 14                    2439 	.db #0x14	; 20
      00122A 14                    2440 	.db #0x14	; 20
      00122B 14                    2441 	.db #0x14	; 20
      00122C 41                    2442 	.db #0x41	; 65	'A'
      00122D 22                    2443 	.db #0x22	; 34
      00122E 14                    2444 	.db #0x14	; 20
      00122F 08                    2445 	.db #0x08	; 8
      001230 00                    2446 	.db #0x00	; 0
      001231 02                    2447 	.db #0x02	; 2
      001232 01                    2448 	.db #0x01	; 1
      001233 51                    2449 	.db #0x51	; 81	'Q'
      001234 09                    2450 	.db #0x09	; 9
      001235 06                    2451 	.db #0x06	; 6
      001236 32                    2452 	.db #0x32	; 50	'2'
      001237 49                    2453 	.db #0x49	; 73	'I'
      001238 79                    2454 	.db #0x79	; 121	'y'
      001239 41                    2455 	.db #0x41	; 65	'A'
      00123A 3E                    2456 	.db #0x3e	; 62
      00123B 7E                    2457 	.db #0x7e	; 126
      00123C 11                    2458 	.db #0x11	; 17
      00123D 11                    2459 	.db #0x11	; 17
      00123E 11                    2460 	.db #0x11	; 17
      00123F 7E                    2461 	.db #0x7e	; 126
      001240 7F                    2462 	.db #0x7f	; 127
      001241 49                    2463 	.db #0x49	; 73	'I'
      001242 49                    2464 	.db #0x49	; 73	'I'
      001243 49                    2465 	.db #0x49	; 73	'I'
      001244 36                    2466 	.db #0x36	; 54	'6'
      001245 3E                    2467 	.db #0x3e	; 62
      001246 41                    2468 	.db #0x41	; 65	'A'
      001247 41                    2469 	.db #0x41	; 65	'A'
      001248 41                    2470 	.db #0x41	; 65	'A'
      001249 22                    2471 	.db #0x22	; 34
      00124A 7F                    2472 	.db #0x7f	; 127
      00124B 41                    2473 	.db #0x41	; 65	'A'
      00124C 41                    2474 	.db #0x41	; 65	'A'
      00124D 22                    2475 	.db #0x22	; 34
      00124E 1C                    2476 	.db #0x1c	; 28
      00124F 7F                    2477 	.db #0x7f	; 127
      001250 49                    2478 	.db #0x49	; 73	'I'
      001251 49                    2479 	.db #0x49	; 73	'I'
      001252 49                    2480 	.db #0x49	; 73	'I'
      001253 41                    2481 	.db #0x41	; 65	'A'
      001254 7F                    2482 	.db #0x7f	; 127
      001255 09                    2483 	.db #0x09	; 9
      001256 09                    2484 	.db #0x09	; 9
      001257 01                    2485 	.db #0x01	; 1
      001258 01                    2486 	.db #0x01	; 1
      001259 3E                    2487 	.db #0x3e	; 62
      00125A 41                    2488 	.db #0x41	; 65	'A'
      00125B 41                    2489 	.db #0x41	; 65	'A'
      00125C 51                    2490 	.db #0x51	; 81	'Q'
      00125D 32                    2491 	.db #0x32	; 50	'2'
      00125E 7F                    2492 	.db #0x7f	; 127
      00125F 08                    2493 	.db #0x08	; 8
      001260 08                    2494 	.db #0x08	; 8
      001261 08                    2495 	.db #0x08	; 8
      001262 7F                    2496 	.db #0x7f	; 127
      001263 00                    2497 	.db #0x00	; 0
      001264 41                    2498 	.db #0x41	; 65	'A'
      001265 7F                    2499 	.db #0x7f	; 127
      001266 41                    2500 	.db #0x41	; 65	'A'
      001267 00                    2501 	.db #0x00	; 0
      001268 20                    2502 	.db #0x20	; 32
      001269 40                    2503 	.db #0x40	; 64
      00126A 41                    2504 	.db #0x41	; 65	'A'
      00126B 3F                    2505 	.db #0x3f	; 63
      00126C 01                    2506 	.db #0x01	; 1
      00126D 7F                    2507 	.db #0x7f	; 127
      00126E 08                    2508 	.db #0x08	; 8
      00126F 14                    2509 	.db #0x14	; 20
      001270 22                    2510 	.db #0x22	; 34
      001271 41                    2511 	.db #0x41	; 65	'A'
      001272 7F                    2512 	.db #0x7f	; 127
      001273 40                    2513 	.db #0x40	; 64
      001274 40                    2514 	.db #0x40	; 64
      001275 40                    2515 	.db #0x40	; 64
      001276 40                    2516 	.db #0x40	; 64
      001277 7F                    2517 	.db #0x7f	; 127
      001278 02                    2518 	.db #0x02	; 2
      001279 04                    2519 	.db #0x04	; 4
      00127A 02                    2520 	.db #0x02	; 2
      00127B 7F                    2521 	.db #0x7f	; 127
      00127C 7F                    2522 	.db #0x7f	; 127
      00127D 04                    2523 	.db #0x04	; 4
      00127E 08                    2524 	.db #0x08	; 8
      00127F 10                    2525 	.db #0x10	; 16
      001280 7F                    2526 	.db #0x7f	; 127
      001281 3E                    2527 	.db #0x3e	; 62
      001282 41                    2528 	.db #0x41	; 65	'A'
      001283 41                    2529 	.db #0x41	; 65	'A'
      001284 41                    2530 	.db #0x41	; 65	'A'
      001285 3E                    2531 	.db #0x3e	; 62
      001286 7F                    2532 	.db #0x7f	; 127
      001287 09                    2533 	.db #0x09	; 9
      001288 09                    2534 	.db #0x09	; 9
      001289 09                    2535 	.db #0x09	; 9
      00128A 06                    2536 	.db #0x06	; 6
      00128B 3E                    2537 	.db #0x3e	; 62
      00128C 41                    2538 	.db #0x41	; 65	'A'
      00128D 51                    2539 	.db #0x51	; 81	'Q'
      00128E 21                    2540 	.db #0x21	; 33
      00128F 5E                    2541 	.db #0x5e	; 94
      001290 7F                    2542 	.db #0x7f	; 127
      001291 09                    2543 	.db #0x09	; 9
      001292 19                    2544 	.db #0x19	; 25
      001293 29                    2545 	.db #0x29	; 41
      001294 46                    2546 	.db #0x46	; 70	'F'
      001295 46                    2547 	.db #0x46	; 70	'F'
      001296 49                    2548 	.db #0x49	; 73	'I'
      001297 49                    2549 	.db #0x49	; 73	'I'
      001298 49                    2550 	.db #0x49	; 73	'I'
      001299 31                    2551 	.db #0x31	; 49	'1'
      00129A 01                    2552 	.db #0x01	; 1
      00129B 01                    2553 	.db #0x01	; 1
      00129C 7F                    2554 	.db #0x7f	; 127
      00129D 01                    2555 	.db #0x01	; 1
      00129E 01                    2556 	.db #0x01	; 1
      00129F 3F                    2557 	.db #0x3f	; 63
      0012A0 40                    2558 	.db #0x40	; 64
      0012A1 40                    2559 	.db #0x40	; 64
      0012A2 40                    2560 	.db #0x40	; 64
      0012A3 3F                    2561 	.db #0x3f	; 63
      0012A4 1F                    2562 	.db #0x1f	; 31
      0012A5 20                    2563 	.db #0x20	; 32
      0012A6 40                    2564 	.db #0x40	; 64
      0012A7 20                    2565 	.db #0x20	; 32
      0012A8 1F                    2566 	.db #0x1f	; 31
      0012A9 7F                    2567 	.db #0x7f	; 127
      0012AA 20                    2568 	.db #0x20	; 32
      0012AB 18                    2569 	.db #0x18	; 24
      0012AC 20                    2570 	.db #0x20	; 32
      0012AD 7F                    2571 	.db #0x7f	; 127
      0012AE 63                    2572 	.db #0x63	; 99	'c'
      0012AF 14                    2573 	.db #0x14	; 20
      0012B0 08                    2574 	.db #0x08	; 8
      0012B1 14                    2575 	.db #0x14	; 20
      0012B2 63                    2576 	.db #0x63	; 99	'c'
      0012B3 03                    2577 	.db #0x03	; 3
      0012B4 04                    2578 	.db #0x04	; 4
      0012B5 78                    2579 	.db #0x78	; 120	'x'
      0012B6 04                    2580 	.db #0x04	; 4
      0012B7 03                    2581 	.db #0x03	; 3
      0012B8 61                    2582 	.db #0x61	; 97	'a'
      0012B9 51                    2583 	.db #0x51	; 81	'Q'
      0012BA 49                    2584 	.db #0x49	; 73	'I'
      0012BB 45                    2585 	.db #0x45	; 69	'E'
      0012BC 43                    2586 	.db #0x43	; 67	'C'
      0012BD 00                    2587 	.db #0x00	; 0
      0012BE 00                    2588 	.db #0x00	; 0
      0012BF 7F                    2589 	.db #0x7f	; 127
      0012C0 41                    2590 	.db #0x41	; 65	'A'
      0012C1 41                    2591 	.db #0x41	; 65	'A'
      0012C2 02                    2592 	.db #0x02	; 2
      0012C3 04                    2593 	.db #0x04	; 4
      0012C4 08                    2594 	.db #0x08	; 8
      0012C5 10                    2595 	.db #0x10	; 16
      0012C6 20                    2596 	.db #0x20	; 32
      0012C7 41                    2597 	.db #0x41	; 65	'A'
      0012C8 41                    2598 	.db #0x41	; 65	'A'
      0012C9 7F                    2599 	.db #0x7f	; 127
      0012CA 00                    2600 	.db #0x00	; 0
      0012CB 00                    2601 	.db #0x00	; 0
      0012CC 04                    2602 	.db #0x04	; 4
      0012CD 02                    2603 	.db #0x02	; 2
      0012CE 01                    2604 	.db #0x01	; 1
      0012CF 02                    2605 	.db #0x02	; 2
      0012D0 04                    2606 	.db #0x04	; 4
      0012D1 40                    2607 	.db #0x40	; 64
      0012D2 40                    2608 	.db #0x40	; 64
      0012D3 40                    2609 	.db #0x40	; 64
      0012D4 40                    2610 	.db #0x40	; 64
      0012D5 40                    2611 	.db #0x40	; 64
      0012D6 00                    2612 	.db #0x00	; 0
      0012D7 01                    2613 	.db #0x01	; 1
      0012D8 02                    2614 	.db #0x02	; 2
      0012D9 04                    2615 	.db #0x04	; 4
      0012DA 00                    2616 	.db #0x00	; 0
      0012DB 20                    2617 	.db #0x20	; 32
      0012DC 54                    2618 	.db #0x54	; 84	'T'
      0012DD 54                    2619 	.db #0x54	; 84	'T'
      0012DE 54                    2620 	.db #0x54	; 84	'T'
      0012DF 78                    2621 	.db #0x78	; 120	'x'
      0012E0 7F                    2622 	.db #0x7f	; 127
      0012E1 48                    2623 	.db #0x48	; 72	'H'
      0012E2 44                    2624 	.db #0x44	; 68	'D'
      0012E3 44                    2625 	.db #0x44	; 68	'D'
      0012E4 38                    2626 	.db #0x38	; 56	'8'
      0012E5 38                    2627 	.db #0x38	; 56	'8'
      0012E6 44                    2628 	.db #0x44	; 68	'D'
      0012E7 44                    2629 	.db #0x44	; 68	'D'
      0012E8 44                    2630 	.db #0x44	; 68	'D'
      0012E9 20                    2631 	.db #0x20	; 32
      0012EA 38                    2632 	.db #0x38	; 56	'8'
      0012EB 44                    2633 	.db #0x44	; 68	'D'
      0012EC 44                    2634 	.db #0x44	; 68	'D'
      0012ED 48                    2635 	.db #0x48	; 72	'H'
      0012EE 7F                    2636 	.db #0x7f	; 127
      0012EF 38                    2637 	.db #0x38	; 56	'8'
      0012F0 54                    2638 	.db #0x54	; 84	'T'
      0012F1 54                    2639 	.db #0x54	; 84	'T'
      0012F2 54                    2640 	.db #0x54	; 84	'T'
      0012F3 18                    2641 	.db #0x18	; 24
      0012F4 08                    2642 	.db #0x08	; 8
      0012F5 7E                    2643 	.db #0x7e	; 126
      0012F6 09                    2644 	.db #0x09	; 9
      0012F7 01                    2645 	.db #0x01	; 1
      0012F8 02                    2646 	.db #0x02	; 2
      0012F9 08                    2647 	.db #0x08	; 8
      0012FA 14                    2648 	.db #0x14	; 20
      0012FB 54                    2649 	.db #0x54	; 84	'T'
      0012FC 54                    2650 	.db #0x54	; 84	'T'
      0012FD 3C                    2651 	.db #0x3c	; 60
      0012FE 7F                    2652 	.db #0x7f	; 127
      0012FF 08                    2653 	.db #0x08	; 8
      001300 04                    2654 	.db #0x04	; 4
      001301 04                    2655 	.db #0x04	; 4
      001302 78                    2656 	.db #0x78	; 120	'x'
      001303 00                    2657 	.db #0x00	; 0
      001304 44                    2658 	.db #0x44	; 68	'D'
      001305 7D                    2659 	.db #0x7d	; 125
      001306 40                    2660 	.db #0x40	; 64
      001307 00                    2661 	.db #0x00	; 0
      001308 20                    2662 	.db #0x20	; 32
      001309 40                    2663 	.db #0x40	; 64
      00130A 44                    2664 	.db #0x44	; 68	'D'
      00130B 3D                    2665 	.db #0x3d	; 61
      00130C 00                    2666 	.db #0x00	; 0
      00130D 00                    2667 	.db #0x00	; 0
      00130E 7F                    2668 	.db #0x7f	; 127
      00130F 10                    2669 	.db #0x10	; 16
      001310 28                    2670 	.db #0x28	; 40
      001311 44                    2671 	.db #0x44	; 68	'D'
      001312 00                    2672 	.db #0x00	; 0
      001313 41                    2673 	.db #0x41	; 65	'A'
      001314 7F                    2674 	.db #0x7f	; 127
      001315 40                    2675 	.db #0x40	; 64
      001316 00                    2676 	.db #0x00	; 0
      001317 7C                    2677 	.db #0x7c	; 124
      001318 04                    2678 	.db #0x04	; 4
      001319 18                    2679 	.db #0x18	; 24
      00131A 04                    2680 	.db #0x04	; 4
      00131B 78                    2681 	.db #0x78	; 120	'x'
      00131C 7C                    2682 	.db #0x7c	; 124
      00131D 08                    2683 	.db #0x08	; 8
      00131E 04                    2684 	.db #0x04	; 4
      00131F 04                    2685 	.db #0x04	; 4
      001320 78                    2686 	.db #0x78	; 120	'x'
      001321 38                    2687 	.db #0x38	; 56	'8'
      001322 44                    2688 	.db #0x44	; 68	'D'
      001323 44                    2689 	.db #0x44	; 68	'D'
      001324 44                    2690 	.db #0x44	; 68	'D'
      001325 38                    2691 	.db #0x38	; 56	'8'
      001326 7C                    2692 	.db #0x7c	; 124
      001327 14                    2693 	.db #0x14	; 20
      001328 14                    2694 	.db #0x14	; 20
      001329 14                    2695 	.db #0x14	; 20
      00132A 08                    2696 	.db #0x08	; 8
      00132B 08                    2697 	.db #0x08	; 8
      00132C 14                    2698 	.db #0x14	; 20
      00132D 14                    2699 	.db #0x14	; 20
      00132E 18                    2700 	.db #0x18	; 24
      00132F 7C                    2701 	.db #0x7c	; 124
      001330 7C                    2702 	.db #0x7c	; 124
      001331 08                    2703 	.db #0x08	; 8
      001332 04                    2704 	.db #0x04	; 4
      001333 04                    2705 	.db #0x04	; 4
      001334 08                    2706 	.db #0x08	; 8
      001335 48                    2707 	.db #0x48	; 72	'H'
      001336 54                    2708 	.db #0x54	; 84	'T'
      001337 54                    2709 	.db #0x54	; 84	'T'
      001338 54                    2710 	.db #0x54	; 84	'T'
      001339 20                    2711 	.db #0x20	; 32
      00133A 04                    2712 	.db #0x04	; 4
      00133B 3F                    2713 	.db #0x3f	; 63
      00133C 44                    2714 	.db #0x44	; 68	'D'
      00133D 40                    2715 	.db #0x40	; 64
      00133E 20                    2716 	.db #0x20	; 32
      00133F 3C                    2717 	.db #0x3c	; 60
      001340 40                    2718 	.db #0x40	; 64
      001341 40                    2719 	.db #0x40	; 64
      001342 20                    2720 	.db #0x20	; 32
      001343 7C                    2721 	.db #0x7c	; 124
      001344 1C                    2722 	.db #0x1c	; 28
      001345 20                    2723 	.db #0x20	; 32
      001346 40                    2724 	.db #0x40	; 64
      001347 20                    2725 	.db #0x20	; 32
      001348 1C                    2726 	.db #0x1c	; 28
      001349 3C                    2727 	.db #0x3c	; 60
      00134A 40                    2728 	.db #0x40	; 64
      00134B 30                    2729 	.db #0x30	; 48	'0'
      00134C 40                    2730 	.db #0x40	; 64
      00134D 3C                    2731 	.db #0x3c	; 60
      00134E 44                    2732 	.db #0x44	; 68	'D'
      00134F 28                    2733 	.db #0x28	; 40
      001350 10                    2734 	.db #0x10	; 16
      001351 28                    2735 	.db #0x28	; 40
      001352 44                    2736 	.db #0x44	; 68	'D'
      001353 0C                    2737 	.db #0x0c	; 12
      001354 50                    2738 	.db #0x50	; 80	'P'
      001355 50                    2739 	.db #0x50	; 80	'P'
      001356 50                    2740 	.db #0x50	; 80	'P'
      001357 3C                    2741 	.db #0x3c	; 60
      001358 44                    2742 	.db #0x44	; 68	'D'
      001359 64                    2743 	.db #0x64	; 100	'd'
      00135A 54                    2744 	.db #0x54	; 84	'T'
      00135B 4C                    2745 	.db #0x4c	; 76	'L'
      00135C 44                    2746 	.db #0x44	; 68	'D'
      00135D 00                    2747 	.db #0x00	; 0
      00135E 08                    2748 	.db #0x08	; 8
      00135F 36                    2749 	.db #0x36	; 54	'6'
      001360 41                    2750 	.db #0x41	; 65	'A'
      001361 00                    2751 	.db #0x00	; 0
      001362 00                    2752 	.db #0x00	; 0
      001363 00                    2753 	.db #0x00	; 0
      001364 7F                    2754 	.db #0x7f	; 127
      001365 00                    2755 	.db #0x00	; 0
      001366 00                    2756 	.db #0x00	; 0
      001367 00                    2757 	.db #0x00	; 0
      001368 41                    2758 	.db #0x41	; 65	'A'
      001369 36                    2759 	.db #0x36	; 54	'6'
      00136A 08                    2760 	.db #0x08	; 8
      00136B 00                    2761 	.db #0x00	; 0
      00136C 08                    2762 	.db #0x08	; 8
      00136D 08                    2763 	.db #0x08	; 8
      00136E 2A                    2764 	.db #0x2a	; 42
      00136F 1C                    2765 	.db #0x1c	; 28
      001370 08                    2766 	.db #0x08	; 8
      001371 08                    2767 	.db #0x08	; 8
      001372 1C                    2768 	.db #0x1c	; 28
      001373 2A                    2769 	.db #0x2a	; 42
      001374 08                    2770 	.db #0x08	; 8
      001375 08                    2771 	.db #0x08	; 8
                                   2772 	.area XINIT   (CODE)
                                   2773 	.area CABS    (ABS,CODE)
