/* patterns.h
 *
 * Copyright 2020 Stephan Verbücheln
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
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



/*
 *  Returns the length of the longest sequence (“abc”, “321” or “aaa”) in a
 *  string.
 */
int find_seq(char *str);



/*
 *  Returns the entropy of a sequence string.
 *
 *  char c:   first character
 *  int len:  length of the sequence
 */
double rate_seq(char c, int len);



/*
 *  Returns how many of the first characters of a string resemble a keyboard
 *  pattern.
 */
int find_kbp(char *str);



/*
 *  Returns the entropy of a keyboard pattern.
 */
double rate_kbp(int len);



