                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 3.6.0 #9615 (MINGW64)
                                      4 ;--------------------------------------------------------
                                      5 	.module main
                                      6 	.optsdcc -mmcs51 --model-small
                                      7 	
                                      8 ;--------------------------------------------------------
                                      9 ; Public variables in this module
                                     10 ;--------------------------------------------------------
                                     11 	.globl _main
                                     12 	.globl _setup
                                     13 	.globl _backup_dados
                                     14 	.globl _Init_Device
                                     15 	.globl _Interrupts_Init
                                     16 	.globl _Oscillator_Init
                                     17 	.globl _Port_IO_Init
                                     18 	.globl _Voltage_Reference_Init
                                     19 	.globl _ADC_Init
                                     20 	.globl _SMBus_Init
                                     21 	.globl _UART_Init
                                     22 	.globl _Timer_Init
                                     23 	.globl _envia_uart0
                                     24 	.globl _ponto_glcd
                                     25 	.globl _escala_glcd
                                     26 	.globl _limpa_col_glcd
                                     27 	.globl _init_GLCD
                                     28 	.globl _limpa_glcd
                                     29 	.globl _guarda_buffer
                                     30 	.globl _guarda_eeprom
                                     31 	.globl _le_eeprom
                                     32 	.globl _atualiza_buzzer
                                     33 	.globl _buzzer_bip
                                     34 	.globl _buzzer_off
                                     35 	.globl _config_adc0
                                     36 	.globl _config_tc0
                                     37 	.globl _reset_wdt
                                     38 	.globl _P7_7
                                     39 	.globl _P7_6
                                     40 	.globl _P7_5
                                     41 	.globl _P7_4
                                     42 	.globl _P7_3
                                     43 	.globl _P7_2
                                     44 	.globl _P7_1
                                     45 	.globl _P7_0
                                     46 	.globl _P6_7
                                     47 	.globl _P6_6
                                     48 	.globl _P6_5
                                     49 	.globl _P6_4
                                     50 	.globl _P6_3
                                     51 	.globl _P6_2
                                     52 	.globl _P6_1
                                     53 	.globl _P6_0
                                     54 	.globl _P5_7
                                     55 	.globl _P5_6
                                     56 	.globl _P5_5
                                     57 	.globl _P5_4
                                     58 	.globl _P5_3
                                     59 	.globl _P5_2
                                     60 	.globl _P5_1
                                     61 	.globl _P5_0
                                     62 	.globl _P4_7
                                     63 	.globl _P4_6
                                     64 	.globl _P4_5
                                     65 	.globl _P4_4
                                     66 	.globl _P4_3
                                     67 	.globl _P4_2
                                     68 	.globl _P4_1
                                     69 	.globl _P4_0
                                     70 	.globl _P3_7
                                     71 	.globl _P3_6
                                     72 	.globl _P3_5
                                     73 	.globl _P3_4
                                     74 	.globl _P3_3
                                     75 	.globl _P3_2
                                     76 	.globl _P3_1
                                     77 	.globl _P3_0
                                     78 	.globl _P2_7
                                     79 	.globl _P2_6
                                     80 	.globl _P2_5
                                     81 	.globl _P2_4
                                     82 	.globl _P2_3
                                     83 	.globl _P2_2
                                     84 	.globl _P2_1
                                     85 	.globl _P2_0
                                     86 	.globl _P1_7
                                     87 	.globl _P1_6
                                     88 	.globl _P1_5
                                     89 	.globl _P1_4
                                     90 	.globl _P1_3
                                     91 	.globl _P1_2
                                     92 	.globl _P1_1
                                     93 	.globl _P1_0
                                     94 	.globl _P0_7
                                     95 	.globl _P0_6
                                     96 	.globl _P0_5
                                     97 	.globl _P0_4
                                     98 	.globl _P0_3
                                     99 	.globl _P0_2
                                    100 	.globl _P0_1
                                    101 	.globl _P0_0
                                    102 	.globl _CANTEST
                                    103 	.globl _CANCCE
                                    104 	.globl _CANDAR
                                    105 	.globl _CANIF
                                    106 	.globl _CANEIE
                                    107 	.globl _CANSIE
                                    108 	.globl _CANIE
                                    109 	.globl _CANINIT
                                    110 	.globl _SPIEN
                                    111 	.globl _TXBMT
                                    112 	.globl _NSSMD0
                                    113 	.globl _NSSMD1
                                    114 	.globl _RXOVRN
                                    115 	.globl _MODF
                                    116 	.globl _WCOL
                                    117 	.globl _SPIF
                                    118 	.globl _AD2WINT
                                    119 	.globl _AD2CM0
                                    120 	.globl _AD2CM1
                                    121 	.globl _AD2CM2
                                    122 	.globl _AD2BUSY
                                    123 	.globl _AD2INT
                                    124 	.globl _AD2TM
                                    125 	.globl _AD2EN
                                    126 	.globl _AD0LJST
                                    127 	.globl _AD0WINT
                                    128 	.globl _AD0CM0
                                    129 	.globl _AD0CM1
                                    130 	.globl _AD0BUSY
                                    131 	.globl _AD0INT
                                    132 	.globl _AD0TM
                                    133 	.globl _AD0EN
                                    134 	.globl _CCF0
                                    135 	.globl _CCF1
                                    136 	.globl _CCF2
                                    137 	.globl _CCF3
                                    138 	.globl _CCF4
                                    139 	.globl _CCF5
                                    140 	.globl _CR
                                    141 	.globl _CF
                                    142 	.globl _P
                                    143 	.globl _F1
                                    144 	.globl _OV
                                    145 	.globl _RS0
                                    146 	.globl _RS1
                                    147 	.globl _F0
                                    148 	.globl _AC
                                    149 	.globl _CY
                                    150 	.globl _CPRL4
                                    151 	.globl _CT4
                                    152 	.globl _TR4
                                    153 	.globl _EXEN4
                                    154 	.globl _EXF4
                                    155 	.globl _TF4
                                    156 	.globl _CPRL3
                                    157 	.globl _CT3
                                    158 	.globl _TR3
                                    159 	.globl _EXEN3
                                    160 	.globl _EXF3
                                    161 	.globl _TF3
                                    162 	.globl _CPRL2
                                    163 	.globl _CT2
                                    164 	.globl _TR2
                                    165 	.globl _EXEN2
                                    166 	.globl _EXF2
                                    167 	.globl _TF2
                                    168 	.globl _LEC0
                                    169 	.globl _LEC1
                                    170 	.globl _LEC2
                                    171 	.globl _TXOK
                                    172 	.globl _RXOK
                                    173 	.globl _EPASS
                                    174 	.globl _EWARN
                                    175 	.globl _BOFF
                                    176 	.globl _SMBTOE
                                    177 	.globl _SMBFTE
                                    178 	.globl _AA
                                    179 	.globl _SI
                                    180 	.globl _STO
                                    181 	.globl _STA
                                    182 	.globl _ENSMB
                                    183 	.globl _BUSY
                                    184 	.globl _PX0
                                    185 	.globl _PT0
                                    186 	.globl _PX1
                                    187 	.globl _PT1
                                    188 	.globl _PS0
                                    189 	.globl _PT2
                                    190 	.globl _EX0
                                    191 	.globl _ET0
                                    192 	.globl _EX1
                                    193 	.globl _ET1
                                    194 	.globl _ES0
                                    195 	.globl _ET2
                                    196 	.globl _EA
                                    197 	.globl _RI1
                                    198 	.globl _TI1
                                    199 	.globl _RB81
                                    200 	.globl _TB81
                                    201 	.globl _REN1
                                    202 	.globl _MCE1
                                    203 	.globl _S1MODE
                                    204 	.globl _RI0
                                    205 	.globl _TI0
                                    206 	.globl _RB80
                                    207 	.globl _TB80
                                    208 	.globl _REN0
                                    209 	.globl _SM20
                                    210 	.globl _SM10
                                    211 	.globl _SM00
                                    212 	.globl _CP2HYN0
                                    213 	.globl _CP2HYN1
                                    214 	.globl _CP2HYP0
                                    215 	.globl _CP2HYP1
                                    216 	.globl _CP2FIF
                                    217 	.globl _CP2RIF
                                    218 	.globl _CP2OUT
                                    219 	.globl _CP2EN
                                    220 	.globl _CP1HYN0
                                    221 	.globl _CP1HYN1
                                    222 	.globl _CP1HYP0
                                    223 	.globl _CP1HYP1
                                    224 	.globl _CP1FIF
                                    225 	.globl _CP1RIF
                                    226 	.globl _CP1OUT
                                    227 	.globl _CP1EN
                                    228 	.globl _CP0HYN0
                                    229 	.globl _CP0HYN1
                                    230 	.globl _CP0HYP0
                                    231 	.globl _CP0HYP1
                                    232 	.globl _CP0FIF
                                    233 	.globl _CP0RIF
                                    234 	.globl _CP0OUT
                                    235 	.globl _CP0EN
                                    236 	.globl _IT0
                                    237 	.globl _IE0
                                    238 	.globl _IT1
                                    239 	.globl _IE1
                                    240 	.globl _TR0
                                    241 	.globl _TF0
                                    242 	.globl _TR1
                                    243 	.globl _TF1
                                    244 	.globl __XPAGE
                                    245 	.globl _DP
                                    246 	.globl _ADC0
                                    247 	.globl _ADC0LT
                                    248 	.globl _ADC0GT
                                    249 	.globl _TMR4
                                    250 	.globl _TMR3
                                    251 	.globl _TMR2
                                    252 	.globl _RCAP4
                                    253 	.globl _RCAP3
                                    254 	.globl _RCAP2
                                    255 	.globl _DAC1
                                    256 	.globl _DAC0
                                    257 	.globl _CAN0DAT
                                    258 	.globl _PCA0CP5
                                    259 	.globl _PCA0CP4
                                    260 	.globl _PCA0CP3
                                    261 	.globl _PCA0CP2
                                    262 	.globl _PCA0CP1
                                    263 	.globl _PCA0CP0
                                    264 	.globl _PCA0
                                    265 	.globl _WDTCN
                                    266 	.globl _PCA0CPH1
                                    267 	.globl _PCA0CPL1
                                    268 	.globl _PCA0CPH0
                                    269 	.globl _PCA0CPL0
                                    270 	.globl _PCA0H
                                    271 	.globl _PCA0L
                                    272 	.globl _P7
                                    273 	.globl _CAN0CN
                                    274 	.globl _SPI0CN
                                    275 	.globl _EIP2
                                    276 	.globl _EIP1
                                    277 	.globl _B
                                    278 	.globl _RSTSRC
                                    279 	.globl _PCA0CPH4
                                    280 	.globl _PCA0CPL4
                                    281 	.globl _PCA0CPH3
                                    282 	.globl _PCA0CPL3
                                    283 	.globl _PCA0CPH2
                                    284 	.globl _PCA0CPL2
                                    285 	.globl _P6
                                    286 	.globl _ADC2CN
                                    287 	.globl _ADC0CN
                                    288 	.globl _EIE2
                                    289 	.globl _EIE1
                                    290 	.globl _XBR3
                                    291 	.globl _XBR2
                                    292 	.globl _XBR1
                                    293 	.globl _PCA0CPH5
                                    294 	.globl _XBR0
                                    295 	.globl _PCA0CPL5
                                    296 	.globl _ACC
                                    297 	.globl _PCA0CPM5
                                    298 	.globl _PCA0CPM4
                                    299 	.globl _PCA0CPM3
                                    300 	.globl _PCA0CPM2
                                    301 	.globl _CAN0TST
                                    302 	.globl _PCA0CPM1
                                    303 	.globl _CAN0ADR
                                    304 	.globl _PCA0CPM0
                                    305 	.globl _CAN0DATH
                                    306 	.globl _PCA0MD
                                    307 	.globl _P5
                                    308 	.globl _CAN0DATL
                                    309 	.globl _PCA0CN
                                    310 	.globl _HVA0CN
                                    311 	.globl _DAC1CN
                                    312 	.globl _DAC0CN
                                    313 	.globl _DAC1H
                                    314 	.globl _DAC0H
                                    315 	.globl _DAC1L
                                    316 	.globl _DAC0L
                                    317 	.globl _REF0CN
                                    318 	.globl _PSW
                                    319 	.globl _SMB0CR
                                    320 	.globl _TMR4H
                                    321 	.globl _TMR3H
                                    322 	.globl _TMR2H
                                    323 	.globl _TMR4L
                                    324 	.globl _TMR3L
                                    325 	.globl _TMR2L
                                    326 	.globl _RCAP4H
                                    327 	.globl _RCAP3H
                                    328 	.globl _RCAP2H
                                    329 	.globl _RCAP4L
                                    330 	.globl _RCAP3L
                                    331 	.globl _RCAP2L
                                    332 	.globl _TMR4CF
                                    333 	.globl _TMR3CF
                                    334 	.globl _TMR2CF
                                    335 	.globl _P4
                                    336 	.globl _TMR4CN
                                    337 	.globl _TMR3CN
                                    338 	.globl _TMR2CN
                                    339 	.globl _ADC0LTH
                                    340 	.globl _ADC2LT
                                    341 	.globl _ADC0LTL
                                    342 	.globl _ADC0GTH
                                    343 	.globl _ADC2GT
                                    344 	.globl _ADC0GTL
                                    345 	.globl _SMB0ADR
                                    346 	.globl _SMB0DAT
                                    347 	.globl _SMB0STA
                                    348 	.globl _CAN0STA
                                    349 	.globl _SMB0CN
                                    350 	.globl _ADC0H
                                    351 	.globl _ADC2
                                    352 	.globl _ADC0L
                                    353 	.globl _ADC2CF
                                    354 	.globl _ADC0CF
                                    355 	.globl _AMX2SL
                                    356 	.globl _AMX0SL
                                    357 	.globl _AMX0CF
                                    358 	.globl _AMX0PRT
                                    359 	.globl _AMX2CF
                                    360 	.globl _SADEN0
                                    361 	.globl _IP
                                    362 	.globl _FLACL
                                    363 	.globl _FLSCL
                                    364 	.globl _P3
                                    365 	.globl _P3MDIN
                                    366 	.globl _P2MDIN
                                    367 	.globl _P1MDIN
                                    368 	.globl _SADDR1
                                    369 	.globl _SADDR0
                                    370 	.globl _IE
                                    371 	.globl _P3MDOUT
                                    372 	.globl _P2MDOUT
                                    373 	.globl _P1MDOUT
                                    374 	.globl _P0MDOUT
                                    375 	.globl _EMI0CF
                                    376 	.globl _EMI0CN
                                    377 	.globl _EMI0TC
                                    378 	.globl _P2
                                    379 	.globl _P7MDOUT
                                    380 	.globl _P6MDOUT
                                    381 	.globl _P5MDOUT
                                    382 	.globl _SPI0CKR
                                    383 	.globl _P4MDOUT
                                    384 	.globl _SPI0DAT
                                    385 	.globl _SPI0CFG
                                    386 	.globl _SBUF1
                                    387 	.globl _SBUF0
                                    388 	.globl _SCON1
                                    389 	.globl _SCON0
                                    390 	.globl _CLKSEL
                                    391 	.globl _SFRPGCN
                                    392 	.globl _SSTA0
                                    393 	.globl _P1
                                    394 	.globl _PSCTL
                                    395 	.globl _CKCON
                                    396 	.globl _TH1
                                    397 	.globl _OSCXCN
                                    398 	.globl _TH0
                                    399 	.globl _OSCICL
                                    400 	.globl _TL1
                                    401 	.globl _OSCICN
                                    402 	.globl _TL0
                                    403 	.globl _CPT2MD
                                    404 	.globl _CPT1MD
                                    405 	.globl _CPT0MD
                                    406 	.globl _TMOD
                                    407 	.globl _CPT2CN
                                    408 	.globl _CPT1CN
                                    409 	.globl _CPT0CN
                                    410 	.globl _TCON
                                    411 	.globl _PCON
                                    412 	.globl _SFRLAST
                                    413 	.globl _SFRNEXT
                                    414 	.globl _SFRPAGE
                                    415 	.globl _DPH
                                    416 	.globl _DPL
                                    417 	.globl _SP
                                    418 	.globl _P0
                                    419 ;--------------------------------------------------------
                                    420 ; special function registers
                                    421 ;--------------------------------------------------------
                                    422 	.area RSEG    (ABS,DATA)
      000000                        423 	.org 0x0000
                           000080   424 G$P0$0$0 == 0x0080
                           000080   425 _P0	=	0x0080
                           000081   426 G$SP$0$0 == 0x0081
                           000081   427 _SP	=	0x0081
                           000082   428 G$DPL$0$0 == 0x0082
                           000082   429 _DPL	=	0x0082
                           000083   430 G$DPH$0$0 == 0x0083
                           000083   431 _DPH	=	0x0083
                           000084   432 G$SFRPAGE$0$0 == 0x0084
                           000084   433 _SFRPAGE	=	0x0084
                           000085   434 G$SFRNEXT$0$0 == 0x0085
                           000085   435 _SFRNEXT	=	0x0085
                           000086   436 G$SFRLAST$0$0 == 0x0086
                           000086   437 _SFRLAST	=	0x0086
                           000087   438 G$PCON$0$0 == 0x0087
                           000087   439 _PCON	=	0x0087
                           000088   440 G$TCON$0$0 == 0x0088
                           000088   441 _TCON	=	0x0088
                           000088   442 G$CPT0CN$0$0 == 0x0088
                           000088   443 _CPT0CN	=	0x0088
                           000088   444 G$CPT1CN$0$0 == 0x0088
                           000088   445 _CPT1CN	=	0x0088
                           000088   446 G$CPT2CN$0$0 == 0x0088
                           000088   447 _CPT2CN	=	0x0088
                           000089   448 G$TMOD$0$0 == 0x0089
                           000089   449 _TMOD	=	0x0089
                           000089   450 G$CPT0MD$0$0 == 0x0089
                           000089   451 _CPT0MD	=	0x0089
                           000089   452 G$CPT1MD$0$0 == 0x0089
                           000089   453 _CPT1MD	=	0x0089
                           000089   454 G$CPT2MD$0$0 == 0x0089
                           000089   455 _CPT2MD	=	0x0089
                           00008A   456 G$TL0$0$0 == 0x008a
                           00008A   457 _TL0	=	0x008a
                           00008A   458 G$OSCICN$0$0 == 0x008a
                           00008A   459 _OSCICN	=	0x008a
                           00008B   460 G$TL1$0$0 == 0x008b
                           00008B   461 _TL1	=	0x008b
                           00008B   462 G$OSCICL$0$0 == 0x008b
                           00008B   463 _OSCICL	=	0x008b
                           00008C   464 G$TH0$0$0 == 0x008c
                           00008C   465 _TH0	=	0x008c
                           00008C   466 G$OSCXCN$0$0 == 0x008c
                           00008C   467 _OSCXCN	=	0x008c
                           00008D   468 G$TH1$0$0 == 0x008d
                           00008D   469 _TH1	=	0x008d
                           00008E   470 G$CKCON$0$0 == 0x008e
                           00008E   471 _CKCON	=	0x008e
                           00008F   472 G$PSCTL$0$0 == 0x008f
                           00008F   473 _PSCTL	=	0x008f
                           000090   474 G$P1$0$0 == 0x0090
                           000090   475 _P1	=	0x0090
                           000091   476 G$SSTA0$0$0 == 0x0091
                           000091   477 _SSTA0	=	0x0091
                           000096   478 G$SFRPGCN$0$0 == 0x0096
                           000096   479 _SFRPGCN	=	0x0096
                           000097   480 G$CLKSEL$0$0 == 0x0097
                           000097   481 _CLKSEL	=	0x0097
                           000098   482 G$SCON0$0$0 == 0x0098
                           000098   483 _SCON0	=	0x0098
                           000098   484 G$SCON1$0$0 == 0x0098
                           000098   485 _SCON1	=	0x0098
                           000099   486 G$SBUF0$0$0 == 0x0099
                           000099   487 _SBUF0	=	0x0099
                           000099   488 G$SBUF1$0$0 == 0x0099
                           000099   489 _SBUF1	=	0x0099
                           00009A   490 G$SPI0CFG$0$0 == 0x009a
                           00009A   491 _SPI0CFG	=	0x009a
                           00009B   492 G$SPI0DAT$0$0 == 0x009b
                           00009B   493 _SPI0DAT	=	0x009b
                           00009C   494 G$P4MDOUT$0$0 == 0x009c
                           00009C   495 _P4MDOUT	=	0x009c
                           00009D   496 G$SPI0CKR$0$0 == 0x009d
                           00009D   497 _SPI0CKR	=	0x009d
                           00009D   498 G$P5MDOUT$0$0 == 0x009d
                           00009D   499 _P5MDOUT	=	0x009d
                           00009E   500 G$P6MDOUT$0$0 == 0x009e
                           00009E   501 _P6MDOUT	=	0x009e
                           00009F   502 G$P7MDOUT$0$0 == 0x009f
                           00009F   503 _P7MDOUT	=	0x009f
                           0000A0   504 G$P2$0$0 == 0x00a0
                           0000A0   505 _P2	=	0x00a0
                           0000A1   506 G$EMI0TC$0$0 == 0x00a1
                           0000A1   507 _EMI0TC	=	0x00a1
                           0000A2   508 G$EMI0CN$0$0 == 0x00a2
                           0000A2   509 _EMI0CN	=	0x00a2
                           0000A3   510 G$EMI0CF$0$0 == 0x00a3
                           0000A3   511 _EMI0CF	=	0x00a3
                           0000A4   512 G$P0MDOUT$0$0 == 0x00a4
                           0000A4   513 _P0MDOUT	=	0x00a4
                           0000A5   514 G$P1MDOUT$0$0 == 0x00a5
                           0000A5   515 _P1MDOUT	=	0x00a5
                           0000A6   516 G$P2MDOUT$0$0 == 0x00a6
                           0000A6   517 _P2MDOUT	=	0x00a6
                           0000A7   518 G$P3MDOUT$0$0 == 0x00a7
                           0000A7   519 _P3MDOUT	=	0x00a7
                           0000A8   520 G$IE$0$0 == 0x00a8
                           0000A8   521 _IE	=	0x00a8
                           0000A9   522 G$SADDR0$0$0 == 0x00a9
                           0000A9   523 _SADDR0	=	0x00a9
                           0000A9   524 G$SADDR1$0$0 == 0x00a9
                           0000A9   525 _SADDR1	=	0x00a9
                           0000AD   526 G$P1MDIN$0$0 == 0x00ad
                           0000AD   527 _P1MDIN	=	0x00ad
                           0000AE   528 G$P2MDIN$0$0 == 0x00ae
                           0000AE   529 _P2MDIN	=	0x00ae
                           0000AF   530 G$P3MDIN$0$0 == 0x00af
                           0000AF   531 _P3MDIN	=	0x00af
                           0000B0   532 G$P3$0$0 == 0x00b0
                           0000B0   533 _P3	=	0x00b0
                           0000B7   534 G$FLSCL$0$0 == 0x00b7
                           0000B7   535 _FLSCL	=	0x00b7
                           0000B7   536 G$FLACL$0$0 == 0x00b7
                           0000B7   537 _FLACL	=	0x00b7
                           0000B8   538 G$IP$0$0 == 0x00b8
                           0000B8   539 _IP	=	0x00b8
                           0000B9   540 G$SADEN0$0$0 == 0x00b9
                           0000B9   541 _SADEN0	=	0x00b9
                           0000BA   542 G$AMX2CF$0$0 == 0x00ba
                           0000BA   543 _AMX2CF	=	0x00ba
                           0000BD   544 G$AMX0PRT$0$0 == 0x00bd
                           0000BD   545 _AMX0PRT	=	0x00bd
                           0000BA   546 G$AMX0CF$0$0 == 0x00ba
                           0000BA   547 _AMX0CF	=	0x00ba
                           0000BB   548 G$AMX0SL$0$0 == 0x00bb
                           0000BB   549 _AMX0SL	=	0x00bb
                           0000BB   550 G$AMX2SL$0$0 == 0x00bb
                           0000BB   551 _AMX2SL	=	0x00bb
                           0000BC   552 G$ADC0CF$0$0 == 0x00bc
                           0000BC   553 _ADC0CF	=	0x00bc
                           0000BC   554 G$ADC2CF$0$0 == 0x00bc
                           0000BC   555 _ADC2CF	=	0x00bc
                           0000BE   556 G$ADC0L$0$0 == 0x00be
                           0000BE   557 _ADC0L	=	0x00be
                           0000BE   558 G$ADC2$0$0 == 0x00be
                           0000BE   559 _ADC2	=	0x00be
                           0000BF   560 G$ADC0H$0$0 == 0x00bf
                           0000BF   561 _ADC0H	=	0x00bf
                           0000C0   562 G$SMB0CN$0$0 == 0x00c0
                           0000C0   563 _SMB0CN	=	0x00c0
                           0000C0   564 G$CAN0STA$0$0 == 0x00c0
                           0000C0   565 _CAN0STA	=	0x00c0
                           0000C1   566 G$SMB0STA$0$0 == 0x00c1
                           0000C1   567 _SMB0STA	=	0x00c1
                           0000C2   568 G$SMB0DAT$0$0 == 0x00c2
                           0000C2   569 _SMB0DAT	=	0x00c2
                           0000C3   570 G$SMB0ADR$0$0 == 0x00c3
                           0000C3   571 _SMB0ADR	=	0x00c3
                           0000C4   572 G$ADC0GTL$0$0 == 0x00c4
                           0000C4   573 _ADC0GTL	=	0x00c4
                           0000C4   574 G$ADC2GT$0$0 == 0x00c4
                           0000C4   575 _ADC2GT	=	0x00c4
                           0000C5   576 G$ADC0GTH$0$0 == 0x00c5
                           0000C5   577 _ADC0GTH	=	0x00c5
                           0000C6   578 G$ADC0LTL$0$0 == 0x00c6
                           0000C6   579 _ADC0LTL	=	0x00c6
                           0000C6   580 G$ADC2LT$0$0 == 0x00c6
                           0000C6   581 _ADC2LT	=	0x00c6
                           0000C7   582 G$ADC0LTH$0$0 == 0x00c7
                           0000C7   583 _ADC0LTH	=	0x00c7
                           0000C8   584 G$TMR2CN$0$0 == 0x00c8
                           0000C8   585 _TMR2CN	=	0x00c8
                           0000C8   586 G$TMR3CN$0$0 == 0x00c8
                           0000C8   587 _TMR3CN	=	0x00c8
                           0000C8   588 G$TMR4CN$0$0 == 0x00c8
                           0000C8   589 _TMR4CN	=	0x00c8
                           0000C8   590 G$P4$0$0 == 0x00c8
                           0000C8   591 _P4	=	0x00c8
                           0000C9   592 G$TMR2CF$0$0 == 0x00c9
                           0000C9   593 _TMR2CF	=	0x00c9
                           0000C9   594 G$TMR3CF$0$0 == 0x00c9
                           0000C9   595 _TMR3CF	=	0x00c9
                           0000C9   596 G$TMR4CF$0$0 == 0x00c9
                           0000C9   597 _TMR4CF	=	0x00c9
                           0000CA   598 G$RCAP2L$0$0 == 0x00ca
                           0000CA   599 _RCAP2L	=	0x00ca
                           0000CA   600 G$RCAP3L$0$0 == 0x00ca
                           0000CA   601 _RCAP3L	=	0x00ca
                           0000CA   602 G$RCAP4L$0$0 == 0x00ca
                           0000CA   603 _RCAP4L	=	0x00ca
                           0000CB   604 G$RCAP2H$0$0 == 0x00cb
                           0000CB   605 _RCAP2H	=	0x00cb
                           0000CB   606 G$RCAP3H$0$0 == 0x00cb
                           0000CB   607 _RCAP3H	=	0x00cb
                           0000CB   608 G$RCAP4H$0$0 == 0x00cb
                           0000CB   609 _RCAP4H	=	0x00cb
                           0000CC   610 G$TMR2L$0$0 == 0x00cc
                           0000CC   611 _TMR2L	=	0x00cc
                           0000CC   612 G$TMR3L$0$0 == 0x00cc
                           0000CC   613 _TMR3L	=	0x00cc
                           0000CC   614 G$TMR4L$0$0 == 0x00cc
                           0000CC   615 _TMR4L	=	0x00cc
                           0000CD   616 G$TMR2H$0$0 == 0x00cd
                           0000CD   617 _TMR2H	=	0x00cd
                           0000CD   618 G$TMR3H$0$0 == 0x00cd
                           0000CD   619 _TMR3H	=	0x00cd
                           0000CD   620 G$TMR4H$0$0 == 0x00cd
                           0000CD   621 _TMR4H	=	0x00cd
                           0000CF   622 G$SMB0CR$0$0 == 0x00cf
                           0000CF   623 _SMB0CR	=	0x00cf
                           0000D0   624 G$PSW$0$0 == 0x00d0
                           0000D0   625 _PSW	=	0x00d0
                           0000D1   626 G$REF0CN$0$0 == 0x00d1
                           0000D1   627 _REF0CN	=	0x00d1
                           0000D2   628 G$DAC0L$0$0 == 0x00d2
                           0000D2   629 _DAC0L	=	0x00d2
                           0000D2   630 G$DAC1L$0$0 == 0x00d2
                           0000D2   631 _DAC1L	=	0x00d2
                           0000D3   632 G$DAC0H$0$0 == 0x00d3
                           0000D3   633 _DAC0H	=	0x00d3
                           0000D3   634 G$DAC1H$0$0 == 0x00d3
                           0000D3   635 _DAC1H	=	0x00d3
                           0000D4   636 G$DAC0CN$0$0 == 0x00d4
                           0000D4   637 _DAC0CN	=	0x00d4
                           0000D4   638 G$DAC1CN$0$0 == 0x00d4
                           0000D4   639 _DAC1CN	=	0x00d4
                           0000D6   640 G$HVA0CN$0$0 == 0x00d6
                           0000D6   641 _HVA0CN	=	0x00d6
                           0000D8   642 G$PCA0CN$0$0 == 0x00d8
                           0000D8   643 _PCA0CN	=	0x00d8
                           0000D8   644 G$CAN0DATL$0$0 == 0x00d8
                           0000D8   645 _CAN0DATL	=	0x00d8
                           0000D8   646 G$P5$0$0 == 0x00d8
                           0000D8   647 _P5	=	0x00d8
                           0000D9   648 G$PCA0MD$0$0 == 0x00d9
                           0000D9   649 _PCA0MD	=	0x00d9
                           0000D9   650 G$CAN0DATH$0$0 == 0x00d9
                           0000D9   651 _CAN0DATH	=	0x00d9
                           0000DA   652 G$PCA0CPM0$0$0 == 0x00da
                           0000DA   653 _PCA0CPM0	=	0x00da
                           0000DA   654 G$CAN0ADR$0$0 == 0x00da
                           0000DA   655 _CAN0ADR	=	0x00da
                           0000DB   656 G$PCA0CPM1$0$0 == 0x00db
                           0000DB   657 _PCA0CPM1	=	0x00db
                           0000DB   658 G$CAN0TST$0$0 == 0x00db
                           0000DB   659 _CAN0TST	=	0x00db
                           0000DC   660 G$PCA0CPM2$0$0 == 0x00dc
                           0000DC   661 _PCA0CPM2	=	0x00dc
                           0000DD   662 G$PCA0CPM3$0$0 == 0x00dd
                           0000DD   663 _PCA0CPM3	=	0x00dd
                           0000DE   664 G$PCA0CPM4$0$0 == 0x00de
                           0000DE   665 _PCA0CPM4	=	0x00de
                           0000DF   666 G$PCA0CPM5$0$0 == 0x00df
                           0000DF   667 _PCA0CPM5	=	0x00df
                           0000E0   668 G$ACC$0$0 == 0x00e0
                           0000E0   669 _ACC	=	0x00e0
                           0000E1   670 G$PCA0CPL5$0$0 == 0x00e1
                           0000E1   671 _PCA0CPL5	=	0x00e1
                           0000E1   672 G$XBR0$0$0 == 0x00e1
                           0000E1   673 _XBR0	=	0x00e1
                           0000E2   674 G$PCA0CPH5$0$0 == 0x00e2
                           0000E2   675 _PCA0CPH5	=	0x00e2
                           0000E2   676 G$XBR1$0$0 == 0x00e2
                           0000E2   677 _XBR1	=	0x00e2
                           0000E3   678 G$XBR2$0$0 == 0x00e3
                           0000E3   679 _XBR2	=	0x00e3
                           0000E4   680 G$XBR3$0$0 == 0x00e4
                           0000E4   681 _XBR3	=	0x00e4
                           0000E6   682 G$EIE1$0$0 == 0x00e6
                           0000E6   683 _EIE1	=	0x00e6
                           0000E7   684 G$EIE2$0$0 == 0x00e7
                           0000E7   685 _EIE2	=	0x00e7
                           0000E8   686 G$ADC0CN$0$0 == 0x00e8
                           0000E8   687 _ADC0CN	=	0x00e8
                           0000E8   688 G$ADC2CN$0$0 == 0x00e8
                           0000E8   689 _ADC2CN	=	0x00e8
                           0000E8   690 G$P6$0$0 == 0x00e8
                           0000E8   691 _P6	=	0x00e8
                           0000E9   692 G$PCA0CPL2$0$0 == 0x00e9
                           0000E9   693 _PCA0CPL2	=	0x00e9
                           0000EA   694 G$PCA0CPH2$0$0 == 0x00ea
                           0000EA   695 _PCA0CPH2	=	0x00ea
                           0000EB   696 G$PCA0CPL3$0$0 == 0x00eb
                           0000EB   697 _PCA0CPL3	=	0x00eb
                           0000EC   698 G$PCA0CPH3$0$0 == 0x00ec
                           0000EC   699 _PCA0CPH3	=	0x00ec
                           0000ED   700 G$PCA0CPL4$0$0 == 0x00ed
                           0000ED   701 _PCA0CPL4	=	0x00ed
                           0000EE   702 G$PCA0CPH4$0$0 == 0x00ee
                           0000EE   703 _PCA0CPH4	=	0x00ee
                           0000EF   704 G$RSTSRC$0$0 == 0x00ef
                           0000EF   705 _RSTSRC	=	0x00ef
                           0000F0   706 G$B$0$0 == 0x00f0
                           0000F0   707 _B	=	0x00f0
                           0000F6   708 G$EIP1$0$0 == 0x00f6
                           0000F6   709 _EIP1	=	0x00f6
                           0000F7   710 G$EIP2$0$0 == 0x00f7
                           0000F7   711 _EIP2	=	0x00f7
                           0000F8   712 G$SPI0CN$0$0 == 0x00f8
                           0000F8   713 _SPI0CN	=	0x00f8
                           0000F8   714 G$CAN0CN$0$0 == 0x00f8
                           0000F8   715 _CAN0CN	=	0x00f8
                           0000F8   716 G$P7$0$0 == 0x00f8
                           0000F8   717 _P7	=	0x00f8
                           0000F9   718 G$PCA0L$0$0 == 0x00f9
                           0000F9   719 _PCA0L	=	0x00f9
                           0000FA   720 G$PCA0H$0$0 == 0x00fa
                           0000FA   721 _PCA0H	=	0x00fa
                           0000FB   722 G$PCA0CPL0$0$0 == 0x00fb
                           0000FB   723 _PCA0CPL0	=	0x00fb
                           0000FC   724 G$PCA0CPH0$0$0 == 0x00fc
                           0000FC   725 _PCA0CPH0	=	0x00fc
                           0000FD   726 G$PCA0CPL1$0$0 == 0x00fd
                           0000FD   727 _PCA0CPL1	=	0x00fd
                           0000FE   728 G$PCA0CPH1$0$0 == 0x00fe
                           0000FE   729 _PCA0CPH1	=	0x00fe
                           0000FF   730 G$WDTCN$0$0 == 0x00ff
                           0000FF   731 _WDTCN	=	0x00ff
                           00FAF9   732 G$PCA0$0$0 == 0xfaf9
                           00FAF9   733 _PCA0	=	0xfaf9
                           00FCFB   734 G$PCA0CP0$0$0 == 0xfcfb
                           00FCFB   735 _PCA0CP0	=	0xfcfb
                           00FEFD   736 G$PCA0CP1$0$0 == 0xfefd
                           00FEFD   737 _PCA0CP1	=	0xfefd
                           00EAE9   738 G$PCA0CP2$0$0 == 0xeae9
                           00EAE9   739 _PCA0CP2	=	0xeae9
                           00ECEB   740 G$PCA0CP3$0$0 == 0xeceb
                           00ECEB   741 _PCA0CP3	=	0xeceb
                           00EEED   742 G$PCA0CP4$0$0 == 0xeeed
                           00EEED   743 _PCA0CP4	=	0xeeed
                           00E2E1   744 G$PCA0CP5$0$0 == 0xe2e1
                           00E2E1   745 _PCA0CP5	=	0xe2e1
                           00D9D8   746 G$CAN0DAT$0$0 == 0xd9d8
                           00D9D8   747 _CAN0DAT	=	0xd9d8
                           00D3D2   748 G$DAC0$0$0 == 0xd3d2
                           00D3D2   749 _DAC0	=	0xd3d2
                           00D3D2   750 G$DAC1$0$0 == 0xd3d2
                           00D3D2   751 _DAC1	=	0xd3d2
                           00CBCA   752 G$RCAP2$0$0 == 0xcbca
                           00CBCA   753 _RCAP2	=	0xcbca
                           00CBCA   754 G$RCAP3$0$0 == 0xcbca
                           00CBCA   755 _RCAP3	=	0xcbca
                           00CBCA   756 G$RCAP4$0$0 == 0xcbca
                           00CBCA   757 _RCAP4	=	0xcbca
                           00CDCC   758 G$TMR2$0$0 == 0xcdcc
                           00CDCC   759 _TMR2	=	0xcdcc
                           00CDCC   760 G$TMR3$0$0 == 0xcdcc
                           00CDCC   761 _TMR3	=	0xcdcc
                           00CDCC   762 G$TMR4$0$0 == 0xcdcc
                           00CDCC   763 _TMR4	=	0xcdcc
                           00C5C4   764 G$ADC0GT$0$0 == 0xc5c4
                           00C5C4   765 _ADC0GT	=	0xc5c4
                           00C7C6   766 G$ADC0LT$0$0 == 0xc7c6
                           00C7C6   767 _ADC0LT	=	0xc7c6
                           00BFBE   768 G$ADC0$0$0 == 0xbfbe
                           00BFBE   769 _ADC0	=	0xbfbe
                           008382   770 G$DP$0$0 == 0x8382
                           008382   771 _DP	=	0x8382
                           0000A2   772 G$_XPAGE$0$0 == 0x00a2
                           0000A2   773 __XPAGE	=	0x00a2
                                    774 ;--------------------------------------------------------
                                    775 ; special function bits
                                    776 ;--------------------------------------------------------
                                    777 	.area RSEG    (ABS,DATA)
      000000                        778 	.org 0x0000
                           00008F   779 G$TF1$0$0 == 0x008f
                           00008F   780 _TF1	=	0x008f
                           00008E   781 G$TR1$0$0 == 0x008e
                           00008E   782 _TR1	=	0x008e
                           00008D   783 G$TF0$0$0 == 0x008d
                           00008D   784 _TF0	=	0x008d
                           00008C   785 G$TR0$0$0 == 0x008c
                           00008C   786 _TR0	=	0x008c
                           00008B   787 G$IE1$0$0 == 0x008b
                           00008B   788 _IE1	=	0x008b
                           00008A   789 G$IT1$0$0 == 0x008a
                           00008A   790 _IT1	=	0x008a
                           000089   791 G$IE0$0$0 == 0x0089
                           000089   792 _IE0	=	0x0089
                           000088   793 G$IT0$0$0 == 0x0088
                           000088   794 _IT0	=	0x0088
                           00008F   795 G$CP0EN$0$0 == 0x008f
                           00008F   796 _CP0EN	=	0x008f
                           00008E   797 G$CP0OUT$0$0 == 0x008e
                           00008E   798 _CP0OUT	=	0x008e
                           00008D   799 G$CP0RIF$0$0 == 0x008d
                           00008D   800 _CP0RIF	=	0x008d
                           00008C   801 G$CP0FIF$0$0 == 0x008c
                           00008C   802 _CP0FIF	=	0x008c
                           00008B   803 G$CP0HYP1$0$0 == 0x008b
                           00008B   804 _CP0HYP1	=	0x008b
                           00008A   805 G$CP0HYP0$0$0 == 0x008a
                           00008A   806 _CP0HYP0	=	0x008a
                           000089   807 G$CP0HYN1$0$0 == 0x0089
                           000089   808 _CP0HYN1	=	0x0089
                           000088   809 G$CP0HYN0$0$0 == 0x0088
                           000088   810 _CP0HYN0	=	0x0088
                           00008F   811 G$CP1EN$0$0 == 0x008f
                           00008F   812 _CP1EN	=	0x008f
                           00008E   813 G$CP1OUT$0$0 == 0x008e
                           00008E   814 _CP1OUT	=	0x008e
                           00008D   815 G$CP1RIF$0$0 == 0x008d
                           00008D   816 _CP1RIF	=	0x008d
                           00008C   817 G$CP1FIF$0$0 == 0x008c
                           00008C   818 _CP1FIF	=	0x008c
                           00008B   819 G$CP1HYP1$0$0 == 0x008b
                           00008B   820 _CP1HYP1	=	0x008b
                           00008A   821 G$CP1HYP0$0$0 == 0x008a
                           00008A   822 _CP1HYP0	=	0x008a
                           000089   823 G$CP1HYN1$0$0 == 0x0089
                           000089   824 _CP1HYN1	=	0x0089
                           000088   825 G$CP1HYN0$0$0 == 0x0088
                           000088   826 _CP1HYN0	=	0x0088
                           00008F   827 G$CP2EN$0$0 == 0x008f
                           00008F   828 _CP2EN	=	0x008f
                           00008E   829 G$CP2OUT$0$0 == 0x008e
                           00008E   830 _CP2OUT	=	0x008e
                           00008D   831 G$CP2RIF$0$0 == 0x008d
                           00008D   832 _CP2RIF	=	0x008d
                           00008C   833 G$CP2FIF$0$0 == 0x008c
                           00008C   834 _CP2FIF	=	0x008c
                           00008B   835 G$CP2HYP1$0$0 == 0x008b
                           00008B   836 _CP2HYP1	=	0x008b
                           00008A   837 G$CP2HYP0$0$0 == 0x008a
                           00008A   838 _CP2HYP0	=	0x008a
                           000089   839 G$CP2HYN1$0$0 == 0x0089
                           000089   840 _CP2HYN1	=	0x0089
                           000088   841 G$CP2HYN0$0$0 == 0x0088
                           000088   842 _CP2HYN0	=	0x0088
                           00009F   843 G$SM00$0$0 == 0x009f
                           00009F   844 _SM00	=	0x009f
                           00009E   845 G$SM10$0$0 == 0x009e
                           00009E   846 _SM10	=	0x009e
                           00009D   847 G$SM20$0$0 == 0x009d
                           00009D   848 _SM20	=	0x009d
                           00009C   849 G$REN0$0$0 == 0x009c
                           00009C   850 _REN0	=	0x009c
                           00009B   851 G$TB80$0$0 == 0x009b
                           00009B   852 _TB80	=	0x009b
                           00009A   853 G$RB80$0$0 == 0x009a
                           00009A   854 _RB80	=	0x009a
                           000099   855 G$TI0$0$0 == 0x0099
                           000099   856 _TI0	=	0x0099
                           000098   857 G$RI0$0$0 == 0x0098
                           000098   858 _RI0	=	0x0098
                           00009F   859 G$S1MODE$0$0 == 0x009f
                           00009F   860 _S1MODE	=	0x009f
                           00009D   861 G$MCE1$0$0 == 0x009d
                           00009D   862 _MCE1	=	0x009d
                           00009C   863 G$REN1$0$0 == 0x009c
                           00009C   864 _REN1	=	0x009c
                           00009B   865 G$TB81$0$0 == 0x009b
                           00009B   866 _TB81	=	0x009b
                           00009A   867 G$RB81$0$0 == 0x009a
                           00009A   868 _RB81	=	0x009a
                           000099   869 G$TI1$0$0 == 0x0099
                           000099   870 _TI1	=	0x0099
                           000098   871 G$RI1$0$0 == 0x0098
                           000098   872 _RI1	=	0x0098
                           0000AF   873 G$EA$0$0 == 0x00af
                           0000AF   874 _EA	=	0x00af
                           0000AD   875 G$ET2$0$0 == 0x00ad
                           0000AD   876 _ET2	=	0x00ad
                           0000AC   877 G$ES0$0$0 == 0x00ac
                           0000AC   878 _ES0	=	0x00ac
                           0000AB   879 G$ET1$0$0 == 0x00ab
                           0000AB   880 _ET1	=	0x00ab
                           0000AA   881 G$EX1$0$0 == 0x00aa
                           0000AA   882 _EX1	=	0x00aa
                           0000A9   883 G$ET0$0$0 == 0x00a9
                           0000A9   884 _ET0	=	0x00a9
                           0000A8   885 G$EX0$0$0 == 0x00a8
                           0000A8   886 _EX0	=	0x00a8
                           0000BD   887 G$PT2$0$0 == 0x00bd
                           0000BD   888 _PT2	=	0x00bd
                           0000BC   889 G$PS0$0$0 == 0x00bc
                           0000BC   890 _PS0	=	0x00bc
                           0000BB   891 G$PT1$0$0 == 0x00bb
                           0000BB   892 _PT1	=	0x00bb
                           0000BA   893 G$PX1$0$0 == 0x00ba
                           0000BA   894 _PX1	=	0x00ba
                           0000B9   895 G$PT0$0$0 == 0x00b9
                           0000B9   896 _PT0	=	0x00b9
                           0000B8   897 G$PX0$0$0 == 0x00b8
                           0000B8   898 _PX0	=	0x00b8
                           0000C7   899 G$BUSY$0$0 == 0x00c7
                           0000C7   900 _BUSY	=	0x00c7
                           0000C6   901 G$ENSMB$0$0 == 0x00c6
                           0000C6   902 _ENSMB	=	0x00c6
                           0000C5   903 G$STA$0$0 == 0x00c5
                           0000C5   904 _STA	=	0x00c5
                           0000C4   905 G$STO$0$0 == 0x00c4
                           0000C4   906 _STO	=	0x00c4
                           0000C3   907 G$SI$0$0 == 0x00c3
                           0000C3   908 _SI	=	0x00c3
                           0000C2   909 G$AA$0$0 == 0x00c2
                           0000C2   910 _AA	=	0x00c2
                           0000C1   911 G$SMBFTE$0$0 == 0x00c1
                           0000C1   912 _SMBFTE	=	0x00c1
                           0000C0   913 G$SMBTOE$0$0 == 0x00c0
                           0000C0   914 _SMBTOE	=	0x00c0
                           0000C7   915 G$BOFF$0$0 == 0x00c7
                           0000C7   916 _BOFF	=	0x00c7
                           0000C6   917 G$EWARN$0$0 == 0x00c6
                           0000C6   918 _EWARN	=	0x00c6
                           0000C5   919 G$EPASS$0$0 == 0x00c5
                           0000C5   920 _EPASS	=	0x00c5
                           0000C4   921 G$RXOK$0$0 == 0x00c4
                           0000C4   922 _RXOK	=	0x00c4
                           0000C3   923 G$TXOK$0$0 == 0x00c3
                           0000C3   924 _TXOK	=	0x00c3
                           0000C2   925 G$LEC2$0$0 == 0x00c2
                           0000C2   926 _LEC2	=	0x00c2
                           0000C1   927 G$LEC1$0$0 == 0x00c1
                           0000C1   928 _LEC1	=	0x00c1
                           0000C0   929 G$LEC0$0$0 == 0x00c0
                           0000C0   930 _LEC0	=	0x00c0
                           0000CF   931 G$TF2$0$0 == 0x00cf
                           0000CF   932 _TF2	=	0x00cf
                           0000CE   933 G$EXF2$0$0 == 0x00ce
                           0000CE   934 _EXF2	=	0x00ce
                           0000CB   935 G$EXEN2$0$0 == 0x00cb
                           0000CB   936 _EXEN2	=	0x00cb
                           0000CA   937 G$TR2$0$0 == 0x00ca
                           0000CA   938 _TR2	=	0x00ca
                           0000C9   939 G$CT2$0$0 == 0x00c9
                           0000C9   940 _CT2	=	0x00c9
                           0000C8   941 G$CPRL2$0$0 == 0x00c8
                           0000C8   942 _CPRL2	=	0x00c8
                           0000CF   943 G$TF3$0$0 == 0x00cf
                           0000CF   944 _TF3	=	0x00cf
                           0000CE   945 G$EXF3$0$0 == 0x00ce
                           0000CE   946 _EXF3	=	0x00ce
                           0000CB   947 G$EXEN3$0$0 == 0x00cb
                           0000CB   948 _EXEN3	=	0x00cb
                           0000CA   949 G$TR3$0$0 == 0x00ca
                           0000CA   950 _TR3	=	0x00ca
                           0000C9   951 G$CT3$0$0 == 0x00c9
                           0000C9   952 _CT3	=	0x00c9
                           0000C8   953 G$CPRL3$0$0 == 0x00c8
                           0000C8   954 _CPRL3	=	0x00c8
                           0000CF   955 G$TF4$0$0 == 0x00cf
                           0000CF   956 _TF4	=	0x00cf
                           0000CE   957 G$EXF4$0$0 == 0x00ce
                           0000CE   958 _EXF4	=	0x00ce
                           0000CB   959 G$EXEN4$0$0 == 0x00cb
                           0000CB   960 _EXEN4	=	0x00cb
                           0000CA   961 G$TR4$0$0 == 0x00ca
                           0000CA   962 _TR4	=	0x00ca
                           0000C9   963 G$CT4$0$0 == 0x00c9
                           0000C9   964 _CT4	=	0x00c9
                           0000C8   965 G$CPRL4$0$0 == 0x00c8
                           0000C8   966 _CPRL4	=	0x00c8
                           0000D7   967 G$CY$0$0 == 0x00d7
                           0000D7   968 _CY	=	0x00d7
                           0000D6   969 G$AC$0$0 == 0x00d6
                           0000D6   970 _AC	=	0x00d6
                           0000D5   971 G$F0$0$0 == 0x00d5
                           0000D5   972 _F0	=	0x00d5
                           0000D4   973 G$RS1$0$0 == 0x00d4
                           0000D4   974 _RS1	=	0x00d4
                           0000D3   975 G$RS0$0$0 == 0x00d3
                           0000D3   976 _RS0	=	0x00d3
                           0000D2   977 G$OV$0$0 == 0x00d2
                           0000D2   978 _OV	=	0x00d2
                           0000D1   979 G$F1$0$0 == 0x00d1
                           0000D1   980 _F1	=	0x00d1
                           0000D0   981 G$P$0$0 == 0x00d0
                           0000D0   982 _P	=	0x00d0
                           0000DF   983 G$CF$0$0 == 0x00df
                           0000DF   984 _CF	=	0x00df
                           0000DE   985 G$CR$0$0 == 0x00de
                           0000DE   986 _CR	=	0x00de
                           0000DD   987 G$CCF5$0$0 == 0x00dd
                           0000DD   988 _CCF5	=	0x00dd
                           0000DC   989 G$CCF4$0$0 == 0x00dc
                           0000DC   990 _CCF4	=	0x00dc
                           0000DB   991 G$CCF3$0$0 == 0x00db
                           0000DB   992 _CCF3	=	0x00db
                           0000DA   993 G$CCF2$0$0 == 0x00da
                           0000DA   994 _CCF2	=	0x00da
                           0000D9   995 G$CCF1$0$0 == 0x00d9
                           0000D9   996 _CCF1	=	0x00d9
                           0000D8   997 G$CCF0$0$0 == 0x00d8
                           0000D8   998 _CCF0	=	0x00d8
                           0000EF   999 G$AD0EN$0$0 == 0x00ef
                           0000EF  1000 _AD0EN	=	0x00ef
                           0000EE  1001 G$AD0TM$0$0 == 0x00ee
                           0000EE  1002 _AD0TM	=	0x00ee
                           0000ED  1003 G$AD0INT$0$0 == 0x00ed
                           0000ED  1004 _AD0INT	=	0x00ed
                           0000EC  1005 G$AD0BUSY$0$0 == 0x00ec
                           0000EC  1006 _AD0BUSY	=	0x00ec
                           0000EB  1007 G$AD0CM1$0$0 == 0x00eb
                           0000EB  1008 _AD0CM1	=	0x00eb
                           0000EA  1009 G$AD0CM0$0$0 == 0x00ea
                           0000EA  1010 _AD0CM0	=	0x00ea
                           0000E9  1011 G$AD0WINT$0$0 == 0x00e9
                           0000E9  1012 _AD0WINT	=	0x00e9
                           0000E8  1013 G$AD0LJST$0$0 == 0x00e8
                           0000E8  1014 _AD0LJST	=	0x00e8
                           0000EF  1015 G$AD2EN$0$0 == 0x00ef
                           0000EF  1016 _AD2EN	=	0x00ef
                           0000EE  1017 G$AD2TM$0$0 == 0x00ee
                           0000EE  1018 _AD2TM	=	0x00ee
                           0000ED  1019 G$AD2INT$0$0 == 0x00ed
                           0000ED  1020 _AD2INT	=	0x00ed
                           0000EC  1021 G$AD2BUSY$0$0 == 0x00ec
                           0000EC  1022 _AD2BUSY	=	0x00ec
                           0000EB  1023 G$AD2CM2$0$0 == 0x00eb
                           0000EB  1024 _AD2CM2	=	0x00eb
                           0000EA  1025 G$AD2CM1$0$0 == 0x00ea
                           0000EA  1026 _AD2CM1	=	0x00ea
                           0000E9  1027 G$AD2CM0$0$0 == 0x00e9
                           0000E9  1028 _AD2CM0	=	0x00e9
                           0000E8  1029 G$AD2WINT$0$0 == 0x00e8
                           0000E8  1030 _AD2WINT	=	0x00e8
                           0000FF  1031 G$SPIF$0$0 == 0x00ff
                           0000FF  1032 _SPIF	=	0x00ff
                           0000FE  1033 G$WCOL$0$0 == 0x00fe
                           0000FE  1034 _WCOL	=	0x00fe
                           0000FD  1035 G$MODF$0$0 == 0x00fd
                           0000FD  1036 _MODF	=	0x00fd
                           0000FC  1037 G$RXOVRN$0$0 == 0x00fc
                           0000FC  1038 _RXOVRN	=	0x00fc
                           0000FB  1039 G$NSSMD1$0$0 == 0x00fb
                           0000FB  1040 _NSSMD1	=	0x00fb
                           0000FA  1041 G$NSSMD0$0$0 == 0x00fa
                           0000FA  1042 _NSSMD0	=	0x00fa
                           0000F9  1043 G$TXBMT$0$0 == 0x00f9
                           0000F9  1044 _TXBMT	=	0x00f9
                           0000F8  1045 G$SPIEN$0$0 == 0x00f8
                           0000F8  1046 _SPIEN	=	0x00f8
                           0000F8  1047 G$CANINIT$0$0 == 0x00f8
                           0000F8  1048 _CANINIT	=	0x00f8
                           0000F9  1049 G$CANIE$0$0 == 0x00f9
                           0000F9  1050 _CANIE	=	0x00f9
                           0000FA  1051 G$CANSIE$0$0 == 0x00fa
                           0000FA  1052 _CANSIE	=	0x00fa
                           0000FB  1053 G$CANEIE$0$0 == 0x00fb
                           0000FB  1054 _CANEIE	=	0x00fb
                           0000FC  1055 G$CANIF$0$0 == 0x00fc
                           0000FC  1056 _CANIF	=	0x00fc
                           0000FD  1057 G$CANDAR$0$0 == 0x00fd
                           0000FD  1058 _CANDAR	=	0x00fd
                           0000FE  1059 G$CANCCE$0$0 == 0x00fe
                           0000FE  1060 _CANCCE	=	0x00fe
                           0000FF  1061 G$CANTEST$0$0 == 0x00ff
                           0000FF  1062 _CANTEST	=	0x00ff
                           000080  1063 G$P0_0$0$0 == 0x0080
                           000080  1064 _P0_0	=	0x0080
                           000081  1065 G$P0_1$0$0 == 0x0081
                           000081  1066 _P0_1	=	0x0081
                           000082  1067 G$P0_2$0$0 == 0x0082
                           000082  1068 _P0_2	=	0x0082
                           000083  1069 G$P0_3$0$0 == 0x0083
                           000083  1070 _P0_3	=	0x0083
                           000084  1071 G$P0_4$0$0 == 0x0084
                           000084  1072 _P0_4	=	0x0084
                           000085  1073 G$P0_5$0$0 == 0x0085
                           000085  1074 _P0_5	=	0x0085
                           000086  1075 G$P0_6$0$0 == 0x0086
                           000086  1076 _P0_6	=	0x0086
                           000087  1077 G$P0_7$0$0 == 0x0087
                           000087  1078 _P0_7	=	0x0087
                           000090  1079 G$P1_0$0$0 == 0x0090
                           000090  1080 _P1_0	=	0x0090
                           000091  1081 G$P1_1$0$0 == 0x0091
                           000091  1082 _P1_1	=	0x0091
                           000092  1083 G$P1_2$0$0 == 0x0092
                           000092  1084 _P1_2	=	0x0092
                           000093  1085 G$P1_3$0$0 == 0x0093
                           000093  1086 _P1_3	=	0x0093
                           000094  1087 G$P1_4$0$0 == 0x0094
                           000094  1088 _P1_4	=	0x0094
                           000095  1089 G$P1_5$0$0 == 0x0095
                           000095  1090 _P1_5	=	0x0095
                           000096  1091 G$P1_6$0$0 == 0x0096
                           000096  1092 _P1_6	=	0x0096
                           000097  1093 G$P1_7$0$0 == 0x0097
                           000097  1094 _P1_7	=	0x0097
                           0000A0  1095 G$P2_0$0$0 == 0x00a0
                           0000A0  1096 _P2_0	=	0x00a0
                           0000A1  1097 G$P2_1$0$0 == 0x00a1
                           0000A1  1098 _P2_1	=	0x00a1
                           0000A2  1099 G$P2_2$0$0 == 0x00a2
                           0000A2  1100 _P2_2	=	0x00a2
                           0000A3  1101 G$P2_3$0$0 == 0x00a3
                           0000A3  1102 _P2_3	=	0x00a3
                           0000A4  1103 G$P2_4$0$0 == 0x00a4
                           0000A4  1104 _P2_4	=	0x00a4
                           0000A5  1105 G$P2_5$0$0 == 0x00a5
                           0000A5  1106 _P2_5	=	0x00a5
                           0000A6  1107 G$P2_6$0$0 == 0x00a6
                           0000A6  1108 _P2_6	=	0x00a6
                           0000A7  1109 G$P2_7$0$0 == 0x00a7
                           0000A7  1110 _P2_7	=	0x00a7
                           0000B0  1111 G$P3_0$0$0 == 0x00b0
                           0000B0  1112 _P3_0	=	0x00b0
                           0000B1  1113 G$P3_1$0$0 == 0x00b1
                           0000B1  1114 _P3_1	=	0x00b1
                           0000B2  1115 G$P3_2$0$0 == 0x00b2
                           0000B2  1116 _P3_2	=	0x00b2
                           0000B3  1117 G$P3_3$0$0 == 0x00b3
                           0000B3  1118 _P3_3	=	0x00b3
                           0000B4  1119 G$P3_4$0$0 == 0x00b4
                           0000B4  1120 _P3_4	=	0x00b4
                           0000B5  1121 G$P3_5$0$0 == 0x00b5
                           0000B5  1122 _P3_5	=	0x00b5
                           0000B6  1123 G$P3_6$0$0 == 0x00b6
                           0000B6  1124 _P3_6	=	0x00b6
                           0000B7  1125 G$P3_7$0$0 == 0x00b7
                           0000B7  1126 _P3_7	=	0x00b7
                           0000C8  1127 G$P4_0$0$0 == 0x00c8
                           0000C8  1128 _P4_0	=	0x00c8
                           0000C9  1129 G$P4_1$0$0 == 0x00c9
                           0000C9  1130 _P4_1	=	0x00c9
                           0000CA  1131 G$P4_2$0$0 == 0x00ca
                           0000CA  1132 _P4_2	=	0x00ca
                           0000CB  1133 G$P4_3$0$0 == 0x00cb
                           0000CB  1134 _P4_3	=	0x00cb
                           0000CC  1135 G$P4_4$0$0 == 0x00cc
                           0000CC  1136 _P4_4	=	0x00cc
                           0000CD  1137 G$P4_5$0$0 == 0x00cd
                           0000CD  1138 _P4_5	=	0x00cd
                           0000CE  1139 G$P4_6$0$0 == 0x00ce
                           0000CE  1140 _P4_6	=	0x00ce
                           0000CF  1141 G$P4_7$0$0 == 0x00cf
                           0000CF  1142 _P4_7	=	0x00cf
                           0000D8  1143 G$P5_0$0$0 == 0x00d8
                           0000D8  1144 _P5_0	=	0x00d8
                           0000D9  1145 G$P5_1$0$0 == 0x00d9
                           0000D9  1146 _P5_1	=	0x00d9
                           0000DA  1147 G$P5_2$0$0 == 0x00da
                           0000DA  1148 _P5_2	=	0x00da
                           0000DB  1149 G$P5_3$0$0 == 0x00db
                           0000DB  1150 _P5_3	=	0x00db
                           0000DC  1151 G$P5_4$0$0 == 0x00dc
                           0000DC  1152 _P5_4	=	0x00dc
                           0000DD  1153 G$P5_5$0$0 == 0x00dd
                           0000DD  1154 _P5_5	=	0x00dd
                           0000DE  1155 G$P5_6$0$0 == 0x00de
                           0000DE  1156 _P5_6	=	0x00de
                           0000DF  1157 G$P5_7$0$0 == 0x00df
                           0000DF  1158 _P5_7	=	0x00df
                           0000E8  1159 G$P6_0$0$0 == 0x00e8
                           0000E8  1160 _P6_0	=	0x00e8
                           0000E9  1161 G$P6_1$0$0 == 0x00e9
                           0000E9  1162 _P6_1	=	0x00e9
                           0000EA  1163 G$P6_2$0$0 == 0x00ea
                           0000EA  1164 _P6_2	=	0x00ea
                           0000EB  1165 G$P6_3$0$0 == 0x00eb
                           0000EB  1166 _P6_3	=	0x00eb
                           0000EC  1167 G$P6_4$0$0 == 0x00ec
                           0000EC  1168 _P6_4	=	0x00ec
                           0000ED  1169 G$P6_5$0$0 == 0x00ed
                           0000ED  1170 _P6_5	=	0x00ed
                           0000EE  1171 G$P6_6$0$0 == 0x00ee
                           0000EE  1172 _P6_6	=	0x00ee
                           0000EF  1173 G$P6_7$0$0 == 0x00ef
                           0000EF  1174 _P6_7	=	0x00ef
                           0000F8  1175 G$P7_0$0$0 == 0x00f8
                           0000F8  1176 _P7_0	=	0x00f8
                           0000F9  1177 G$P7_1$0$0 == 0x00f9
                           0000F9  1178 _P7_1	=	0x00f9
                           0000FA  1179 G$P7_2$0$0 == 0x00fa
                           0000FA  1180 _P7_2	=	0x00fa
                           0000FB  1181 G$P7_3$0$0 == 0x00fb
                           0000FB  1182 _P7_3	=	0x00fb
                           0000FC  1183 G$P7_4$0$0 == 0x00fc
                           0000FC  1184 _P7_4	=	0x00fc
                           0000FD  1185 G$P7_5$0$0 == 0x00fd
                           0000FD  1186 _P7_5	=	0x00fd
                           0000FE  1187 G$P7_6$0$0 == 0x00fe
                           0000FE  1188 _P7_6	=	0x00fe
                           0000FF  1189 G$P7_7$0$0 == 0x00ff
                           0000FF  1190 _P7_7	=	0x00ff
                                   1191 ;--------------------------------------------------------
                                   1192 ; overlayable register banks
                                   1193 ;--------------------------------------------------------
                                   1194 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                       1195 	.ds 8
                                   1196 ;--------------------------------------------------------
                                   1197 ; internal ram data
                                   1198 ;--------------------------------------------------------
                                   1199 	.area DSEG    (DATA)
                                   1200 ;--------------------------------------------------------
                                   1201 ; overlayable items in internal ram 
                                   1202 ;--------------------------------------------------------
                                   1203 	.area	OSEG    (OVR,DATA)
                                   1204 ;--------------------------------------------------------
                                   1205 ; Stack segment in internal ram 
                                   1206 ;--------------------------------------------------------
                                   1207 	.area	SSEG
      00003A                       1208 __start__stack:
      00003A                       1209 	.ds	1
                                   1210 
                                   1211 ;--------------------------------------------------------
                                   1212 ; indirectly addressable internal ram data
                                   1213 ;--------------------------------------------------------
                                   1214 	.area ISEG    (DATA)
                                   1215 ;--------------------------------------------------------
                                   1216 ; absolute internal ram data
                                   1217 ;--------------------------------------------------------
                                   1218 	.area IABS    (ABS,DATA)
                                   1219 	.area IABS    (ABS,DATA)
                                   1220 ;--------------------------------------------------------
                                   1221 ; bit data
                                   1222 ;--------------------------------------------------------
                                   1223 	.area BSEG    (BIT)
                           000000  1224 Fmain$batida_detec$0$0==.
      000000                       1225 _batida_detec:
      000000                       1226 	.ds 1
                           000001  1227 Fmain$botao$0$0==.
      000001                       1228 _botao:
      000001                       1229 	.ds 1
                           000002  1230 Fmain$glcd_ativo$0$0==.
      000002                       1231 _glcd_ativo:
      000002                       1232 	.ds 1
                                   1233 ;--------------------------------------------------------
                                   1234 ; paged external ram data
                                   1235 ;--------------------------------------------------------
                                   1236 	.area PSEG    (PAG,XDATA)
                                   1237 ;--------------------------------------------------------
                                   1238 ; external ram data
                                   1239 ;--------------------------------------------------------
                                   1240 	.area XSEG    (XDATA)
                                   1241 ;--------------------------------------------------------
                                   1242 ; absolute external ram data
                                   1243 ;--------------------------------------------------------
                                   1244 	.area XABS    (ABS,XDATA)
                                   1245 ;--------------------------------------------------------
                                   1246 ; external initialized ram data
                                   1247 ;--------------------------------------------------------
                                   1248 	.area XISEG   (XDATA)
                                   1249 	.area HOME    (CODE)
                                   1250 	.area GSINIT0 (CODE)
                                   1251 	.area GSINIT1 (CODE)
                                   1252 	.area GSINIT2 (CODE)
                                   1253 	.area GSINIT3 (CODE)
                                   1254 	.area GSINIT4 (CODE)
                                   1255 	.area GSINIT5 (CODE)
                                   1256 	.area GSINIT  (CODE)
                                   1257 	.area GSFINAL (CODE)
                                   1258 	.area CSEG    (CODE)
                                   1259 ;--------------------------------------------------------
                                   1260 ; interrupt vector 
                                   1261 ;--------------------------------------------------------
                                   1262 	.area HOME    (CODE)
      000000                       1263 __interrupt_vect:
      000000 02 00 89         [24] 1264 	ljmp	__sdcc_gsinit_startup
      000003 32               [24] 1265 	reti
      000004                       1266 	.ds	7
      00000B 02 03 3A         [24] 1267 	ljmp	_ISR_TC0
      00000E                       1268 	.ds	5
      000013 32               [24] 1269 	reti
      000014                       1270 	.ds	7
      00001B 32               [24] 1271 	reti
      00001C                       1272 	.ds	7
      000023 02 03 68         [24] 1273 	ljmp	_ISR_UART0
      000026                       1274 	.ds	5
      00002B 32               [24] 1275 	reti
      00002C                       1276 	.ds	7
      000033 32               [24] 1277 	reti
      000034                       1278 	.ds	7
      00003B 32               [24] 1279 	reti
      00003C                       1280 	.ds	7
      000043 32               [24] 1281 	reti
      000044                       1282 	.ds	7
      00004B 32               [24] 1283 	reti
      00004C                       1284 	.ds	7
      000053 32               [24] 1285 	reti
      000054                       1286 	.ds	7
      00005B 32               [24] 1287 	reti
      00005C                       1288 	.ds	7
      000063 32               [24] 1289 	reti
      000064                       1290 	.ds	7
      00006B 32               [24] 1291 	reti
      00006C                       1292 	.ds	7
      000073 02 0A 3D         [24] 1293 	ljmp	_ISR_TC3
      000076                       1294 	.ds	5
      00007B 02 08 2C         [24] 1295 	ljmp	_ISR_ADC0
      00007E                       1296 	.ds	5
      000083 02 0A 0A         [24] 1297 	ljmp	_ISR_TC4
                                   1298 ;--------------------------------------------------------
                                   1299 ; global & static initialisations
                                   1300 ;--------------------------------------------------------
                                   1301 	.area HOME    (CODE)
                                   1302 	.area GSINIT  (CODE)
                                   1303 	.area GSFINAL (CODE)
                                   1304 	.area GSINIT  (CODE)
                                   1305 	.globl __sdcc_gsinit_startup
                                   1306 	.globl __sdcc_program_startup
                                   1307 	.globl __start__stack
                                   1308 	.globl __mcs51_genXINIT
                                   1309 	.globl __mcs51_genXRAMCLEAR
                                   1310 	.globl __mcs51_genRAMCLEAR
                           000000  1311 	C$main.c$16$1$63 ==.
                                   1312 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\main.c:16: static __bit batida_detec = 0;
      0000E2 C2 00            [12] 1313 	clr	_batida_detec
                           000002  1314 	C$main.c$17$1$63 ==.
                                   1315 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\main.c:17: static __bit botao = 0;
      0000E4 C2 01            [12] 1316 	clr	_botao
                           000004  1317 	C$main.c$18$1$63 ==.
                                   1318 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\main.c:18: static __bit glcd_ativo = 1;
      0000E6 D2 02            [12] 1319 	setb	_glcd_ativo
                                   1320 	.area GSFINAL (CODE)
      000110 02 00 86         [24] 1321 	ljmp	__sdcc_program_startup
                                   1322 ;--------------------------------------------------------
                                   1323 ; Home
                                   1324 ;--------------------------------------------------------
                                   1325 	.area HOME    (CODE)
                                   1326 	.area HOME    (CODE)
      000086                       1327 __sdcc_program_startup:
      000086 02 02 0C         [24] 1328 	ljmp	_main
                                   1329 ;	return from main will return to caller
                                   1330 ;--------------------------------------------------------
                                   1331 ; code
                                   1332 ;--------------------------------------------------------
                                   1333 	.area CSEG    (CODE)
                                   1334 ;------------------------------------------------------------
                                   1335 ;Allocation info for local variables in function 'Timer_Init'
                                   1336 ;------------------------------------------------------------
                           000000  1337 	G$Timer_Init$0$0 ==.
                           000000  1338 	C$config.c$10$0$0 ==.
                                   1339 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\/config.c:10: void Timer_Init()
                                   1340 ;	-----------------------------------------
                                   1341 ;	 function Timer_Init
                                   1342 ;	-----------------------------------------
      000113                       1343 _Timer_Init:
                           000007  1344 	ar7 = 0x07
                           000006  1345 	ar6 = 0x06
                           000005  1346 	ar5 = 0x05
                           000004  1347 	ar4 = 0x04
                           000003  1348 	ar3 = 0x03
                           000002  1349 	ar2 = 0x02
                           000001  1350 	ar1 = 0x01
                           000000  1351 	ar0 = 0x00
                           000000  1352 	C$config.c$12$1$47 ==.
                                   1353 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\/config.c:12: SFRPAGE   = TIMER01_PAGE;
      000113 75 84 00         [24] 1354 	mov	_SFRPAGE,#0x00
                           000003  1355 	C$config.c$13$1$47 ==.
                                   1356 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\/config.c:13: TCON      = 0x40;
      000116 75 88 40         [24] 1357 	mov	_TCON,#0x40
                           000006  1358 	C$config.c$14$1$47 ==.
                                   1359 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\/config.c:14: TMOD      = 0x22;
      000119 75 89 22         [24] 1360 	mov	_TMOD,#0x22
                           000009  1361 	C$config.c$15$1$47 ==.
                                   1362 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\/config.c:15: CKCON     = 0x18;
      00011C 75 8E 18         [24] 1363 	mov	_CKCON,#0x18
                           00000C  1364 	C$config.c$16$1$47 ==.
                                   1365 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\/config.c:16: TH0       = 0xE7;
      00011F 75 8C E7         [24] 1366 	mov	_TH0,#0xe7
                           00000F  1367 	C$config.c$17$1$47 ==.
                                   1368 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\/config.c:17: TH1       = 0xAF;
      000122 75 8D AF         [24] 1369 	mov	_TH1,#0xaf
                           000012  1370 	C$config.c$18$1$47 ==.
                                   1371 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\/config.c:18: SFRPAGE   = TMR2_PAGE;
      000125 75 84 00         [24] 1372 	mov	_SFRPAGE,#0x00
                           000015  1373 	C$config.c$19$1$47 ==.
                                   1374 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\/config.c:19: TMR2CN    = 0x04;
      000128 75 C8 04         [24] 1375 	mov	_TMR2CN,#0x04
                           000018  1376 	C$config.c$20$1$47 ==.
                                   1377 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\/config.c:20: TMR2CF    = 0x18;
      00012B 75 C9 18         [24] 1378 	mov	_TMR2CF,#0x18
                           00001B  1379 	C$config.c$21$1$47 ==.
                                   1380 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\/config.c:21: RCAP2L    = 0xDC;
      00012E 75 CA DC         [24] 1381 	mov	_RCAP2L,#0xdc
                           00001E  1382 	C$config.c$22$1$47 ==.
                                   1383 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\/config.c:22: RCAP2H    = 0x0B;
      000131 75 CB 0B         [24] 1384 	mov	_RCAP2H,#0x0b
                           000021  1385 	C$config.c$23$1$47 ==.
                                   1386 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\/config.c:23: SFRPAGE   = TMR3_PAGE;
      000134 75 84 01         [24] 1387 	mov	_SFRPAGE,#0x01
                           000024  1388 	C$config.c$24$1$47 ==.
                                   1389 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\/config.c:24: TMR3CN    = 0x04;
      000137 75 C8 04         [24] 1390 	mov	_TMR3CN,#0x04
                           000027  1391 	C$config.c$25$1$47 ==.
                                   1392 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\/config.c:25: RCAP3L    = 0xDC;
      00013A 75 CA DC         [24] 1393 	mov	_RCAP3L,#0xdc
                           00002A  1394 	C$config.c$26$1$47 ==.
                                   1395 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\/config.c:26: RCAP3H    = 0xFD;
      00013D 75 CB FD         [24] 1396 	mov	_RCAP3H,#0xfd
                           00002D  1397 	C$config.c$27$1$47 ==.
                                   1398 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\/config.c:27: SFRPAGE   = TMR4_PAGE;
      000140 75 84 02         [24] 1399 	mov	_SFRPAGE,#0x02
                           000030  1400 	C$config.c$28$1$47 ==.
                                   1401 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\/config.c:28: TMR4CN    = 0x04;
      000143 75 C8 04         [24] 1402 	mov	_TMR4CN,#0x04
                           000033  1403 	C$config.c$29$1$47 ==.
                                   1404 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\/config.c:29: TMR4CF    = 0x02;
      000146 75 C9 02         [24] 1405 	mov	_TMR4CF,#0x02
                           000036  1406 	C$config.c$30$1$47 ==.
                                   1407 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\/config.c:30: RCAP4L    = 0x8D;
      000149 75 CA 8D         [24] 1408 	mov	_RCAP4L,#0x8d
                           000039  1409 	C$config.c$31$1$47 ==.
                                   1410 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\/config.c:31: RCAP4H    = 0x34;
      00014C 75 CB 34         [24] 1411 	mov	_RCAP4H,#0x34
                           00003C  1412 	C$config.c$32$1$47 ==.
                           00003C  1413 	XG$Timer_Init$0$0 ==.
      00014F 22               [24] 1414 	ret
                                   1415 ;------------------------------------------------------------
                                   1416 ;Allocation info for local variables in function 'UART_Init'
                                   1417 ;------------------------------------------------------------
                           00003D  1418 	G$UART_Init$0$0 ==.
                           00003D  1419 	C$config.c$34$1$47 ==.
                                   1420 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\/config.c:34: void UART_Init()
                                   1421 ;	-----------------------------------------
                                   1422 ;	 function UART_Init
                                   1423 ;	-----------------------------------------
      000150                       1424 _UART_Init:
                           00003D  1425 	C$config.c$36$1$48 ==.
                                   1426 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\/config.c:36: SFRPAGE   = UART0_PAGE;
      000150 75 84 00         [24] 1427 	mov	_SFRPAGE,#0x00
                           000040  1428 	C$config.c$37$1$48 ==.
                                   1429 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\/config.c:37: SCON0     = 0x50;
      000153 75 98 50         [24] 1430 	mov	_SCON0,#0x50
                           000043  1431 	C$config.c$38$1$48 ==.
                           000043  1432 	XG$UART_Init$0$0 ==.
      000156 22               [24] 1433 	ret
                                   1434 ;------------------------------------------------------------
                                   1435 ;Allocation info for local variables in function 'SMBus_Init'
                                   1436 ;------------------------------------------------------------
                           000044  1437 	G$SMBus_Init$0$0 ==.
                           000044  1438 	C$config.c$40$1$48 ==.
                                   1439 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\/config.c:40: void SMBus_Init()
                                   1440 ;	-----------------------------------------
                                   1441 ;	 function SMBus_Init
                                   1442 ;	-----------------------------------------
      000157                       1443 _SMBus_Init:
                           000044  1444 	C$config.c$42$1$49 ==.
                                   1445 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\/config.c:42: SFRPAGE   = SMB0_PAGE;
      000157 75 84 00         [24] 1446 	mov	_SFRPAGE,#0x00
                           000047  1447 	C$config.c$43$1$49 ==.
                                   1448 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\/config.c:43: SMB0CN    = 0x41;
      00015A 75 C0 41         [24] 1449 	mov	_SMB0CN,#0x41
                           00004A  1450 	C$config.c$44$1$49 ==.
                                   1451 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\/config.c:44: SMB0CR    = 0xE9;
      00015D 75 CF E9         [24] 1452 	mov	_SMB0CR,#0xe9
                           00004D  1453 	C$config.c$45$1$49 ==.
                           00004D  1454 	XG$SMBus_Init$0$0 ==.
      000160 22               [24] 1455 	ret
                                   1456 ;------------------------------------------------------------
                                   1457 ;Allocation info for local variables in function 'ADC_Init'
                                   1458 ;------------------------------------------------------------
                           00004E  1459 	G$ADC_Init$0$0 ==.
                           00004E  1460 	C$config.c$47$1$49 ==.
                                   1461 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\/config.c:47: void ADC_Init()
                                   1462 ;	-----------------------------------------
                                   1463 ;	 function ADC_Init
                                   1464 ;	-----------------------------------------
      000161                       1465 _ADC_Init:
                           00004E  1466 	C$config.c$49$1$50 ==.
                                   1467 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\/config.c:49: SFRPAGE   = ADC0_PAGE;
      000161 75 84 00         [24] 1468 	mov	_SFRPAGE,#0x00
                           000051  1469 	C$config.c$50$1$50 ==.
                                   1470 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\/config.c:50: AMX0SL    = 0x01;
      000164 75 BB 01         [24] 1471 	mov	_AMX0SL,#0x01
                           000054  1472 	C$config.c$51$1$50 ==.
                                   1473 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\/config.c:51: ADC0CF    = 0xFE;
      000167 75 BC FE         [24] 1474 	mov	_ADC0CF,#0xfe
                           000057  1475 	C$config.c$52$1$50 ==.
                                   1476 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\/config.c:52: ADC0CN    = 0x8C;
      00016A 75 E8 8C         [24] 1477 	mov	_ADC0CN,#0x8c
                           00005A  1478 	C$config.c$53$1$50 ==.
                           00005A  1479 	XG$ADC_Init$0$0 ==.
      00016D 22               [24] 1480 	ret
                                   1481 ;------------------------------------------------------------
                                   1482 ;Allocation info for local variables in function 'Voltage_Reference_Init'
                                   1483 ;------------------------------------------------------------
                           00005B  1484 	G$Voltage_Reference_Init$0$0 ==.
                           00005B  1485 	C$config.c$55$1$50 ==.
                                   1486 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\/config.c:55: void Voltage_Reference_Init()
                                   1487 ;	-----------------------------------------
                                   1488 ;	 function Voltage_Reference_Init
                                   1489 ;	-----------------------------------------
      00016E                       1490 _Voltage_Reference_Init:
                           00005B  1491 	C$config.c$57$1$51 ==.
                                   1492 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\/config.c:57: SFRPAGE   = ADC0_PAGE;
      00016E 75 84 00         [24] 1493 	mov	_SFRPAGE,#0x00
                           00005E  1494 	C$config.c$58$1$51 ==.
                                   1495 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\/config.c:58: REF0CN    = 0x03;
      000171 75 D1 03         [24] 1496 	mov	_REF0CN,#0x03
                           000061  1497 	C$config.c$59$1$51 ==.
                           000061  1498 	XG$Voltage_Reference_Init$0$0 ==.
      000174 22               [24] 1499 	ret
                                   1500 ;------------------------------------------------------------
                                   1501 ;Allocation info for local variables in function 'Port_IO_Init'
                                   1502 ;------------------------------------------------------------
                           000062  1503 	G$Port_IO_Init$0$0 ==.
                           000062  1504 	C$config.c$61$1$51 ==.
                                   1505 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\/config.c:61: void Port_IO_Init()
                                   1506 ;	-----------------------------------------
                                   1507 ;	 function Port_IO_Init
                                   1508 ;	-----------------------------------------
      000175                       1509 _Port_IO_Init:
                           000062  1510 	C$config.c$99$1$52 ==.
                                   1511 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\/config.c:99: SFRPAGE   = CONFIG_PAGE;
      000175 75 84 0F         [24] 1512 	mov	_SFRPAGE,#0x0f
                           000065  1513 	C$config.c$100$1$52 ==.
                                   1514 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\/config.c:100: P0MDOUT   = 0x01;
      000178 75 A4 01         [24] 1515 	mov	_P0MDOUT,#0x01
                           000068  1516 	C$config.c$101$1$52 ==.
                                   1517 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\/config.c:101: P2MDOUT   = 0x9F;
      00017B 75 A6 9F         [24] 1518 	mov	_P2MDOUT,#0x9f
                           00006B  1519 	C$config.c$102$1$52 ==.
                                   1520 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\/config.c:102: XBR0      = 0x07;
      00017E 75 E1 07         [24] 1521 	mov	_XBR0,#0x07
                           00006E  1522 	C$config.c$103$1$52 ==.
                                   1523 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\/config.c:103: XBR2      = 0x40;
      000181 75 E3 40         [24] 1524 	mov	_XBR2,#0x40
                           000071  1525 	C$config.c$104$1$52 ==.
                           000071  1526 	XG$Port_IO_Init$0$0 ==.
      000184 22               [24] 1527 	ret
                                   1528 ;------------------------------------------------------------
                                   1529 ;Allocation info for local variables in function 'Oscillator_Init'
                                   1530 ;------------------------------------------------------------
                                   1531 ;i                         Allocated to registers r6 r7 
                                   1532 ;------------------------------------------------------------
                           000072  1533 	G$Oscillator_Init$0$0 ==.
                           000072  1534 	C$config.c$106$1$52 ==.
                                   1535 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\/config.c:106: void Oscillator_Init()
                                   1536 ;	-----------------------------------------
                                   1537 ;	 function Oscillator_Init
                                   1538 ;	-----------------------------------------
      000185                       1539 _Oscillator_Init:
                           000072  1540 	C$config.c$109$1$53 ==.
                                   1541 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\/config.c:109: SFRPAGE   = CONFIG_PAGE;
      000185 75 84 0F         [24] 1542 	mov	_SFRPAGE,#0x0f
                           000075  1543 	C$config.c$110$1$53 ==.
                                   1544 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\/config.c:110: OSCXCN    = 0x67;
      000188 75 8C 67         [24] 1545 	mov	_OSCXCN,#0x67
                           000078  1546 	C$config.c$111$1$53 ==.
                                   1547 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\/config.c:111: for (i = 0; i < 3000; i++);  // Wait 1ms for initialization
      00018B 7E B8            [12] 1548 	mov	r6,#0xb8
      00018D 7F 0B            [12] 1549 	mov	r7,#0x0b
      00018F                       1550 00107$:
      00018F EE               [12] 1551 	mov	a,r6
      000190 24 FF            [12] 1552 	add	a,#0xff
      000192 FC               [12] 1553 	mov	r4,a
      000193 EF               [12] 1554 	mov	a,r7
      000194 34 FF            [12] 1555 	addc	a,#0xff
      000196 FD               [12] 1556 	mov	r5,a
      000197 8C 06            [24] 1557 	mov	ar6,r4
      000199 8D 07            [24] 1558 	mov	ar7,r5
      00019B EC               [12] 1559 	mov	a,r4
      00019C 4D               [12] 1560 	orl	a,r5
      00019D 70 F0            [24] 1561 	jnz	00107$
                           00008C  1562 	C$config.c$112$1$53 ==.
                                   1563 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\/config.c:112: while ((OSCXCN & 0x80) == 0);
      00019F                       1564 00102$:
      00019F E5 8C            [12] 1565 	mov	a,_OSCXCN
      0001A1 30 E7 FB         [24] 1566 	jnb	acc.7,00102$
                           000091  1567 	C$config.c$113$1$53 ==.
                                   1568 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\/config.c:113: CLKSEL    = 0x01;
      0001A4 75 97 01         [24] 1569 	mov	_CLKSEL,#0x01
                           000094  1570 	C$config.c$114$1$53 ==.
                           000094  1571 	XG$Oscillator_Init$0$0 ==.
      0001A7 22               [24] 1572 	ret
                                   1573 ;------------------------------------------------------------
                                   1574 ;Allocation info for local variables in function 'Interrupts_Init'
                                   1575 ;------------------------------------------------------------
                           000095  1576 	G$Interrupts_Init$0$0 ==.
                           000095  1577 	C$config.c$116$1$53 ==.
                                   1578 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\/config.c:116: void Interrupts_Init()
                                   1579 ;	-----------------------------------------
                                   1580 ;	 function Interrupts_Init
                                   1581 ;	-----------------------------------------
      0001A8                       1582 _Interrupts_Init:
                           000095  1583 	C$config.c$118$1$54 ==.
                                   1584 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\/config.c:118: IE        = 0x92;
      0001A8 75 A8 92         [24] 1585 	mov	_IE,#0x92
                           000098  1586 	C$config.c$119$1$54 ==.
                                   1587 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\/config.c:119: EIE2      = 0x06;
      0001AB 75 E7 06         [24] 1588 	mov	_EIE2,#0x06
                           00009B  1589 	C$config.c$120$1$54 ==.
                           00009B  1590 	XG$Interrupts_Init$0$0 ==.
      0001AE 22               [24] 1591 	ret
                                   1592 ;------------------------------------------------------------
                                   1593 ;Allocation info for local variables in function 'Init_Device'
                                   1594 ;------------------------------------------------------------
                           00009C  1595 	G$Init_Device$0$0 ==.
                           00009C  1596 	C$config.c$124$1$54 ==.
                                   1597 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\/config.c:124: void Init_Device(void)
                                   1598 ;	-----------------------------------------
                                   1599 ;	 function Init_Device
                                   1600 ;	-----------------------------------------
      0001AF                       1601 _Init_Device:
                           00009C  1602 	C$config.c$126$1$56 ==.
                                   1603 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\/config.c:126: Timer_Init();
      0001AF 12 01 13         [24] 1604 	lcall	_Timer_Init
                           00009F  1605 	C$config.c$127$1$56 ==.
                                   1606 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\/config.c:127: UART_Init();
      0001B2 12 01 50         [24] 1607 	lcall	_UART_Init
                           0000A2  1608 	C$config.c$128$1$56 ==.
                                   1609 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\/config.c:128: SMBus_Init();
      0001B5 12 01 57         [24] 1610 	lcall	_SMBus_Init
                           0000A5  1611 	C$config.c$129$1$56 ==.
                                   1612 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\/config.c:129: ADC_Init();
      0001B8 12 01 61         [24] 1613 	lcall	_ADC_Init
                           0000A8  1614 	C$config.c$130$1$56 ==.
                                   1615 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\/config.c:130: Voltage_Reference_Init();
      0001BB 12 01 6E         [24] 1616 	lcall	_Voltage_Reference_Init
                           0000AB  1617 	C$config.c$131$1$56 ==.
                                   1618 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\/config.c:131: Port_IO_Init();
      0001BE 12 01 75         [24] 1619 	lcall	_Port_IO_Init
                           0000AE  1620 	C$config.c$132$1$56 ==.
                                   1621 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\/config.c:132: Oscillator_Init();
      0001C1 12 01 85         [24] 1622 	lcall	_Oscillator_Init
                           0000B1  1623 	C$config.c$133$1$56 ==.
                                   1624 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\/config.c:133: Interrupts_Init();
      0001C4 12 01 A8         [24] 1625 	lcall	_Interrupts_Init
                           0000B4  1626 	C$config.c$134$1$56 ==.
                           0000B4  1627 	XG$Init_Device$0$0 ==.
      0001C7 22               [24] 1628 	ret
                                   1629 ;------------------------------------------------------------
                                   1630 ;Allocation info for local variables in function 'backup_dados'
                                   1631 ;------------------------------------------------------------
                                   1632 ;ini_idx                   Allocated to registers r7 
                                   1633 ;i                         Allocated to registers r6 
                                   1634 ;------------------------------------------------------------
                           0000B5  1635 	G$backup_dados$0$0 ==.
                           0000B5  1636 	C$main.c$20$1$56 ==.
                                   1637 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\main.c:20: void backup_dados(void) {
                                   1638 ;	-----------------------------------------
                                   1639 ;	 function backup_dados
                                   1640 ;	-----------------------------------------
      0001C8                       1641 _backup_dados:
                           0000B5  1642 	C$main.c$21$1$56 ==.
                                   1643 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\main.c:21: unsigned char ini_idx = eeprom_idx;
      0001C8 AF 18            [24] 1644 	mov	r7,_eeprom_idx
                           0000B7  1645 	C$main.c$22$1$56 ==.
                                   1646 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\main.c:22: unsigned char i = ini_idx;
      0001CA 8F 06            [24] 1647 	mov	ar6,r7
                           0000B9  1648 	C$main.c$23$1$58 ==.
                                   1649 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\main.c:23: do {
      0001CC                       1650 00101$:
                           0000B9  1651 	C$main.c$24$2$59 ==.
                                   1652 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\main.c:24: i = (i+1) % EEPROM_SIZE;
      0001CC 8E 04            [24] 1653 	mov	ar4,r6
      0001CE 7D 00            [12] 1654 	mov	r5,#0x00
      0001D0 8C 82            [24] 1655 	mov	dpl,r4
      0001D2 8D 83            [24] 1656 	mov	dph,r5
      0001D4 A3               [24] 1657 	inc	dptr
      0001D5 75 1C 80         [24] 1658 	mov	__modsint_PARM_2,#0x80
                                   1659 ;	1-genFromRTrack replaced	mov	(__modsint_PARM_2 + 1),#0x00
      0001D8 8D 1D            [24] 1660 	mov	(__modsint_PARM_2 + 1),r5
      0001DA C0 07            [24] 1661 	push	ar7
      0001DC 12 10 CD         [24] 1662 	lcall	__modsint
      0001DF AC 82            [24] 1663 	mov	r4,dpl
      0001E1 8C 06            [24] 1664 	mov	ar6,r4
                           0000D0  1665 	C$main.c$25$2$59 ==.
                                   1666 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\main.c:25: envia_uart0(le_eeprom(i));
      0001E3 8E 82            [24] 1667 	mov	dpl,r6
      0001E5 C0 06            [24] 1668 	push	ar6
      0001E7 12 08 DD         [24] 1669 	lcall	_le_eeprom
      0001EA 12 03 5C         [24] 1670 	lcall	_envia_uart0
      0001ED D0 06            [24] 1671 	pop	ar6
      0001EF D0 07            [24] 1672 	pop	ar7
                           0000DE  1673 	C$main.c$26$1$58 ==.
                                   1674 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\main.c:26: } while (i != ini_idx);
      0001F1 EE               [12] 1675 	mov	a,r6
      0001F2 B5 07 D7         [24] 1676 	cjne	a,ar7,00101$
                           0000E2  1677 	C$main.c$27$1$58 ==.
                           0000E2  1678 	XG$backup_dados$0$0 ==.
      0001F5 22               [24] 1679 	ret
                                   1680 ;------------------------------------------------------------
                                   1681 ;Allocation info for local variables in function 'setup'
                                   1682 ;------------------------------------------------------------
                           0000E3  1683 	G$setup$0$0 ==.
                           0000E3  1684 	C$main.c$29$1$58 ==.
                                   1685 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\main.c:29: void setup(void) {
                                   1686 ;	-----------------------------------------
                                   1687 ;	 function setup
                                   1688 ;	-----------------------------------------
      0001F6                       1689 _setup:
                           0000E3  1690 	C$main.c$30$1$61 ==.
                                   1691 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\main.c:30: Init_Device();
      0001F6 12 01 AF         [24] 1692 	lcall	_Init_Device
                           0000E6  1693 	C$main.c$31$1$61 ==.
                                   1694 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\main.c:31: SFRPAGE = LEGACY_PAGE;
      0001F9 75 84 00         [24] 1695 	mov	_SFRPAGE,#0x00
                           0000E9  1696 	C$main.c$32$1$61 ==.
                                   1697 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\main.c:32: config_tc0();
      0001FC 12 02 EE         [24] 1698 	lcall	_config_tc0
                           0000EC  1699 	C$main.c$33$1$61 ==.
                                   1700 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\main.c:33: init_GLCD();
      0001FF 12 04 85         [24] 1701 	lcall	_init_GLCD
                           0000EF  1702 	C$main.c$34$1$61 ==.
                                   1703 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\main.c:34: config_adc0(ADC0_AIN1, ADC0_GAIN_05);
      000202 75 17 06         [24] 1704 	mov	_config_adc0_PARM_2,#0x06
      000205 75 82 01         [24] 1705 	mov	dpl,#0x01
      000208 12 08 00         [24] 1706 	lcall	_config_adc0
                           0000F8  1707 	C$main.c$35$1$61 ==.
                           0000F8  1708 	XG$setup$0$0 ==.
      00020B 22               [24] 1709 	ret
                                   1710 ;------------------------------------------------------------
                                   1711 ;Allocation info for local variables in function 'main'
                                   1712 ;------------------------------------------------------------
                                   1713 ;glcd_ver_min              Allocated to registers 
                                   1714 ;glcd_ver_max              Allocated to registers 
                                   1715 ;glcd_hor                  Allocated to registers r7 
                                   1716 ;------------------------------------------------------------
                           0000F9  1717 	G$main$0$0 ==.
                           0000F9  1718 	C$main.c$37$1$61 ==.
                                   1719 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\main.c:37: void main(void) {
                                   1720 ;	-----------------------------------------
                                   1721 ;	 function main
                                   1722 ;	-----------------------------------------
      00020C                       1723 _main:
                           0000F9  1724 	C$main.c$39$1$61 ==.
                                   1725 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\main.c:39: unsigned char glcd_hor = 0;
      00020C 7F 00            [12] 1726 	mov	r7,#0x00
                           0000FB  1727 	C$main.c$40$1$63 ==.
                                   1728 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\main.c:40: setup();
      00020E C0 07            [24] 1729 	push	ar7
      000210 12 01 F6         [24] 1730 	lcall	_setup
                           000100  1731 	C$main.c$41$1$63 ==.
                                   1732 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\main.c:41: limpa_glcd();
      000213 12 04 32         [24] 1733 	lcall	_limpa_glcd
                           000103  1734 	C$main.c$42$1$63 ==.
                                   1735 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\main.c:42: buzzer_bip();
      000216 12 0A 1B         [24] 1736 	lcall	_buzzer_bip
      000219 D0 07            [24] 1737 	pop	ar7
                           000108  1738 	C$main.c$44$1$63 ==.
                                   1739 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\main.c:44: while (1) {
      00021B                       1740 00121$:
                           000108  1741 	C$main.c$45$2$64 ==.
                                   1742 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\main.c:45: if (!P1_7) {
      00021B 20 97 07         [24] 1743 	jb	_P1_7,00102$
                           00010B  1744 	C$main.c$46$3$65 ==.
                                   1745 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\main.c:46: buzzer_off();
      00021E C0 07            [24] 1746 	push	ar7
      000220 12 0A 17         [24] 1747 	lcall	_buzzer_off
      000223 D0 07            [24] 1748 	pop	ar7
      000225                       1749 00102$:
                           000112  1750 	C$main.c$48$2$64 ==.
                                   1751 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\main.c:48: if (!P1_6) {
      000225 20 96 11         [24] 1752 	jb	_P1_6,00106$
                           000115  1753 	C$main.c$49$3$66 ==.
                                   1754 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\main.c:49: if (glcd_ativo) {
                           000115  1755 	C$main.c$50$4$67 ==.
                                   1756 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\main.c:50: glcd_ativo = 0;
      000228 10 02 02         [24] 1757 	jbc	_glcd_ativo,00157$
      00022B 80 05            [24] 1758 	sjmp	00104$
      00022D                       1759 00157$:
                           00011A  1760 	C$main.c$51$4$67 ==.
                                   1761 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\main.c:51: limpa_glcd();
      00022D 12 04 32         [24] 1762 	lcall	_limpa_glcd
                           00011D  1763 	C$main.c$52$4$67 ==.
                                   1764 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\main.c:52: glcd_hor = 0;
      000230 7F 00            [12] 1765 	mov	r7,#0x00
      000232                       1766 00104$:
                           00011F  1767 	C$main.c$54$3$66 ==.
                                   1768 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\main.c:54: buzzer_bip();
      000232 C0 07            [24] 1769 	push	ar7
      000234 12 0A 1B         [24] 1770 	lcall	_buzzer_bip
      000237 D0 07            [24] 1771 	pop	ar7
      000239                       1772 00106$:
                           000126  1773 	C$main.c$56$2$64 ==.
                                   1774 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\main.c:56: if (!P1_5) {
      000239 20 95 09         [24] 1775 	jb	_P1_5,00108$
                           000129  1776 	C$main.c$57$3$68 ==.
                                   1777 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\main.c:57: glcd_ativo = 1;
      00023C D2 02            [12] 1778 	setb	_glcd_ativo
                           00012B  1779 	C$main.c$58$3$68 ==.
                                   1780 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\main.c:58: buzzer_bip();
      00023E C0 07            [24] 1781 	push	ar7
      000240 12 0A 1B         [24] 1782 	lcall	_buzzer_bip
      000243 D0 07            [24] 1783 	pop	ar7
      000245                       1784 00108$:
                           000132  1785 	C$main.c$60$2$64 ==.
                                   1786 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\main.c:60: if (batida_detec) {
      000245 30 00 07         [24] 1787 	jnb	_batida_detec,00110$
                           000135  1788 	C$main.c$61$3$69 ==.
                                   1789 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\main.c:61: buzzer_bip();
      000248 C0 07            [24] 1790 	push	ar7
      00024A 12 0A 1B         [24] 1791 	lcall	_buzzer_bip
      00024D D0 07            [24] 1792 	pop	ar7
      00024F                       1793 00110$:
                           00013C  1794 	C$main.c$63$2$64 ==.
                                   1795 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\main.c:63: if (uart0_flag) {
                           00013C  1796 	C$main.c$64$3$70 ==.
                                   1797 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\main.c:64: uart0_flag = 0;
      00024F 10 03 02         [24] 1798 	jbc	_uart0_flag,00160$
      000252 80 0C            [24] 1799 	sjmp	00115$
      000254                       1800 00160$:
                           000141  1801 	C$main.c$65$3$70 ==.
                                   1802 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\main.c:65: switch (uart0_data) {
      000254 AE 0A            [24] 1803 	mov	r6,_uart0_data
      000256 BE 62 07         [24] 1804 	cjne	r6,#0x62,00115$
                           000146  1805 	C$main.c$67$4$71 ==.
                                   1806 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\main.c:67: backup_dados();
      000259 C0 07            [24] 1807 	push	ar7
      00025B 12 01 C8         [24] 1808 	lcall	_backup_dados
      00025E D0 07            [24] 1809 	pop	ar7
                           00014D  1810 	C$main.c$70$2$64 ==.
                                   1811 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\main.c:70: }
      000260                       1812 00115$:
                           00014D  1813 	C$main.c$72$2$64 ==.
                                   1814 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\main.c:72: if (amostra_disp) {  // Atualiza GLCD
                           00014D  1815 	C$main.c$73$3$72 ==.
                                   1816 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\main.c:73: amostra_disp = 0;
      000260 10 0E 02         [24] 1817 	jbc	_amostra_disp,00163$
      000263 80 77            [24] 1818 	sjmp	00119$
      000265                       1819 00163$:
                           000152  1820 	C$main.c$74$3$72 ==.
                                   1821 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\main.c:74: guarda_buffer(nova_amostra);
      000265 85 15 82         [24] 1822 	mov	dpl,_nova_amostra
      000268 85 16 83         [24] 1823 	mov	dph,(_nova_amostra + 1)
      00026B C0 07            [24] 1824 	push	ar7
      00026D 12 0A 48         [24] 1825 	lcall	_guarda_buffer
                           00015D  1826 	C$main.c$75$3$72 ==.
                                   1827 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\main.c:75: guarda_eeprom(nova_amostra);
      000270 85 15 82         [24] 1828 	mov	dpl,_nova_amostra
      000273 85 16 83         [24] 1829 	mov	dph,(_nova_amostra + 1)
      000276 12 09 DC         [24] 1830 	lcall	_guarda_eeprom
      000279 D0 07            [24] 1831 	pop	ar7
                           000168  1832 	C$main.c$76$3$72 ==.
                                   1833 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\main.c:76: if (glcd_ativo) {
      00027B 30 02 5E         [24] 1834 	jnb	_glcd_ativo,00119$
                           00016B  1835 	C$main.c$77$4$73 ==.
                                   1836 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\main.c:77: limpa_col_glcd(glcd_hor);
      00027E 8F 82            [24] 1837 	mov	dpl,r7
      000280 C0 07            [24] 1838 	push	ar7
      000282 12 06 23         [24] 1839 	lcall	_limpa_col_glcd
                           000172  1840 	C$main.c$78$1$63 ==.
                                   1841 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\main.c:78: ponto_glcd(glcd_hor, escala_glcd(nova_amostra, glcd_ver_min, glcd_ver_max));
      000285 85 15 82         [24] 1842 	mov	dpl,_nova_amostra
      000288 85 16 83         [24] 1843 	mov	dph,(_nova_amostra + 1)
      00028B 12 0F 71         [24] 1844 	lcall	___uint2fs
      00028E AB 82            [24] 1845 	mov	r3,dpl
      000290 AC 83            [24] 1846 	mov	r4,dph
      000292 AD F0            [24] 1847 	mov	r5,b
      000294 FE               [12] 1848 	mov	r6,a
      000295 75 0C 00         [24] 1849 	mov	_escala_glcd_PARM_2,#0x00
      000298 75 0D 80         [24] 1850 	mov	(_escala_glcd_PARM_2 + 1),#0x80
      00029B 75 0E 89         [24] 1851 	mov	(_escala_glcd_PARM_2 + 2),#0x89
      00029E 75 0F 44         [24] 1852 	mov	(_escala_glcd_PARM_2 + 3),#0x44
      0002A1 75 10 00         [24] 1853 	mov	_escala_glcd_PARM_3,#0x00
      0002A4 75 11 40         [24] 1854 	mov	(_escala_glcd_PARM_3 + 1),#0x40
      0002A7 75 12 2C         [24] 1855 	mov	(_escala_glcd_PARM_3 + 2),#0x2c
      0002AA 75 13 45         [24] 1856 	mov	(_escala_glcd_PARM_3 + 3),#0x45
      0002AD 8B 82            [24] 1857 	mov	dpl,r3
      0002AF 8C 83            [24] 1858 	mov	dph,r4
      0002B1 8D F0            [24] 1859 	mov	b,r5
      0002B3 EE               [12] 1860 	mov	a,r6
      0002B4 12 06 6E         [24] 1861 	lcall	_escala_glcd
      0002B7 85 82 14         [24] 1862 	mov	_ponto_glcd_PARM_2,dpl
      0002BA D0 07            [24] 1863 	pop	ar7
      0002BC 8F 82            [24] 1864 	mov	dpl,r7
      0002BE C0 07            [24] 1865 	push	ar7
      0002C0 12 07 A3         [24] 1866 	lcall	_ponto_glcd
      0002C3 D0 07            [24] 1867 	pop	ar7
                           0001B2  1868 	C$main.c$79$4$73 ==.
                                   1869 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\main.c:79: glcd_hor = (glcd_hor + 1) % GLCD_WIDTH;
      0002C5 8F 05            [24] 1870 	mov	ar5,r7
      0002C7 7E 00            [12] 1871 	mov	r6,#0x00
      0002C9 8D 82            [24] 1872 	mov	dpl,r5
      0002CB 8E 83            [24] 1873 	mov	dph,r6
      0002CD A3               [24] 1874 	inc	dptr
      0002CE 75 1C 80         [24] 1875 	mov	__modsint_PARM_2,#0x80
                                   1876 ;	1-genFromRTrack replaced	mov	(__modsint_PARM_2 + 1),#0x00
      0002D1 8E 1D            [24] 1877 	mov	(__modsint_PARM_2 + 1),r6
      0002D3 12 10 CD         [24] 1878 	lcall	__modsint
      0002D6 AD 82            [24] 1879 	mov	r5,dpl
      0002D8 AE 83            [24] 1880 	mov	r6,dph
      0002DA 8D 07            [24] 1881 	mov	ar7,r5
      0002DC                       1882 00119$:
                           0001C9  1883 	C$main.c$82$2$64 ==.
                                   1884 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\main.c:82: atualiza_buzzer();
      0002DC C0 07            [24] 1885 	push	ar7
      0002DE 12 0A 25         [24] 1886 	lcall	_atualiza_buzzer
                           0001CE  1887 	C$main.c$83$2$64 ==.
                                   1888 ;	G:\Meu Drive\UFMS\7º Semestre\Microcontroladores e Aplicações\ppg final\main.c:83: reset_wdt();
      0002E1 12 02 EA         [24] 1889 	lcall	_reset_wdt
      0002E4 D0 07            [24] 1890 	pop	ar7
      0002E6 02 02 1B         [24] 1891 	ljmp	00121$
                           0001D6  1892 	C$main.c$85$1$63 ==.
                           0001D6  1893 	XG$main$0$0 ==.
      0002E9 22               [24] 1894 	ret
                                   1895 	.area CSEG    (CODE)
                                   1896 	.area CONST   (CODE)
                                   1897 	.area XINIT   (CODE)
                                   1898 	.area CABS    (ABS,CODE)
