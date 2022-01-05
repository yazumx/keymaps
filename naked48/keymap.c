#include QMK_KEYBOARD_H

#include "deanbot.h"

// clang-format off

/**
  [VOID] = LAYOUT(
//---------+---------+---------+---------+---------+---------                     ---------+---------+---------+---------+---------+---------//
   _______ , _______ , _______ , _______ , _______ , _______           ,           _______ , _______ , _______ , _______ , _______ , _______ ,
//---------+---------+---------+---------+---------+---------                     ---------+---------+---------+---------+---------+---------//
   _______ , _______ , _______ , _______ , _______ , _______           ,           _______ , _______ , _______ , _______ , _______ , _______ ,
//---------+---------+---------+---------+---------+---------                     ---------+---------+---------+---------+---------+---------//
   _______ , _______ , _______ , _______ , _______ , _______           ,           _______ , _______ , _______ , _______ , _______ , _______ ,
//---------+---------+---------+---------+---------+---------                     ---------+---------+---------+---------+---------+---------//
             _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______
          //---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------//
  ),
**/



extern uint8_t is_master;

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_BASE] = LAYOUT(
//---------+---------+---------+---------+---------+---------                     ---------+---------+---------+---------+---------+---------//
   _TMSMU_ , ___Q___ , ___W___ , ___F___ , ___P___ , ___B___           ,           ___J___ , ___L___ , ___U___ , ___Y___ , _SQUOT_ , _SPOTL_ ,
//---------+---------+---------+---------+---------+---------                     ---------+---------+---------+---------+---------+---------//
   __RPT__ , ___A___ , ___R___ , ___S___ , ___T___ , ___G___           ,           ___M___ , ___N___ , ___E___ , ___I___ , ___O___ , __RPT__ ,
//---------+---------+---------+---------+---------+---------                     ---------+---------+---------+---------+---------+---------//
   __MB3__ , ___Z___ , ___X___ , ___C___ , ___D___ , ___V___           ,           ___K___ , ___H___ , _COMMA_ , __DOT__ , _SCOLN_ , __HUD__ ,
//---------+---------+---------+---------+---------+---------                     ---------+---------+---------+---------+---------+---------//
             _LEFT__ , _RIGHT_ , _MWDWN_ , _MONAV_ , _O_SFT_ , __MB1__ , __MB2__ , _SP_MK_ , _MOSYM_ , _MWUP__ , _DOWN__ , __UP___
          //---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------//
),

[_NAV] = LAYOUT(
//---------+---------+---------+---------+---------+---------                     ---------+---------+---------+---------+---------+---------//
   _HTRST_ , _NEWFL_ , __CUT__ , _COPY__ , _PASTE_ , _REDO__           ,           _COLS__ , _BEGLN_ , _GOTOD_ , _ENDLN_ , _PROJ__ , _HOME__ ,
//---------+---------+---------+---------+---------+---------                     ---------+---------+---------+---------+---------+---------//
   _TERM__ , _O_CMD_ , _O_CTL_ , _O_OPT_ , _O_SFT_ , _SWWIN_           ,           _SEL_L_ , _LEFT__ , _DOWN__ , __UP___ , _RIGHT_ , __END__ ,
//---------+---------+---------+---------+---------+---------                     ---------+---------+---------+---------+---------+---------//
   _SAVE__ , _UNDO__ , __ESC__ , _FORMA_ , __TAB__ , _RNAME_           ,           _CAPSW_ , _ENTER_ , _GOTOE_ , __DEL__ , _FINDF_ , _DRTAN_ ,
//---------+---------+---------+---------+---------+---------                     ---------+---------+---------+---------+---------+---------//
             _______ , _______ , _______ , _______ , _______ , _______ , _SPACE_ , _BKSPC_ , _______ , _PGDWN_ , _PG_UP_ , _______
          //---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------//
),

