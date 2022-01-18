#pragma once

#include QMK_KEYBOARD_H

//              +--------+---------+---------+---------+--------+
#define CMDH_L1  ___Q___ , ___W___ , ___F___ , ___P___ , ___B___
#define CMDH_L2  ___A___ , ___R___ , ___S___ , ___T___ , ___G___
#define CMDH_L3  ___Z___ , ___X___ , ___C___ , ___D___ , ___V___
//              +--------+---------+---------+---------+--------+
#define CMDH_R1  ___J___ , ___L___ , ___U___ , ___Y___ , _SQUOT_
#define CMDH_R2  ___M___ , ___N___ , ___E___ , ___I___ , ___O___
#define CMDH_R3  ___K___ , ___H___ , _COMMA_ , __DOT__ , _SCOLN_
//              +--------+---------+---------+---------+--------+
#define APT__L1  ___W___ , ___G___ , ___D___ , ___F___ , ___B___
#define APT__L2  ___R___ , ___S___ , ___T___ , ___H___ , ___K___
#define APT__L3  ___X___ , ___C___ , ___M___ , ___P___ , ___V___
//              +--------+---------+---------+---------+--------+
#define APT__R1  ___Q___ , ___L___ , ___U___ , ___O___ , ___Y___
#define APT__R2  ___J___ , ___N___ , ___E___ , ___A___ , ___I___
#define APT__R3  ___Z___ , _COMMA_ , __DOT__ , _SQUOT_ , _SCOLN_
//              +--------+---------+---------+---------+--------+
#define NAV__L1  _UNDO__ , __CUT__ , _COPY__ , _PASTE_ , _REDO__
#define NAV__L2  _O_CMD_ , _O_CTL_ , _O_OPT_ , _O_SFT_ , _SWWIN_
#define NAV__L3  _ACTIO_ , __ESC__ , _MATCH_ , __TAB__ , _NEWFL_
//              +--------+---------+---------+---------+--------+
#define NAV__R1  _PROJ__ , _GOTOD_ , _PGDWN_ , _PG_UP_ , _GOTOE_
#define NAV__R2  _SEL_L_ , _LEFT__ , _DOWN__ , __UP___ , _RIGHT_
#define NAV__R3  _COLS__ , _ENTER_ , _HINT__ , __DEL__ , __MB1__
//              +--------+---------+---------+---------+--------+
#define SYM__L1  _TILDE_ , _LCBRC_ , _LBRAC_ , _LPARN_ , _SCOLN_
#define SYM__L2  _MINUS_ , _PLUS__ , _EQUAL_ , _UNDRS_ , _HASH__
#define SYM__L3  _ASTER_ , _PIPE__ , __AT___ , _SLASH_ , _PERCT_
//              +--------+---------+---------+---------+--------+
#define SYM__R1  _CIRCF_ , _RPARN_ , _RBRAC_ , _RCBRC_ , _GRAVE_
#define SYM__R2  _DOLLR_ , _O_SFT_ , _O_OPT_ , _O_CTL_ , _O_CMD_
#define SYM__R3  _STRIN_ , _BSLSH_ , _AMPRS_ , _EXCLM_ , _QUEST_
//              +--------+---------+---------+---------+--------+
#define NUM__L1  ___7___ , ___5___ , ___3___ , ___1___ , ___9___
#define NUM__L2  _O_CMD_ , _O_CTL_ , _O_OPT_ , _O_SFT_ , __F11__
#define NUM__L3  __F7___ , __F5___ , __F3___ , __F1___ , __F9___
//              +--------+---------+---------+---------+--------+
#define NUM__R1  ___8___ , ___0___ , ___2___ , ___4___ , ___6___
#define NUM__R2  __F12__ , _O_SFT_ , _O_OPT_ , _O_CTL_ , _O_CMD_
#define NUM__R3  __F8___ , __F1___ , __F2___ , __F4___ , __F6___
//              +--------+---------+---------+---------+--------+
#define MOUS_L1  _SELAD_ , __MB2__ , _MWUP__ , __MB3__ , _DEVT__
#define MOUS_L2  _MLFT__ , __MUP__ , _MDWN__ , _MRGT__ , _BACK__
#define MOUS_L3  _SRCHW_ , _MWLFT_ , _MWDWN_ , _MWRGT_ , _JUMP__
//              +--------+---------+---------+---------+--------+
#define MOUS_R1  _CLOSE_ , _TAB_L_ , __TOP__ , _TAB_R_ , _RETAB_
#define MOUS_R2  __FWD__ , _O_SFT_ , _O_CTL_ , _O_OPT_ , _O_CMD_
#define MOUS_R3  _N_TAB_ , _ZOOMO_ , __BTM__ , _ZOOMI_ , _ZOOMR_
//              +--------+---------+---------+---------+--------+
#define META_L1  _SLEEP_ , _______ , _______ , _COLMK_ , _APT___
#define META_L2  _______ , _BRUP__ , _BRDWN_ , _PRTSC_ , _______
#define META_L3  _RESET_ , _______ , _______ , _______ , _______
//              +--------+---------+---------+---------+--------+
#define META_R1  RGB_VAD , __PRV__ , _PLYPS_ , __NXT__ , RGB_VAI
#define META_R2  _MUTE__ , _TMSMU_ , _VDWN__ , __VUP__ , RGB_TOG
#define META_R3  RGB_HUD , RGB_MOD , RGB_SPD , RGB_SPI , RGB_HUI
//              +--------+---------+---------+---------+--------+

// Bottom Row
// L/R = Primary/Secondary
// LT/RT = Tertiary
#define BASEx_L  _MONAV_ , _O_SFT_
#define BASExLT  __MB1__
#define BASExRT  __RPT__
#define BASEx_R  _SP_MK_ , _MOSYM_
//
#define NAVx__L  _______ , _______
#define NAVx_LT  _______
#define NAVx_RT  _SPACE_
#define NAVx__R  _BKSPC_ , _______
//
#define SYMx__L  _______ , _MMETA_
#define SYMx_LT  _______
#define SYMx_RT  _______
#define SYMx__R  _______ , _______
//
#define NUMx__L  _______ , _______
#define NUMx_LT  _______
#define NUMx_RT  _______
#define NUMx__R  _______ , _______
//
#define MOUSx_L  _______ , __MB1__
#define MOUSxLT  _______
#define MOUSxRT  _______
#define MOUSx_R  _______ , _______
//
#define METAx_L  _______ , _______
#define METAxLT  _______
#define METAxRT  _______
#define METAx_R  _______ , _______
