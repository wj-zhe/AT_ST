/* Copyright 2018-2020 ENDO Katsuhiro <ka2hiro@curlybracket.co.jp> David Philip Barr <@davidphilipbarr> Pierre Chevalier <pierrechevalier83@gmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "quantum.h"

/* This a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */

// readability
#define LAYOUT_split_3x5_5( \
        L01, L02, L03, L04, L05,           R01, R02, R03, R04, R05, \
        L11, L12, L13, L14, L15,           R11, R12, R13, R14, R15, \
        L21, L22, L23, L24, L25,           R21, R22, R23, R24, R25, \
             L31, L32, L33, L34, L35, R31, R32, R33, R34, R35 \
    ) \
    { \
        { L01, L02, L03, L04, L05 }, \
        { L11, L12, L13, L14, L15 }, \
        { L21, L22, L23, L24, L25 }, \
        { L31, L32, L33, L34, L35 }, \
        { R05, R04, R03, R02, R01 }, \
        { R15, R14, R13, R12, R11 }, \
        { R25, R24, R23, R22, R21 }, \
        { R35, R34, R33, R32, R31 } \
    }

#define LAYOUT LAYOUT_split_3x5_5
