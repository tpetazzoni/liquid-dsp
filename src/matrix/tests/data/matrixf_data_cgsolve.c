/*
 * Copyright (c) 2013 Joseph Gaeddert
 *
 * This file is part of liquid.
 *
 * liquid is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * liquid is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with liquid.  If not, see <http://www.gnu.org/licenses/>.
 */

//
// data for testing conjugate gradient solver
//

#include <complex.h>

// matrixf_data_cgsolve_A [size: 8 x 8]
float matrixf_data_cgsolve_A[] = {
    4.163190000000 /* ( 0, 0) */,
    1.534470000000 /* ( 0, 1) */,
    2.327690000000 /* ( 0, 2) */,
    3.431100000000 /* ( 0, 3) */,
   -3.009010000000 /* ( 0, 4) */,
    1.020080000000 /* ( 0, 5) */,
   -1.360040000000 /* ( 0, 6) */,
    0.776120000000 /* ( 0, 7) */,
    1.534470000000 /* ( 1, 0) */,
    1.041640000000 /* ( 1, 1) */,
    0.657840000000 /* ( 1, 2) */,
    1.876610000000 /* ( 1, 3) */,
   -1.778690000000 /* ( 1, 4) */,
    1.094780000000 /* ( 1, 5) */,
   -0.235650000000 /* ( 1, 6) */,
   -0.322290000000 /* ( 1, 7) */,
    2.327690000000 /* ( 2, 0) */,
    0.657840000000 /* ( 2, 1) */,
    1.869320000000 /* ( 2, 2) */,
    2.202240000000 /* ( 2, 3) */,
   -1.311190000000 /* ( 2, 4) */,
    0.511230000000 /* ( 2, 5) */,
   -1.316800000000 /* ( 2, 6) */,
    1.058880000000 /* ( 2, 7) */,
    3.431100000000 /* ( 3, 0) */,
    1.876610000000 /* ( 3, 1) */,
    2.202240000000 /* ( 3, 2) */,
    4.428980000000 /* ( 3, 3) */,
   -2.902630000000 /* ( 3, 4) */,
    2.081700000000 /* ( 3, 5) */,
   -1.420080000000 /* ( 3, 6) */,
   -0.287380000000 /* ( 3, 7) */,
   -3.009010000000 /* ( 4, 0) */,
   -1.778690000000 /* ( 4, 1) */,
   -1.311190000000 /* ( 4, 2) */,
   -2.902630000000 /* ( 4, 3) */,
    7.140140000000 /* ( 4, 4) */,
   -1.264740000000 /* ( 4, 5) */,
   -0.417690000000 /* ( 4, 6) */,
   -3.280670000000 /* ( 4, 7) */,
    1.020080000000 /* ( 5, 0) */,
    1.094780000000 /* ( 5, 1) */,
    0.511230000000 /* ( 5, 2) */,
    2.081700000000 /* ( 5, 3) */,
   -1.264740000000 /* ( 5, 4) */,
    3.654840000000 /* ( 5, 5) */,
    1.826470000000 /* ( 5, 6) */,
    0.765130000000 /* ( 5, 7) */,
   -1.360040000000 /* ( 6, 0) */,
   -0.235650000000 /* ( 6, 1) */,
   -1.316800000000 /* ( 6, 2) */,
   -1.420080000000 /* ( 6, 3) */,
   -0.417690000000 /* ( 6, 4) */,
    1.826470000000 /* ( 6, 5) */,
    6.864760000000 /* ( 6, 6) */,
    4.086550000000 /* ( 6, 7) */,
    0.776120000000 /* ( 7, 0) */,
   -0.322290000000 /* ( 7, 1) */,
    1.058880000000 /* ( 7, 2) */,
   -0.287380000000 /* ( 7, 3) */,
   -3.280670000000 /* ( 7, 4) */,
    0.765130000000 /* ( 7, 5) */,
    4.086550000000 /* ( 7, 6) */,
    8.143900000000 /* ( 7, 7) */};

// matrixf_data_cgsolve_x [size: 8 x 1]
float matrixf_data_cgsolve_x[] = {
    0.086528000000 /* ( 0, 0) */,
    0.015093000000 /* ( 1, 0) */,
    0.154470000000 /* ( 2, 0) */,
    0.242815000000 /* ( 3, 0) */,
    1.034852000000 /* ( 4, 0) */,
    0.238867000000 /* ( 5, 0) */,
    0.719467000000 /* ( 6, 0) */,
   -1.104567000000 /* ( 7, 0) */};

// matrixf_data_cgsolve_b [size: 8 x 1]
float matrixf_data_cgsolve_b[] = {
   -3.129923925050 /* ( 0, 0) */,
   -0.686943895110 /* ( 1, 0) */,
   -2.316939762590 /* ( 2, 0) */,
   -1.470000572730 /* ( 3, 0) */,
    9.215538150160 /* ( 4, 0) */,
    0.722376170960 /* ( 5, 0) */,
   -0.240324941090 /* ( 6, 0) */,
   -9.111512118290 /* ( 7, 0) */};

