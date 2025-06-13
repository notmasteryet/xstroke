/* matrix.h -- Fixed-point 2D linear algebra operations with matrices

   Copyright 2001 Carl Worth

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
*/

#ifndef MATRIX_H
#define MATRIX_H

struct matrix
{
    int precision_bits;
    long int m[3][3];
};
typedef struct matrix matrix_t;

int matrix_init(matrix_t *matrix, int precision);

void matrix_set_explicit(matrix_t *matrix,
			 float m00, float m01, float m02,
			 float m10, float m11, float m12,
			 float m20, float m21, float m22);
void matrix_set_identity(matrix_t *matrix);
void matrix_set_translate(matrix_t *matrix, float x_off, float y_off);
void matrix_set_scale(matrix_t *matrix, float x_scale, float y_scale);
void matrix_set_rotate(matrix_t *matrix, float theta);
void matrix_set_rotate_about(matrix_t *matrix, float theta, float x, float y);

void matrix_copy(matrix_t *dest, matrix_t *src);
void matrix_multiply(matrix_t *result, matrix_t *a, matrix_t *b);

#endif

