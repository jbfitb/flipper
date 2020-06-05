/*
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#ifndef SKMACROS_H
#define SKMACROS_H

#ifndef FB_SK_MACROS_H
#define FB_SK_MACROS_H
#define FB_LINK_REQUIRE_(NAME)
#define FB_LINKABLE(NAME)
#define FB_LINK_REQUIRE_CATEGORY(NAME)
#endif

#ifdef __cplusplus
#define SK_EXTERN_C_BEGIN extern "C" {
#define SK_EXTERN_C_END }
#define SK_EXTERN_C extern "C"
#else
#define SK_EXTERN_C_BEGIN
#define SK_EXTERN_C_END
#define SK_EXTERN_C extern
#endif

#define SKLog(...) NSLog(__VA_ARGS__)
#define SKTrace(...) /*NSLog(__VA_ARGS__)*/

#endif