[_SYM] = LAYOUT(
//---------+---------+---------+---------+---------+---------                     ---------+---------+---------+---------+---------+---------//
   _______ , _TILDE_ , _LCBRC_ , _LBRAC_ , _LPARN_ , _SCOLN_           ,           _CIRCF_ , _RPARN_ , _RBRAC_ , _RCBRC_ , _GRAVE_ , _______ ,
//---------+---------+---------+---------+---------+---------                     ---------+---------+---------+---------+---------+---------//
   _______ , _MINUS_ , _PLUS__ , _EQUAL_ , _UNDRS_ , _HASH__           ,           _DOLLR_ , _O_SFT_ , _O_OPT_ , _O_CTL_ , _O_CMD_ , _______ ,
//---------+---------+---------+---------+---------+---------                     ---------+---------+---------+---------+---------+---------//
   _______ , _ASTER_ , _PIPE__ , __AT___ , _SLASH_ , _PERCT_           ,           _STRIN_ , _BSLSH_ , _AMPRS_ , _EXCLM_ , _QUEST_ , _______ ,
//---------+---------+---------+---------+---------+---------                     ---------+---------+---------+---------+---------+---------//
             _______ , _______ , _______ , _______ , _MMETA_ , _______ , _______ , _______ , _______ , _______ , _______ , _______
          //---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------//
),

[_NUM] = LAYOUT(
//---------+---------+---------+---------+---------+---------                     ---------+---------+---------+---------+---------+---------//
   _DEBGR_ , ___7___ , ___5___ , ___3___ , ___1___ , ___9___           ,           ___8___ , ___0___ , ___2___ , ___4___ , ___6___ , _______ ,
//---------+---------+---------+---------+---------+---------                     ---------+---------+---------+---------+---------+---------//
   _DEBUG_ , _O_CMD_ , _O_CTL_ , _O_OPT_ , _O_SFT_ , __F11__           ,           __F12__ , _O_SFT_ , _O_OPT_ , _O_CTL_ , _O_CMD_ , _CLALL_ ,
//---------+---------+---------+---------+---------+---------                     ---------+---------+---------+---------+---------+--------//
   _STPDB_ , __F7___ , __F5___ , __F3___ , __F1___ , __F9___           ,           __F8___ , __F1___ , __F2___ , __F4___ , __F6___ , _COMMT_ ,
//---------+---------+---------+---------+---------+---------                     ---------+---------+---------+---------+---------+---------//
             _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______
          //---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------//
),

[_MOUSE] = LAYOUT(
//---------+---------+---------+---------+---------+---------                     ---------+---------+---------+---------+---------+---------//
   _______ , _SELAD_ , __MB2__ , _MWUP__ , __MB3__ , _DEVT__           ,           _CMD_W_ , _TAB_L_ , __TOP__ , _TAB_R_ , _RETAB_ , _______ ,
//---------+---------+---------+---------+---------+---------                     ---------+---------+---------+---------+---------+---------//
   _CMD_R_ , _MLFT__ , __MUP__ , _MDWN__ , _MRGT__ , _BACK__           ,           __FWD__ , _O_SFT_ , _O_CTL_ , _O_OPT_ , _O_CMD_ , _______ ,
//---------+---------+---------+---------+---------+---------                     ---------+---------+---------+---------+---------+---------//
   _______ , _SRCHW_ , _MWLFT_ , _MWDWN_ , _MWRGT_ , _JUMP__           ,           _N_TAB_ , _ZOOMO_ , __BTM__ , _ZOOMI_ , _ZOOMR_ , _______ ,
//---------+---------+---------+---------+---------+---------                     ---------+---------+---------+---------+---------+---------//
             _______ , _______ , _______ , _______ , __MB1__ , _______ , _______ , _______ , _______ , _______ , _______ , _______
          //---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------//
),

[_META] = LAYOUT(
//---------+---------+---------+---------+---------+---------                     ---------+---------+---------+---------+---------+---------//
   _______ , _SLEEP_ , _______ , _______ , _______ , _______           ,           _______ , __PRV__ , _PLYPS_ , __NXT__ , _______ , _______ ,
//---------+---------+---------+---------+---------+---------                     ---------+---------+---------+---------+---------+---------//
   _______ , _______ , _BRUP__ , _BRDWN_ , _PRTSC_ , _______           ,           _MUTE__ , _TMSMU_ , _VDWN__ , __VUP__ , _______ , _______ ,
//---------+---------+---------+---------+---------+---------                     ---------+---------+---------+---------+---------+---------//
   _______ , _RESET_ , _______ , _______ , _______ , _______           ,           _______ , _______ , _______ , _______ , _______ , _______ ,
//---------+---------+---------+---------+---------+---------                     ---------+---------+---------+---------+---------+---------//
             _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______
          //---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------//
),

};
