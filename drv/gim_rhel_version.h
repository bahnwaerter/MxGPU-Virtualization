/*
 * Copyright (c) 2021 Manuel Bentele. All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE
 */

/* define RHEL_KERNEL macro if kernel source is RHEL source */
#if defined(RHEL_RELEASE_CODE) && defined(RHEL_RELEASE_VERSION)
#define RHEL_KERNEL
#else
#undef RHEL_KERNEL
#endif

/* define RHEL_CHECK_VERSION macro to check CentOS version */
#ifdef RHEL_KERNEL
#define RHEL_CHECK_VERSION(CONDITION) (CONDITION)
#else
#define RHEL_CHECK_VERSION(CONDITION) (0)
#endif
