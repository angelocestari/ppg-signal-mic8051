                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 3.6.0 #9615 (MINGW64)
                                      4 ;--------------------------------------------------------
                                      5 	.module uart0
                                      6 	.optsdcc -mmcs51 --model-small
                                      7 	
                                      8 ;--------------------------------------------------------
                                      9 ; Public variables in this module
                                     10 ;--------------------------------------------------------
                                     11 	.globl _reset_wdt
                                     12 	.globl _P7_7
                                     13 	.globl _P7_6
                                     14 	.globl _P7_5
                                     15 	.globl _P7_4
                                     16 	.globl _P7_3
                                     17 	.globl _P7_2
                                     18 	.globl _P7_1
                                     19 	.globl _P7_0
                                     20 	.globl _P6_7
                                     21 	.globl _P6_6
                                     22 	.globl _P6_5
                                     23 	.globl _P6_4
                                     24 	.globl _P6_3
                                     25 	.globl _P6_2
                                     26 	.globl _P6_1
                                     27 	.globl _P6_0
                                     28 	.globl _P5_7
                                     29 	.globl _P5_6
                                     30 	.globl _P5_5
                                     31 	.globl _P5_4
                                     32 	.globl _P5_3
                                     33 	.globl _P5_2
                                     34 	.globl _P5_1
                                     35 	.globl _P5_0
                                     36 	.globl _P4_7
                                     37 	.globl _P4_6
                                     38 	.globl _P4_5
                                     39 	.globl _P4_4
                                     40 	.globl _P4_3
                                     41 	.globl _P4_2
                                     42 	.globl _P4_1
                                     43 	.globl _P4_0
                                     44 	.globl _P3_7
                                     45 	.globl _P3_6
                                     46 	.globl _P3_5
                                     47 	.globl _P3_4
                                     48 	.globl _P3_3
                                     49 	.globl _P3_2
                                     50 	.globl _P3_1
                                     51 	.globl _P3_0
                                     52 	.globl _P2_7
                                     53 	.globl _P2_6
                                     54 	.globl _P2_5
                                     55 	.globl _P2_4
                                     56 	.globl _P2_3
                                     57 	.globl _P2_2
                                     58 	.globl _P2_1
                                     59 	.globl _P2_0
                                     60 	.globl _P1_7
                                     61 	.globl _P1_6
                                     62 	.globl _P1_5
                                     63 	.globl _P1_4
                                     64 	.globl _P1_3
                                     65 	.globl _P1_2
                                     66 	.globl _P1_1
                                     67 	.globl _P1_0
                                     68 	.globl _P0_7
                                     69 	.globl _P0_6
                                     70 	.globl _P0_5
                                     71 	.globl _P0_4
                                     72 	.globl _P0_3
                                     73 	.globl _P0_2
                                     74 	.globl _P0_1
                                     75 	.globl _P0_0
                                     76 	.globl _CANTEST
                                     77 	.globl _CANCCE
                                     78 	.globl _CANDAR
                                     79 	.globl _CANIF
                                     80 	.globl _CANEIE
                                     81 	.globl _CANSIE
                                     82 	.globl _CANIE
                                     83 	.globl _CANINIT
                                     84 	.globl _SPIEN
                                     85 	.globl _TXBMT
                                     86 	.globl _NSSMD0
                                     87 	.globl _NSSMD1
                                     88 	.globl _RXOVRN
                                     89 	.globl _MODF
                                     90 	.globl _WCOL
                                     91 	.globl _SPIF
                                     92 	.globl _AD2WINT
                                     93 	.globl _AD2CM0
                                     94 	.globl _AD2CM1
                                     95 	.globl _AD2CM2
                                     96 	.globl _AD2BUSY
                                     97 	.globl _AD2INT
                                     98 	.globl _AD2TM
                                     99 	.globl _AD2EN
                                    100 	.globl _AD0LJST
                                    101 	.globl _AD0WINT
                                    102 	.globl _AD0CM0
                                    103 	.globl _AD0CM1
                                    104 	.globl _AD0BUSY
                                    105 	.globl _AD0INT
                                    106 	.globl _AD0TM
                                    107 	.globl _AD0EN
                                    108 	.globl _CCF0
                                    109 	.globl _CCF1
                                    110 	.globl _CCF2
                                    111 	.globl _CCF3
                                    112 	.globl _CCF4
                                    113 	.globl _CCF5
                                    114 	.globl _CR
                                    115 	.globl _CF
                                    116 	.globl _P
                                    117 	.globl _F1
                                    118 	.globl _OV
                                    119 	.globl _RS0
                                    120 	.globl _RS1
                                    121 	.globl _F0
                                    122 	.globl _AC
                                    123 	.globl _CY
                                    124 	.globl _CPRL4
                                    125 	.globl _CT4
                                    126 	.globl _TR4
                                    127 	.globl _EXEN4
                                    128 	.globl _EXF4
                                    129 	.globl _TF4
                                    130 	.globl _CPRL3
                                    131 	.globl _CT3
                                    132 	.globl _TR3
                                    133 	.globl _EXEN3
                                    134 	.globl _EXF3
                                    135 	.globl _TF3
                                    136 	.globl _CPRL2
                                    137 	.globl _CT2
                                    138 	.globl _TR2
                                    139 	.globl _EXEN2
                                    140 	.globl _EXF2
                                    141 	.globl _TF2
                                    142 	.globl _LEC0
                                    143 	.globl _LEC1
                                    144 	.globl _LEC2
                                    145 	.globl _TXOK
                                    146 	.globl _RXOK
                                    147 	.globl _EPASS
                                    148 	.globl _EWARN
                                    149 	.globl _BOFF
                                    150 	.globl _SMBTOE
                                    151 	.globl _SMBFTE
                                    152 	.globl _AA
                                    153 	.globl _SI
                                    154 	.globl _STO
                                    155 	.globl _STA
                                    156 	.globl _ENSMB
                                    157 	.globl _BUSY
                                    158 	.globl _PX0
                                    159 	.globl _PT0
                                    160 	.globl _PX1
                                    161 	.globl _PT1
                                    162 	.globl _PS0
                                    163 	.globl _PT2
                                    164 	.globl _EX0
                                    165 	.globl _ET0
                                    166 	.globl _EX1
                                    167 	.globl _ET1
                                    168 	.globl _ES0
                                    169 	.globl _ET2
                                    170 	.globl _EA
                                    171 	.globl _RI1
                                    172 	.globl _TI1
                                    173 	.globl _RB81
                                    174 	.globl _TB81
                                    175 	.globl _REN1
                                    176 	.globl _MCE1
                                    177 	.globl _S1MODE
                                    178 	.globl _RI0
                                    179 	.globl _TI0
                                    180 	.globl _RB80
                                    181 	.globl _TB80
                                    182 	.globl _REN0
                                    183 	.globl _SM20
                                    184 	.globl _SM10
                                    185 	.globl _SM00
                                    186 	.globl _CP2HYN0
                                    187 	.globl _CP2HYN1
                                    188 	.globl _CP2HYP0
                                    189 	.globl _CP2HYP1
                                    190 	.globl _CP2FIF
                                    191 	.globl _CP2RIF
                                    192 	.globl _CP2OUT
                                    193 	.globl _CP2EN
                                    194 	.globl _CP1HYN0
                                    195 	.globl _CP1HYN1
                                    196 	.globl _CP1HYP0
                                    197 	.globl _CP1HYP1
                                    198 	.globl _CP1FIF
                                    199 	.globl _CP1RIF
                                    200 	.globl _CP1OUT
                                    201 	.globl _CP1EN
                                    202 	.globl _CP0HYN0
                                    203 	.globl _CP0HYN1
                                    204 	.globl _CP0HYP0
                                    205 	.globl _CP0HYP1
                                    206 	.globl _CP0FIF
                                    207 	.globl _CP0RIF
                                    208 	.globl _CP0OUT
                                    209 	.globl _CP0EN
                                    210 	.globl _IT0
                                    211 	.globl _IE0
                                    212 	.globl _IT1
                                    213 	.globl _IE1
                                    214 	.globl _TR0
                                    215 	.globl _TF0
                                    216 	.globl _TR1
                                    217 	.globl _TF1
                                    218 	.globl __XPAGE
                                    219 	.globl _DP
                                    220 	.globl _ADC0
                                    221 	.globl _ADC0LT
                                    222 	.globl _ADC0GT
                                    223 	.globl _TMR4
                                    224 	.globl _TMR3
                                    225 	.globl _TMR2
                                    226 	.globl _RCAP4
                                    227 	.globl _RCAP3
                                    228 	.globl _RCAP2
                                    229 	.globl _DAC1
                                    230 	.globl _DAC0
                                    231 	.globl _CAN0DAT
                                    232 	.globl _PCA0CP5
                                    233 	.globl _PCA0CP4
                                    234 	.globl _PCA0CP3
                                    235 	.globl _PCA0CP2
                                    236 	.globl _PCA0CP1
                                    237 	.globl _PCA0CP0
                                    238 	.globl _PCA0
                                    239 	.globl _WDTCN
                                    240 	.globl _PCA0CPH1
                                    241 	.globl _PCA0CPL1
                                    242 	.globl _PCA0CPH0
                                    243 	.globl _PCA0CPL0
                                    244 	.globl _PCA0H
                                    245 	.globl _PCA0L
                                    246 	.globl _P7
                                    247 	.globl _CAN0CN
                                    248 	.globl _SPI0CN
                                    249 	.globl _EIP2
                                    250 	.globl _EIP1
                                    251 	.globl _B
                                    252 	.globl _RSTSRC
                                    253 	.globl _PCA0CPH4
                                    254 	.globl _PCA0CPL4
                                    255 	.globl _PCA0CPH3
                                    256 	.globl _PCA0CPL3
                                    257 	.globl _PCA0CPH2
                                    258 	.globl _PCA0CPL2
                                    259 	.globl _P6
                                    260 	.globl _ADC2CN
                                    261 	.globl _ADC0CN
                                    262 	.globl _EIE2
                                    263 	.globl _EIE1
                                    264 	.globl _XBR3
                                    265 	.globl _XBR2
                                    266 	.globl _XBR1
                                    267 	.globl _PCA0CPH5
                                    268 	.globl _XBR0
                                    269 	.globl _PCA0CPL5
                                    270 	.globl _ACC
                                    271 	.globl _PCA0CPM5
                                    272 	.globl _PCA0CPM4
                                    273 	.globl _PCA0CPM3
                                    274 	.globl _PCA0CPM2
                                    275 	.globl _CAN0TST
                                    276 	.globl _PCA0CPM1
                                    277 	.globl _CAN0ADR
                                    278 	.globl _PCA0CPM0
                                    279 	.globl _CAN0DATH
                                    280 	.globl _PCA0MD
                                    281 	.globl _P5
                                    282 	.globl _CAN0DATL
                                    283 	.globl _PCA0CN
                                    284 	.globl _HVA0CN
                                    285 	.globl _DAC1CN
                                    286 	.globl _DAC0CN
                                    287 	.globl _DAC1H
                                    288 	.globl _DAC0H
                                    289 	.globl _DAC1L
                                    290 	.globl _DAC0L
                                    291 	.globl _REF0CN
                                    292 	.globl _PSW
                                    293 	.globl _SMB0CR
                                    294 	.globl _TMR4H
                                    295 	.globl _TMR3H
                                    296 	.globl _TMR2H
                                    297 	.globl _TMR4L
                                    298 	.globl _TMR3L
                                    299 	.globl _TMR2L
                                    300 	.globl _RCAP4H
                                    301 	.globl _RCAP3H
                                    302 	.globl _RCAP2H
                                    303 	.globl _RCAP4L
                                    304 	.globl _RCAP3L
                                    305 	.globl _RCAP2L
                                    306 	.globl _TMR4CF
                                    307 	.globl _TMR3CF
                                    308 	.globl _TMR2CF
                                    309 	.globl _P4
                                    310 	.globl _TMR4CN
                                    311 	.globl _TMR3CN
                                    312 	.globl _TMR2CN
                                    313 	.globl _ADC0LTH
                                    314 	.globl _ADC2LT
                                    315 	.globl _ADC0LTL
                                    316 	.globl _ADC0GTH
                                    317 	.globl _ADC2GT
                                    318 	.globl _ADC0GTL
                                    319 	.globl _SMB0ADR
                                    320 	.globl _SMB0DAT
                                    321 	.globl _SMB0STA
                                    322 	.globl _CAN0STA
                                    323 	.globl _SMB0CN
                                    324 	.globl _ADC0H
                                    325 	.globl _ADC2
                                    326 	.globl _ADC0L
                                    327 	.globl _ADC2CF
                                    328 	.globl _ADC0CF
                                    329 	.globl _AMX2SL
                                    330 	.globl _AMX0SL
                                    331 	.globl _AMX0CF
                                    332 	.globl _AMX0PRT
                                    333 	.globl _AMX2CF
                                    334 	.globl _SADEN0
                                    335 	.globl _IP
                                    336 	.globl _FLACL
                                    337 	.globl _FLSCL
                                    338 	.globl _P3
                                    339 	.globl _P3MDIN
                                    340 	.globl _P2MDIN
                                    341 	.globl _P1MDIN
                                    342 	.globl _SADDR1
                                    343 	.globl _SADDR0
                                    344 	.globl _IE
                                    345 	.globl _P3MDOUT
                                    346 	.globl _P2MDOUT
                                    347 	.globl _P1MDOUT
                                    348 	.globl _P0MDOUT
                                    349 	.globl _EMI0CF
                                    350 	.globl _EMI0CN
                                    351 	.globl _EMI0TC
                                    352 	.globl _P2
                                    353 	.globl _P7MDOUT
                                    354 	.globl _P6MDOUT
                                    355 	.globl _P5MDOUT
                                    356 	.globl _SPI0CKR
                                    357 	.globl _P4MDOUT
                                    358 	.globl _SPI0DAT
                                    359 	.globl _SPI0CFG
                                    360 	.globl _SBUF1
                                    361 	.globl _SBUF0
                                    362 	.globl _SCON1
                                    363 	.globl _SCON0
                                    364 	.globl _CLKSEL
                                    365 	.globl _SFRPGCN
                                    366 	.globl _SSTA0
                                    367 	.globl _P1
                                    368 	.globl _PSCTL
                                    369 	.globl _CKCON
                                    370 	.globl _TH1
                                    371 	.globl _OSCXCN
                                    372 	.globl _TH0
                                    373 	.globl _OSCICL
                                    374 	.globl _TL1
                                    375 	.globl _OSCICN
                                    376 	.globl _TL0
                                    377 	.globl _CPT2MD
                                    378 	.globl _CPT1MD
                                    379 	.globl _CPT0MD
                                    380 	.globl _TMOD
                                    381 	.globl _CPT2CN
                                    382 	.globl _CPT1CN
                                    383 	.globl _CPT0CN
                                    384 	.globl _TCON
                                    385 	.globl _PCON
                                    386 	.globl _SFRLAST
                                    387 	.globl _SFRNEXT
                                    388 	.globl _SFRPAGE
                                    389 	.globl _DPH
                                    390 	.globl _DPL
                                    391 	.globl _SP
                                    392 	.globl _P0
                                    393 	.globl _uart0_flag
                                    394 	.globl _uart0_data
                                    395 	.globl _enable_uart0
                                    396 	.globl _disable_uart0
                                    397 	.globl _envia_uart0
                                    398 	.globl _ISR_UART0
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
                           000000  1180 G$uart0_data$0$0==.
      00000A                       1181 _uart0_data::
      00000A                       1182 	.ds 1
                                   1183 ;--------------------------------------------------------
                                   1184 ; overlayable items in internal ram 
                                   1185 ;--------------------------------------------------------
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
                           000000  1199 G$uart0_flag$0$0==.
      000003                       1200 _uart0_flag::
      000003                       1201 	.ds 1
                                   1202 ;--------------------------------------------------------
                                   1203 ; paged external ram data
                                   1204 ;--------------------------------------------------------
                                   1205 	.area PSEG    (PAG,XDATA)
                                   1206 ;--------------------------------------------------------
                                   1207 ; external ram data
                                   1208 ;--------------------------------------------------------
                                   1209 	.area XSEG    (XDATA)
                                   1210 ;--------------------------------------------------------
                                   1211 ; absolute external ram data
                                   1212 ;--------------------------------------------------------
                                   1213 	.area XABS    (ABS,XDATA)
                                   1214 ;--------------------------------------------------------
                                   1215 ; external initialized ram data
                                   1216 ;--------------------------------------------------------
                                   1217 	.area XISEG   (XDATA)
                                   1218 	.area HOME    (CODE)
                                   1219 	.area GSINIT0 (CODE)
                                   1220 	.area GSINIT1 (CODE)
                                   1221 	.area GSINIT2 (CODE)
                                   1222 	.area GSINIT3 (CODE)
                                   1223 	.area GSINIT4 (CODE)
                                   1224 	.area GSINIT5 (CODE)
                                   1225 	.area GSINIT  (CODE)
                                   1226 	.area GSFINAL (CODE)
                                   1227 	.area CSEG    (CODE)
                                   1228 ;--------------------------------------------------------
                                   1229 ; global & static initialisations
                                   1230 ;--------------------------------------------------------
                                   1231 	.area HOME    (CODE)
                                   1232 	.area GSINIT  (CODE)
                                   1233 	.area GSFINAL (CODE)
                                   1234 	.area GSINIT  (CODE)
                           000000  1235 	C$uart0.c$6$1$21 ==.
                                   1236 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\uart0.c:6: volatile unsigned char uart0_data = 0;
      0000ED 75 0A 00         [24] 1237 	mov	_uart0_data,#0x00
                           000003  1238 	C$uart0.c$5$1$21 ==.
                                   1239 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\uart0.c:5: volatile __bit uart0_flag = 0;
      0000F0 C2 03            [12] 1240 	clr	_uart0_flag
                                   1241 ;--------------------------------------------------------
                                   1242 ; Home
                                   1243 ;--------------------------------------------------------
                                   1244 	.area HOME    (CODE)
                                   1245 	.area HOME    (CODE)
                                   1246 ;--------------------------------------------------------
                                   1247 ; code
                                   1248 ;--------------------------------------------------------
                                   1249 	.area CSEG    (CODE)
                                   1250 ;------------------------------------------------------------
                                   1251 ;Allocation info for local variables in function 'enable_uart0'
                                   1252 ;------------------------------------------------------------
                           000000  1253 	G$enable_uart0$0$0 ==.
                           000000  1254 	C$uart0.c$8$0$0 ==.
                                   1255 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\uart0.c:8: void enable_uart0(void) {
                                   1256 ;	-----------------------------------------
                                   1257 ;	 function enable_uart0
                                   1258 ;	-----------------------------------------
      000350                       1259 _enable_uart0:
                           000007  1260 	ar7 = 0x07
                           000006  1261 	ar6 = 0x06
                           000005  1262 	ar5 = 0x05
                           000004  1263 	ar4 = 0x04
                           000003  1264 	ar3 = 0x03
                           000002  1265 	ar2 = 0x02
                           000001  1266 	ar1 = 0x01
                           000000  1267 	ar0 = 0x00
                           000000  1268 	C$uart0.c$9$1$14 ==.
                                   1269 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\uart0.c:9: SCON0 |= 0x10u;
      000350 AE 98            [24] 1270 	mov	r6,_SCON0
      000352 43 06 10         [24] 1271 	orl	ar6,#0x10
      000355 8E 98            [24] 1272 	mov	_SCON0,r6
                           000007  1273 	C$uart0.c$10$1$14 ==.
                           000007  1274 	XG$enable_uart0$0$0 ==.
      000357 22               [24] 1275 	ret
                                   1276 ;------------------------------------------------------------
                                   1277 ;Allocation info for local variables in function 'disable_uart0'
                                   1278 ;------------------------------------------------------------
                           000008  1279 	G$disable_uart0$0$0 ==.
                           000008  1280 	C$uart0.c$12$1$14 ==.
                                   1281 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\uart0.c:12: void disable_uart0(void) {
                                   1282 ;	-----------------------------------------
                                   1283 ;	 function disable_uart0
                                   1284 ;	-----------------------------------------
      000358                       1285 _disable_uart0:
                           000008  1286 	C$uart0.c$13$1$16 ==.
                                   1287 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\uart0.c:13: SCON0 &= ~0x10u;
      000358 53 98 EF         [24] 1288 	anl	_SCON0,#0xef
                           00000B  1289 	C$uart0.c$14$1$16 ==.
                           00000B  1290 	XG$disable_uart0$0$0 ==.
      00035B 22               [24] 1291 	ret
                                   1292 ;------------------------------------------------------------
                                   1293 ;Allocation info for local variables in function 'envia_uart0'
                                   1294 ;------------------------------------------------------------
                                   1295 ;dado                      Allocated to registers 
                                   1296 ;------------------------------------------------------------
                           00000C  1297 	G$envia_uart0$0$0 ==.
                           00000C  1298 	C$uart0.c$16$1$16 ==.
                                   1299 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\uart0.c:16: void envia_uart0(unsigned char dado) {
                                   1300 ;	-----------------------------------------
                                   1301 ;	 function envia_uart0
                                   1302 ;	-----------------------------------------
      00035C                       1303 _envia_uart0:
      00035C 85 82 99         [24] 1304 	mov	_SBUF0,dpl
                           00000F  1305 	C$uart0.c$18$1$18 ==.
                                   1306 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\uart0.c:18: reset_wdt();
      00035F 12 02 EA         [24] 1307 	lcall	_reset_wdt
                           000012  1308 	C$uart0.c$19$1$18 ==.
                                   1309 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\uart0.c:19: while (!TI0) {}
      000362                       1310 00101$:
                           000012  1311 	C$uart0.c$20$1$18 ==.
                                   1312 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\uart0.c:20: TI0 = 0;
      000362 10 99 02         [24] 1313 	jbc	_TI0,00112$
      000365 80 FB            [24] 1314 	sjmp	00101$
      000367                       1315 00112$:
                           000017  1316 	C$uart0.c$21$1$18 ==.
                           000017  1317 	XG$envia_uart0$0$0 ==.
      000367 22               [24] 1318 	ret
                                   1319 ;------------------------------------------------------------
                                   1320 ;Allocation info for local variables in function 'ISR_UART0'
                                   1321 ;------------------------------------------------------------
                           000018  1322 	G$ISR_UART0$0$0 ==.
                           000018  1323 	C$uart0.c$23$1$18 ==.
                                   1324 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\uart0.c:23: void ISR_UART0(void) __interrupt INTERRUPT_UART0 {
                                   1325 ;	-----------------------------------------
                                   1326 ;	 function ISR_UART0
                                   1327 ;	-----------------------------------------
      000368                       1328 _ISR_UART0:
                           000018  1329 	C$uart0.c$24$1$21 ==.
                                   1330 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\uart0.c:24: if (RI0) {
      000368 30 98 07         [24] 1331 	jnb	_RI0,00103$
                           00001B  1332 	C$uart0.c$25$2$22 ==.
                                   1333 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\uart0.c:25: uart0_flag = 1;
      00036B D2 03            [12] 1334 	setb	_uart0_flag
                           00001D  1335 	C$uart0.c$26$2$22 ==.
                                   1336 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\uart0.c:26: uart0_data = SBUF0;
      00036D 85 99 0A         [24] 1337 	mov	_uart0_data,_SBUF0
                           000020  1338 	C$uart0.c$27$2$22 ==.
                                   1339 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\uart0.c:27: RI0 = 0;
      000370 C2 98            [12] 1340 	clr	_RI0
      000372                       1341 00103$:
                           000022  1342 	C$uart0.c$29$1$21 ==.
                           000022  1343 	XG$ISR_UART0$0$0 ==.
      000372 32               [24] 1344 	reti
                                   1345 ;	eliminated unneeded mov psw,# (no regs used in bank)
                                   1346 ;	eliminated unneeded push/pop psw
                                   1347 ;	eliminated unneeded push/pop dpl
                                   1348 ;	eliminated unneeded push/pop dph
                                   1349 ;	eliminated unneeded push/pop b
                                   1350 ;	eliminated unneeded push/pop acc
                                   1351 	.area CSEG    (CODE)
                                   1352 	.area CONST   (CODE)
                                   1353 	.area XINIT   (CODE)
                                   1354 	.area CABS    (ABS,CODE)
