/*
 * Copyright (c) 2023 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */

// Map german keyboard codes to ZMK names

#pragma once

#include <dt-bindings/zmk/hid_usage.h>
#include <dt-bindings/zmk/hid_usage_pages.h>
#include <dt-bindings/zmk/keys.h>
#include <dt-bindings/zmk/modifiers.h>

/*
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ ^ │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ ß │ ´ │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │ Q │ W │ E │ R │ T │ Z │ U │ I │ O │ P │ Ü │ + │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │ A │ S │ D │ F │ G │ H │ J │ K │ L │ Ö │ Ä │ # │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ < │ Y │ X │ C │ V │ B │ N │ M │ , │ . │ - │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */

// clang-format off
// @TODO DIA
// Row_1
#define DE_CRRT  GRAVE        // ^ (dead)
// N1-N0    same
#define DE_SS    MINUS        // ß
#define DE_ACUT  EQUAL        // `

#define DE_DEGR  LS(GRAVE)    // ° (dead)
#define DE_EXCL  LS(N1)       // !
#define DE_DQT   LS(N2)       // "
#define DE_SECT  LS(N3)       // §
#define DE_DLLR  LS(N4)       // $
#define DE_PRCNT LS(N5)       // %
#define DE_AMPS  LS(N6)       // &
#define DE_FSLH  LS(N7)       // /
#define DE_LPAR  LS(N8)       // (
#define DE_RPAR  LS(N9)       // )
#define DE_EQUAL LS(N0)       // =
#define DE_QMARK LS(DE_SS)    // ?
#define DE_GRAVE LS(DE_ACUT)  // ` (dead)

#define DE_SUP2  RA(N2)       // ²
#define DE_SUP3  RA(N3)       // ³
#define DE_LBRC  RA(N7)       // {
#define DE_LBKT  RA(N8)       // [
#define DE_RBKT  RA(N9)       // ]
#define DE_RBRC  RA(N0)       // }
#define DE_BSLH  RA(DE_SS)    // \ (backslash)

// Row_2
#define DE_Q     Q
#define DE_E     E
#define DE_Z     Y
#define DE_UDIA  LBKT         // Ü
#define DE_PLUS  RBKT         // +

#define DE_ASTRK LS(DE_PLUS)  // *

#define DE_AT    RA(DE_Q)     // @
#define DE_EURO  RA(DE_E)     // €
#define DE_TILD  RA(DE_PLUS)  // ~


// Row_3
#define DE_ODIA  SEMI         // Ö
#define DE_ADIA  SQT          // Ä
#define DE_HASH  NUHS         // #
#define DE_SQT   LS(DE_HASH)  // '
#define DE_MICR  RA(DE_M)     // µ

// Row_4
#define DE_LT    NUBS         // <
#define DE_GT    LS(DE_LT)    // >
#define DE_PIPE  RA(DE_LT)    // |

#define DE_Y     Z

#define DE_COMMA COMMA        // ,
#define DE_DOT   DOT          // .
#define DE_MINUS FSLH         // -

#define DE_SEMI  LS(SI_COMMA) // ;
#define DE_COLON LS(SI_DOT)   // :
#define DE_UNDER LS(SI_MINUS) // _

// needed due to shifting lower case ones selects a different layer currently
#define DE_ADIA_C LS(DE_ADIA)
#define DE_ODIA_C LS(DE_ODIA)
#define DE_UDIA_C LS(DE_UDIA)

