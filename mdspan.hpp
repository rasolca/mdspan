#ifndef _MDSPAN_SINGLE_HEADER_INCLUDE_GUARD_
#define _MDSPAN_SINGLE_HEADER_INCLUDE_GUARD_

//BEGIN_FILE_INCLUDE: /home/runner/work/mdspan/mdspan/include/experimental/mdarray
//@HEADER
// ************************************************************************
//
//                        Kokkos v. 4.0
//       Copyright (2022) National Technology & Engineering
//               Solutions of Sandia, LLC (NTESS).
//
// Under the terms of Contract DE-NA0003525 with NTESS,
// the U.S. Government retains certain rights in this software.
//
// Part of Kokkos, under the Apache License v2.0 with LLVM Exceptions.
// See https://kokkos.org/LICENSE for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//@HEADER


#ifndef MDSPAN_IMPL_STANDARD_NAMESPACE
  #define MDSPAN_IMPL_STANDARD_NAMESPACE std
#endif

#ifndef MDSPAN_IMPL_PROPOSED_NAMESPACE
  #define MDSPAN_IMPL_PROPOSED_NAMESPACE experimental
#endif

//BEGIN_FILE_INCLUDE: /home/runner/work/mdspan/mdspan/include/experimental/mdspan
//@HEADER
// ************************************************************************
//
//                        Kokkos v. 4.0
//       Copyright (2022) National Technology & Engineering
//               Solutions of Sandia, LLC (NTESS).
//
// Under the terms of Contract DE-NA0003525 with NTESS,
// the U.S. Government retains certain rights in this software.
//
// Part of Kokkos, under the Apache License v2.0 with LLVM Exceptions.
// See https://kokkos.org/LICENSE for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//@HEADER


#ifndef MDSPAN_IMPL_STANDARD_NAMESPACE
  #define MDSPAN_IMPL_STANDARD_NAMESPACE std
#endif

#ifndef MDSPAN_IMPL_PROPOSED_NAMESPACE
  #define MDSPAN_IMPL_PROPOSED_NAMESPACE experimental
#endif

//BEGIN_FILE_INCLUDE: /home/runner/work/mdspan/mdspan/include/mdspan/mdspan.hpp
//@HEADER
// ************************************************************************
//
//                        Kokkos v. 4.0
//       Copyright (2022) National Technology & Engineering
//               Solutions of Sandia, LLC (NTESS).
//
// Under the terms of Contract DE-NA0003525 with NTESS,
// the U.S. Government retains certain rights in this software.
//
// Part of Kokkos, under the Apache License v2.0 with LLVM Exceptions.
// See https://kokkos.org/LICENSE for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//@HEADER

#ifndef MDSPAN_HPP_
#define MDSPAN_HPP_

#ifndef MDSPAN_IMPL_STANDARD_NAMESPACE
  #define MDSPAN_IMPL_STANDARD_NAMESPACE Kokkos
#endif

#ifndef MDSPAN_IMPL_PROPOSED_NAMESPACE
  #define MDSPAN_IMPL_PROPOSED_NAMESPACE Experimental
#endif

//BEGIN_FILE_INCLUDE: /home/runner/work/mdspan/mdspan/include/experimental/__p0009_bits/default_accessor.hpp
//@HEADER
// ************************************************************************
//
//                        Kokkos v. 4.0
//       Copyright (2022) National Technology & Engineering
//               Solutions of Sandia, LLC (NTESS).
//
// Under the terms of Contract DE-NA0003525 with NTESS,
// the U.S. Government retains certain rights in this software.
//
// Part of Kokkos, under the Apache License v2.0 with LLVM Exceptions.
// See https://kokkos.org/LICENSE for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//@HEADER

//BEGIN_FILE_INCLUDE: /home/runner/work/mdspan/mdspan/include/experimental/__p0009_bits/macros.hpp
//@HEADER
// ************************************************************************
//
//                        Kokkos v. 4.0
//       Copyright (2022) National Technology & Engineering
//               Solutions of Sandia, LLC (NTESS).
//
// Under the terms of Contract DE-NA0003525 with NTESS,
// the U.S. Government retains certain rights in this software.
//
// Part of Kokkos, under the Apache License v2.0 with LLVM Exceptions.
// See https://kokkos.org/LICENSE for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//@HEADER


//BEGIN_FILE_INCLUDE: /home/runner/work/mdspan/mdspan/include/experimental/__p0009_bits/config.hpp
//@HEADER
// ************************************************************************
//
//                        Kokkos v. 4.0
//       Copyright (2022) National Technology & Engineering
//               Solutions of Sandia, LLC (NTESS).
//
// Under the terms of Contract DE-NA0003525 with NTESS,
// the U.S. Government retains certain rights in this software.
//
// Part of Kokkos, under the Apache License v2.0 with LLVM Exceptions.
// See https://kokkos.org/LICENSE for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//@HEADER

#ifndef __has_include
#  define __has_include(x) 0
#endif

#if __has_include(<version>)
#  include <version>
#else
#  include <type_traits>
#  include <utility>
#endif

#ifdef _MSVC_LANG
#define _MDSPAN_CPLUSPLUS _MSVC_LANG
#else
#define _MDSPAN_CPLUSPLUS __cplusplus
#endif

#define MDSPAN_CXX_STD_14 201402L
#define MDSPAN_CXX_STD_17 201703L
#define MDSPAN_CXX_STD_20 202002L

#define MDSPAN_HAS_CXX_14 (_MDSPAN_CPLUSPLUS >= MDSPAN_CXX_STD_14)
#define MDSPAN_HAS_CXX_17 (_MDSPAN_CPLUSPLUS >= MDSPAN_CXX_STD_17)
#define MDSPAN_HAS_CXX_20 (_MDSPAN_CPLUSPLUS >= MDSPAN_CXX_STD_20)

static_assert(_MDSPAN_CPLUSPLUS >= MDSPAN_CXX_STD_14, "mdspan requires C++14 or later.");

#ifndef _MDSPAN_COMPILER_CLANG
#  if defined(__clang__)
#    define _MDSPAN_COMPILER_CLANG __clang__
#  endif
#endif

#if !defined(_MDSPAN_COMPILER_MSVC) && !defined(_MDSPAN_COMPILER_MSVC_CLANG)
#  if defined(_MSC_VER)
#    if !defined(_MDSPAN_COMPILER_CLANG)
#      define _MDSPAN_COMPILER_MSVC _MSC_VER
#    else
#      define _MDSPAN_COMPILER_MSVC_CLANG _MSC_VER
#    endif
#  endif
#endif

#ifndef _MDSPAN_COMPILER_INTEL
#  ifdef __INTEL_COMPILER
#    define _MDSPAN_COMPILER_INTEL __INTEL_COMPILER
#  endif
#endif

#ifndef _MDSPAN_COMPILER_APPLECLANG
#  ifdef __apple_build_version__
#    define _MDSPAN_COMPILER_APPLECLANG __apple_build_version__
#  endif
#endif

#ifndef _MDSPAN_HAS_CUDA
#  if defined(__CUDACC__)
#    define _MDSPAN_HAS_CUDA __CUDACC__
#  endif
#endif

#ifndef _MDSPAN_HAS_HIP
#  if defined(__HIPCC__)
#    define _MDSPAN_HAS_HIP __HIPCC__
#  endif
#endif

#ifndef _MDSPAN_HAS_SYCL
#  if defined(SYCL_LANGUAGE_VERSION)
#    define _MDSPAN_HAS_SYCL SYCL_LANGUAGE_VERSION
#  endif
#endif

#ifndef __has_cpp_attribute
#  define __has_cpp_attribute(x) 0
#endif

#ifndef _MDSPAN_PRESERVE_STANDARD_LAYOUT
// Preserve standard layout by default, but we're not removing the old version
// that turns this off until we're sure this doesn't have an unreasonable cost
// to the compiler or optimizer.
#  define _MDSPAN_PRESERVE_STANDARD_LAYOUT 1
#endif

#if !defined(_MDSPAN_USE_ATTRIBUTE_NO_UNIQUE_ADDRESS)
#  if ((__has_cpp_attribute(no_unique_address) >= 201803L) && \
       (!defined(__NVCC__) || MDSPAN_HAS_CXX_20) && \
       (!defined(_MDSPAN_COMPILER_MSVC) || MDSPAN_HAS_CXX_20))
#    define _MDSPAN_USE_ATTRIBUTE_NO_UNIQUE_ADDRESS 1
#    define _MDSPAN_NO_UNIQUE_ADDRESS [[no_unique_address]]
#  else
#    define _MDSPAN_NO_UNIQUE_ADDRESS
#  endif
#endif

// NVCC older than 11.6 chokes on the no-unique-address-emulation
// so just pretend to use it (to avoid the full blown EBO workaround
// which NVCC also doesn't like ...), and leave the macro empty
#ifndef _MDSPAN_NO_UNIQUE_ADDRESS
#  if defined(__NVCC__)
#    define _MDSPAN_USE_ATTRIBUTE_NO_UNIQUE_ADDRESS 1
#    define _MDSPAN_USE_FAKE_ATTRIBUTE_NO_UNIQUE_ADDRESS
#  endif
#  define _MDSPAN_NO_UNIQUE_ADDRESS
#endif

// AMDs HIP compiler seems to have issues with concepts
// it pretends concepts exist, but doesn't ship <concept>
#ifndef __HIPCC__
#ifndef _MDSPAN_USE_CONCEPTS
#  if defined(__cpp_concepts) && __cpp_concepts >= 201507L
#    define _MDSPAN_USE_CONCEPTS 1
#  endif
#endif
#endif

#ifndef _MDSPAN_USE_FOLD_EXPRESSIONS
#  if (defined(__cpp_fold_expressions) && __cpp_fold_expressions >= 201603L) \
          || (!defined(__cpp_fold_expressions) && MDSPAN_HAS_CXX_17)
#    define _MDSPAN_USE_FOLD_EXPRESSIONS 1
#  endif
#endif

#ifndef _MDSPAN_USE_INLINE_VARIABLES
#  if defined(__cpp_inline_variables) && __cpp_inline_variables >= 201606L \
         || (!defined(__cpp_inline_variables) && MDSPAN_HAS_CXX_17)
#    define _MDSPAN_USE_INLINE_VARIABLES 1
#  endif
#endif

#ifndef _MDSPAN_NEEDS_TRAIT_VARIABLE_TEMPLATE_BACKPORTS
#  if (!(defined(__cpp_lib_type_trait_variable_templates) && __cpp_lib_type_trait_variable_templates >= 201510L) \
          || !MDSPAN_HAS_CXX_17)
#    if !(defined(_MDSPAN_COMPILER_APPLECLANG) && MDSPAN_HAS_CXX_17)
#      define _MDSPAN_NEEDS_TRAIT_VARIABLE_TEMPLATE_BACKPORTS 1
#    endif
#  endif
#endif

#ifndef _MDSPAN_USE_VARIABLE_TEMPLATES
#  if (defined(__cpp_variable_templates) && __cpp_variable_templates >= 201304 && MDSPAN_HAS_CXX_17) \
        || (!defined(__cpp_variable_templates) && MDSPAN_HAS_CXX_17)
#    define _MDSPAN_USE_VARIABLE_TEMPLATES 1
#  endif
#endif // _MDSPAN_USE_VARIABLE_TEMPLATES

#ifndef _MDSPAN_USE_CONSTEXPR_14
#  if (defined(__cpp_constexpr) && __cpp_constexpr >= 201304) \
        || (!defined(__cpp_constexpr) && MDSPAN_HAS_CXX_14) \
        && (!(defined(__INTEL_COMPILER) && __INTEL_COMPILER <= 1700))
#    define _MDSPAN_USE_CONSTEXPR_14 1
#  endif
#endif

#ifndef _MDSPAN_USE_INTEGER_SEQUENCE
#  if defined(_MDSPAN_COMPILER_MSVC)
#    if (defined(__cpp_lib_integer_sequence) && __cpp_lib_integer_sequence >= 201304)
#      define _MDSPAN_USE_INTEGER_SEQUENCE 1
#    endif
#  endif
#endif
#ifndef _MDSPAN_USE_INTEGER_SEQUENCE
#  if (defined(__cpp_lib_integer_sequence) && __cpp_lib_integer_sequence >= 201304) \
        || (!defined(__cpp_lib_integer_sequence) && MDSPAN_HAS_CXX_14) \
        /* as far as I can tell, libc++ seems to think this is a C++11 feature... */ \
        || (defined(__GLIBCXX__) && __GLIBCXX__ > 20150422 && __GNUC__ < 5 && !defined(__INTEL_CXX11_MODE__))
     // several compilers lie about integer_sequence working properly unless the C++14 standard is used
#    define _MDSPAN_USE_INTEGER_SEQUENCE 1
#  elif defined(_MDSPAN_COMPILER_APPLECLANG) && MDSPAN_HAS_CXX_14
     // appleclang seems to be missing the __cpp_lib_... macros, but doesn't seem to lie about C++14 making
     // integer_sequence work
#    define _MDSPAN_USE_INTEGER_SEQUENCE 1
#  endif
#endif

#ifndef _MDSPAN_USE_RETURN_TYPE_DEDUCTION
#  if (defined(__cpp_return_type_deduction) && __cpp_return_type_deduction >= 201304) \
          || (!defined(__cpp_return_type_deduction) && MDSPAN_HAS_CXX_14)
#    define _MDSPAN_USE_RETURN_TYPE_DEDUCTION 1
#  endif
#endif

#ifndef _MDSPAN_USE_CLASS_TEMPLATE_ARGUMENT_DEDUCTION
#  if (!defined(__NVCC__) || (__CUDACC_VER_MAJOR__ >= 11 && __CUDACC_VER_MINOR__ >= 7)) && \
      ((defined(__cpp_deduction_guides) && __cpp_deduction_guides >= 201703) || \
       (!defined(__cpp_deduction_guides) && MDSPAN_HAS_CXX_17))
#    define _MDSPAN_USE_CLASS_TEMPLATE_ARGUMENT_DEDUCTION 1
#  endif
#endif

#ifndef _MDSPAN_USE_STANDARD_TRAIT_ALIASES
#  if (defined(__cpp_lib_transformation_trait_aliases) && __cpp_lib_transformation_trait_aliases >= 201304) \
          || (!defined(__cpp_lib_transformation_trait_aliases) && MDSPAN_HAS_CXX_14)
#    define _MDSPAN_USE_STANDARD_TRAIT_ALIASES 1
#  elif defined(_MDSPAN_COMPILER_APPLECLANG) && MDSPAN_HAS_CXX_14
     // appleclang seems to be missing the __cpp_lib_... macros, but doesn't seem to lie about C++14
#    define _MDSPAN_USE_STANDARD_TRAIT_ALIASES 1
#  endif
#endif

#ifndef _MDSPAN_DEFAULTED_CONSTRUCTORS_INHERITANCE_WORKAROUND
#  ifdef __GNUC__
#    if __GNUC__ < 9
#      define _MDSPAN_DEFAULTED_CONSTRUCTORS_INHERITANCE_WORKAROUND 1
#    endif
#  endif
#endif

#ifndef MDSPAN_CONDITIONAL_EXPLICIT
#  if MDSPAN_HAS_CXX_20 && !defined(_MDSPAN_COMPILER_MSVC)
#    define MDSPAN_CONDITIONAL_EXPLICIT(COND) explicit(COND)
#  else
#    define MDSPAN_CONDITIONAL_EXPLICIT(COND)
#  endif
#endif

#ifndef MDSPAN_USE_BRACKET_OPERATOR
#  if defined(__cpp_multidimensional_subscript)
#    define MDSPAN_USE_BRACKET_OPERATOR 1
#  else
#    define MDSPAN_USE_BRACKET_OPERATOR 0
#  endif
#endif

#ifndef MDSPAN_USE_PAREN_OPERATOR
#  if !MDSPAN_USE_BRACKET_OPERATOR
#    define MDSPAN_USE_PAREN_OPERATOR 1
#  else
#    define MDSPAN_USE_PAREN_OPERATOR 0
#  endif
#endif

#if MDSPAN_USE_BRACKET_OPERATOR
#  define __MDSPAN_OP(mds,...) mds[__VA_ARGS__]
// Corentins demo compiler for subscript chokes on empty [] call,
// though I believe the proposal supports it?
#ifdef MDSPAN_NO_EMPTY_BRACKET_OPERATOR
#  define __MDSPAN_OP0(mds) mds.accessor().access(mds.data_handle(),0)
#else
#  define __MDSPAN_OP0(mds) mds[]
#endif
#  define __MDSPAN_OP1(mds, a) mds[a]
#  define __MDSPAN_OP2(mds, a, b) mds[a,b]
#  define __MDSPAN_OP3(mds, a, b, c) mds[a,b,c]
#  define __MDSPAN_OP4(mds, a, b, c, d) mds[a,b,c,d]
#  define __MDSPAN_OP5(mds, a, b, c, d, e) mds[a,b,c,d,e]
#  define __MDSPAN_OP6(mds, a, b, c, d, e, f) mds[a,b,c,d,e,f]
#else
#  define __MDSPAN_OP(mds,...) mds(__VA_ARGS__)
#  define __MDSPAN_OP0(mds) mds()
#  define __MDSPAN_OP1(mds, a) mds(a)
#  define __MDSPAN_OP2(mds, a, b) mds(a,b)
#  define __MDSPAN_OP3(mds, a, b, c) mds(a,b,c)
#  define __MDSPAN_OP4(mds, a, b, c, d) mds(a,b,c,d)
#  define __MDSPAN_OP5(mds, a, b, c, d, e) mds(a,b,c,d,e)
#  define __MDSPAN_OP6(mds, a, b, c, d, e, f) mds(a,b,c,d,e,f)
#endif
//END_FILE_INCLUDE: /home/runner/work/mdspan/mdspan/include/experimental/__p0009_bits/config.hpp

#include <type_traits> // std::is_void

#ifndef _MDSPAN_HOST_DEVICE
#  if defined(_MDSPAN_HAS_CUDA) || defined(_MDSPAN_HAS_HIP)
#    define _MDSPAN_HOST_DEVICE __host__ __device__
#  else
#    define _MDSPAN_HOST_DEVICE
#  endif
#endif

#ifndef MDSPAN_FORCE_INLINE_FUNCTION
#  ifdef _MDSPAN_COMPILER_MSVC // Microsoft compilers
#    define MDSPAN_FORCE_INLINE_FUNCTION __forceinline _MDSPAN_HOST_DEVICE
#  else
#    define MDSPAN_FORCE_INLINE_FUNCTION __attribute__((always_inline)) _MDSPAN_HOST_DEVICE
#  endif
#endif

#ifndef MDSPAN_INLINE_FUNCTION
#  define MDSPAN_INLINE_FUNCTION inline _MDSPAN_HOST_DEVICE
#endif

#ifndef MDSPAN_FUNCTION
#  define MDSPAN_FUNCTION _MDSPAN_HOST_DEVICE
#endif

#ifdef _MDSPAN_HAS_HIP
#  define MDSPAN_DEDUCTION_GUIDE _MDSPAN_HOST_DEVICE
#else
#  define MDSPAN_DEDUCTION_GUIDE
#endif

// In CUDA defaulted functions do not need host device markup
#ifndef MDSPAN_INLINE_FUNCTION_DEFAULTED
#  define MDSPAN_INLINE_FUNCTION_DEFAULTED
#endif

//==============================================================================
// <editor-fold desc="Preprocessor helpers"> {{{1

#define MDSPAN_PP_COUNT(...) \
  _MDSPAN_PP_INTERNAL_EXPAND_ARGS_PRIVATE( \
    _MDSPAN_PP_INTERNAL_ARGS_AUGMENTER(__VA_ARGS__) \
  )

#define _MDSPAN_PP_INTERNAL_ARGS_AUGMENTER(...) unused, __VA_ARGS__
#define _MDSPAN_PP_INTERNAL_EXPAND(x) x
#define _MDSPAN_PP_INTERNAL_EXPAND_ARGS_PRIVATE(...) \
  _MDSPAN_PP_INTERNAL_EXPAND( \
    _MDSPAN_PP_INTERNAL_COUNT_PRIVATE( \
      __VA_ARGS__, 69, 68, 67, 66, 65, 64, 63, 62, 61, \
      60, 59, 58, 57, 56, 55, 54, 53, 52, 51, 50, 49,  \
      48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37,  \
      36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25,  \
      24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13,  \
      12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 \
    ) \
  )
# define _MDSPAN_PP_INTERNAL_COUNT_PRIVATE( \
         _1_, _2_, _3_, _4_, _5_, _6_, _7_, _8_, _9_, \
    _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, \
    _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, \
    _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, \
    _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, \
    _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, \
    _60, _61, _62, _63, _64, _65, _66, _67, _68, _69, \
    _70, count, ...) count \
    /**/

#define MDSPAN_PP_STRINGIFY_IMPL(x) #x
#define MDSPAN_PP_STRINGIFY(x) MDSPAN_PP_STRINGIFY_IMPL(x)

#define MDSPAN_PP_CAT_IMPL(x, y) x ## y
#define MDSPAN_PP_CAT(x, y) MDSPAN_PP_CAT_IMPL(x, y)

#define MDSPAN_PP_EVAL(X, ...) X(__VA_ARGS__)

#define MDSPAN_PP_REMOVE_PARENS_IMPL(...) __VA_ARGS__
#define MDSPAN_PP_REMOVE_PARENS(...) MDSPAN_PP_REMOVE_PARENS_IMPL __VA_ARGS__

#define MDSPAN_IMPL_STANDARD_NAMESPACE_STRING MDSPAN_PP_STRINGIFY(MDSPAN_IMPL_STANDARD_NAMESPACE)
#define MDSPAN_IMPL_PROPOSED_NAMESPACE_STRING MDSPAN_PP_STRINGIFY(MDSPAN_IMPL_STANDARD_NAMESPACE) "::" MDSPAN_PP_STRINGIFY(MDSPAN_IMPL_PROPOSED_NAMESPACE)

// </editor-fold> end Preprocessor helpers }}}1
//==============================================================================

//==============================================================================
// <editor-fold desc="Concept emulation"> {{{1

// These compatibility macros don't help with partial ordering, but they should do the trick
// for what we need to do with concepts in mdspan
#ifdef _MDSPAN_USE_CONCEPTS
#  define MDSPAN_CLOSE_ANGLE_REQUIRES(REQ) > requires REQ
#  define MDSPAN_FUNCTION_REQUIRES(PAREN_PREQUALS, FNAME, PAREN_PARAMS, QUALS, REQ) \
     MDSPAN_PP_REMOVE_PARENS(PAREN_PREQUALS) FNAME PAREN_PARAMS QUALS requires REQ \
     /**/
#else
#  define MDSPAN_CLOSE_ANGLE_REQUIRES(REQ) , typename ::std::enable_if<(REQ), int>::type = 0>
#  define MDSPAN_FUNCTION_REQUIRES(PAREN_PREQUALS, FNAME, PAREN_PARAMS, QUALS, REQ) \
     MDSPAN_TEMPLATE_REQUIRES( \
       class __function_requires_ignored=void, \
       (std::is_void<__function_requires_ignored>::value && REQ) \
     ) MDSPAN_PP_REMOVE_PARENS(PAREN_PREQUALS) FNAME PAREN_PARAMS QUALS \
     /**/
#endif

#if defined(_MDSPAN_COMPILER_MSVC) && (!defined(_MSVC_TRADITIONAL) || _MSVC_TRADITIONAL)
#  define MDSPAN_TEMPLATE_REQUIRES(...) \
      MDSPAN_PP_CAT( \
        MDSPAN_PP_CAT(MDSPAN_TEMPLATE_REQUIRES_, MDSPAN_PP_COUNT(__VA_ARGS__))\
        (__VA_ARGS__), \
      ) \
    /**/
#else
#  define MDSPAN_TEMPLATE_REQUIRES(...) \
    MDSPAN_PP_EVAL( \
        MDSPAN_PP_CAT(MDSPAN_TEMPLATE_REQUIRES_, MDSPAN_PP_COUNT(__VA_ARGS__)), \
        __VA_ARGS__ \
    ) \
    /**/
#endif

#define MDSPAN_TEMPLATE_REQUIRES_2(TP1, REQ) \
  template<TP1 \
    MDSPAN_CLOSE_ANGLE_REQUIRES(REQ) \
    /**/
#define MDSPAN_TEMPLATE_REQUIRES_3(TP1, TP2, REQ) \
  template<TP1, TP2 \
    MDSPAN_CLOSE_ANGLE_REQUIRES(REQ) \
    /**/
#define MDSPAN_TEMPLATE_REQUIRES_4(TP1, TP2, TP3, REQ) \
  template<TP1, TP2, TP3 \
    MDSPAN_CLOSE_ANGLE_REQUIRES(REQ) \
    /**/
#define MDSPAN_TEMPLATE_REQUIRES_5(TP1, TP2, TP3, TP4, REQ) \
  template<TP1, TP2, TP3, TP4 \
    MDSPAN_CLOSE_ANGLE_REQUIRES(REQ) \
    /**/
#define MDSPAN_TEMPLATE_REQUIRES_6(TP1, TP2, TP3, TP4, TP5, REQ) \
  template<TP1, TP2, TP3, TP4, TP5 \
    MDSPAN_CLOSE_ANGLE_REQUIRES(REQ) \
    /**/
#define MDSPAN_TEMPLATE_REQUIRES_7(TP1, TP2, TP3, TP4, TP5, TP6, REQ) \
  template<TP1, TP2, TP3, TP4, TP5, TP6 \
    MDSPAN_CLOSE_ANGLE_REQUIRES(REQ) \
    /**/
#define MDSPAN_TEMPLATE_REQUIRES_8(TP1, TP2, TP3, TP4, TP5, TP6, TP7, REQ) \
  template<TP1, TP2, TP3, TP4, TP5, TP6, TP7 \
    MDSPAN_CLOSE_ANGLE_REQUIRES(REQ) \
    /**/
#define MDSPAN_TEMPLATE_REQUIRES_9(TP1, TP2, TP3, TP4, TP5, TP6, TP7, TP8, REQ) \
  template<TP1, TP2, TP3, TP4, TP5, TP6, TP7, TP8 \
    MDSPAN_CLOSE_ANGLE_REQUIRES(REQ) \
    /**/
#define MDSPAN_TEMPLATE_REQUIRES_10(TP1, TP2, TP3, TP4, TP5, TP6, TP7, TP8, TP9, REQ) \
  template<TP1, TP2, TP3, TP4, TP5, TP6, TP7, TP8, TP9 \
    MDSPAN_CLOSE_ANGLE_REQUIRES(REQ) \
    /**/
#define MDSPAN_TEMPLATE_REQUIRES_11(TP1, TP2, TP3, TP4, TP5, TP6, TP7, TP8, TP9, TP10, REQ) \
  template<TP1, TP2, TP3, TP4, TP5, TP6, TP7, TP8, TP9, TP10 \
    MDSPAN_CLOSE_ANGLE_REQUIRES(REQ) \
    /**/
#define MDSPAN_TEMPLATE_REQUIRES_12(TP1, TP2, TP3, TP4, TP5, TP6, TP7, TP8, TP9, TP10, TP11, REQ) \
  template<TP1, TP2, TP3, TP4, TP5, TP6, TP7, TP8, TP9, TP10, TP11 \
    MDSPAN_CLOSE_ANGLE_REQUIRES(REQ) \
    /**/
#define MDSPAN_TEMPLATE_REQUIRES_13(TP1, TP2, TP3, TP4, TP5, TP6, TP7, TP8, TP9, TP10, TP11, TP12, REQ) \
  template<TP1, TP2, TP3, TP4, TP5, TP6, TP7, TP8, TP9, TP10, TP11, TP12 \
    MDSPAN_CLOSE_ANGLE_REQUIRES(REQ) \
    /**/
#define MDSPAN_TEMPLATE_REQUIRES_14(TP1, TP2, TP3, TP4, TP5, TP6, TP7, TP8, TP9, TP10, TP11, TP12, TP13, REQ) \
  template<TP1, TP2, TP3, TP4, TP5, TP6, TP7, TP8, TP9, TP10, TP11, TP12, TP13 \
    MDSPAN_CLOSE_ANGLE_REQUIRES(REQ) \
    /**/
#define MDSPAN_TEMPLATE_REQUIRES_15(TP1, TP2, TP3, TP4, TP5, TP6, TP7, TP8, TP9, TP10, TP11, TP12, TP13, TP14, REQ) \
  template<TP1, TP2, TP3, TP4, TP5, TP6, TP7, TP8, TP9, TP10, TP11, TP12, TP13, TP14 \
    MDSPAN_CLOSE_ANGLE_REQUIRES(REQ) \
    /**/
#define MDSPAN_TEMPLATE_REQUIRES_16(TP1, TP2, TP3, TP4, TP5, TP6, TP7, TP8, TP9, TP10, TP11, TP12, TP13, TP14, TP15, REQ) \
  template<TP1, TP2, TP3, TP4, TP5, TP6, TP7, TP8, TP9, TP10, TP11, TP12, TP13, TP14, TP15 \
    MDSPAN_CLOSE_ANGLE_REQUIRES(REQ) \
    /**/
#define MDSPAN_TEMPLATE_REQUIRES_17(TP1, TP2, TP3, TP4, TP5, TP6, TP7, TP8, TP9, TP10, TP11, TP12, TP13, TP14, TP15, TP16, REQ) \
  template<TP1, TP2, TP3, TP4, TP5, TP6, TP7, TP8, TP9, TP10, TP11, TP12, TP13, TP14, TP15, TP16 \
    MDSPAN_CLOSE_ANGLE_REQUIRES(REQ) \
    /**/
#define MDSPAN_TEMPLATE_REQUIRES_18(TP1, TP2, TP3, TP4, TP5, TP6, TP7, TP8, TP9, TP10, TP11, TP12, TP13, TP14, TP15, TP16, TP17, REQ) \
  template<TP1, TP2, TP3, TP4, TP5, TP6, TP7, TP8, TP9, TP10, TP11, TP12, TP13, TP14, TP15, TP16, TP17 \
    MDSPAN_CLOSE_ANGLE_REQUIRES(REQ) \
    /**/
#define MDSPAN_TEMPLATE_REQUIRES_19(TP1, TP2, TP3, TP4, TP5, TP6, TP7, TP8, TP9, TP10, TP11, TP12, TP13, TP14, TP15, TP16, TP17, TP18, REQ) \
  template<TP1, TP2, TP3, TP4, TP5, TP6, TP7, TP8, TP9, TP10, TP11, TP12, TP13, TP14, TP15, TP16, TP17, TP18 \
    MDSPAN_CLOSE_ANGLE_REQUIRES(REQ) \
    /**/
#define MDSPAN_TEMPLATE_REQUIRES_20(TP1, TP2, TP3, TP4, TP5, TP6, TP7, TP8, TP9, TP10, TP11, TP12, TP13, TP14, TP15, TP16, TP17, TP18, TP19, REQ) \
  template<TP1, TP2, TP3, TP4, TP5, TP6, TP7, TP8, TP9, TP10, TP11, TP12, TP13, TP14, TP15, TP16, TP17, TP18, TP19 \
    MDSPAN_CLOSE_ANGLE_REQUIRES(REQ) \
    /**/

#define MDSPAN_INSTANTIATE_ONLY_IF_USED \
  MDSPAN_TEMPLATE_REQUIRES( \
    class __instantiate_only_if_used_tparam=void, \
    ( _MDSPAN_TRAIT(std::is_void, __instantiate_only_if_used_tparam) ) \
  ) \
  /**/

// </editor-fold> end Concept emulation }}}1
//==============================================================================

//==============================================================================
// <editor-fold desc="inline variables"> {{{1

#ifdef _MDSPAN_USE_INLINE_VARIABLES
#  define _MDSPAN_INLINE_VARIABLE inline
#else
#  define _MDSPAN_INLINE_VARIABLE
#endif

// </editor-fold> end inline variables }}}1
//==============================================================================

//==============================================================================
// <editor-fold desc="Return type deduction"> {{{1

#if _MDSPAN_USE_RETURN_TYPE_DEDUCTION
#  define _MDSPAN_DEDUCE_RETURN_TYPE_SINGLE_LINE(SIGNATURE, BODY) \
    auto MDSPAN_PP_REMOVE_PARENS(SIGNATURE) { return MDSPAN_PP_REMOVE_PARENS(BODY); }
#  define _MDSPAN_DEDUCE_DECLTYPE_AUTO_RETURN_TYPE_SINGLE_LINE(SIGNATURE, BODY) \
    decltype(auto) MDSPAN_PP_REMOVE_PARENS(SIGNATURE) { return MDSPAN_PP_REMOVE_PARENS(BODY); }
#else
#  define _MDSPAN_DEDUCE_RETURN_TYPE_SINGLE_LINE(SIGNATURE, BODY) \
    auto MDSPAN_PP_REMOVE_PARENS(SIGNATURE) \
      -> std::remove_cv_t<std::remove_reference_t<decltype(BODY)>> \
    { return MDSPAN_PP_REMOVE_PARENS(BODY); }
#  define _MDSPAN_DEDUCE_DECLTYPE_AUTO_RETURN_TYPE_SINGLE_LINE(SIGNATURE, BODY) \
    auto MDSPAN_PP_REMOVE_PARENS(SIGNATURE) \
      -> decltype(BODY) \
    { return MDSPAN_PP_REMOVE_PARENS(BODY); }

#endif

// </editor-fold> end Return type deduction }}}1
//==============================================================================

//==============================================================================
// <editor-fold desc="fold expressions"> {{{1

struct __mdspan_enable_fold_comma { };

#ifdef _MDSPAN_USE_FOLD_EXPRESSIONS
#  define _MDSPAN_FOLD_AND(...) ((__VA_ARGS__) && ...)
#  define _MDSPAN_FOLD_AND_TEMPLATE(...) ((__VA_ARGS__) && ...)
#  define _MDSPAN_FOLD_OR(...) ((__VA_ARGS__) || ...)
#  define _MDSPAN_FOLD_ASSIGN_LEFT(INIT, ...) (INIT = ... = (__VA_ARGS__))
#  define _MDSPAN_FOLD_ASSIGN_RIGHT(PACK, ...) (PACK = ... = (__VA_ARGS__))
#  define _MDSPAN_FOLD_TIMES_RIGHT(PACK, ...) (PACK * ... * (__VA_ARGS__))
#  define _MDSPAN_FOLD_PLUS_RIGHT(PACK, ...) (PACK + ... + (__VA_ARGS__))
#  define _MDSPAN_FOLD_COMMA(...) ((__VA_ARGS__), ...)
#else

namespace MDSPAN_IMPL_STANDARD_NAMESPACE {

namespace __fold_compatibility_impl {

// We could probably be more clever here, but at the (small) risk of losing some compiler understanding.  For the
// few operations we need, it's not worth generalizing over the operation

#if _MDSPAN_USE_RETURN_TYPE_DEDUCTION

MDSPAN_FORCE_INLINE_FUNCTION
constexpr decltype(auto) __fold_right_and_impl() {
  return true;
}

template <class Arg, class... Args>
MDSPAN_FORCE_INLINE_FUNCTION
constexpr decltype(auto) __fold_right_and_impl(Arg&& arg, Args&&... args) {
  return ((Arg&&)arg) && __fold_compatibility_impl::__fold_right_and_impl((Args&&)args...);
}

MDSPAN_FORCE_INLINE_FUNCTION
constexpr decltype(auto) __fold_right_or_impl() {
  return false;
}

template <class Arg, class... Args>
MDSPAN_FORCE_INLINE_FUNCTION
constexpr auto __fold_right_or_impl(Arg&& arg, Args&&... args) {
  return ((Arg&&)arg) || __fold_compatibility_impl::__fold_right_or_impl((Args&&)args...);
}

template <class Arg1>
MDSPAN_FORCE_INLINE_FUNCTION
constexpr auto __fold_left_assign_impl(Arg1&& arg1) {
  return (Arg1&&)arg1;
}

template <class Arg1, class Arg2, class... Args>
MDSPAN_FORCE_INLINE_FUNCTION
constexpr auto __fold_left_assign_impl(Arg1&& arg1, Arg2&& arg2, Args&&... args) {
  return __fold_compatibility_impl::__fold_left_assign_impl((((Arg1&&)arg1) = ((Arg2&&)arg2)), (Args&&)args...);
}

template <class Arg1>
MDSPAN_FORCE_INLINE_FUNCTION
constexpr auto __fold_right_assign_impl(Arg1&& arg1) {
  return (Arg1&&)arg1;
}

template <class Arg1, class Arg2, class... Args>
MDSPAN_FORCE_INLINE_FUNCTION
constexpr auto __fold_right_assign_impl(Arg1&& arg1, Arg2&& arg2,  Args&&... args) {
  return ((Arg1&&)arg1) = __fold_compatibility_impl::__fold_right_assign_impl((Arg2&&)arg2, (Args&&)args...);
}

template <class Arg1>
MDSPAN_FORCE_INLINE_FUNCTION
constexpr auto __fold_right_plus_impl(Arg1&& arg1) {
  return (Arg1&&)arg1;
}

template <class Arg1, class Arg2, class... Args>
MDSPAN_FORCE_INLINE_FUNCTION
constexpr auto __fold_right_plus_impl(Arg1&& arg1, Arg2&& arg2, Args&&... args) {
  return ((Arg1&&)arg1) + __fold_compatibility_impl::__fold_right_plus_impl((Arg2&&)arg2, (Args&&)args...);
}

template <class Arg1>
MDSPAN_FORCE_INLINE_FUNCTION
constexpr auto __fold_right_times_impl(Arg1&& arg1) {
  return (Arg1&&)arg1;
}

template <class Arg1, class Arg2, class... Args>
MDSPAN_FORCE_INLINE_FUNCTION
constexpr auto __fold_right_times_impl(Arg1&& arg1, Arg2&& arg2, Args&&... args) {
  return ((Arg1&&)arg1) * __fold_compatibility_impl::__fold_right_times_impl((Arg2&&)arg2, (Args&&)args...);
}

#else

//------------------------------------------------------------------------------
// <editor-fold desc="right and"> {{{2

template <class... Args>
struct __fold_right_and_impl_;
template <>
struct __fold_right_and_impl_<> {
  using __rv = bool;
  MDSPAN_FORCE_INLINE_FUNCTION
  static constexpr __rv
  __impl() noexcept {
    return true;
  }
};
template <class Arg, class... Args>
struct __fold_right_and_impl_<Arg, Args...> {
  using __next_t = __fold_right_and_impl_<Args...>;
  using __rv = decltype(std::declval<Arg>() && std::declval<typename __next_t::__rv>());
  MDSPAN_FORCE_INLINE_FUNCTION
  static constexpr __rv
  __impl(Arg&& arg, Args&&... args) noexcept {
    return ((Arg&&)arg) && __next_t::__impl((Args&&)args...);
  }
};

template <class... Args>
MDSPAN_FORCE_INLINE_FUNCTION
constexpr typename __fold_right_and_impl_<Args...>::__rv
__fold_right_and_impl(Args&&... args) {
  return __fold_right_and_impl_<Args...>::__impl((Args&&)args...);
}

// </editor-fold> end right and }}}2
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
// <editor-fold desc="right or"> {{{2

template <class... Args>
struct __fold_right_or_impl_;
template <>
struct __fold_right_or_impl_<> {
  using __rv = bool;
  MDSPAN_FORCE_INLINE_FUNCTION
  static constexpr __rv
  __impl() noexcept {
    return false;
  }
};
template <class Arg, class... Args>
struct __fold_right_or_impl_<Arg, Args...> {
  using __next_t = __fold_right_or_impl_<Args...>;
  using __rv = decltype(std::declval<Arg>() || std::declval<typename __next_t::__rv>());
  MDSPAN_FORCE_INLINE_FUNCTION
  static constexpr __rv
  __impl(Arg&& arg, Args&&... args) noexcept {
    return ((Arg&&)arg) || __next_t::__impl((Args&&)args...);
  }
};

template <class... Args>
MDSPAN_FORCE_INLINE_FUNCTION
constexpr typename __fold_right_or_impl_<Args...>::__rv
__fold_right_or_impl(Args&&... args) {
  return __fold_right_or_impl_<Args...>::__impl((Args&&)args...);
}

// </editor-fold> end right or }}}2
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
// <editor-fold desc="right plus"> {{{2

template <class... Args>
struct __fold_right_plus_impl_;
template <class Arg>
struct __fold_right_plus_impl_<Arg> {
  using __rv = Arg&&;
  MDSPAN_FORCE_INLINE_FUNCTION
  static constexpr __rv
  __impl(Arg&& arg) noexcept {
    return (Arg&&)arg;
  }
};
template <class Arg1, class Arg2, class... Args>
struct __fold_right_plus_impl_<Arg1, Arg2, Args...> {
  using __next_t = __fold_right_plus_impl_<Arg2, Args...>;
  using __rv = decltype(std::declval<Arg1>() + std::declval<typename __next_t::__rv>());
  MDSPAN_FORCE_INLINE_FUNCTION
  static constexpr __rv
  __impl(Arg1&& arg, Arg2&& arg2, Args&&... args) noexcept {
    return ((Arg1&&)arg) + __next_t::__impl((Arg2&&)arg2, (Args&&)args...);
  }
};

template <class... Args>
MDSPAN_FORCE_INLINE_FUNCTION
constexpr typename __fold_right_plus_impl_<Args...>::__rv
__fold_right_plus_impl(Args&&... args) {
  return __fold_right_plus_impl_<Args...>::__impl((Args&&)args...);
}

// </editor-fold> end right plus }}}2
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
// <editor-fold desc="right times"> {{{2

template <class... Args>
struct __fold_right_times_impl_;
template <class Arg>
struct __fold_right_times_impl_<Arg> {
  using __rv = Arg&&;
  MDSPAN_FORCE_INLINE_FUNCTION
  static constexpr __rv
  __impl(Arg&& arg) noexcept {
    return (Arg&&)arg;
  }
};
template <class Arg1, class Arg2, class... Args>
struct __fold_right_times_impl_<Arg1, Arg2, Args...> {
  using __next_t = __fold_right_times_impl_<Arg2, Args...>;
  using __rv = decltype(std::declval<Arg1>() * std::declval<typename __next_t::__rv>());
  MDSPAN_FORCE_INLINE_FUNCTION
  static constexpr __rv
  __impl(Arg1&& arg, Arg2&& arg2, Args&&... args) noexcept {
    return ((Arg1&&)arg) * __next_t::__impl((Arg2&&)arg2, (Args&&)args...);
  }
};

template <class... Args>
MDSPAN_FORCE_INLINE_FUNCTION
constexpr typename __fold_right_times_impl_<Args...>::__rv
__fold_right_times_impl(Args&&... args) {
  return __fold_right_times_impl_<Args...>::__impl((Args&&)args...);
}

// </editor-fold> end right times }}}2
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
// <editor-fold desc="right assign"> {{{2

template <class... Args>
struct __fold_right_assign_impl_;
template <class Arg>
struct __fold_right_assign_impl_<Arg> {
  using __rv = Arg&&;
  MDSPAN_FORCE_INLINE_FUNCTION
  static constexpr __rv
  __impl(Arg&& arg) noexcept {
    return (Arg&&)arg;
  }
};
template <class Arg1, class Arg2, class... Args>
struct __fold_right_assign_impl_<Arg1, Arg2, Args...> {
  using __next_t = __fold_right_assign_impl_<Arg2, Args...>;
  using __rv = decltype(std::declval<Arg1>() = std::declval<typename __next_t::__rv>());
  MDSPAN_FORCE_INLINE_FUNCTION
  static constexpr __rv
  __impl(Arg1&& arg, Arg2&& arg2, Args&&... args) noexcept {
    return ((Arg1&&)arg) = __next_t::__impl((Arg2&&)arg2, (Args&&)args...);
  }
};

template <class... Args>
MDSPAN_FORCE_INLINE_FUNCTION
constexpr typename __fold_right_assign_impl_<Args...>::__rv
__fold_right_assign_impl(Args&&... args) {
  return __fold_right_assign_impl_<Args...>::__impl((Args&&)args...);
}

// </editor-fold> end right assign }}}2
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
// <editor-fold desc="left assign"> {{{2

template <class... Args>
struct __fold_left_assign_impl_;
template <class Arg>
struct __fold_left_assign_impl_<Arg> {
  using __rv = Arg&&;
  MDSPAN_FORCE_INLINE_FUNCTION
  static constexpr __rv
  __impl(Arg&& arg) noexcept {
    return (Arg&&)arg;
  }
};
template <class Arg1, class Arg2, class... Args>
struct __fold_left_assign_impl_<Arg1, Arg2, Args...> {
  using __assign_result_t = decltype(std::declval<Arg1>() = std::declval<Arg2>());
  using __next_t = __fold_left_assign_impl_<__assign_result_t, Args...>;
  using __rv = typename __next_t::__rv;
  MDSPAN_FORCE_INLINE_FUNCTION
  static constexpr __rv
  __impl(Arg1&& arg, Arg2&& arg2, Args&&... args) noexcept {
    return __next_t::__impl(((Arg1&&)arg) = (Arg2&&)arg2, (Args&&)args...);
  }
};

template <class... Args>
MDSPAN_FORCE_INLINE_FUNCTION
constexpr typename __fold_left_assign_impl_<Args...>::__rv
__fold_left_assign_impl(Args&&... args) {
  return __fold_left_assign_impl_<Args...>::__impl((Args&&)args...);
}

// </editor-fold> end left assign }}}2
//------------------------------------------------------------------------------

#endif


template <class... Args>
constexpr __mdspan_enable_fold_comma __fold_comma_impl(Args&&... args) noexcept { return { }; }

template <bool... Bs>
struct __bools;

} // __fold_compatibility_impl

} // end namespace MDSPAN_IMPL_STANDARD_NAMESPACE

#  define _MDSPAN_FOLD_AND(...) MDSPAN_IMPL_STANDARD_NAMESPACE::__fold_compatibility_impl::__fold_right_and_impl((__VA_ARGS__)...)
#  define _MDSPAN_FOLD_OR(...) MDSPAN_IMPL_STANDARD_NAMESPACE::__fold_compatibility_impl::__fold_right_or_impl((__VA_ARGS__)...)
#  define _MDSPAN_FOLD_ASSIGN_LEFT(INIT, ...) MDSPAN_IMPL_STANDARD_NAMESPACE::__fold_compatibility_impl::__fold_left_assign_impl(INIT, (__VA_ARGS__)...)
#  define _MDSPAN_FOLD_ASSIGN_RIGHT(PACK, ...) MDSPAN_IMPL_STANDARD_NAMESPACE::__fold_compatibility_impl::__fold_right_assign_impl((PACK)..., __VA_ARGS__)
#  define _MDSPAN_FOLD_TIMES_RIGHT(PACK, ...) MDSPAN_IMPL_STANDARD_NAMESPACE::__fold_compatibility_impl::__fold_right_times_impl((PACK)..., __VA_ARGS__)
#  define _MDSPAN_FOLD_PLUS_RIGHT(PACK, ...) MDSPAN_IMPL_STANDARD_NAMESPACE::__fold_compatibility_impl::__fold_right_plus_impl((PACK)..., __VA_ARGS__)
#  define _MDSPAN_FOLD_COMMA(...) MDSPAN_IMPL_STANDARD_NAMESPACE::__fold_compatibility_impl::__fold_comma_impl((__VA_ARGS__)...)

#  define _MDSPAN_FOLD_AND_TEMPLATE(...) \
  _MDSPAN_TRAIT(std::is_same, __fold_compatibility_impl::__bools<(__VA_ARGS__)..., true>, __fold_compatibility_impl::__bools<true, (__VA_ARGS__)...>)

#endif

// </editor-fold> end fold expressions }}}1
//==============================================================================

//==============================================================================
// <editor-fold desc="Variable template compatibility"> {{{1

#if _MDSPAN_USE_VARIABLE_TEMPLATES
#  define _MDSPAN_TRAIT(TRAIT, ...) TRAIT##_v<__VA_ARGS__>
#else
#  define _MDSPAN_TRAIT(TRAIT, ...) TRAIT<__VA_ARGS__>::value
#endif

// </editor-fold> end Variable template compatibility }}}1
//==============================================================================

//==============================================================================
// <editor-fold desc="Pre-C++14 constexpr"> {{{1

#if _MDSPAN_USE_CONSTEXPR_14
#  define _MDSPAN_CONSTEXPR_14 constexpr
// Workaround for a bug (I think?) in EDG frontends
#  ifdef __EDG__
#    define _MDSPAN_CONSTEXPR_14_DEFAULTED
#  else
#    define _MDSPAN_CONSTEXPR_14_DEFAULTED constexpr
#  endif
#else
#  define _MDSPAN_CONSTEXPR_14
#  define _MDSPAN_CONSTEXPR_14_DEFAULTED
#endif

// </editor-fold> end Pre-C++14 constexpr }}}1
//==============================================================================
//END_FILE_INCLUDE: /home/runner/work/mdspan/mdspan/include/experimental/__p0009_bits/macros.hpp

#include <cstddef> // size_t

namespace MDSPAN_IMPL_STANDARD_NAMESPACE {

template <class ElementType>
struct default_accessor {

  using offset_policy = default_accessor;
  using element_type = ElementType;
  using reference = ElementType&;
  using data_handle_type = ElementType*;

  MDSPAN_INLINE_FUNCTION_DEFAULTED constexpr default_accessor() noexcept = default;

  MDSPAN_TEMPLATE_REQUIRES(
    class OtherElementType,
    /* requires */ (
      _MDSPAN_TRAIT(std::is_convertible, OtherElementType(*)[], element_type(*)[])
    )
  )
  MDSPAN_INLINE_FUNCTION
  constexpr default_accessor(default_accessor<OtherElementType>) noexcept {}

  MDSPAN_INLINE_FUNCTION
  constexpr data_handle_type
  offset(data_handle_type p, size_t i) const noexcept {
    return p + i;
  }

  MDSPAN_FORCE_INLINE_FUNCTION
  constexpr reference access(data_handle_type p, size_t i) const noexcept {
    return p[i];
  }

};

} // end namespace MDSPAN_IMPL_STANDARD_NAMESPACE
//END_FILE_INCLUDE: /home/runner/work/mdspan/mdspan/include/experimental/__p0009_bits/default_accessor.hpp
//BEGIN_FILE_INCLUDE: /home/runner/work/mdspan/mdspan/include/experimental/__p0009_bits/full_extent_t.hpp
//@HEADER
// ************************************************************************
//
//                        Kokkos v. 4.0
//       Copyright (2022) National Technology & Engineering
//               Solutions of Sandia, LLC (NTESS).
//
// Under the terms of Contract DE-NA0003525 with NTESS,
// the U.S. Government retains certain rights in this software.
//
// Part of Kokkos, under the Apache License v2.0 with LLVM Exceptions.
// See https://kokkos.org/LICENSE for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//@HEADER


namespace MDSPAN_IMPL_STANDARD_NAMESPACE {

struct full_extent_t { explicit full_extent_t() = default; };

_MDSPAN_INLINE_VARIABLE constexpr auto full_extent = full_extent_t{ };

} // namespace MDSPAN_IMPL_STANDARD_NAMESPACE
//END_FILE_INCLUDE: /home/runner/work/mdspan/mdspan/include/experimental/__p0009_bits/full_extent_t.hpp
//BEGIN_FILE_INCLUDE: /home/runner/work/mdspan/mdspan/include/experimental/__p0009_bits/mdspan.hpp
//@HEADER
// ************************************************************************
//
//                        Kokkos v. 4.0
//       Copyright (2022) National Technology & Engineering
//               Solutions of Sandia, LLC (NTESS).
//
// Under the terms of Contract DE-NA0003525 with NTESS,
// the U.S. Government retains certain rights in this software.
//
// Part of Kokkos, under the Apache License v2.0 with LLVM Exceptions.
// See https://kokkos.org/LICENSE for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//@HEADER


//BEGIN_FILE_INCLUDE: /home/runner/work/mdspan/mdspan/include/experimental/__p0009_bits/layout_right.hpp
//@HEADER
// ************************************************************************
//
//                        Kokkos v. 4.0
//       Copyright (2022) National Technology & Engineering
//               Solutions of Sandia, LLC (NTESS).
//
// Under the terms of Contract DE-NA0003525 with NTESS,
// the U.S. Government retains certain rights in this software.
//
// Part of Kokkos, under the Apache License v2.0 with LLVM Exceptions.
// See https://kokkos.org/LICENSE for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//@HEADER

//BEGIN_FILE_INCLUDE: /home/runner/work/mdspan/mdspan/include/experimental/__p0009_bits/trait_backports.hpp
//@HEADER
// ************************************************************************
//
//                        Kokkos v. 4.0
//       Copyright (2022) National Technology & Engineering
//               Solutions of Sandia, LLC (NTESS).
//
// Under the terms of Contract DE-NA0003525 with NTESS,
// the U.S. Government retains certain rights in this software.
//
// Part of Kokkos, under the Apache License v2.0 with LLVM Exceptions.
// See https://kokkos.org/LICENSE for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//@HEADER
#ifndef MDSPAN_INCLUDE_EXPERIMENTAL_BITS_TRAIT_BACKPORTS_HPP_
#define MDSPAN_INCLUDE_EXPERIMENTAL_BITS_TRAIT_BACKPORTS_HPP_


#include <type_traits>
#include <utility> // integer_sequence

//==============================================================================
// <editor-fold desc="Variable template trait backports (e.g., is_void_v)"> {{{1

#ifdef _MDSPAN_NEEDS_TRAIT_VARIABLE_TEMPLATE_BACKPORTS

#if _MDSPAN_USE_VARIABLE_TEMPLATES
namespace MDSPAN_IMPL_STANDARD_NAMESPACE {

#define _MDSPAN_BACKPORT_TRAIT(TRAIT) \
  template <class... Args> _MDSPAN_INLINE_VARIABLE constexpr auto TRAIT##_v = TRAIT<Args...>::value;

_MDSPAN_BACKPORT_TRAIT(is_assignable)
_MDSPAN_BACKPORT_TRAIT(is_constructible)
_MDSPAN_BACKPORT_TRAIT(is_convertible)
_MDSPAN_BACKPORT_TRAIT(is_default_constructible)
_MDSPAN_BACKPORT_TRAIT(is_trivially_destructible)
_MDSPAN_BACKPORT_TRAIT(is_same)
_MDSPAN_BACKPORT_TRAIT(is_empty)
_MDSPAN_BACKPORT_TRAIT(is_void)

#undef _MDSPAN_BACKPORT_TRAIT

} // end namespace MDSPAN_IMPL_STANDARD_NAMESPACE

#endif // _MDSPAN_USE_VARIABLE_TEMPLATES

#endif // _MDSPAN_NEEDS_TRAIT_VARIABLE_TEMPLATE_BACKPORTS

// </editor-fold> end Variable template trait backports (e.g., is_void_v) }}}1
//==============================================================================

//==============================================================================
// <editor-fold desc="integer sequence (ugh...)"> {{{1

#if !defined(_MDSPAN_USE_INTEGER_SEQUENCE) || !_MDSPAN_USE_INTEGER_SEQUENCE

namespace MDSPAN_IMPL_STANDARD_NAMESPACE {

template <class T, T... Vals>
struct integer_sequence {
  static constexpr size_t size() noexcept { return sizeof...(Vals); }
  using value_type = T;
};

template <size_t... Vals>
using index_sequence = std::integer_sequence<size_t, Vals...>;

namespace __detail {

template <class T, T N, T I, class Result>
struct __make_int_seq_impl;

template <class T, T N, T... Vals>
struct __make_int_seq_impl<T, N, N, integer_sequence<T, Vals...>>
{
  using type = integer_sequence<T, Vals...>;
};

template <class T, T N, T I, T... Vals>
struct __make_int_seq_impl<
  T, N, I, integer_sequence<T, Vals...>
> : __make_int_seq_impl<T, N, I+1, integer_sequence<T, Vals..., I>>
{ };

} // end namespace __detail

template <class T, T N>
using make_integer_sequence = typename __detail::__make_int_seq_impl<T, N, 0, integer_sequence<T>>::type;

template <size_t N>
using make_index_sequence = typename __detail::__make_int_seq_impl<size_t, N, 0, integer_sequence<size_t>>::type;

template <class... T>
using index_sequence_for = make_index_sequence<sizeof...(T)>;

} // end namespace MDSPAN_IMPL_STANDARD_NAMESPACE

#endif

// </editor-fold> end integer sequence (ugh...) }}}1
//==============================================================================

//==============================================================================
// <editor-fold desc="standard trait aliases"> {{{1

#if !defined(_MDSPAN_USE_STANDARD_TRAIT_ALIASES) || !_MDSPAN_USE_STANDARD_TRAIT_ALIASES

namespace MDSPAN_IMPL_STANDARD_NAMESPACE {

#define _MDSPAN_BACKPORT_TRAIT_ALIAS(TRAIT) \
  template <class... Args> using TRAIT##_t = typename TRAIT<Args...>::type;

_MDSPAN_BACKPORT_TRAIT_ALIAS(remove_cv)
_MDSPAN_BACKPORT_TRAIT_ALIAS(remove_reference)

template <bool _B, class _T=void>
using enable_if_t = typename enable_if<_B, _T>::type;

#undef _MDSPAN_BACKPORT_TRAIT_ALIAS

} // end namespace MDSPAN_IMPL_STANDARD_NAMESPACE

#endif

// </editor-fold> end standard trait aliases }}}1
//==============================================================================

#endif //MDSPAN_INCLUDE_EXPERIMENTAL_BITS_TRAIT_BACKPORTS_HPP_
//END_FILE_INCLUDE: /home/runner/work/mdspan/mdspan/include/experimental/__p0009_bits/trait_backports.hpp
//BEGIN_FILE_INCLUDE: /home/runner/work/mdspan/mdspan/include/experimental/__p0009_bits/extents.hpp
//@HEADER
// ************************************************************************
//
//                        Kokkos v. 4.0
//       Copyright (2022) National Technology & Engineering
//               Solutions of Sandia, LLC (NTESS).
//
// Under the terms of Contract DE-NA0003525 with NTESS,
// the U.S. Government retains certain rights in this software.
//
// Part of Kokkos, under the Apache License v2.0 with LLVM Exceptions.
// See https://kokkos.org/LICENSE for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//@HEADER

//BEGIN_FILE_INCLUDE: /home/runner/work/mdspan/mdspan/include/experimental/__p0009_bits/dynamic_extent.hpp
//@HEADER
// ************************************************************************
//
//                        Kokkos v. 4.0
//       Copyright (2022) National Technology & Engineering
//               Solutions of Sandia, LLC (NTESS).
//
// Under the terms of Contract DE-NA0003525 with NTESS,
// the U.S. Government retains certain rights in this software.
//
// Part of Kokkos, under the Apache License v2.0 with LLVM Exceptions.
// See https://kokkos.org/LICENSE for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//@HEADER


#if defined(__cpp_lib_span)
#include <span>
#endif

#include <cstddef>  // size_t
#include <limits>   // numeric_limits

namespace MDSPAN_IMPL_STANDARD_NAMESPACE {
#if defined(__cpp_lib_span)
using std::dynamic_extent;
#else
_MDSPAN_INLINE_VARIABLE constexpr auto dynamic_extent = std::numeric_limits<size_t>::max();
#endif
} // namespace MDSPAN_IMPL_STANDARD_NAMESPACE

//==============================================================================================================
//END_FILE_INCLUDE: /home/runner/work/mdspan/mdspan/include/experimental/__p0009_bits/dynamic_extent.hpp

#ifdef __cpp_lib_span
#include <span>
#endif
#include <array>

#include <cinttypes>

namespace MDSPAN_IMPL_STANDARD_NAMESPACE {
namespace detail {

// Function used to check compatibility of extents in converting constructor
// can't be a private member function for some reason.
template <size_t... Extents, size_t... OtherExtents>
static constexpr std::integral_constant<bool, false> __check_compatible_extents(
    std::integral_constant<bool, false>,
    std::integer_sequence<size_t, Extents...>,
    std::integer_sequence<size_t, OtherExtents...>) noexcept {
  return {};
}

// This helper prevents ICE's on MSVC.
template <size_t Lhs, size_t Rhs>
struct __compare_extent_compatible : std::integral_constant<bool,
     Lhs == dynamic_extent ||
     Rhs == dynamic_extent ||
     Lhs == Rhs>
{};

template <size_t... Extents, size_t... OtherExtents>
static constexpr std::integral_constant<
    bool, _MDSPAN_FOLD_AND(__compare_extent_compatible<Extents, OtherExtents>::value)>
__check_compatible_extents(
    std::integral_constant<bool, true>,
    std::integer_sequence<size_t, Extents...>,
    std::integer_sequence<size_t, OtherExtents...>) noexcept {
  return {};
}

// ------------------------------------------------------------------
// ------------ static_array ----------------------------------------
// ------------------------------------------------------------------

// array like class which provides an array of static values with get
// function and operator [].

// Implementation of Static Array with recursive implementation of get.
template <size_t R, class T, T... Extents> struct static_array_impl;

template <size_t R, class T, T FirstExt, T... Extents>
struct static_array_impl<R, T, FirstExt, Extents...> {
  MDSPAN_INLINE_FUNCTION
  constexpr static T get(size_t r) {
    if (r == R)
      return FirstExt;
    else
      return static_array_impl<R + 1, T, Extents...>::get(r);
  }
  template <size_t r> MDSPAN_INLINE_FUNCTION constexpr static T get() {
#if MDSPAN_HAS_CXX_17
    if constexpr (r == R)
      return FirstExt;
    else
      return static_array_impl<R + 1, T, Extents...>::template get<r>();
#else
    get(r);
#endif
  }
};

// End the recursion
template <size_t R, class T, T FirstExt>
struct static_array_impl<R, T, FirstExt> {
  MDSPAN_INLINE_FUNCTION
  constexpr static T get(size_t) { return FirstExt; }
  template <size_t> MDSPAN_INLINE_FUNCTION constexpr static T get() {
    return FirstExt;
  }
};

// Don't start recursion if size 0
template <class T> struct static_array_impl<0, T> {
  MDSPAN_INLINE_FUNCTION
  constexpr static T get(size_t) { return T(); }
  template <size_t> MDSPAN_INLINE_FUNCTION constexpr static T get() {
    return T();
  }
};

// Static array, provides get<r>(), get(r) and operator[r]
template <class T, T... Values> struct static_array:
  public static_array_impl<0, T, Values...>  {

public:
  using value_type = T;

  MDSPAN_INLINE_FUNCTION
  constexpr static size_t size() { return sizeof...(Values); }
};


// ------------------------------------------------------------------
// ------------ index_sequence_scan ---------------------------------
// ------------------------------------------------------------------

// index_sequence_scan takes compile time values and provides get(r)
// and get<r>() which return the sum of the first r-1 values.

// Recursive implementation for get
template <size_t R, size_t... Values> struct index_sequence_scan_impl;

template <size_t R, size_t FirstVal, size_t... Values>
struct index_sequence_scan_impl<R, FirstVal, Values...> {
  MDSPAN_INLINE_FUNCTION
  constexpr static size_t get(size_t r) {
    if (r > R)
      return FirstVal + index_sequence_scan_impl<R + 1, Values...>::get(r);
    else
      return 0;
  }
};

template <size_t R, size_t FirstVal>
struct index_sequence_scan_impl<R, FirstVal> {
#if defined(__NVCC__) || defined(__NVCOMPILER)
  // NVCC warns about pointless comparison with 0 for R==0 and r being const
  // evaluatable and also 0.
  MDSPAN_INLINE_FUNCTION
  constexpr static size_t get(size_t r) {
    return static_cast<int64_t>(R) > static_cast<int64_t>(r) ? FirstVal : 0;
  }
#else
  MDSPAN_INLINE_FUNCTION
  constexpr static size_t get(size_t r) { return R > r ? FirstVal : 0; }
#endif
};
template <> struct index_sequence_scan_impl<0> {
  MDSPAN_INLINE_FUNCTION
  constexpr static size_t get(size_t) { return 0; }
};

// ------------------------------------------------------------------
// ------------ possibly_empty_array  -------------------------------
// ------------------------------------------------------------------

// array like class which provides get function and operator [], and
// has a specialization for the size 0 case.
// This is needed to make the maybe_static_array be truly empty, for
// all static values.

template <class T, size_t N> struct possibly_empty_array {
  T vals[N]{};
  MDSPAN_INLINE_FUNCTION
  constexpr T &operator[](size_t r) { return vals[r]; }
  MDSPAN_INLINE_FUNCTION
  constexpr const T &operator[](size_t r) const { return vals[r]; }
};

template <class T> struct possibly_empty_array<T, 0> {
  MDSPAN_INLINE_FUNCTION
  constexpr T operator[](size_t) { return T(); }
  MDSPAN_INLINE_FUNCTION
  constexpr const T operator[](size_t) const { return T(); }
};

// ------------------------------------------------------------------
// ------------ maybe_static_array ----------------------------------
// ------------------------------------------------------------------

// array like class which has a mix of static and runtime values but
// only stores the runtime values.
// The type of the static and the runtime values can be different.
// The position of a dynamic value is indicated through a tag value.
template <class TDynamic, class TStatic, TStatic dyn_tag, TStatic... Values>
struct maybe_static_array {

  static_assert(std::is_convertible<TStatic, TDynamic>::value, "maybe_static_array: TStatic must be convertible to TDynamic");
  static_assert(std::is_convertible<TDynamic, TStatic>::value, "maybe_static_array: TDynamic must be convertible to TStatic");

private:
  // Static values member
  using static_vals_t = static_array<TStatic, Values...>;
  constexpr static size_t m_size = sizeof...(Values);
  constexpr static size_t m_size_dynamic =
      _MDSPAN_FOLD_PLUS_RIGHT((Values == dyn_tag), 0);

  // Dynamic values member
  _MDSPAN_NO_UNIQUE_ADDRESS possibly_empty_array<TDynamic, m_size_dynamic>
      m_dyn_vals;

  // static mapping of indices to the position in the dynamic values array
  using dyn_map_t = index_sequence_scan_impl<0, static_cast<size_t>(Values == dyn_tag)...>;
public:

  // two types for static and dynamic values
  using value_type = TDynamic;
  using static_value_type = TStatic;
  // tag value indicating dynamic value
  constexpr static static_value_type tag_value = dyn_tag;

  constexpr maybe_static_array() = default;

  // constructor for all static values
  // TODO: add precondition check?
  MDSPAN_TEMPLATE_REQUIRES(class... Vals,
                           /* requires */ ((m_size_dynamic == 0) &&
                                           (sizeof...(Vals) > 0)))
  MDSPAN_INLINE_FUNCTION
  constexpr maybe_static_array(Vals...) : m_dyn_vals{} {}

  // constructors from dynamic values only
  MDSPAN_TEMPLATE_REQUIRES(class... DynVals,
                           /* requires */ (sizeof...(DynVals) ==
                                               m_size_dynamic &&
                                           m_size_dynamic > 0))
  MDSPAN_INLINE_FUNCTION
  constexpr maybe_static_array(DynVals... vals)
      : m_dyn_vals{static_cast<TDynamic>(vals)...} {}


  MDSPAN_TEMPLATE_REQUIRES(class T, size_t N,
                           /* requires */ (N == m_size_dynamic && N > 0))
  MDSPAN_INLINE_FUNCTION
  constexpr maybe_static_array(const std::array<T, N> &vals) {
    for (size_t r = 0; r < N; r++)
      m_dyn_vals[r] = static_cast<TDynamic>(vals[r]);
  }

  MDSPAN_TEMPLATE_REQUIRES(class T, size_t N,
                           /* requires */ (N == m_size_dynamic && N == 0))
  MDSPAN_INLINE_FUNCTION
  constexpr maybe_static_array(const std::array<T, N> &) : m_dyn_vals{} {}

#ifdef __cpp_lib_span
  MDSPAN_TEMPLATE_REQUIRES(class T, size_t N,
                           /* requires */ (N == m_size_dynamic))
  MDSPAN_INLINE_FUNCTION
  constexpr maybe_static_array(const std::span<T, N> &vals) {
    for (size_t r = 0; r < N; r++)
      m_dyn_vals[r] = static_cast<TDynamic>(vals[r]);
  }
#endif

  // constructors from all values
  MDSPAN_TEMPLATE_REQUIRES(class... DynVals,
                           /* requires */ (sizeof...(DynVals) !=
                                               m_size_dynamic &&
                                           m_size_dynamic > 0))
  MDSPAN_INLINE_FUNCTION
  constexpr maybe_static_array(DynVals... vals)
    : m_dyn_vals{} {
    static_assert((sizeof...(DynVals) == m_size), "Invalid number of values.");
    TDynamic values[m_size]{static_cast<TDynamic>(vals)...};
    for (size_t r = 0; r < m_size; r++) {
      TStatic static_val = static_vals_t::get(r);
      if (static_val == dyn_tag) {
        m_dyn_vals[dyn_map_t::get(r)] = values[r];
      }
// Precondition check
#ifdef _MDSPAN_DEBUG
      else {
        assert(values[r] == static_cast<TDynamic>(static_val));
      }
#endif
    }
  }

  MDSPAN_TEMPLATE_REQUIRES(
      class T, size_t N,
      /* requires */ (N != m_size_dynamic && m_size_dynamic > 0))
  MDSPAN_INLINE_FUNCTION
  constexpr maybe_static_array(const std::array<T, N> &vals) {
    static_assert((N == m_size), "Invalid number of values.");
// Precondition check
#ifdef _MDSPAN_DEBUG
    assert(N == m_size);
#endif
    for (size_t r = 0; r < m_size; r++) {
      TStatic static_val = static_vals_t::get(r);
      if (static_val == dyn_tag) {
        m_dyn_vals[dyn_map_t::get(r)] = static_cast<TDynamic>(vals[r]);
      }
// Precondition check
#ifdef _MDSPAN_DEBUG
      else {
        assert(static_cast<TDynamic>(vals[r]) ==
               static_cast<TDynamic>(static_val));
      }
#endif
    }
  }

#ifdef __cpp_lib_span
  MDSPAN_TEMPLATE_REQUIRES(
      class T, size_t N,
      /* requires */ (N != m_size_dynamic && m_size_dynamic > 0))
  MDSPAN_INLINE_FUNCTION
  constexpr maybe_static_array(const std::span<T, N> &vals) {
    static_assert((N == m_size) || (m_size == dynamic_extent));
#ifdef _MDSPAN_DEBUG
    assert(N == m_size);
#endif
    for (size_t r = 0; r < m_size; r++) {
      TStatic static_val = static_vals_t::get(r);
      if (static_val == dyn_tag) {
        m_dyn_vals[dyn_map_t::get(r)] = static_cast<TDynamic>(vals[r]);
      }
#ifdef _MDSPAN_DEBUG
      else {
        assert(static_cast<TDynamic>(vals[r]) ==
               static_cast<TDynamic>(static_val));
      }
#endif
    }
  }
#endif

  // access functions
  MDSPAN_INLINE_FUNCTION
  constexpr static TStatic static_value(size_t r) { return static_vals_t::get(r); }

  MDSPAN_INLINE_FUNCTION
  constexpr TDynamic value(size_t r) const {
    TStatic static_val = static_vals_t::get(r);
    return static_val == dyn_tag ? m_dyn_vals[dyn_map_t::get(r)]
                                        : static_cast<TDynamic>(static_val);
  }
  MDSPAN_INLINE_FUNCTION
  constexpr TDynamic operator[](size_t r) const { return value(r); }


  // observers
  MDSPAN_INLINE_FUNCTION
  constexpr static size_t size() { return m_size; }
  MDSPAN_INLINE_FUNCTION
  constexpr static size_t size_dynamic() { return m_size_dynamic; }
};

} // namespace detail
} // namespace MDSPAN_IMPL_STANDARD_NAMESPACE

namespace MDSPAN_IMPL_STANDARD_NAMESPACE {

// ------------------------------------------------------------------
// ------------ extents ---------------------------------------------
// ------------------------------------------------------------------

// Class to describe the extents of a multi dimensional array.
// Used by mdspan, mdarray and layout mappings.
// See ISO C++ standard [mdspan.extents]

template <class IndexType, size_t... Extents> class extents {
public:
  // typedefs for integral types used
  using index_type = IndexType;
  using size_type = std::make_unsigned_t<index_type>;
  using rank_type = size_t;

  static_assert(std::is_integral<index_type>::value && !std::is_same<index_type, bool>::value,
                MDSPAN_IMPL_STANDARD_NAMESPACE_STRING "::extents::index_type must be a signed or unsigned integer type");
private:
  constexpr static rank_type m_rank = sizeof...(Extents);
  constexpr static rank_type m_rank_dynamic =
      _MDSPAN_FOLD_PLUS_RIGHT((Extents == dynamic_extent), /* + ... + */ 0);

  // internal storage type using maybe_static_array
  using vals_t =
      detail::maybe_static_array<IndexType, size_t, dynamic_extent, Extents...>;
  _MDSPAN_NO_UNIQUE_ADDRESS vals_t m_vals;

public:
  // [mdspan.extents.obs], observers of multidimensional index space
  MDSPAN_INLINE_FUNCTION
  constexpr static rank_type rank() noexcept { return m_rank; }
  MDSPAN_INLINE_FUNCTION
  constexpr static rank_type rank_dynamic() noexcept { return m_rank_dynamic; }

  MDSPAN_INLINE_FUNCTION
  constexpr index_type extent(rank_type r) const noexcept { return m_vals.value(r); }
  MDSPAN_INLINE_FUNCTION
  constexpr static size_t static_extent(rank_type r) noexcept {
    return vals_t::static_value(r);
  }

  // [mdspan.extents.cons], constructors
  MDSPAN_INLINE_FUNCTION_DEFAULTED
  constexpr extents() noexcept = default;

  // Construction from just dynamic or all values.
  // Precondition check is deferred to maybe_static_array constructor
  MDSPAN_TEMPLATE_REQUIRES(
      class... OtherIndexTypes,
      /* requires */ (
          _MDSPAN_FOLD_AND(_MDSPAN_TRAIT(std::is_convertible, OtherIndexTypes,
                                         index_type) /* && ... */) &&
          _MDSPAN_FOLD_AND(_MDSPAN_TRAIT(std::is_nothrow_constructible, index_type,
                                         OtherIndexTypes) /* && ... */) &&
          (sizeof...(OtherIndexTypes) == m_rank ||
           sizeof...(OtherIndexTypes) == m_rank_dynamic)))
  MDSPAN_INLINE_FUNCTION
  constexpr explicit extents(OtherIndexTypes... dynvals) noexcept
      : m_vals(static_cast<index_type>(dynvals)...) {}

  MDSPAN_TEMPLATE_REQUIRES(
      class OtherIndexType, size_t N,
      /* requires */
      (
          _MDSPAN_TRAIT(std::is_convertible, OtherIndexType, index_type) &&
          _MDSPAN_TRAIT(std::is_nothrow_constructible, index_type,
              OtherIndexType) &&
          (N == m_rank || N == m_rank_dynamic)))
  MDSPAN_INLINE_FUNCTION
  MDSPAN_CONDITIONAL_EXPLICIT(N != m_rank_dynamic)
  constexpr extents(const std::array<OtherIndexType, N> &exts) noexcept
      : m_vals(std::move(exts)) {}

#ifdef __cpp_lib_span
  MDSPAN_TEMPLATE_REQUIRES(
      class OtherIndexType, size_t N,
      /* requires */
      (_MDSPAN_TRAIT(std::is_convertible, OtherIndexType, index_type) &&
       _MDSPAN_TRAIT(std::is_nothrow_constructible, index_type, OtherIndexType) &&
       (N == m_rank || N == m_rank_dynamic)))
  MDSPAN_INLINE_FUNCTION
  MDSPAN_CONDITIONAL_EXPLICIT(N != m_rank_dynamic)
  constexpr extents(const std::span<OtherIndexType, N> &exts) noexcept
      : m_vals(std::move(exts)) {}
#endif

private:
  // Function to construct extents storage from other extents.
  // With C++ 17 the first two variants could be collapsed using if constexpr
  // in which case you don't need all the requires clauses.
  // in C++ 14 mode that doesn't work due to infinite recursion
  MDSPAN_TEMPLATE_REQUIRES(
      size_t DynCount, size_t R, class OtherExtents, class... DynamicValues,
      /* requires */ ((R < m_rank) && (static_extent(R) == dynamic_extent)))
  MDSPAN_INLINE_FUNCTION
  constexpr
  vals_t __construct_vals_from_extents(std::integral_constant<size_t, DynCount>,
                                       std::integral_constant<size_t, R>,
                                       const OtherExtents &exts,
                                       DynamicValues... dynamic_values) noexcept {
    return __construct_vals_from_extents(
        std::integral_constant<size_t, DynCount + 1>(),
        std::integral_constant<size_t, R + 1>(), exts, dynamic_values...,
        exts.extent(R));
  }

  MDSPAN_TEMPLATE_REQUIRES(
      size_t DynCount, size_t R, class OtherExtents, class... DynamicValues,
      /* requires */ ((R < m_rank) && (static_extent(R) != dynamic_extent)))
  MDSPAN_INLINE_FUNCTION
  constexpr
  vals_t __construct_vals_from_extents(std::integral_constant<size_t, DynCount>,
                                       std::integral_constant<size_t, R>,
                                       const OtherExtents &exts,
                                       DynamicValues... dynamic_values) noexcept {
    return __construct_vals_from_extents(
        std::integral_constant<size_t, DynCount>(),
        std::integral_constant<size_t, R + 1>(), exts, dynamic_values...);
  }

  MDSPAN_TEMPLATE_REQUIRES(
      size_t DynCount, size_t R, class OtherExtents, class... DynamicValues,
      /* requires */ ((R == m_rank) && (DynCount == m_rank_dynamic)))
  MDSPAN_INLINE_FUNCTION
  constexpr
  vals_t __construct_vals_from_extents(std::integral_constant<size_t, DynCount>,
                                       std::integral_constant<size_t, R>,
                                       const OtherExtents &,
                                       DynamicValues... dynamic_values) noexcept {
    return vals_t{static_cast<index_type>(dynamic_values)...};
  }

public:

  // Converting constructor from other extents specializations
  MDSPAN_TEMPLATE_REQUIRES(
      class OtherIndexType, size_t... OtherExtents,
      /* requires */
      (
          /* multi-stage check to protect from invalid pack expansion when sizes
             don't match? */
          decltype(detail::__check_compatible_extents(
              std::integral_constant<bool, sizeof...(Extents) ==
                                               sizeof...(OtherExtents)>{},
              std::integer_sequence<size_t, Extents...>{},
              std::integer_sequence<size_t, OtherExtents...>{}))::value))
  MDSPAN_INLINE_FUNCTION
  MDSPAN_CONDITIONAL_EXPLICIT((((Extents != dynamic_extent) &&
                                (OtherExtents == dynamic_extent)) ||
                               ...) ||
                              (std::numeric_limits<index_type>::max() <
                               std::numeric_limits<OtherIndexType>::max()))
  constexpr extents(const extents<OtherIndexType, OtherExtents...> &other) noexcept
      : m_vals(__construct_vals_from_extents(
            std::integral_constant<size_t, 0>(),
            std::integral_constant<size_t, 0>(), other)) {}

  // Comparison operator
  template <class OtherIndexType, size_t... OtherExtents>
  MDSPAN_INLINE_FUNCTION friend constexpr bool
  operator==(const extents &lhs,
             const extents<OtherIndexType, OtherExtents...> &rhs) noexcept {
    bool value = true;
    for (size_type r = 0; r < m_rank; r++)
      value &= rhs.extent(r) == lhs.extent(r);
    return value;
  }

#if !(MDSPAN_HAS_CXX_20)
  template <class OtherIndexType, size_t... OtherExtents>
  MDSPAN_INLINE_FUNCTION friend constexpr bool
  operator!=(extents const &lhs,
             extents<OtherIndexType, OtherExtents...> const &rhs) noexcept {
    return !(lhs == rhs);
  }
#endif
};

// Recursive helper classes to implement dextents alias for extents
namespace detail {

template <class IndexType, size_t Rank,
          class Extents = ::MDSPAN_IMPL_STANDARD_NAMESPACE::extents<IndexType>>
struct __make_dextents;

template <class IndexType, size_t Rank, size_t... ExtentsPack>
struct __make_dextents<
    IndexType, Rank, ::MDSPAN_IMPL_STANDARD_NAMESPACE::extents<IndexType, ExtentsPack...>>
{
  using type = typename __make_dextents<
      IndexType, Rank - 1,
      ::MDSPAN_IMPL_STANDARD_NAMESPACE::extents<IndexType,
                                                ::MDSPAN_IMPL_STANDARD_NAMESPACE::dynamic_extent,
                                                ExtentsPack...>>::type;
};

template <class IndexType, size_t... ExtentsPack>
struct __make_dextents<
    IndexType, 0, ::MDSPAN_IMPL_STANDARD_NAMESPACE::extents<IndexType, ExtentsPack...>>
{
  using type = ::MDSPAN_IMPL_STANDARD_NAMESPACE::extents<IndexType, ExtentsPack...>;
};

} // end namespace detail

// [mdspan.extents.dextents], alias template
template <class IndexType, size_t Rank>
using dextents = typename detail::__make_dextents<IndexType, Rank>::type;

// Deduction guide for extents
#if defined(_MDSPAN_USE_CLASS_TEMPLATE_ARGUMENT_DEDUCTION)
template <class... IndexTypes>
extents(IndexTypes...)
    -> extents<size_t,
               size_t((IndexTypes(), ::MDSPAN_IMPL_STANDARD_NAMESPACE::dynamic_extent))...>;
#endif

// Helper type traits for identifying a class as extents.
namespace detail {

template <class T> struct __is_extents : ::std::false_type {};

template <class IndexType, size_t... ExtentsPack>
struct __is_extents<::MDSPAN_IMPL_STANDARD_NAMESPACE::extents<IndexType, ExtentsPack...>>
    : ::std::true_type {};

template <class T>
#if MDSPAN_HAS_CXX_17
inline
#else
static
#endif
constexpr bool __is_extents_v = __is_extents<T>::value;

} // namespace detail
} // namespace MDSPAN_IMPL_STANDARD_NAMESPACE
//END_FILE_INCLUDE: /home/runner/work/mdspan/mdspan/include/experimental/__p0009_bits/extents.hpp
#include <stdexcept>
//BEGIN_FILE_INCLUDE: /home/runner/work/mdspan/mdspan/include/experimental/__p0009_bits/layout_stride.hpp
//@HEADER
// ************************************************************************
//
//                        Kokkos v. 4.0
//       Copyright (2022) National Technology & Engineering
//               Solutions of Sandia, LLC (NTESS).
//
// Under the terms of Contract DE-NA0003525 with NTESS,
// the U.S. Government retains certain rights in this software.
//
// Part of Kokkos, under the Apache License v2.0 with LLVM Exceptions.
// See https://kokkos.org/LICENSE for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//@HEADER

//BEGIN_FILE_INCLUDE: /home/runner/work/mdspan/mdspan/include/experimental/__p0009_bits/compressed_pair.hpp
//@HEADER
// ************************************************************************
//
//                        Kokkos v. 4.0
//       Copyright (2022) National Technology & Engineering
//               Solutions of Sandia, LLC (NTESS).
//
// Under the terms of Contract DE-NA0003525 with NTESS,
// the U.S. Government retains certain rights in this software.
//
// Part of Kokkos, under the Apache License v2.0 with LLVM Exceptions.
// See https://kokkos.org/LICENSE for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//@HEADER


#if !defined(_MDSPAN_USE_ATTRIBUTE_NO_UNIQUE_ADDRESS)
//BEGIN_FILE_INCLUDE: /home/runner/work/mdspan/mdspan/include/experimental/__p0009_bits/no_unique_address.hpp
//@HEADER
// ************************************************************************
//
//                        Kokkos v. 4.0
//       Copyright (2022) National Technology & Engineering
//               Solutions of Sandia, LLC (NTESS).
//
// Under the terms of Contract DE-NA0003525 with NTESS,
// the U.S. Government retains certain rights in this software.
//
// Part of Kokkos, under the Apache License v2.0 with LLVM Exceptions.
// See https://kokkos.org/LICENSE for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//@HEADER


namespace MDSPAN_IMPL_STANDARD_NAMESPACE {
namespace detail {

//==============================================================================

template <class _T, size_t _Disambiguator = 0, class _Enable = void>
struct __no_unique_address_emulation {
  using __stored_type = _T;
  _T __v;
  MDSPAN_FORCE_INLINE_FUNCTION constexpr _T const &__ref() const noexcept {
    return __v;
  }
  MDSPAN_FORCE_INLINE_FUNCTION _MDSPAN_CONSTEXPR_14 _T &__ref() noexcept {
    return __v;
  }
};

// Empty case
// This doesn't work if _T is final, of course, but we're not using anything
// like that currently. That kind of thing could be added pretty easily though
template <class _T, size_t _Disambiguator>
struct __no_unique_address_emulation<
    _T, _Disambiguator,
    std::enable_if_t<_MDSPAN_TRAIT(std::is_empty, _T) &&
                // If the type isn't trivially destructible, its destructor
                // won't be called at the right time, so don't use this
                // specialization
                _MDSPAN_TRAIT(std::is_trivially_destructible, _T)>> :
#ifdef _MDSPAN_COMPILER_MSVC
    // MSVC doesn't allow you to access public static member functions of a type
    // when you *happen* to privately inherit from that type.
    protected
#else
    // But we still want this to be private if possible so that we don't accidentally
    // access members of _T directly rather than calling __ref() first, which wouldn't
    // work if _T happens to be stateful and thus we're using the unspecialized definition
    // of __no_unique_address_emulation above.
    private
#endif
    _T {
  using __stored_type = _T;
  MDSPAN_FORCE_INLINE_FUNCTION constexpr _T const &__ref() const noexcept {
    return *static_cast<_T const *>(this);
  }
  MDSPAN_FORCE_INLINE_FUNCTION _MDSPAN_CONSTEXPR_14 _T &__ref() noexcept {
    return *static_cast<_T *>(this);
  }

  MDSPAN_INLINE_FUNCTION_DEFAULTED
  constexpr __no_unique_address_emulation() noexcept = default;
  MDSPAN_INLINE_FUNCTION_DEFAULTED
  constexpr __no_unique_address_emulation(
      __no_unique_address_emulation const &) noexcept = default;
  MDSPAN_INLINE_FUNCTION_DEFAULTED
  constexpr __no_unique_address_emulation(
      __no_unique_address_emulation &&) noexcept = default;
  MDSPAN_INLINE_FUNCTION_DEFAULTED
  _MDSPAN_CONSTEXPR_14_DEFAULTED __no_unique_address_emulation &
  operator=(__no_unique_address_emulation const &) noexcept = default;
  MDSPAN_INLINE_FUNCTION_DEFAULTED
  _MDSPAN_CONSTEXPR_14_DEFAULTED __no_unique_address_emulation &
  operator=(__no_unique_address_emulation &&) noexcept = default;
  MDSPAN_INLINE_FUNCTION_DEFAULTED
  ~__no_unique_address_emulation() noexcept = default;

  // Explicitly make this not a reference so that the copy or move
  // constructor still gets called.
  MDSPAN_INLINE_FUNCTION
  explicit constexpr __no_unique_address_emulation(_T const& __v) noexcept : _T(__v) {}
  MDSPAN_INLINE_FUNCTION
  explicit constexpr __no_unique_address_emulation(_T&& __v) noexcept : _T(::std::move(__v)) {}
};

//==============================================================================

} // end namespace detail
} // end namespace MDSPAN_IMPL_STANDARD_NAMESPACE
//END_FILE_INCLUDE: /home/runner/work/mdspan/mdspan/include/experimental/__p0009_bits/no_unique_address.hpp
#endif

namespace MDSPAN_IMPL_STANDARD_NAMESPACE {
namespace detail {

// For no unique address emulation, this is the case taken when neither are empty.
// For real `[[no_unique_address]]`, this case is always taken.
template <class _T, class _U, class _Enable = void> struct __compressed_pair {
  _MDSPAN_NO_UNIQUE_ADDRESS _T __t_val;
  _MDSPAN_NO_UNIQUE_ADDRESS _U __u_val;
  MDSPAN_FORCE_INLINE_FUNCTION _MDSPAN_CONSTEXPR_14 _T &__first() noexcept { return __t_val; }
  MDSPAN_FORCE_INLINE_FUNCTION constexpr _T const &__first() const noexcept {
    return __t_val;
  }
  MDSPAN_FORCE_INLINE_FUNCTION _MDSPAN_CONSTEXPR_14 _U &__second() noexcept { return __u_val; }
  MDSPAN_FORCE_INLINE_FUNCTION constexpr _U const &__second() const noexcept {
    return __u_val;
  }

  MDSPAN_INLINE_FUNCTION_DEFAULTED
  constexpr __compressed_pair() noexcept = default;
  MDSPAN_INLINE_FUNCTION_DEFAULTED
  constexpr __compressed_pair(__compressed_pair const &) noexcept = default;
  MDSPAN_INLINE_FUNCTION_DEFAULTED
  constexpr __compressed_pair(__compressed_pair &&) noexcept = default;
  MDSPAN_INLINE_FUNCTION_DEFAULTED
  _MDSPAN_CONSTEXPR_14_DEFAULTED __compressed_pair &
  operator=(__compressed_pair const &) noexcept = default;
  MDSPAN_INLINE_FUNCTION_DEFAULTED
  _MDSPAN_CONSTEXPR_14_DEFAULTED __compressed_pair &
  operator=(__compressed_pair &&) noexcept = default;
  MDSPAN_INLINE_FUNCTION_DEFAULTED
  ~__compressed_pair() noexcept = default;
  template <class _TLike, class _ULike>
  MDSPAN_INLINE_FUNCTION constexpr __compressed_pair(_TLike &&__t, _ULike &&__u)
      : __t_val((_TLike &&) __t), __u_val((_ULike &&) __u) {}
};

#if !defined(_MDSPAN_USE_ATTRIBUTE_NO_UNIQUE_ADDRESS)

// First empty.
template <class _T, class _U>
struct __compressed_pair<
    _T, _U,
    std::enable_if_t<_MDSPAN_TRAIT(std::is_empty, _T) && !_MDSPAN_TRAIT(std::is_empty, _U)>>
    : private _T {
  _U __u_val;
  MDSPAN_FORCE_INLINE_FUNCTION _MDSPAN_CONSTEXPR_14 _T &__first() noexcept {
    return *static_cast<_T *>(this);
  }
  MDSPAN_FORCE_INLINE_FUNCTION constexpr _T const &__first() const noexcept {
    return *static_cast<_T const *>(this);
  }
  MDSPAN_FORCE_INLINE_FUNCTION _MDSPAN_CONSTEXPR_14 _U &__second() noexcept { return __u_val; }
  MDSPAN_FORCE_INLINE_FUNCTION constexpr _U const &__second() const noexcept {
    return __u_val;
  }

  MDSPAN_INLINE_FUNCTION_DEFAULTED
  constexpr __compressed_pair() noexcept = default;
  MDSPAN_INLINE_FUNCTION_DEFAULTED
  constexpr __compressed_pair(__compressed_pair const &) noexcept = default;
  MDSPAN_INLINE_FUNCTION_DEFAULTED
  constexpr __compressed_pair(__compressed_pair &&) noexcept = default;
  MDSPAN_INLINE_FUNCTION_DEFAULTED
  _MDSPAN_CONSTEXPR_14_DEFAULTED __compressed_pair &
  operator=(__compressed_pair const &) noexcept = default;
  MDSPAN_INLINE_FUNCTION_DEFAULTED
  _MDSPAN_CONSTEXPR_14_DEFAULTED __compressed_pair &
  operator=(__compressed_pair &&) noexcept = default;
  MDSPAN_INLINE_FUNCTION_DEFAULTED
  ~__compressed_pair() noexcept = default;
  template <class _TLike, class _ULike>
  MDSPAN_INLINE_FUNCTION constexpr __compressed_pair(_TLike &&__t, _ULike &&__u)
      : _T((_TLike &&) __t), __u_val((_ULike &&) __u) {}
};

// Second empty.
template <class _T, class _U>
struct __compressed_pair<
    _T, _U,
    std::enable_if_t<!_MDSPAN_TRAIT(std::is_empty, _T) && _MDSPAN_TRAIT(std::is_empty, _U)>>
    : private _U {
  _T __t_val;
  MDSPAN_FORCE_INLINE_FUNCTION _MDSPAN_CONSTEXPR_14 _T &__first() noexcept { return __t_val; }
  MDSPAN_FORCE_INLINE_FUNCTION constexpr _T const &__first() const noexcept {
    return __t_val;
  }
  MDSPAN_FORCE_INLINE_FUNCTION _MDSPAN_CONSTEXPR_14 _U &__second() noexcept {
    return *static_cast<_U *>(this);
  }
  MDSPAN_FORCE_INLINE_FUNCTION constexpr _U const &__second() const noexcept {
    return *static_cast<_U const *>(this);
  }

  MDSPAN_INLINE_FUNCTION_DEFAULTED
  constexpr __compressed_pair() noexcept = default;
  MDSPAN_INLINE_FUNCTION_DEFAULTED
  constexpr __compressed_pair(__compressed_pair const &) noexcept = default;
  MDSPAN_INLINE_FUNCTION_DEFAULTED
  constexpr __compressed_pair(__compressed_pair &&) noexcept = default;
  MDSPAN_INLINE_FUNCTION_DEFAULTED
  _MDSPAN_CONSTEXPR_14_DEFAULTED __compressed_pair &
  operator=(__compressed_pair const &) noexcept = default;
  MDSPAN_INLINE_FUNCTION_DEFAULTED
  _MDSPAN_CONSTEXPR_14_DEFAULTED __compressed_pair &
  operator=(__compressed_pair &&) noexcept = default;
  MDSPAN_INLINE_FUNCTION_DEFAULTED
  ~__compressed_pair() noexcept = default;

  template <class _TLike, class _ULike>
  MDSPAN_INLINE_FUNCTION constexpr __compressed_pair(_TLike &&__t, _ULike &&__u)
      : _U((_ULike &&) __u), __t_val((_TLike &&) __t) {}
};

// Both empty.
template <class _T, class _U>
struct __compressed_pair<
    _T, _U,
    std::enable_if_t<_MDSPAN_TRAIT(std::is_empty, _T) && _MDSPAN_TRAIT(std::is_empty, _U)>>
    // We need to use the __no_unique_address_emulation wrapper here to avoid
    // base class ambiguities.
#ifdef _MDSPAN_COMPILER_MSVC
// MSVC doesn't allow you to access public static member functions of a type
// when you *happen* to privately inherit from that type.
    : protected __no_unique_address_emulation<_T, 0>,
      protected __no_unique_address_emulation<_U, 1>
#else
    : private __no_unique_address_emulation<_T, 0>,
      private __no_unique_address_emulation<_U, 1>
#endif
{
  using __first_base_t = __no_unique_address_emulation<_T, 0>;
  using __second_base_t = __no_unique_address_emulation<_U, 1>;

  MDSPAN_FORCE_INLINE_FUNCTION _MDSPAN_CONSTEXPR_14 _T &__first() noexcept {
    return this->__first_base_t::__ref();
  }
  MDSPAN_FORCE_INLINE_FUNCTION constexpr _T const &__first() const noexcept {
    return this->__first_base_t::__ref();
  }
  MDSPAN_FORCE_INLINE_FUNCTION _MDSPAN_CONSTEXPR_14 _U &__second() noexcept {
    return this->__second_base_t::__ref();
  }
  MDSPAN_FORCE_INLINE_FUNCTION constexpr _U const &__second() const noexcept {
    return this->__second_base_t::__ref();
  }

  MDSPAN_INLINE_FUNCTION_DEFAULTED
  constexpr __compressed_pair() noexcept = default;
  MDSPAN_INLINE_FUNCTION_DEFAULTED
  constexpr __compressed_pair(__compressed_pair const &) noexcept = default;
  MDSPAN_INLINE_FUNCTION_DEFAULTED
  constexpr __compressed_pair(__compressed_pair &&) noexcept = default;
  MDSPAN_INLINE_FUNCTION_DEFAULTED
  _MDSPAN_CONSTEXPR_14_DEFAULTED __compressed_pair &
  operator=(__compressed_pair const &) noexcept = default;
  MDSPAN_INLINE_FUNCTION_DEFAULTED
  _MDSPAN_CONSTEXPR_14_DEFAULTED __compressed_pair &
  operator=(__compressed_pair &&) noexcept = default;
  MDSPAN_INLINE_FUNCTION_DEFAULTED
  ~__compressed_pair() noexcept = default;
  template <class _TLike, class _ULike>
  MDSPAN_INLINE_FUNCTION constexpr __compressed_pair(_TLike &&__t, _ULike &&__u) noexcept
    : __first_base_t(_T((_TLike &&) __t)),
      __second_base_t(_U((_ULike &&) __u))
  { }
};

#endif // !defined(_MDSPAN_USE_ATTRIBUTE_NO_UNIQUE_ADDRESS)

} // end namespace detail
} // end namespace MDSPAN_IMPL_STANDARD_NAMESPACE
//END_FILE_INCLUDE: /home/runner/work/mdspan/mdspan/include/experimental/__p0009_bits/compressed_pair.hpp

#if !defined(_MDSPAN_USE_ATTRIBUTE_NO_UNIQUE_ADDRESS)
#endif

#include <algorithm>
#include <numeric>
#include <array>
#ifdef __cpp_lib_span
#include <span>
#endif
#if defined(_MDSPAN_USE_CONCEPTS) && MDSPAN_HAS_CXX_20 && defined(__cpp_lib_concepts)
#  include <concepts>
#endif

namespace MDSPAN_IMPL_STANDARD_NAMESPACE {

struct layout_left {
  template<class Extents>
    class mapping;
};
struct layout_right {
  template<class Extents>
    class mapping;
};

namespace detail {
  template<class Layout, class Mapping>
  constexpr bool __is_mapping_of =
    std::is_same<typename Layout::template mapping<typename Mapping::extents_type>, Mapping>::value;

#if defined(_MDSPAN_USE_CONCEPTS) && MDSPAN_HAS_CXX_20
#  if !defined(__cpp_lib_concepts)
  namespace internal {
  namespace detail {
  template <typename _Tp, typename _Up>
  concept __same_as = std::is_same_v<_Tp, _Up>;
  } // namespace detail
  template <class T, class U>
  concept __same_as = detail::__same_as<T, U> && detail::__same_as<U, T>;
  } // namespace internal
#  endif

  template<class M>
  concept __layout_mapping_alike = requires {
    requires __is_extents<typename M::extents_type>::value;
#if defined(__cpp_lib_concepts)
    { M::is_always_strided() } -> std::same_as<bool>;
    { M::is_always_exhaustive() } -> std::same_as<bool>;
    { M::is_always_unique() } -> std::same_as<bool>;
#else
    { M::is_always_strided() } -> internal::__same_as<bool>;
    { M::is_always_exhaustive() } -> internal::__same_as<bool>;
    { M::is_always_unique() } -> internal::__same_as<bool>;
#endif
    std::bool_constant<M::is_always_strided()>::value;
    std::bool_constant<M::is_always_exhaustive()>::value;
    std::bool_constant<M::is_always_unique()>::value;
  };
#endif
} // namespace detail

struct layout_stride {
  template <class Extents>
  class mapping
#if !defined(_MDSPAN_USE_ATTRIBUTE_NO_UNIQUE_ADDRESS)
    : private detail::__no_unique_address_emulation<
        detail::__compressed_pair<
          Extents,
          std::array<typename Extents::index_type, Extents::rank()>
        >
      >
#endif
  {
  public:
    using extents_type = Extents;
    using index_type = typename extents_type::index_type;
    using size_type = typename extents_type::size_type;
    using rank_type = typename extents_type::rank_type;
    using layout_type = layout_stride;

    // This could be a `requires`, but I think it's better and clearer as a `static_assert`.
    static_assert(detail::__is_extents_v<Extents>,
                  MDSPAN_IMPL_STANDARD_NAMESPACE_STRING "::layout_stride::mapping must be instantiated with a specialization of " MDSPAN_IMPL_STANDARD_NAMESPACE_STRING "::extents.");


  private:

    //----------------------------------------------------------------------------

    using __strides_storage_t = std::array<index_type, extents_type::rank()>;
    using __member_pair_t = detail::__compressed_pair<extents_type, __strides_storage_t>;

#if defined(_MDSPAN_USE_ATTRIBUTE_NO_UNIQUE_ADDRESS)
    _MDSPAN_NO_UNIQUE_ADDRESS __member_pair_t __members;
#else
    using __base_t = detail::__no_unique_address_emulation<__member_pair_t>;
#endif

    MDSPAN_FORCE_INLINE_FUNCTION constexpr __strides_storage_t const&
    __strides_storage() const noexcept {
#if defined(_MDSPAN_USE_ATTRIBUTE_NO_UNIQUE_ADDRESS)
      return __members.__second();
#else
      return this->__base_t::__ref().__second();
#endif
    }
    MDSPAN_FORCE_INLINE_FUNCTION _MDSPAN_CONSTEXPR_14 __strides_storage_t&
    __strides_storage() noexcept {
#if defined(_MDSPAN_USE_ATTRIBUTE_NO_UNIQUE_ADDRESS)
      return __members.__second();
#else
      return this->__base_t::__ref().__second();
#endif
    }

    template<class SizeType, size_t ... Ep, size_t ... Idx>
    _MDSPAN_HOST_DEVICE
    constexpr index_type __get_size(::MDSPAN_IMPL_STANDARD_NAMESPACE::extents<SizeType, Ep...>,std::integer_sequence<size_t, Idx...>) const {
      return _MDSPAN_FOLD_TIMES_RIGHT( static_cast<index_type>(extents().extent(Idx)), 1 );
    }

    //----------------------------------------------------------------------------

    template <class>
    friend class mapping;

    //----------------------------------------------------------------------------

    // Workaround for non-deducibility of the index sequence template parameter if it's given at the top level
    template <class>
    struct __deduction_workaround;

    template <size_t... Idxs>
    struct __deduction_workaround<std::index_sequence<Idxs...>>
    {
      template <class OtherExtents>
      MDSPAN_INLINE_FUNCTION
      static constexpr bool _eq_impl(mapping const& self, mapping<OtherExtents> const& other) noexcept {
        return    _MDSPAN_FOLD_AND((self.stride(Idxs) == other.stride(Idxs)) /* && ... */)
               && _MDSPAN_FOLD_AND((self.extents().extent(Idxs) == other.extents().extent(Idxs)) /* || ... */);
      }
      template <class OtherExtents>
      MDSPAN_INLINE_FUNCTION
      static constexpr bool _not_eq_impl(mapping const& self, mapping<OtherExtents> const& other) noexcept {
        return    _MDSPAN_FOLD_OR((self.stride(Idxs) != other.stride(Idxs)) /* || ... */)
               || _MDSPAN_FOLD_OR((self.extents().extent(Idxs) != other.extents().extent(Idxs)) /* || ... */);
      }

      template <class... Integral>
      MDSPAN_FORCE_INLINE_FUNCTION
      static constexpr size_t _call_op_impl(mapping const& self, Integral... idxs) noexcept {
        return _MDSPAN_FOLD_PLUS_RIGHT((idxs * self.stride(Idxs)), /* + ... + */ 0);
      }

      MDSPAN_INLINE_FUNCTION
      static constexpr size_t _req_span_size_impl(mapping const& self) noexcept {
        // assumes no negative strides; not sure if I'm allowed to assume that or not
        return __impl::_call_op_impl(self, (self.extents().template __extent<Idxs>() - 1)...) + 1;
      }

      template<class OtherMapping>
      MDSPAN_INLINE_FUNCTION
      static constexpr const __strides_storage_t fill_strides(const OtherMapping& map) {
        return __strides_storage_t{static_cast<index_type>(map.stride(Idxs))...};
      }

      MDSPAN_INLINE_FUNCTION
      static constexpr const __strides_storage_t& fill_strides(const __strides_storage_t& s) {
        return s;
      }

      template<class IntegralType>
      MDSPAN_INLINE_FUNCTION
      static constexpr const __strides_storage_t fill_strides(const std::array<IntegralType,extents_type::rank()>& s) {
        return __strides_storage_t{static_cast<index_type>(s[Idxs])...};
      }

#ifdef __cpp_lib_span
      template<class IntegralType>
      MDSPAN_INLINE_FUNCTION
      static constexpr const __strides_storage_t fill_strides(const std::span<IntegralType,extents_type::rank()>& s) {
        return __strides_storage_t{static_cast<index_type>(s[Idxs])...};
      }
#endif

      template<size_t K>
      MDSPAN_INLINE_FUNCTION
      static constexpr size_t __return_zero() { return 0; }

      template<class Mapping>
      MDSPAN_INLINE_FUNCTION
      static constexpr typename Mapping::index_type
        __OFFSET(const Mapping& m) { return m(__return_zero<Idxs>()...); }
    };

    // Can't use defaulted parameter in the __deduction_workaround template because of a bug in MSVC warning C4348.
    using __impl = __deduction_workaround<std::make_index_sequence<Extents::rank()>>;


    //----------------------------------------------------------------------------

#if defined(_MDSPAN_USE_ATTRIBUTE_NO_UNIQUE_ADDRESS)
    MDSPAN_INLINE_FUNCTION constexpr explicit
    mapping(__member_pair_t&& __m) : __members(::std::move(__m)) {}
#else
    MDSPAN_INLINE_FUNCTION constexpr explicit
    mapping(__base_t&& __b) : __base_t(::std::move(__b)) {}
#endif

  public:

    //--------------------------------------------------------------------------------

    MDSPAN_INLINE_FUNCTION_DEFAULTED constexpr mapping() noexcept = default;
    MDSPAN_INLINE_FUNCTION_DEFAULTED constexpr mapping(mapping const&) noexcept = default;

    MDSPAN_TEMPLATE_REQUIRES(
      class IntegralTypes,
      /* requires */ (
        // MSVC 19.32 does not like using index_type here, requires the typename Extents::index_type
        // error C2641: cannot deduce template arguments for 'MDSPAN_IMPL_STANDARD_NAMESPACE::layout_stride::mapping'
        _MDSPAN_TRAIT(std::is_convertible, const std::remove_const_t<IntegralTypes>&, typename Extents::index_type) &&
        _MDSPAN_TRAIT(std::is_nothrow_constructible, typename Extents::index_type, const std::remove_const_t<IntegralTypes>&)
      )
    )
    MDSPAN_INLINE_FUNCTION
    constexpr
    mapping(
      extents_type const& e,
      std::array<IntegralTypes, extents_type::rank()> const& s
    ) noexcept
#if defined(_MDSPAN_USE_ATTRIBUTE_NO_UNIQUE_ADDRESS)
      : __members{
#else
      : __base_t(__base_t{__member_pair_t(
#endif
          e, __strides_storage_t(__impl::fill_strides(s))
#if defined(_MDSPAN_USE_ATTRIBUTE_NO_UNIQUE_ADDRESS)
        }
#else
        )})
#endif
    {
      /*
       * TODO: check preconditions
       * - s[i] > 0 is true for all i in the range [0, rank_ ).
       * - REQUIRED-SPAN-SIZE(e, s) is a representable value of type index_type ([basic.fundamental]).
       * - If rank_ is greater than 0, then there exists a permutation P of the integers in the
       *   range [0, rank_), such that s[ pi ] >= s[ pi − 1 ] * e.extent( pi − 1 ) is true for
       *   all i in the range [1, rank_ ), where pi is the ith element of P.
       */
    }

#ifdef __cpp_lib_span
    MDSPAN_TEMPLATE_REQUIRES(
      class IntegralTypes,
      /* requires */ (
        // MSVC 19.32 does not like using index_type here, requires the typename Extents::index_type
        // error C2641: cannot deduce template arguments for 'MDSPAN_IMPL_STANDARD_NAMESPACE::layout_stride::mapping'
        _MDSPAN_TRAIT(std::is_convertible, const std::remove_const_t<IntegralTypes>&, typename Extents::index_type) &&
        _MDSPAN_TRAIT(std::is_nothrow_constructible, typename Extents::index_type, const std::remove_const_t<IntegralTypes>&)
      )
    )
    MDSPAN_INLINE_FUNCTION
    constexpr
    mapping(
      extents_type const& e,
      std::span<IntegralTypes, extents_type::rank()> const& s
    ) noexcept
#if defined(_MDSPAN_USE_ATTRIBUTE_NO_UNIQUE_ADDRESS)
      : __members{
#else
      : __base_t(__base_t{__member_pair_t(
#endif
          e, __strides_storage_t(__impl::fill_strides(s))
#if defined(_MDSPAN_USE_ATTRIBUTE_NO_UNIQUE_ADDRESS)
        }
#else
        )})
#endif
    {
      /*
       * TODO: check preconditions
       * - s[i] > 0 is true for all i in the range [0, rank_ ).
       * - REQUIRED-SPAN-SIZE(e, s) is a representable value of type index_type ([basic.fundamental]).
       * - If rank_ is greater than 0, then there exists a permutation P of the integers in the
       *   range [0, rank_), such that s[ pi ] >= s[ pi − 1 ] * e.extent( pi − 1 ) is true for
       *   all i in the range [1, rank_ ), where pi is the ith element of P.
       */
    }
#endif // __cpp_lib_span

#if !(defined(_MDSPAN_USE_CONCEPTS) && MDSPAN_HAS_CXX_20)
    MDSPAN_TEMPLATE_REQUIRES(
      class StridedLayoutMapping,
      /* requires */ (
        _MDSPAN_TRAIT(std::is_constructible, extents_type, typename StridedLayoutMapping::extents_type) &&
        detail::__is_mapping_of<typename StridedLayoutMapping::layout_type, StridedLayoutMapping> &&
        StridedLayoutMapping::is_always_unique() &&
        StridedLayoutMapping::is_always_strided()
      )
    )
#else
    template<class StridedLayoutMapping>
    requires(
         detail::__layout_mapping_alike<StridedLayoutMapping> &&
         _MDSPAN_TRAIT(std::is_constructible, extents_type, typename StridedLayoutMapping::extents_type) &&
         StridedLayoutMapping::is_always_unique() &&
         StridedLayoutMapping::is_always_strided()
    )
#endif
    MDSPAN_CONDITIONAL_EXPLICIT(
      (!std::is_convertible<typename StridedLayoutMapping::extents_type, extents_type>::value) &&
      (detail::__is_mapping_of<layout_left, StridedLayoutMapping> ||
       detail::__is_mapping_of<layout_right, StridedLayoutMapping> ||
       detail::__is_mapping_of<layout_stride, StridedLayoutMapping>)
    ) // needs two () due to comma
    MDSPAN_INLINE_FUNCTION _MDSPAN_CONSTEXPR_14
    mapping(StridedLayoutMapping const& other) noexcept // NOLINT(google-explicit-constructor)
#if defined(_MDSPAN_USE_ATTRIBUTE_NO_UNIQUE_ADDRESS)
      : __members{
#else
      : __base_t(__base_t{__member_pair_t(
#endif
          other.extents(), __strides_storage_t(__impl::fill_strides(other))
#if defined(_MDSPAN_USE_ATTRIBUTE_NO_UNIQUE_ADDRESS)
        }
#else
        )})
#endif
    {
      /*
       * TODO: check preconditions
       * - other.stride(i) > 0 is true for all i in the range [0, rank_ ).
       * - other.required_span_size() is a representable value of type index_type ([basic.fundamental]).
       * - OFFSET(other) == 0
       */
    }

    //--------------------------------------------------------------------------------

    MDSPAN_INLINE_FUNCTION_DEFAULTED _MDSPAN_CONSTEXPR_14_DEFAULTED
    mapping& operator=(mapping const&) noexcept = default;

    MDSPAN_INLINE_FUNCTION constexpr const extents_type& extents() const noexcept {
#if defined(_MDSPAN_USE_ATTRIBUTE_NO_UNIQUE_ADDRESS)
      return __members.__first();
#else
      return this->__base_t::__ref().__first();
#endif
    };

    MDSPAN_INLINE_FUNCTION
    constexpr std::array< index_type, extents_type::rank() > strides() const noexcept {
      return __strides_storage();
    }

    MDSPAN_INLINE_FUNCTION
    constexpr index_type required_span_size() const noexcept {
      index_type span_size = 1;
      for(unsigned r = 0; r < extents_type::rank(); r++) {
        // Return early if any of the extents are zero
        if(extents().extent(r)==0) return 0;
        span_size += ( static_cast<index_type>(extents().extent(r) - 1 ) * __strides_storage()[r]);
      }
      return span_size;
    }


    MDSPAN_TEMPLATE_REQUIRES(
      class... Indices,
      /* requires */ (
        sizeof...(Indices) == Extents::rank() &&
        _MDSPAN_FOLD_AND(_MDSPAN_TRAIT(std::is_convertible, Indices, index_type) /*&& ...*/ ) &&
        _MDSPAN_FOLD_AND(_MDSPAN_TRAIT(std::is_nothrow_constructible, index_type, Indices) /*&& ...*/)
      )
    )
    MDSPAN_FORCE_INLINE_FUNCTION
    constexpr index_type operator()(Indices... idxs) const noexcept {
      return static_cast<index_type>(__impl::_call_op_impl(*this, static_cast<index_type>(idxs)...));
    }

    MDSPAN_INLINE_FUNCTION static constexpr bool is_always_unique() noexcept { return true; }
    MDSPAN_INLINE_FUNCTION static constexpr bool is_always_exhaustive() noexcept {
      return false;
    }
    MDSPAN_INLINE_FUNCTION static constexpr bool is_always_strided() noexcept { return true; }

    MDSPAN_INLINE_FUNCTION static constexpr bool is_unique() noexcept { return true; }
    MDSPAN_INLINE_FUNCTION _MDSPAN_CONSTEXPR_14 bool is_exhaustive() const noexcept {
      return required_span_size() == __get_size(extents(), std::make_index_sequence<extents_type::rank()>());
    }
    MDSPAN_INLINE_FUNCTION static constexpr bool is_strided() noexcept { return true; }


    MDSPAN_INLINE_FUNCTION
    constexpr index_type stride(rank_type r) const noexcept
#if MDSPAN_HAS_CXX_20
      requires ( Extents::rank() > 0 )
#endif
    {
      return __strides_storage()[r];
    }

#if !(defined(_MDSPAN_USE_CONCEPTS) && MDSPAN_HAS_CXX_20)
    MDSPAN_TEMPLATE_REQUIRES(
      class StridedLayoutMapping,
      /* requires */ (
        detail::__is_mapping_of<typename StridedLayoutMapping::layout_type, StridedLayoutMapping> &&
        (extents_type::rank() == StridedLayoutMapping::extents_type::rank()) &&
        StridedLayoutMapping::is_always_strided()
      )
    )
#else
    template<class StridedLayoutMapping>
    requires(
         detail::__layout_mapping_alike<StridedLayoutMapping> &&
         (extents_type::rank() == StridedLayoutMapping::extents_type::rank()) &&
         StridedLayoutMapping::is_always_strided()
    )
#endif
    MDSPAN_INLINE_FUNCTION
    friend constexpr bool operator==(const mapping& x, const StridedLayoutMapping& y) noexcept {
      bool strides_match = true;
      for(rank_type r = 0; r < extents_type::rank(); r++)
        strides_match = strides_match && (x.stride(r) == y.stride(r));
      return (x.extents() == y.extents()) &&
             (__impl::__OFFSET(y)== static_cast<typename StridedLayoutMapping::index_type>(0)) &&
             strides_match;
    }

    // This one is not technically part of the proposal. Just here to make implementation a bit more optimal hopefully
    MDSPAN_TEMPLATE_REQUIRES(
      class OtherExtents,
      /* requires */ (
        (extents_type::rank() == OtherExtents::rank())
      )
    )
    MDSPAN_INLINE_FUNCTION
    friend constexpr bool operator==(mapping const& lhs, mapping<OtherExtents> const& rhs) noexcept {
      return __impl::_eq_impl(lhs, rhs);
    }

#if !MDSPAN_HAS_CXX_20
    MDSPAN_TEMPLATE_REQUIRES(
      class StridedLayoutMapping,
      /* requires */ (
        detail::__is_mapping_of<typename StridedLayoutMapping::layout_type, StridedLayoutMapping> &&
        (extents_type::rank() == StridedLayoutMapping::extents_type::rank()) &&
        StridedLayoutMapping::is_always_strided()
      )
    )
    MDSPAN_INLINE_FUNCTION
    friend constexpr bool operator!=(const mapping& x, const StridedLayoutMapping& y) noexcept {
      return not (x == y);
    }

    MDSPAN_TEMPLATE_REQUIRES(
      class OtherExtents,
      /* requires */ (
        (extents_type::rank() == OtherExtents::rank())
      )
    )
    MDSPAN_INLINE_FUNCTION
    friend constexpr bool operator!=(mapping const& lhs, mapping<OtherExtents> const& rhs) noexcept {
      return __impl::_not_eq_impl(lhs, rhs);
    }
#endif

  };
};

} // end namespace MDSPAN_IMPL_STANDARD_NAMESPACE
//END_FILE_INCLUDE: /home/runner/work/mdspan/mdspan/include/experimental/__p0009_bits/layout_stride.hpp

namespace MDSPAN_IMPL_STANDARD_NAMESPACE {

//==============================================================================
template <class Extents>
class layout_right::mapping {
  public:
    using extents_type = Extents;
    using index_type = typename extents_type::index_type;
    using size_type = typename extents_type::size_type;
    using rank_type = typename extents_type::rank_type;
    using layout_type = layout_right;
  private:

    static_assert(detail::__is_extents_v<extents_type>,
                  MDSPAN_IMPL_STANDARD_NAMESPACE_STRING "::layout_right::mapping must be instantiated with a specialization of " MDSPAN_IMPL_STANDARD_NAMESPACE_STRING "::extents.");

    template <class>
    friend class mapping;

    // i0+(i1 + E(1)*(i2 + E(2)*i3))
    template <size_t r, size_t Rank>
    struct __rank_count {};

    template <size_t r, size_t Rank, class I, class... Indices>
    _MDSPAN_HOST_DEVICE
    constexpr index_type __compute_offset(
      index_type offset, __rank_count<r,Rank>, const I& i, Indices... idx) const {
      return __compute_offset(offset * __extents.extent(r) + i,__rank_count<r+1,Rank>(),  idx...);
    }

    template<class I, class ... Indices>
    _MDSPAN_HOST_DEVICE
    constexpr index_type __compute_offset(
      __rank_count<0,extents_type::rank()>, const I& i, Indices... idx) const {
      return __compute_offset(i,__rank_count<1,extents_type::rank()>(),idx...);
    }

    _MDSPAN_HOST_DEVICE
    constexpr index_type __compute_offset(size_t offset, __rank_count<extents_type::rank(), extents_type::rank()>) const {
      return static_cast<index_type>(offset);
    }

    _MDSPAN_HOST_DEVICE
    constexpr index_type __compute_offset(__rank_count<0,0>) const { return 0; }

  public:

    //--------------------------------------------------------------------------------

    MDSPAN_INLINE_FUNCTION_DEFAULTED constexpr mapping() noexcept = default;
    MDSPAN_INLINE_FUNCTION_DEFAULTED constexpr mapping(mapping const&) noexcept = default;

    _MDSPAN_HOST_DEVICE
    constexpr mapping(extents_type const& __exts) noexcept
      :__extents(__exts)
    { }

    MDSPAN_TEMPLATE_REQUIRES(
      class OtherExtents,
      /* requires */ (
        _MDSPAN_TRAIT(std::is_constructible, extents_type, OtherExtents)
      )
    )
    MDSPAN_CONDITIONAL_EXPLICIT((!std::is_convertible<OtherExtents, extents_type>::value)) // needs two () due to comma
    MDSPAN_INLINE_FUNCTION _MDSPAN_CONSTEXPR_14
    mapping(mapping<OtherExtents> const& other) noexcept // NOLINT(google-explicit-constructor)
      :__extents(other.extents())
    {
       /*
        * TODO: check precondition
        * other.required_span_size() is a representable value of type index_type
        */
    }

    MDSPAN_TEMPLATE_REQUIRES(
      class OtherExtents,
      /* requires */ (
        _MDSPAN_TRAIT(std::is_constructible, extents_type, OtherExtents) &&
        (extents_type::rank() <= 1)
      )
    )
    MDSPAN_CONDITIONAL_EXPLICIT((!std::is_convertible<OtherExtents, extents_type>::value)) // needs two () due to comma
    MDSPAN_INLINE_FUNCTION _MDSPAN_CONSTEXPR_14
    mapping(layout_left::mapping<OtherExtents> const& other) noexcept // NOLINT(google-explicit-constructor)
      :__extents(other.extents())
    {
       /*
        * TODO: check precondition
        * other.required_span_size() is a representable value of type index_type
        */
    }

    MDSPAN_TEMPLATE_REQUIRES(
      class OtherExtents,
      /* requires */ (
        _MDSPAN_TRAIT(std::is_constructible, extents_type, OtherExtents)
      )
    )
    MDSPAN_CONDITIONAL_EXPLICIT((extents_type::rank() > 0))
    MDSPAN_INLINE_FUNCTION _MDSPAN_CONSTEXPR_14
    mapping(layout_stride::mapping<OtherExtents> const& other) noexcept // NOLINT(google-explicit-constructor)
      :__extents(other.extents())
    {
       /*
        * TODO: check precondition
        * other.required_span_size() is a representable value of type index_type
        */
       #if !defined(_MDSPAN_HAS_CUDA) && !defined(_MDSPAN_HAS_HIP) && !defined(NDEBUG)
       index_type stride = 1;
       for(rank_type r=__extents.rank(); r>0; r--) {
         if(stride != static_cast<index_type>(other.stride(r-1))) {
           // Note this throw will lead to a terminate if triggered since this function is marked noexcept
           throw std::runtime_error("Assigning layout_stride to layout_right with invalid strides.");
         }
         stride *= __extents.extent(r-1);
       }
       #endif
    }

    MDSPAN_INLINE_FUNCTION_DEFAULTED _MDSPAN_CONSTEXPR_14_DEFAULTED mapping& operator=(mapping const&) noexcept = default;

    MDSPAN_INLINE_FUNCTION
    constexpr const extents_type& extents() const noexcept {
      return __extents;
    }

    MDSPAN_INLINE_FUNCTION
    constexpr index_type required_span_size() const noexcept {
      index_type value = 1;
      for(rank_type r=0; r != extents_type::rank(); ++r) value*=__extents.extent(r);
      return value;
    }

    //--------------------------------------------------------------------------------

    MDSPAN_TEMPLATE_REQUIRES(
      class... Indices,
      /* requires */ (
        (sizeof...(Indices) == extents_type::rank()) &&
        _MDSPAN_FOLD_AND(
           (_MDSPAN_TRAIT(std::is_convertible, Indices, index_type) &&
            _MDSPAN_TRAIT(std::is_nothrow_constructible, index_type, Indices))
        )
      )
    )
    _MDSPAN_HOST_DEVICE
    constexpr index_type operator()(Indices... idxs) const noexcept {
      return __compute_offset(__rank_count<0, extents_type::rank()>(), static_cast<index_type>(idxs)...);
    }

    MDSPAN_INLINE_FUNCTION static constexpr bool is_always_unique() noexcept { return true; }
    MDSPAN_INLINE_FUNCTION static constexpr bool is_always_exhaustive() noexcept { return true; }
    MDSPAN_INLINE_FUNCTION static constexpr bool is_always_strided() noexcept { return true; }
    MDSPAN_INLINE_FUNCTION constexpr bool is_unique() const noexcept { return true; }
    MDSPAN_INLINE_FUNCTION constexpr bool is_exhaustive() const noexcept { return true; }
    MDSPAN_INLINE_FUNCTION constexpr bool is_strided() const noexcept { return true; }

    MDSPAN_INLINE_FUNCTION
    constexpr index_type stride(rank_type i) const noexcept
#if MDSPAN_HAS_CXX_20
      requires ( Extents::rank() > 0 )
#endif
    {
      index_type value = 1;
      for(rank_type r=extents_type::rank()-1; r>i; r--) value*=__extents.extent(r);
      return value;
    }

    template<class OtherExtents>
    MDSPAN_INLINE_FUNCTION
    friend constexpr bool operator==(mapping const& lhs, mapping<OtherExtents> const& rhs) noexcept {
      return lhs.extents() == rhs.extents();
    }

    // In C++ 20 the not equal exists if equal is found
#if !(MDSPAN_HAS_CXX_20)
    template<class OtherExtents>
    MDSPAN_INLINE_FUNCTION
    friend constexpr bool operator!=(mapping const& lhs, mapping<OtherExtents> const& rhs) noexcept {
      return lhs.extents() != rhs.extents();
    }
#endif

    // Not really public, but currently needed to implement fully constexpr useable submdspan:
    template<size_t N, class SizeType, size_t ... E, size_t ... Idx>
    constexpr index_type __get_stride(MDSPAN_IMPL_STANDARD_NAMESPACE::extents<SizeType, E...>,std::integer_sequence<size_t, Idx...>) const {
      return _MDSPAN_FOLD_TIMES_RIGHT((Idx>N? __extents.template __extent<Idx>():1),1);
    }
    template<size_t N>
    constexpr index_type __stride() const noexcept {
      return __get_stride<N>(__extents, std::make_index_sequence<extents_type::rank()>());
    }

private:
   _MDSPAN_NO_UNIQUE_ADDRESS extents_type __extents{};

};

} // end namespace MDSPAN_IMPL_STANDARD_NAMESPACE

//END_FILE_INCLUDE: /home/runner/work/mdspan/mdspan/include/experimental/__p0009_bits/layout_right.hpp

namespace MDSPAN_IMPL_STANDARD_NAMESPACE {
template <
  class ElementType,
  class Extents,
  class LayoutPolicy = layout_right,
  class AccessorPolicy = default_accessor<ElementType>
>
class mdspan
{
private:
  static_assert(detail::__is_extents_v<Extents>,
                MDSPAN_IMPL_STANDARD_NAMESPACE_STRING "::mdspan's Extents template parameter must be a specialization of " MDSPAN_IMPL_STANDARD_NAMESPACE_STRING "::extents.");

  // Workaround for non-deducibility of the index sequence template parameter if it's given at the top level
  template <class>
  struct __deduction_workaround;

  template <size_t... Idxs>
  struct __deduction_workaround<std::index_sequence<Idxs...>>
  {
    MDSPAN_FORCE_INLINE_FUNCTION static constexpr
    size_t __size(mdspan const& __self) noexcept {
      return _MDSPAN_FOLD_TIMES_RIGHT((__self.__mapping_ref().extents().extent(Idxs)), /* * ... * */ size_t(1));
    }
    MDSPAN_FORCE_INLINE_FUNCTION static constexpr
    bool __empty(mdspan const& __self) noexcept {
      return (__self.rank()>0) && _MDSPAN_FOLD_OR((__self.__mapping_ref().extents().extent(Idxs)==index_type(0)));
    }
    template <class ReferenceType, class SizeType, size_t N>
    MDSPAN_FORCE_INLINE_FUNCTION static constexpr
    ReferenceType __callop(mdspan const& __self, const std::array<SizeType, N>& indices) noexcept {
      return __self.__accessor_ref().access(__self.__ptr_ref(), __self.__mapping_ref()(indices[Idxs]...));
    }
  };

public:

  //--------------------------------------------------------------------------------
  // Domain and codomain types

  using extents_type = Extents;
  using layout_type = LayoutPolicy;
  using accessor_type = AccessorPolicy;
  using mapping_type = typename layout_type::template mapping<extents_type>;
  using element_type = ElementType;
  using value_type = std::remove_cv_t<element_type>;
  using index_type = typename extents_type::index_type;
  using size_type = typename extents_type::size_type;
  using rank_type = typename extents_type::rank_type;
  using data_handle_type = typename accessor_type::data_handle_type;
  using reference = typename accessor_type::reference;

  MDSPAN_INLINE_FUNCTION static constexpr size_t rank() noexcept { return extents_type::rank(); }
  MDSPAN_INLINE_FUNCTION static constexpr size_t rank_dynamic() noexcept { return extents_type::rank_dynamic(); }
  MDSPAN_INLINE_FUNCTION static constexpr size_t static_extent(size_t r) noexcept { return extents_type::static_extent(r); }
  MDSPAN_INLINE_FUNCTION constexpr index_type extent(size_t r) const noexcept { return __mapping_ref().extents().extent(r); };

private:

  // Can't use defaulted parameter in the __deduction_workaround template because of a bug in MSVC warning C4348.
  using __impl = __deduction_workaround<std::make_index_sequence<extents_type::rank()>>;

  using __map_acc_pair_t = detail::__compressed_pair<mapping_type, accessor_type>;

public:

  //--------------------------------------------------------------------------------
  // [mdspan.basic.cons], mdspan constructors, assignment, and destructor

#if !MDSPAN_HAS_CXX_20
  MDSPAN_INLINE_FUNCTION_DEFAULTED constexpr mdspan() = default;
#else
  MDSPAN_INLINE_FUNCTION_DEFAULTED constexpr mdspan()
    requires(
       // nvhpc has a bug where using just rank_dynamic() here doesn't work ...
       (extents_type::rank_dynamic() > 0) &&
       _MDSPAN_TRAIT(std::is_default_constructible, data_handle_type) &&
       _MDSPAN_TRAIT(std::is_default_constructible, mapping_type) &&
       _MDSPAN_TRAIT(std::is_default_constructible, accessor_type)
     ) = default;
#endif
  MDSPAN_INLINE_FUNCTION_DEFAULTED constexpr mdspan(const mdspan&) = default;
  MDSPAN_INLINE_FUNCTION_DEFAULTED constexpr mdspan(mdspan&&) = default;

  MDSPAN_TEMPLATE_REQUIRES(
    class... SizeTypes,
    /* requires */ (
      _MDSPAN_FOLD_AND(_MDSPAN_TRAIT(std::is_convertible, SizeTypes, index_type) /* && ... */) &&
      _MDSPAN_FOLD_AND(_MDSPAN_TRAIT(std::is_nothrow_constructible, index_type, SizeTypes) /* && ... */) &&
      ((sizeof...(SizeTypes) == rank()) || (sizeof...(SizeTypes) == rank_dynamic())) &&
      _MDSPAN_TRAIT(std::is_constructible, mapping_type, extents_type) &&
      _MDSPAN_TRAIT(std::is_default_constructible, accessor_type)
    )
  )
  MDSPAN_INLINE_FUNCTION
  explicit constexpr mdspan(data_handle_type p, SizeTypes... dynamic_extents)
    // TODO @proposal-bug shouldn't I be allowed to do `move(p)` here?
    : __members(std::move(p), __map_acc_pair_t(mapping_type(extents_type(static_cast<index_type>(std::move(dynamic_extents))...)), accessor_type()))
  { }

  MDSPAN_TEMPLATE_REQUIRES(
    class SizeType, size_t N,
    /* requires */ (
      _MDSPAN_TRAIT(std::is_convertible, SizeType, index_type) &&
      _MDSPAN_TRAIT(std::is_nothrow_constructible, index_type, SizeType) &&
      ((N == rank()) || (N == rank_dynamic())) &&
      _MDSPAN_TRAIT(std::is_constructible, mapping_type, extents_type) &&
      _MDSPAN_TRAIT(std::is_default_constructible, accessor_type)
    )
  )
  MDSPAN_CONDITIONAL_EXPLICIT(N != rank_dynamic())
  MDSPAN_INLINE_FUNCTION
  constexpr mdspan(data_handle_type p, const std::array<SizeType, N>& dynamic_extents)
    : __members(std::move(p), __map_acc_pair_t(mapping_type(extents_type(dynamic_extents)), accessor_type()))
  { }

#ifdef __cpp_lib_span
  MDSPAN_TEMPLATE_REQUIRES(
    class SizeType, size_t N,
    /* requires */ (
      _MDSPAN_TRAIT(std::is_convertible, SizeType, index_type) &&
      _MDSPAN_TRAIT(std::is_nothrow_constructible, index_type, SizeType) &&
      ((N == rank()) || (N == rank_dynamic())) &&
      _MDSPAN_TRAIT(std::is_constructible, mapping_type, extents_type) &&
      _MDSPAN_TRAIT(std::is_default_constructible, accessor_type)
    )
  )
  MDSPAN_CONDITIONAL_EXPLICIT(N != rank_dynamic())
  MDSPAN_INLINE_FUNCTION
  constexpr mdspan(data_handle_type p, std::span<SizeType, N> dynamic_extents)
    : __members(std::move(p), __map_acc_pair_t(mapping_type(extents_type(as_const(dynamic_extents))), accessor_type()))
  { }
#endif

  MDSPAN_FUNCTION_REQUIRES(
    (MDSPAN_INLINE_FUNCTION constexpr),
    mdspan, (data_handle_type p, const extents_type& exts), ,
    /* requires */ (_MDSPAN_TRAIT(std::is_default_constructible, accessor_type) &&
                    _MDSPAN_TRAIT(std::is_constructible, mapping_type, extents_type))
  ) : __members(std::move(p), __map_acc_pair_t(mapping_type(exts), accessor_type()))
  { }

  MDSPAN_FUNCTION_REQUIRES(
    (MDSPAN_INLINE_FUNCTION constexpr),
    mdspan, (data_handle_type p, const mapping_type& m), ,
    /* requires */ (_MDSPAN_TRAIT(std::is_default_constructible, accessor_type))
  ) : __members(std::move(p), __map_acc_pair_t(m, accessor_type()))
  { }

  MDSPAN_INLINE_FUNCTION
  constexpr mdspan(data_handle_type p, const mapping_type& m, const accessor_type& a)
    : __members(std::move(p), __map_acc_pair_t(m, a))
  { }

  MDSPAN_TEMPLATE_REQUIRES(
    class OtherElementType, class OtherExtents, class OtherLayoutPolicy, class OtherAccessor,
    /* requires */ (
      _MDSPAN_TRAIT(std::is_constructible, mapping_type, typename OtherLayoutPolicy::template mapping<OtherExtents>) &&
      _MDSPAN_TRAIT(std::is_constructible, accessor_type, OtherAccessor)
    )
  )
  MDSPAN_INLINE_FUNCTION
  constexpr mdspan(const mdspan<OtherElementType, OtherExtents, OtherLayoutPolicy, OtherAccessor>& other)
    : __members(other.__ptr_ref(), __map_acc_pair_t(other.__mapping_ref(), other.__accessor_ref()))
  {
      static_assert(_MDSPAN_TRAIT(std::is_constructible, data_handle_type, typename OtherAccessor::data_handle_type),"Incompatible data_handle_type for mdspan construction");
      static_assert(_MDSPAN_TRAIT(std::is_constructible, extents_type, OtherExtents),"Incompatible extents for mdspan construction");
      /*
       * TODO: Check precondition
       * For each rank index r of extents_type, static_extent(r) == dynamic_extent || static_extent(r) == other.extent(r) is true.
       */
  }

  /* Might need this on NVIDIA?
  MDSPAN_INLINE_FUNCTION_DEFAULTED
  ~mdspan() = default;
  */

  MDSPAN_INLINE_FUNCTION_DEFAULTED _MDSPAN_CONSTEXPR_14_DEFAULTED mdspan& operator=(const mdspan&) = default;
  MDSPAN_INLINE_FUNCTION_DEFAULTED _MDSPAN_CONSTEXPR_14_DEFAULTED mdspan& operator=(mdspan&&) = default;


  //--------------------------------------------------------------------------------
  // [mdspan.basic.mapping], mdspan mapping domain multidimensional index to access codomain element

  #if MDSPAN_USE_BRACKET_OPERATOR
  MDSPAN_TEMPLATE_REQUIRES(
    class... SizeTypes,
    /* requires */ (
      _MDSPAN_FOLD_AND(_MDSPAN_TRAIT(std::is_convertible, SizeTypes, index_type) /* && ... */) &&
      _MDSPAN_FOLD_AND(_MDSPAN_TRAIT(std::is_nothrow_constructible, index_type, SizeTypes) /* && ... */) &&
      (rank() == sizeof...(SizeTypes))
    )
  )
  MDSPAN_FORCE_INLINE_FUNCTION
  constexpr reference operator[](SizeTypes... indices) const
  {
    return __accessor_ref().access(__ptr_ref(), __mapping_ref()(static_cast<index_type>(std::move(indices))...));
  }
  #endif

  MDSPAN_TEMPLATE_REQUIRES(
    class SizeType,
    /* requires */ (
      _MDSPAN_TRAIT(std::is_convertible, SizeType, index_type) &&
      _MDSPAN_TRAIT(std::is_nothrow_constructible, index_type, SizeType)
    )
  )
  MDSPAN_FORCE_INLINE_FUNCTION
  constexpr reference operator[](const std::array< SizeType, rank()>& indices) const
  {
    return __impl::template __callop<reference>(*this, indices);
  }

  #ifdef __cpp_lib_span
  MDSPAN_TEMPLATE_REQUIRES(
    class SizeType,
    /* requires */ (
      _MDSPAN_TRAIT(std::is_convertible, SizeType, index_type) &&
      _MDSPAN_TRAIT(std::is_nothrow_constructible, index_type, SizeType)
    )
  )
  MDSPAN_FORCE_INLINE_FUNCTION
  constexpr reference operator[](std::span<SizeType, rank()> indices) const
  {
    return __impl::template __callop<reference>(*this, indices);
  }
  #endif // __cpp_lib_span

  #if !MDSPAN_USE_BRACKET_OPERATOR
  MDSPAN_TEMPLATE_REQUIRES(
    class Index,
    /* requires */ (
      _MDSPAN_TRAIT(std::is_convertible, Index, index_type) &&
      _MDSPAN_TRAIT(std::is_nothrow_constructible, index_type, Index) &&
      extents_type::rank() == 1
    )
  )
  MDSPAN_FORCE_INLINE_FUNCTION
  constexpr reference operator[](Index idx) const
  {
    return __accessor_ref().access(__ptr_ref(), __mapping_ref()(static_cast<index_type>(std::move(idx))));
  }
  #endif

  #if MDSPAN_USE_PAREN_OPERATOR
  MDSPAN_TEMPLATE_REQUIRES(
    class... SizeTypes,
    /* requires */ (
      _MDSPAN_FOLD_AND(_MDSPAN_TRAIT(std::is_convertible, SizeTypes, index_type) /* && ... */) &&
      _MDSPAN_FOLD_AND(_MDSPAN_TRAIT(std::is_nothrow_constructible, index_type, SizeTypes) /* && ... */) &&
      extents_type::rank() == sizeof...(SizeTypes)
    )
  )
  MDSPAN_FORCE_INLINE_FUNCTION
  constexpr reference operator()(SizeTypes... indices) const
  {
    return __accessor_ref().access(__ptr_ref(), __mapping_ref()(static_cast<index_type>(std::move(indices))...));
  }

  MDSPAN_TEMPLATE_REQUIRES(
    class SizeType,
    /* requires */ (
      _MDSPAN_TRAIT(std::is_convertible, SizeType, index_type) &&
      _MDSPAN_TRAIT(std::is_nothrow_constructible, index_type, SizeType)
    )
  )
  MDSPAN_FORCE_INLINE_FUNCTION
  constexpr reference operator()(const std::array<SizeType, rank()>& indices) const
  {
    return __impl::template __callop<reference>(*this, indices);
  }

  #ifdef __cpp_lib_span
  MDSPAN_TEMPLATE_REQUIRES(
    class SizeType,
    /* requires */ (
      _MDSPAN_TRAIT(std::is_convertible, SizeType, index_type) &&
      _MDSPAN_TRAIT(std::is_nothrow_constructible, index_type, SizeType)
    )
  )
  MDSPAN_FORCE_INLINE_FUNCTION
  constexpr reference operator()(std::span<SizeType, rank()> indices) const
  {
    return __impl::template __callop<reference>(*this, indices);
  }
  #endif // __cpp_lib_span
  #endif // MDSPAN_USE_PAREN_OPERATOR

  MDSPAN_INLINE_FUNCTION constexpr size_t size() const noexcept {
    return __impl::__size(*this);
  };

  MDSPAN_INLINE_FUNCTION constexpr bool empty() const noexcept {
    return __impl::__empty(*this);
  };

  MDSPAN_INLINE_FUNCTION
  friend constexpr void swap(mdspan& x, mdspan& y) noexcept {
    // can't call the std::swap inside on HIP
    #if !defined(_MDSPAN_HAS_HIP) && !defined(_MDSPAN_HAS_CUDA)
    using std::swap;
    swap(x.__ptr_ref(), y.__ptr_ref());
    swap(x.__mapping_ref(), y.__mapping_ref());
    swap(x.__accessor_ref(), y.__accessor_ref());
    #else
    mdspan tmp = y;
    y = x;
    x = tmp;
    #endif
  }

  //--------------------------------------------------------------------------------
  // [mdspan.basic.domobs], mdspan observers of the domain multidimensional index space


  MDSPAN_INLINE_FUNCTION constexpr const extents_type& extents() const noexcept { return __mapping_ref().extents(); };
  MDSPAN_INLINE_FUNCTION constexpr const data_handle_type& data_handle() const noexcept { return __ptr_ref(); };
  MDSPAN_INLINE_FUNCTION constexpr const mapping_type& mapping() const noexcept { return __mapping_ref(); };
  MDSPAN_INLINE_FUNCTION constexpr const accessor_type& accessor() const noexcept { return __accessor_ref(); };

  //--------------------------------------------------------------------------------
  // [mdspan.basic.obs], mdspan observers of the mapping

  MDSPAN_INLINE_FUNCTION static constexpr bool is_always_unique() noexcept { return mapping_type::is_always_unique(); };
  MDSPAN_INLINE_FUNCTION static constexpr bool is_always_exhaustive() noexcept { return mapping_type::is_always_exhaustive(); };
  MDSPAN_INLINE_FUNCTION static constexpr bool is_always_strided() noexcept { return mapping_type::is_always_strided(); };

  MDSPAN_INLINE_FUNCTION constexpr bool is_unique() const noexcept { return __mapping_ref().is_unique(); };
  MDSPAN_INLINE_FUNCTION constexpr bool is_exhaustive() const noexcept { return __mapping_ref().is_exhaustive(); };
  MDSPAN_INLINE_FUNCTION constexpr bool is_strided() const noexcept { return __mapping_ref().is_strided(); };
  MDSPAN_INLINE_FUNCTION constexpr index_type stride(size_t r) const { return __mapping_ref().stride(r); };

private:

  detail::__compressed_pair<data_handle_type, __map_acc_pair_t> __members{};

  MDSPAN_FORCE_INLINE_FUNCTION _MDSPAN_CONSTEXPR_14 data_handle_type& __ptr_ref() noexcept { return __members.__first(); }
  MDSPAN_FORCE_INLINE_FUNCTION constexpr data_handle_type const& __ptr_ref() const noexcept { return __members.__first(); }
  MDSPAN_FORCE_INLINE_FUNCTION _MDSPAN_CONSTEXPR_14 mapping_type& __mapping_ref() noexcept { return __members.__second().__first(); }
  MDSPAN_FORCE_INLINE_FUNCTION constexpr mapping_type const& __mapping_ref() const noexcept { return __members.__second().__first(); }
  MDSPAN_FORCE_INLINE_FUNCTION _MDSPAN_CONSTEXPR_14 accessor_type& __accessor_ref() noexcept { return __members.__second().__second(); }
  MDSPAN_FORCE_INLINE_FUNCTION constexpr accessor_type const& __accessor_ref() const noexcept { return __members.__second().__second(); }

  template <class, class, class, class>
  friend class mdspan;

};

#if defined(_MDSPAN_USE_CLASS_TEMPLATE_ARGUMENT_DEDUCTION)
MDSPAN_TEMPLATE_REQUIRES(
  class ElementType, class... SizeTypes,
  /* requires */ _MDSPAN_FOLD_AND(_MDSPAN_TRAIT(std::is_integral, SizeTypes) /* && ... */) &&
  (sizeof...(SizeTypes) > 0)
)
MDSPAN_DEDUCTION_GUIDE explicit mdspan(ElementType*, SizeTypes...)
  -> mdspan<ElementType, ::MDSPAN_IMPL_STANDARD_NAMESPACE::dextents<size_t, sizeof...(SizeTypes)>>;

MDSPAN_TEMPLATE_REQUIRES(
  class Pointer,
  (_MDSPAN_TRAIT(std::is_pointer, std::remove_reference_t<Pointer>))
)
MDSPAN_DEDUCTION_GUIDE mdspan(Pointer&&) -> mdspan<std::remove_pointer_t<std::remove_reference_t<Pointer>>, extents<size_t>>;

MDSPAN_TEMPLATE_REQUIRES(
  class CArray,
  (_MDSPAN_TRAIT(std::is_array, CArray) && (std::rank_v<CArray> == 1))
)
MDSPAN_DEDUCTION_GUIDE mdspan(CArray&) -> mdspan<std::remove_all_extents_t<CArray>, extents<size_t, ::std::extent_v<CArray,0>>>;

template <class ElementType, class SizeType, size_t N>
MDSPAN_DEDUCTION_GUIDE mdspan(ElementType*, const ::std::array<SizeType, N>&)
  -> mdspan<ElementType, ::MDSPAN_IMPL_STANDARD_NAMESPACE::dextents<size_t, N>>;

#ifdef __cpp_lib_span
template <class ElementType, class SizeType, size_t N>
MDSPAN_DEDUCTION_GUIDE mdspan(ElementType*, ::std::span<SizeType, N>)
  -> mdspan<ElementType, ::MDSPAN_IMPL_STANDARD_NAMESPACE::dextents<size_t, N>>;
#endif

// This one is necessary because all the constructors take `data_handle_type`s, not
// `ElementType*`s, and `data_handle_type` is taken from `accessor_type::data_handle_type`, which
// seems to throw off automatic deduction guides.
template <class ElementType, class SizeType, size_t... ExtentsPack>
MDSPAN_DEDUCTION_GUIDE mdspan(ElementType*, const extents<SizeType, ExtentsPack...>&)
  -> mdspan<ElementType, ::MDSPAN_IMPL_STANDARD_NAMESPACE::extents<SizeType, ExtentsPack...>>;

template <class ElementType, class MappingType>
MDSPAN_DEDUCTION_GUIDE mdspan(ElementType*, const MappingType&)
  -> mdspan<ElementType, typename MappingType::extents_type, typename MappingType::layout_type>;

template <class MappingType, class AccessorType>
MDSPAN_DEDUCTION_GUIDE mdspan(const typename AccessorType::data_handle_type, const MappingType&, const AccessorType&)
  -> mdspan<typename AccessorType::element_type, typename MappingType::extents_type, typename MappingType::layout_type, AccessorType>;
#endif

} // end namespace MDSPAN_IMPL_STANDARD_NAMESPACE
//END_FILE_INCLUDE: /home/runner/work/mdspan/mdspan/include/experimental/__p0009_bits/mdspan.hpp
//BEGIN_FILE_INCLUDE: /home/runner/work/mdspan/mdspan/include/experimental/__p0009_bits/layout_left.hpp
//@HEADER
// ************************************************************************
//
//                        Kokkos v. 4.0
//       Copyright (2022) National Technology & Engineering
//               Solutions of Sandia, LLC (NTESS).
//
// Under the terms of Contract DE-NA0003525 with NTESS,
// the U.S. Government retains certain rights in this software.
//
// Part of Kokkos, under the Apache License v2.0 with LLVM Exceptions.
// See https://kokkos.org/LICENSE for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//@HEADER


namespace MDSPAN_IMPL_STANDARD_NAMESPACE {

//==============================================================================

template <class Extents>
class layout_left::mapping {
  public:
    using extents_type = Extents;
    using index_type = typename extents_type::index_type;
    using size_type = typename extents_type::size_type;
    using rank_type = typename extents_type::rank_type;
    using layout_type = layout_left;
  private:

    static_assert(detail::__is_extents_v<extents_type>,
                  MDSPAN_IMPL_STANDARD_NAMESPACE_STRING "::layout_left::mapping must be instantiated with a specialization of " MDSPAN_IMPL_STANDARD_NAMESPACE_STRING "::extents.");

    template <class>
    friend class mapping;

    // i0+(i1 + E(1)*(i2 + E(2)*i3))
    template <size_t r, size_t Rank>
    struct __rank_count {};

    template <size_t r, size_t Rank, class I, class... Indices>
    _MDSPAN_HOST_DEVICE
    constexpr index_type __compute_offset(
      __rank_count<r,Rank>, const I& i, Indices... idx) const {
      return __compute_offset(__rank_count<r+1,Rank>(), idx...) *
                 __extents.extent(r) + i;
    }

    template<class I>
    _MDSPAN_HOST_DEVICE
    constexpr index_type __compute_offset(
      __rank_count<extents_type::rank()-1,extents_type::rank()>, const I& i) const {
      return i;
    }

    _MDSPAN_HOST_DEVICE
    constexpr index_type __compute_offset(__rank_count<0,0>) const { return 0; }

  public:

    //--------------------------------------------------------------------------------

    MDSPAN_INLINE_FUNCTION_DEFAULTED constexpr mapping() noexcept = default;
    MDSPAN_INLINE_FUNCTION_DEFAULTED constexpr mapping(mapping const&) noexcept = default;

    _MDSPAN_HOST_DEVICE
    constexpr mapping(extents_type const& __exts) noexcept
      :__extents(__exts)
    { }

    MDSPAN_TEMPLATE_REQUIRES(
      class OtherExtents,
      /* requires */ (
        _MDSPAN_TRAIT(std::is_constructible, extents_type, OtherExtents)
      )
    )
    MDSPAN_CONDITIONAL_EXPLICIT((!std::is_convertible<OtherExtents, extents_type>::value)) // needs two () due to comma
    MDSPAN_INLINE_FUNCTION _MDSPAN_CONSTEXPR_14
    mapping(mapping<OtherExtents> const& other) noexcept // NOLINT(google-explicit-constructor)
      :__extents(other.extents())
    {
       /*
        * TODO: check precondition
        * other.required_span_size() is a representable value of type index_type
        */
    }

    MDSPAN_TEMPLATE_REQUIRES(
      class OtherExtents,
      /* requires */ (
        _MDSPAN_TRAIT(std::is_constructible, extents_type, OtherExtents) &&
        (extents_type::rank() <= 1)
      )
    )
    MDSPAN_CONDITIONAL_EXPLICIT((!std::is_convertible<OtherExtents, extents_type>::value)) // needs two () due to comma
    MDSPAN_INLINE_FUNCTION _MDSPAN_CONSTEXPR_14
    mapping(layout_right::mapping<OtherExtents> const& other) noexcept // NOLINT(google-explicit-constructor)
      :__extents(other.extents())
    {
       /*
        * TODO: check precondition
        * other.required_span_size() is a representable value of type index_type
        */
    }

    MDSPAN_TEMPLATE_REQUIRES(
      class OtherExtents,
      /* requires */ (
        _MDSPAN_TRAIT(std::is_constructible, extents_type, OtherExtents)
      )
    )
    MDSPAN_CONDITIONAL_EXPLICIT((extents_type::rank() > 0))
    MDSPAN_INLINE_FUNCTION _MDSPAN_CONSTEXPR_14
    mapping(layout_stride::mapping<OtherExtents> const& other) noexcept // NOLINT(google-explicit-constructor)
      :__extents(other.extents())
    {
       /*
        * TODO: check precondition
        * other.required_span_size() is a representable value of type index_type
        */
       #if !defined(_MDSPAN_HAS_CUDA) && !defined(_MDSPAN_HAS_HIP) && !defined(NDEBUG)
       index_type stride = 1;
       for(rank_type r=0; r<__extents.rank(); r++) {
         if(stride != static_cast<index_type>(other.stride(r))) {
           // Note this throw will lead to a terminate if triggered since this function is marked noexcept
           throw std::runtime_error("Assigning layout_stride to layout_left with invalid strides.");
         }
         stride *= __extents.extent(r);
       }
       #endif
    }

    MDSPAN_INLINE_FUNCTION_DEFAULTED _MDSPAN_CONSTEXPR_14_DEFAULTED mapping& operator=(mapping const&) noexcept = default;

    MDSPAN_INLINE_FUNCTION
    constexpr const extents_type& extents() const noexcept {
      return __extents;
    }

    MDSPAN_INLINE_FUNCTION
    constexpr index_type required_span_size() const noexcept {
      index_type value = 1;
      for(rank_type r=0; r<extents_type::rank(); r++) value*=__extents.extent(r);
      return value;
    }

    //--------------------------------------------------------------------------------

    MDSPAN_TEMPLATE_REQUIRES(
      class... Indices,
      /* requires */ (
        (sizeof...(Indices) == extents_type::rank()) &&
        _MDSPAN_FOLD_AND(
           (_MDSPAN_TRAIT(std::is_convertible, Indices, index_type) &&
            _MDSPAN_TRAIT(std::is_nothrow_constructible, index_type, Indices))
        )
      )
    )
    _MDSPAN_HOST_DEVICE
    constexpr index_type operator()(Indices... idxs) const noexcept {
      return __compute_offset(__rank_count<0, extents_type::rank()>(), static_cast<index_type>(idxs)...);
    }



    MDSPAN_INLINE_FUNCTION static constexpr bool is_always_unique() noexcept { return true; }
    MDSPAN_INLINE_FUNCTION static constexpr bool is_always_exhaustive() noexcept { return true; }
    MDSPAN_INLINE_FUNCTION static constexpr bool is_always_strided() noexcept { return true; }

    MDSPAN_INLINE_FUNCTION constexpr bool is_unique() const noexcept { return true; }
    MDSPAN_INLINE_FUNCTION constexpr bool is_exhaustive() const noexcept { return true; }
    MDSPAN_INLINE_FUNCTION constexpr bool is_strided() const noexcept { return true; }

    MDSPAN_INLINE_FUNCTION
    constexpr index_type stride(rank_type i) const noexcept
#if MDSPAN_HAS_CXX_20
      requires ( Extents::rank() > 0 )
#endif
    {
      index_type value = 1;
      for(rank_type r=0; r<i; r++) value*=__extents.extent(r);
      return value;
    }

    template<class OtherExtents>
    MDSPAN_INLINE_FUNCTION
    friend constexpr bool operator==(mapping const& lhs, mapping<OtherExtents> const& rhs) noexcept {
      return lhs.extents() == rhs.extents();
    }

    // In C++ 20 the not equal exists if equal is found
#if !(MDSPAN_HAS_CXX_20)
    template<class OtherExtents>
    MDSPAN_INLINE_FUNCTION
    friend constexpr bool operator!=(mapping const& lhs, mapping<OtherExtents> const& rhs) noexcept {
      return lhs.extents() != rhs.extents();
    }
#endif

    // Not really public, but currently needed to implement fully constexpr useable submdspan:
    template<size_t N, class SizeType, size_t ... E, size_t ... Idx>
    constexpr index_type __get_stride(MDSPAN_IMPL_STANDARD_NAMESPACE::extents<SizeType, E...>,std::integer_sequence<size_t, Idx...>) const {
      return _MDSPAN_FOLD_TIMES_RIGHT((Idx<N? __extents.template __extent<Idx>():1),1);
    }
    template<size_t N>
    constexpr index_type __stride() const noexcept {
      return __get_stride<N>(__extents, std::make_index_sequence<extents_type::rank()>());
    }

private:
   _MDSPAN_NO_UNIQUE_ADDRESS extents_type __extents{};

};


} // end namespace MDSPAN_IMPL_STANDARD_NAMESPACE

//END_FILE_INCLUDE: /home/runner/work/mdspan/mdspan/include/experimental/__p0009_bits/layout_left.hpp
#if MDSPAN_HAS_CXX_17
//BEGIN_FILE_INCLUDE: /home/runner/work/mdspan/mdspan/include/experimental/__p2630_bits/submdspan.hpp
//@HEADER
// ************************************************************************
//
//                        Kokkos v. 4.0
//       Copyright (2022) National Technology & Engineering
//               Solutions of Sandia, LLC (NTESS).
//
// Under the terms of Contract DE-NA0003525 with NTESS,
// the U.S. Government retains certain rights in this software.
//
// Part of Kokkos, under the Apache License v2.0 with LLVM Exceptions.
// See https://kokkos.org/LICENSE for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//@HEADER


//BEGIN_FILE_INCLUDE: /home/runner/work/mdspan/mdspan/include/experimental/__p2630_bits/submdspan_extents.hpp
//@HEADER
// ************************************************************************
//
//                        Kokkos v. 4.0
//       Copyright (2022) National Technology & Engineering
//               Solutions of Sandia, LLC (NTESS).
//
// Under the terms of Contract DE-NA0003525 with NTESS,
// the U.S. Government retains certain rights in this software.
//
// Part of Kokkos, under the Apache License v2.0 with LLVM Exceptions.
// See https://kokkos.org/LICENSE for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//@HEADER


#include <tuple>

//BEGIN_FILE_INCLUDE: /home/runner/work/mdspan/mdspan/include/experimental/__p2630_bits/strided_slice.hpp

//@HEADER
// ************************************************************************
//
//                        Kokkos v. 4.0
//       Copyright (2022) National Technology & Engineering
//               Solutions of Sandia, LLC (NTESS).
//
// Under the terms of Contract DE-NA0003525 with NTESS,
// the U.S. Government retains certain rights in this software.
//
// Part of Kokkos, under the Apache License v2.0 with LLVM Exceptions.
// See https://kokkos.org/LICENSE for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//@HEADER


#include <type_traits>

namespace MDSPAN_IMPL_STANDARD_NAMESPACE {
namespace MDSPAN_IMPL_PROPOSED_NAMESPACE {

namespace {
  template<class T>
  struct __mdspan_is_integral_constant: std::false_type {};

  template<class T, T val>
  struct __mdspan_is_integral_constant<std::integral_constant<T,val>>: std::true_type {};
}
// Slice Specifier allowing for strides and compile time extent
template <class OffsetType, class ExtentType, class StrideType>
struct strided_slice {
  using offset_type = OffsetType;
  using extent_type = ExtentType;
  using stride_type = StrideType;

  OffsetType offset;
  ExtentType extent;
  StrideType stride;

  static_assert(std::is_integral_v<OffsetType> || __mdspan_is_integral_constant<OffsetType>::value);
  static_assert(std::is_integral_v<ExtentType> || __mdspan_is_integral_constant<ExtentType>::value);
  static_assert(std::is_integral_v<StrideType> || __mdspan_is_integral_constant<StrideType>::value);
};

} // MDSPAN_IMPL_PROPOSED_NAMESPACE
} // MDSPAN_IMPL_STANDARD_NAMESPACE
//END_FILE_INCLUDE: /home/runner/work/mdspan/mdspan/include/experimental/__p2630_bits/strided_slice.hpp
namespace MDSPAN_IMPL_STANDARD_NAMESPACE {
namespace MDSPAN_IMPL_PROPOSED_NAMESPACE {
namespace detail {

// Mapping from submapping ranks to srcmapping ranks
// InvMapRank is an index_sequence, which we build recursively
// to contain the mapped indices.
// end of recursion specialization containing the final index_sequence
template <size_t Counter, size_t... MapIdxs>
MDSPAN_INLINE_FUNCTION
constexpr auto inv_map_rank(std::integral_constant<size_t, Counter>, std::index_sequence<MapIdxs...>) {
  return std::index_sequence<MapIdxs...>();
}

// specialization reducing rank by one (i.e., integral slice specifier)
template<size_t Counter, class Slice, class... SliceSpecifiers, size_t... MapIdxs>
MDSPAN_INLINE_FUNCTION
constexpr auto inv_map_rank(std::integral_constant<size_t, Counter>, std::index_sequence<MapIdxs...>, Slice,
                  SliceSpecifiers... slices) {
  using next_idx_seq_t = std::conditional_t<std::is_convertible_v<Slice, size_t>,
                                       std::index_sequence<MapIdxs...>,
                                       std::index_sequence<MapIdxs..., Counter>>;

  return inv_map_rank(std::integral_constant<size_t,Counter + 1>(), next_idx_seq_t(),
                                     slices...);
}

// Helper for identifying strided_slice
template <class T> struct is_strided_slice : std::false_type {};

template <class OffsetType, class ExtentType, class StrideType>
struct is_strided_slice<
    strided_slice<OffsetType, ExtentType, StrideType>> : std::true_type {};

// first_of(slice): getting begin of slice specifier range
MDSPAN_TEMPLATE_REQUIRES(
  class Integral,
  /* requires */(std::is_convertible_v<Integral, size_t>)
)
MDSPAN_INLINE_FUNCTION
constexpr Integral first_of(const Integral &i) {
  return i;
}

MDSPAN_INLINE_FUNCTION
constexpr std::integral_constant<size_t, 0>
first_of(const ::MDSPAN_IMPL_STANDARD_NAMESPACE::full_extent_t &) {
  return std::integral_constant<size_t, 0>();
}

MDSPAN_TEMPLATE_REQUIRES(
  class Slice,
  /* requires */(std::is_convertible_v<Slice, std::tuple<size_t, size_t>>)
)
MDSPAN_INLINE_FUNCTION
constexpr auto first_of(const Slice &i) {
  return std::get<0>(i);
}

template <class OffsetType, class ExtentType, class StrideType>
MDSPAN_INLINE_FUNCTION
constexpr OffsetType
first_of(const strided_slice<OffsetType, ExtentType, StrideType> &r) {
  return r.offset;
}

// last_of(slice): getting end of slice specifier range
// We need however not just the slice but also the extents
// of the original view and which rank from the extents.
// This is needed in the case of slice being full_extent_t.
MDSPAN_TEMPLATE_REQUIRES(
  size_t k, class Extents, class Integral,
  /* requires */(std::is_convertible_v<Integral, size_t>)
)
MDSPAN_INLINE_FUNCTION
constexpr Integral
    last_of(std::integral_constant<size_t, k>, const Extents &, const Integral &i) {
  return i;
}

MDSPAN_TEMPLATE_REQUIRES(
  size_t k, class Extents, class Slice,
  /* requires */(std::is_convertible_v<Slice, std::tuple<size_t, size_t>>)
)
MDSPAN_INLINE_FUNCTION
constexpr auto last_of(std::integral_constant<size_t, k>, const Extents &,
                       const Slice &i) {
  return std::get<1>(i);
}

// Suppress spurious warning with NVCC about no return statement.
// This is a known issue in NVCC and NVC++
// Depending on the CUDA and GCC version we need both the builtin
// and the diagnostic push. I tried really hard to find something shorter
// but no luck ...
#if defined __NVCC__
    #ifdef __NVCC_DIAG_PRAGMA_SUPPORT__
        #pragma nv_diagnostic push
        #pragma nv_diag_suppress = implicit_return_from_non_void_function
    #else
      #ifdef __CUDA_ARCH__
        #pragma diagnostic push
        #pragma diag_suppress implicit_return_from_non_void_function
      #endif
    #endif
#elif defined __NVCOMPILER
    #pragma    diagnostic push
    #pragma    diag_suppress = implicit_return_from_non_void_function
#endif
template <size_t k, class Extents>
MDSPAN_INLINE_FUNCTION
constexpr auto last_of(std::integral_constant<size_t, k>, const Extents &ext,
                       ::MDSPAN_IMPL_STANDARD_NAMESPACE::full_extent_t) {
  if constexpr (Extents::static_extent(k) == dynamic_extent) {
    return ext.extent(k);
  } else {
    return std::integral_constant<size_t, Extents::static_extent(k)>();
  }
#if defined(__NVCC__) && !defined(__CUDA_ARCH__) && defined(__GNUC__)
  // Even with CUDA_ARCH protection this thing warns about calling host function
  __builtin_unreachable();
#endif
}
#if defined __NVCC__
    #ifdef __NVCC_DIAG_PRAGMA_SUPPORT__
        #pragma nv_diagnostic pop
    #else
      #ifdef __CUDA_ARCH__
        #pragma diagnostic pop
      #endif
    #endif
#elif defined __NVCOMPILER
    #pragma    diagnostic pop
#endif

template <size_t k, class Extents, class OffsetType, class ExtentType,
          class StrideType>
MDSPAN_INLINE_FUNCTION
constexpr OffsetType
last_of(std::integral_constant<size_t, k>, const Extents &,
        const strided_slice<OffsetType, ExtentType, StrideType> &r) {
  return r.extent;
}

// get stride of slices
template <class T>
MDSPAN_INLINE_FUNCTION
constexpr auto stride_of(const T &) {
  return std::integral_constant<size_t, 1>();
}

template <class OffsetType, class ExtentType, class StrideType>
MDSPAN_INLINE_FUNCTION
constexpr auto
stride_of(const strided_slice<OffsetType, ExtentType, StrideType> &r) {
  return r.stride;
}

// divide which can deal with integral constant preservation
template <class IndexT, class T0, class T1>
MDSPAN_INLINE_FUNCTION
constexpr auto divide(const T0 &v0, const T1 &v1) {
  return IndexT(v0) / IndexT(v1);
}

template <class IndexT, class T0, T0 v0, class T1, T1 v1>
MDSPAN_INLINE_FUNCTION
constexpr auto divide(const std::integral_constant<T0, v0> &,
                      const std::integral_constant<T1, v1> &) {
  // cutting short division by zero
  // this is used for strided_slice with zero extent/stride
  return std::integral_constant<IndexT, v0 == 0 ? 0 : v0 / v1>();
}

// multiply which can deal with integral constant preservation
template <class IndexT, class T0, class T1>
MDSPAN_INLINE_FUNCTION
constexpr auto multiply(const T0 &v0, const T1 &v1) {
  return IndexT(v0) * IndexT(v1);
}

template <class IndexT, class T0, T0 v0, class T1, T1 v1>
MDSPAN_INLINE_FUNCTION
constexpr auto multiply(const std::integral_constant<T0, v0> &,
                        const std::integral_constant<T1, v1> &) {
  return std::integral_constant<IndexT, v0 * v1>();
}

// compute new static extent from range, preserving static knowledge
template <class Arg0, class Arg1> struct StaticExtentFromRange {
  constexpr static size_t value = dynamic_extent;
};

template <class Integral0, Integral0 val0, class Integral1, Integral1 val1>
struct StaticExtentFromRange<std::integral_constant<Integral0, val0>,
                             std::integral_constant<Integral1, val1>> {
  constexpr static size_t value = val1 - val0;
};

// compute new static extent from strided_slice, preserving static
// knowledge
template <class Arg0, class Arg1> struct StaticExtentFromStridedRange {
  constexpr static size_t value = dynamic_extent;
};

template <class Integral0, Integral0 val0, class Integral1, Integral1 val1>
struct StaticExtentFromStridedRange<std::integral_constant<Integral0, val0>,
                                    std::integral_constant<Integral1, val1>> {
  constexpr static size_t value = val0 > 0 ? 1 + (val0 - 1) / val1 : 0;
};

// creates new extents through recursive calls to next_extent member function
// next_extent has different overloads for different types of stride specifiers
template <size_t K, class Extents, size_t... NewExtents>
struct extents_constructor {
  MDSPAN_TEMPLATE_REQUIRES(
    class Slice, class... SlicesAndExtents,
    /* requires */(!std::is_convertible_v<Slice, size_t> &&
                   !is_strided_slice<Slice>::value)
  )
  MDSPAN_INLINE_FUNCTION
  constexpr static auto next_extent(const Extents &ext, const Slice &sl,
                                    SlicesAndExtents... slices_and_extents) {
    constexpr size_t new_static_extent = StaticExtentFromRange<
        decltype(first_of(std::declval<Slice>())),
        decltype(last_of(std::integral_constant<size_t, Extents::rank() - K>(),
                         std::declval<Extents>(),
                         std::declval<Slice>()))>::value;

    using next_t =
        extents_constructor<K - 1, Extents, NewExtents..., new_static_extent>;
    using index_t = typename Extents::index_type;
    return next_t::next_extent(
        ext, slices_and_extents...,
        index_t(last_of(std::integral_constant<size_t, Extents::rank() - K>(), ext,
                        sl)) -
            index_t(first_of(sl)));
  }

  MDSPAN_TEMPLATE_REQUIRES(
    class Slice, class... SlicesAndExtents,
    /* requires */ (std::is_convertible_v<Slice, size_t>)
  )
  MDSPAN_INLINE_FUNCTION
  constexpr static auto next_extent(const Extents &ext, const Slice &,
                                    SlicesAndExtents... slices_and_extents) {
    using next_t = extents_constructor<K - 1, Extents, NewExtents...>;
    return next_t::next_extent(ext, slices_and_extents...);
  }

  template <class OffsetType, class ExtentType, class StrideType,
            class... SlicesAndExtents>
  MDSPAN_INLINE_FUNCTION
  constexpr static auto
  next_extent(const Extents &ext,
              const strided_slice<OffsetType, ExtentType, StrideType> &r,
              SlicesAndExtents... slices_and_extents) {
    using index_t = typename Extents::index_type;
    using new_static_extent_t =
        StaticExtentFromStridedRange<ExtentType, StrideType>;
    if constexpr (new_static_extent_t::value == dynamic_extent) {
      using next_t =
          extents_constructor<K - 1, Extents, NewExtents..., dynamic_extent>;
      return next_t::next_extent(
          ext, slices_and_extents...,
          r.extent > 0 ? 1 + divide<index_t>(r.extent - 1, r.stride) : 0);
    } else {
      constexpr size_t new_static_extent = new_static_extent_t::value;
      using next_t =
          extents_constructor<K - 1, Extents, NewExtents..., new_static_extent>;
      return next_t::next_extent(
          ext, slices_and_extents..., index_t(divide<index_t>(ExtentType(), StrideType())));
    }
  }
};

template <class Extents, size_t... NewStaticExtents>
struct extents_constructor<0, Extents, NewStaticExtents...> {

  template <class... NewExtents>
  MDSPAN_INLINE_FUNCTION
  constexpr static auto next_extent(const Extents &, NewExtents... new_exts) {
    return extents<typename Extents::index_type, NewStaticExtents...>(
        new_exts...);
  }
};

} // namespace detail

// submdspan_extents creates new extents given src extents and submdspan slice
// specifiers
template <class IndexType, size_t... Extents, class... SliceSpecifiers>
MDSPAN_INLINE_FUNCTION
constexpr auto submdspan_extents(const extents<IndexType, Extents...> &src_exts,
                                 SliceSpecifiers... slices) {

  using ext_t = extents<IndexType, Extents...>;
  return detail::extents_constructor<ext_t::rank(), ext_t>::next_extent(
      src_exts, slices...);
}
} // namespace MDSPAN_IMPL_PROPOSED_NAMESPACE
} // namespace MDSPAN_IMPL_STANDARD_NAMESPACE
//END_FILE_INCLUDE: /home/runner/work/mdspan/mdspan/include/experimental/__p2630_bits/submdspan_extents.hpp
//BEGIN_FILE_INCLUDE: /home/runner/work/mdspan/mdspan/include/experimental/__p2630_bits/submdspan_mapping.hpp
//@HEADER
// ************************************************************************
//
//                        Kokkos v. 4.0
//       Copyright (2022) National Technology & Engineering
//               Solutions of Sandia, LLC (NTESS).
//
// Under the terms of Contract DE-NA0003525 with NTESS,
// the U.S. Government retains certain rights in this software.
//
// Part of Kokkos, under the Apache License v2.0 with LLVM Exceptions.
// See https://kokkos.org/LICENSE for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//@HEADER


#include <array>
#include <type_traits>
#include <tuple>
#include <utility> // index_sequence

namespace MDSPAN_IMPL_STANDARD_NAMESPACE {
namespace MDSPAN_IMPL_PROPOSED_NAMESPACE {
//******************************************
// Return type of submdspan_mapping overloads
//******************************************
template <class Mapping> struct mapping_offset {
  Mapping mapping;
  size_t offset;
};
} // namespace MDSPAN_IMPL_PROPOSED_NAMESPACE

namespace detail {
using MDSPAN_IMPL_PROPOSED_NAMESPACE::detail::first_of;
using MDSPAN_IMPL_PROPOSED_NAMESPACE::detail::stride_of;
using MDSPAN_IMPL_PROPOSED_NAMESPACE::detail::inv_map_rank;

// constructs sub strides
template <class SrcMapping, class... slice_strides, size_t... InvMapIdxs>
MDSPAN_INLINE_FUNCTION
constexpr auto
construct_sub_strides(const SrcMapping &src_mapping,
                      std::index_sequence<InvMapIdxs...>,
                      const std::tuple<slice_strides...> &slices_stride_factor) {
  using index_type = typename SrcMapping::index_type;
  return std::array<typename SrcMapping::index_type, sizeof...(InvMapIdxs)>{
      (static_cast<index_type>(src_mapping.stride(InvMapIdxs)) *
       static_cast<index_type>(std::get<InvMapIdxs>(slices_stride_factor)))...};
}
} // namespace detail

//**********************************
// layout_left submdspan_mapping
//*********************************
namespace detail {

// Figure out whether to preserve layout_left
template <class IndexSequence, size_t SubRank, class... SliceSpecifiers>
struct preserve_layout_left_mapping;

template <class... SliceSpecifiers, size_t... Idx, size_t SubRank>
struct preserve_layout_left_mapping<std::index_sequence<Idx...>, SubRank,
                                    SliceSpecifiers...> {
  constexpr static bool value =
      // Preserve layout for rank 0
      (SubRank == 0) ||
      (
          // Slice specifiers up to subrank need to be full_extent_t - except
          // for the last one which could also be tuple but not a strided index
          // range slice specifiers after subrank are integrals
          ((Idx > SubRank - 1) || // these are only integral slice specifiers
           (std::is_same_v<SliceSpecifiers, full_extent_t>) ||
           ((Idx == SubRank - 1) &&
            std::is_convertible_v<SliceSpecifiers, std::tuple<size_t, size_t>>)) &&
          ...);
};
} // namespace detail

// Suppress spurious warning with NVCC about no return statement.
// This is a known issue in NVCC and NVC++
// Depending on the CUDA and GCC version we need both the builtin
// and the diagnostic push. I tried really hard to find something shorter
// but no luck ...
#if defined __NVCC__
    #ifdef __NVCC_DIAG_PRAGMA_SUPPORT__
        #pragma nv_diagnostic push
        #pragma nv_diag_suppress = implicit_return_from_non_void_function
    #else
      #ifdef __CUDA_ARCH__
        #pragma diagnostic push
        #pragma diag_suppress implicit_return_from_non_void_function
      #endif
    #endif
#elif defined __NVCOMPILER
    #pragma    diagnostic push
    #pragma    diag_suppress = implicit_return_from_non_void_function
#endif
// Actual submdspan mapping call
template <class Extents, class... SliceSpecifiers>
MDSPAN_INLINE_FUNCTION
constexpr auto
submdspan_mapping(const layout_left::mapping<Extents> &src_mapping,
                  SliceSpecifiers... slices) {
  using MDSPAN_IMPL_PROPOSED_NAMESPACE::submdspan_extents;
  using MDSPAN_IMPL_PROPOSED_NAMESPACE::mapping_offset;

  // compute sub extents
  using src_ext_t = Extents;
  auto dst_ext = submdspan_extents(src_mapping.extents(), slices...);
  using dst_ext_t = decltype(dst_ext);

  // figure out sub layout type
  constexpr bool preserve_layout = detail::preserve_layout_left_mapping<
      decltype(std::make_index_sequence<src_ext_t::rank()>()), dst_ext_t::rank(),
      SliceSpecifiers...>::value;
  using dst_layout_t =
      std::conditional_t<preserve_layout, layout_left, layout_stride>;
  using dst_mapping_t = typename dst_layout_t::template mapping<dst_ext_t>;

  if constexpr (std::is_same_v<dst_layout_t, layout_left>) {
    // layout_left case
    return mapping_offset<dst_mapping_t>{
        dst_mapping_t(dst_ext),
        static_cast<size_t>(src_mapping(detail::first_of(slices)...))};
  } else {
    // layout_stride case
    auto inv_map = detail::inv_map_rank(
      std::integral_constant<size_t,0>(),
      std::index_sequence<>(),
      slices...);
    return mapping_offset<dst_mapping_t>{
        dst_mapping_t(dst_ext, detail::construct_sub_strides(
                                   src_mapping, inv_map,
    // HIP needs deduction guides to have markups so we need to be explicit
    // NVCC 11.0 has a bug with deduction guide here, tested that 11.2 does not have the issue
    #if defined(_MDSPAN_HAS_HIP) || (defined(__NVCC__) && (__CUDACC_VER_MAJOR__ * 100 + __CUDACC_VER_MINOR__ * 10) < 1120)
                                   std::tuple<decltype(detail::stride_of(slices))...>{detail::stride_of(slices)...})),
    #else
                                   std::tuple{detail::stride_of(slices)...})),
    #endif
        static_cast<size_t>(src_mapping(detail::first_of(slices)...))};
  }
#if defined(__NVCC__) && !defined(__CUDA_ARCH__) && defined(__GNUC__)
  __builtin_unreachable();
#endif
}
#if defined __NVCC__
    #ifdef __NVCC_DIAG_PRAGMA_SUPPORT__
        #pragma nv_diagnostic pop
    #else
      #ifdef __CUDA_ARCH__
        #pragma diagnostic pop
      #endif
    #endif
#elif defined __NVCOMPILER
    #pragma    diagnostic pop
#endif

//**********************************
// layout_right submdspan_mapping
//*********************************
namespace detail {

// Figure out whether to preserve layout_right
template <class IndexSequence, size_t SubRank, class... SliceSpecifiers>
struct preserve_layout_right_mapping;

template <class... SliceSpecifiers, size_t... Idx, size_t SubRank>
struct preserve_layout_right_mapping<std::index_sequence<Idx...>, SubRank,
                                     SliceSpecifiers...> {
  constexpr static size_t SrcRank = sizeof...(SliceSpecifiers);
  constexpr static bool value =
      // Preserve layout for rank 0
      (SubRank == 0) ||
      (
          // The last subrank slice specifiers need to be full_extent_t - except
          // for the srcrank-subrank one which could also be tuple but not a
          // strided index range slice specifiers before srcrank-subrank are
          // integrals
          ((Idx <
            SrcRank - SubRank) || // these are only integral slice specifiers
           (std::is_same_v<SliceSpecifiers, full_extent_t>) ||
           ((Idx == SrcRank - SubRank) &&
            std::is_convertible_v<SliceSpecifiers, std::tuple<size_t, size_t>>)) &&
          ...);
};
} // namespace detail

// Suppress spurious warning with NVCC about no return statement.
// This is a known issue in NVCC and NVC++
// Depending on the CUDA and GCC version we need both the builtin
// and the diagnostic push. I tried really hard to find something shorter
// but no luck ...
#if defined __NVCC__
    #ifdef __NVCC_DIAG_PRAGMA_SUPPORT__
        #pragma nv_diagnostic push
        #pragma nv_diag_suppress = implicit_return_from_non_void_function
    #else
      #ifdef __CUDA_ARCH__
        #pragma diagnostic push
        #pragma diag_suppress implicit_return_from_non_void_function
      #endif
    #endif
#elif defined __NVCOMPILER
    #pragma    diagnostic push
    #pragma    diag_suppress = implicit_return_from_non_void_function
#endif
template <class Extents, class... SliceSpecifiers>
MDSPAN_INLINE_FUNCTION
constexpr auto
submdspan_mapping(const layout_right::mapping<Extents> &src_mapping,
                  SliceSpecifiers... slices) {
  using MDSPAN_IMPL_PROPOSED_NAMESPACE::submdspan_extents;
  using MDSPAN_IMPL_PROPOSED_NAMESPACE::mapping_offset;

  // get sub extents
  using src_ext_t = Extents;
  auto dst_ext = submdspan_extents(src_mapping.extents(), slices...);
  using dst_ext_t = decltype(dst_ext);

  // determine new layout type
  constexpr bool preserve_layout = detail::preserve_layout_right_mapping<
      decltype(std::make_index_sequence<src_ext_t::rank()>()), dst_ext_t::rank(),
      SliceSpecifiers...>::value;
  using dst_layout_t =
      std::conditional_t<preserve_layout, layout_right, layout_stride>;
  using dst_mapping_t = typename dst_layout_t::template mapping<dst_ext_t>;

  if constexpr (std::is_same_v<dst_layout_t, layout_right>) {
    // layout_right case
    return mapping_offset<dst_mapping_t>{
        dst_mapping_t(dst_ext),
        static_cast<size_t>(src_mapping(detail::first_of(slices)...))};
  } else {
    // layout_stride case
    auto inv_map = detail::inv_map_rank(
      std::integral_constant<size_t,0>(),
      std::index_sequence<>(),
      slices...);
    return mapping_offset<dst_mapping_t>{
        dst_mapping_t(dst_ext, detail::construct_sub_strides(
                                   src_mapping, inv_map,
    // HIP needs deduction guides to have markups so we need to be explicit
    // NVCC 11.0 has a bug with deduction guide here, tested that 11.2 does not have the issue
    #if defined(_MDSPAN_HAS_HIP) || (defined(__NVCC__) && (__CUDACC_VER_MAJOR__ * 100 + __CUDACC_VER_MINOR__ * 10) < 1120)
                                   std::tuple<decltype(detail::stride_of(slices))...>{detail::stride_of(slices)...})),
    #else
                                   std::tuple{detail::stride_of(slices)...})),
    #endif
        static_cast<size_t>(src_mapping(detail::first_of(slices)...))};
  }
#if defined(__NVCC__) && !defined(__CUDA_ARCH__) && defined(__GNUC__)
  __builtin_unreachable();
#endif
}
#if defined __NVCC__
    #ifdef __NVCC_DIAG_PRAGMA_SUPPORT__
        #pragma nv_diagnostic pop
    #else
      #ifdef __CUDA_ARCH__
        #pragma diagnostic pop
      #endif
    #endif
#elif defined __NVCOMPILER
    #pragma    diagnostic pop
#endif

//**********************************
// layout_stride submdspan_mapping
//*********************************
template <class Extents, class... SliceSpecifiers>
MDSPAN_INLINE_FUNCTION
constexpr auto
submdspan_mapping(const layout_stride::mapping<Extents> &src_mapping,
                  SliceSpecifiers... slices) {
  using MDSPAN_IMPL_PROPOSED_NAMESPACE::submdspan_extents;
  using MDSPAN_IMPL_PROPOSED_NAMESPACE::mapping_offset;
  auto dst_ext = submdspan_extents(src_mapping.extents(), slices...);
  using dst_ext_t = decltype(dst_ext);
  auto inv_map = detail::inv_map_rank(
      std::integral_constant<size_t,0>(),
      std::index_sequence<>(),
      slices...);
  using dst_mapping_t = typename layout_stride::template mapping<dst_ext_t>;
  return mapping_offset<dst_mapping_t>{
      dst_mapping_t(dst_ext, detail::construct_sub_strides(
                                 src_mapping, inv_map,
    // HIP needs deduction guides to have markups so we need to be explicit
    // NVCC 11.0 has a bug with deduction guide here, tested that 11.2 does not have the issue
    #if defined(_MDSPAN_HAS_HIP) || (defined(__NVCC__) && (__CUDACC_VER_MAJOR__ * 100 + __CUDACC_VER_MINOR__ * 10) < 1120)
                                 std::tuple<decltype(detail::stride_of(slices))...>(detail::stride_of(slices)...))),
#else
                                 std::tuple(detail::stride_of(slices)...))),
#endif
      static_cast<size_t>(src_mapping(detail::first_of(slices)...))};
}
} // namespace MDSPAN_IMPL_STANDARD_NAMESPACE
//END_FILE_INCLUDE: /home/runner/work/mdspan/mdspan/include/experimental/__p2630_bits/submdspan_mapping.hpp

namespace MDSPAN_IMPL_STANDARD_NAMESPACE {
namespace MDSPAN_IMPL_PROPOSED_NAMESPACE {
template <class ElementType, class Extents, class LayoutPolicy,
          class AccessorPolicy, class... SliceSpecifiers>
MDSPAN_INLINE_FUNCTION
constexpr auto
submdspan(const mdspan<ElementType, Extents, LayoutPolicy, AccessorPolicy> &src,
          SliceSpecifiers... slices) {
  const auto sub_mapping_offset = submdspan_mapping(src.mapping(), slices...);
  // NVCC has a problem with the deduction so lets figure out the type
  using sub_mapping_t = std::remove_cv_t<decltype(sub_mapping_offset.mapping)>;
  using sub_extents_t = typename sub_mapping_t::extents_type;
  using sub_layout_t = typename sub_mapping_t::layout_type;
  using sub_accessor_t = typename AccessorPolicy::offset_policy;
  return mdspan<ElementType, sub_extents_t, sub_layout_t, sub_accessor_t>(
      src.accessor().offset(src.data_handle(), sub_mapping_offset.offset),
      sub_mapping_offset.mapping,
      sub_accessor_t(src.accessor()));
}
} // namespace MDSPAN_IMPL_PROPOSED_NAMESPACE
} // namespace MDSPAN_IMPL_STANDARD_NAMESPACE
//END_FILE_INCLUDE: /home/runner/work/mdspan/mdspan/include/experimental/__p2630_bits/submdspan.hpp
#endif

#endif // MDSPAN_HPP_
//END_FILE_INCLUDE: /home/runner/work/mdspan/mdspan/include/mdspan/mdspan.hpp

// backward compatibility import into experimental
namespace MDSPAN_IMPL_STANDARD_NAMESPACE {
  namespace MDSPAN_IMPL_PROPOSED_NAMESPACE {
    using ::MDSPAN_IMPL_STANDARD_NAMESPACE::mdspan;
    using ::MDSPAN_IMPL_STANDARD_NAMESPACE::extents;
    using ::MDSPAN_IMPL_STANDARD_NAMESPACE::layout_left;
    using ::MDSPAN_IMPL_STANDARD_NAMESPACE::layout_right;
    using ::MDSPAN_IMPL_STANDARD_NAMESPACE::layout_stride;
    using ::MDSPAN_IMPL_STANDARD_NAMESPACE::default_accessor;
  }
}
//END_FILE_INCLUDE: /home/runner/work/mdspan/mdspan/include/experimental/mdspan
//BEGIN_FILE_INCLUDE: /home/runner/work/mdspan/mdspan/include/mdspan/mdarray.hpp
//@HEADER
// ************************************************************************
//
//                        Kokkos v. 4.0
//       Copyright (2022) National Technology & Engineering
//               Solutions of Sandia, LLC (NTESS).
//
// Under the terms of Contract DE-NA0003525 with NTESS,
// the U.S. Government retains certain rights in this software.
//
// Part of Kokkos, under the Apache License v2.0 with LLVM Exceptions.
// See https://kokkos.org/LICENSE for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//@HEADER

#ifndef MDARRAY_HPP_
#define MDARRAY_HPP_

#ifndef MDSPAN_IMPL_STANDARD_NAMESPACE
  #define MDSPAN_IMPL_STANDARD_NAMESPACE Kokkos
#endif

#ifndef MDSPAN_IMPL_PROPOSED_NAMESPACE
  #define MDSPAN_IMPL_PROPOSED_NAMESPACE Experimental
#endif

//BEGIN_FILE_INCLUDE: /home/runner/work/mdspan/mdspan/include/experimental/__p1684_bits/mdarray.hpp
//@HEADER
// ************************************************************************
//
//                        Kokkos v. 4.0
//       Copyright (2022) National Technology & Engineering
//               Solutions of Sandia, LLC (NTESS).
//
// Under the terms of Contract DE-NA0003525 with NTESS,
// the U.S. Government retains certain rights in this software.
//
// Part of Kokkos, under the Apache License v2.0 with LLVM Exceptions.
// See https://kokkos.org/LICENSE for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//@HEADER


#include <cassert>
#include <vector>

namespace MDSPAN_IMPL_STANDARD_NAMESPACE {
namespace MDSPAN_IMPL_PROPOSED_NAMESPACE {

namespace {
  template<class Extents>
  struct size_of_extents;

  template<class IndexType, size_t ... Extents>
  struct size_of_extents<extents<IndexType, Extents...>> {
    constexpr static size_t value() {
      size_t size = 1;
      for(size_t r=0; r<extents<IndexType, Extents...>::rank(); r++)
        size *= extents<IndexType, Extents...>::static_extent(r);
      return size;
    }
  };
}

namespace {
  template<class C>
  struct container_is_array :  std::false_type {
    template<class M>
    static constexpr C construct(const M& m) { return C(m.required_span_size()); }
  };
  template<class T, size_t N>
  struct container_is_array<std::array<T,N>> : std::true_type {
    template<class M>
    static constexpr std::array<T,N> construct(const M&) { return std::array<T,N>(); }
  };
}

template <
  class ElementType,
  class Extents,
  class LayoutPolicy = layout_right,
  class Container = std::vector<ElementType>
>
class mdarray {
private:
  static_assert(::MDSPAN_IMPL_STANDARD_NAMESPACE::detail::__is_extents_v<Extents>,
                MDSPAN_IMPL_PROPOSED_NAMESPACE_STRING "::mdspan's Extents template parameter must be a specialization of " MDSPAN_IMPL_STANDARD_NAMESPACE_STRING "::extents.");

public:

  //--------------------------------------------------------------------------------
  // Domain and codomain types

  using extents_type = Extents;
  using layout_type = LayoutPolicy;
  using container_type = Container;
  using mapping_type = typename layout_type::template mapping<extents_type>;
  using element_type = ElementType;
  using mdspan_type = mdspan<element_type, extents_type, layout_type>;
  using const_mdspan_type = mdspan<const element_type, extents_type, layout_type>;
  using value_type = std::remove_cv_t<element_type>;
  using index_type = typename Extents::index_type;
  using size_type = typename Extents::size_type;
  using rank_type = typename Extents::rank_type;
  using pointer = typename container_type::pointer;
  using reference = typename container_type::reference;
  using const_pointer = typename container_type::const_pointer;
  using const_reference = typename container_type::const_reference;

public:

  //--------------------------------------------------------------------------------
  // [mdspan.basic.cons], mdspan constructors, assignment, and destructor

#if !(MDSPAN_HAS_CXX_20)
  MDSPAN_FUNCTION_REQUIRES(
    (MDSPAN_INLINE_FUNCTION_DEFAULTED constexpr),
    mdarray, (), ,
    /* requires */ (extents_type::rank_dynamic()!=0)) {}
#else
  MDSPAN_INLINE_FUNCTION_DEFAULTED constexpr mdarray() requires(extents_type::rank_dynamic()!=0) = default;
#endif
  MDSPAN_INLINE_FUNCTION_DEFAULTED constexpr mdarray(const mdarray&) = default;
  MDSPAN_INLINE_FUNCTION_DEFAULTED constexpr mdarray(mdarray&&) = default;

  // Constructors for container types constructible from a size
  MDSPAN_TEMPLATE_REQUIRES(
    class... SizeTypes,
    /* requires */ (
      _MDSPAN_FOLD_AND(_MDSPAN_TRAIT( std::is_convertible, SizeTypes, index_type) /* && ... */) &&
      _MDSPAN_TRAIT( std::is_constructible, extents_type, SizeTypes...) &&
      _MDSPAN_TRAIT( std::is_constructible, mapping_type, extents_type) &&
      (_MDSPAN_TRAIT( std::is_constructible, container_type, size_t) ||
       container_is_array<container_type>::value) &&
      (extents_type::rank()>0 || extents_type::rank_dynamic()==0)
    )
  )
  MDSPAN_INLINE_FUNCTION
  explicit constexpr mdarray(SizeTypes... dynamic_extents)
    : map_(extents_type(dynamic_extents...)), ctr_(container_is_array<container_type>::construct(map_))
  { }

  MDSPAN_FUNCTION_REQUIRES(
    (MDSPAN_INLINE_FUNCTION constexpr),
    mdarray, (const extents_type& exts), ,
    /* requires */ ((_MDSPAN_TRAIT( std::is_constructible, container_type, size_t) ||
                     container_is_array<container_type>::value) &&
                    _MDSPAN_TRAIT( std::is_constructible, mapping_type, extents_type))
  ) : map_(exts), ctr_(container_is_array<container_type>::construct(map_))
  { }

  MDSPAN_FUNCTION_REQUIRES(
    (MDSPAN_INLINE_FUNCTION constexpr),
    mdarray, (const mapping_type& m), ,
    /* requires */ (_MDSPAN_TRAIT( std::is_constructible, container_type, size_t) ||
                    container_is_array<container_type>::value)
  ) : map_(m), ctr_(container_is_array<container_type>::construct(map_))
  { }

  // Constructors from container
  MDSPAN_TEMPLATE_REQUIRES(
    class... SizeTypes,
    /* requires */ (
      _MDSPAN_FOLD_AND(_MDSPAN_TRAIT( std::is_convertible, SizeTypes, index_type) /* && ... */) &&
      _MDSPAN_TRAIT( std::is_constructible, extents_type, SizeTypes...) &&
      _MDSPAN_TRAIT( std::is_constructible, mapping_type, extents_type)
    )
  )
  MDSPAN_INLINE_FUNCTION
  explicit constexpr mdarray(const container_type& ctr, SizeTypes... dynamic_extents)
    : map_(extents_type(dynamic_extents...)), ctr_(ctr)
  { assert(ctr.size() >= static_cast<size_t>(map_.required_span_size())); }


  MDSPAN_FUNCTION_REQUIRES(
    (MDSPAN_INLINE_FUNCTION constexpr),
    mdarray, (const container_type& ctr, const extents_type& exts), ,
    /* requires */ (_MDSPAN_TRAIT( std::is_constructible, mapping_type, extents_type))
  ) : map_(exts), ctr_(ctr)
  { assert(ctr.size() >= static_cast<size_t>(map_.required_span_size())); }

  constexpr mdarray(const container_type& ctr, const mapping_type& m)
    : map_(m), ctr_(ctr)
  { assert(ctr.size() >= static_cast<size_t>(map_.required_span_size())); }


  // Constructors from container
  MDSPAN_TEMPLATE_REQUIRES(
    class... SizeTypes,
    /* requires */ (
      _MDSPAN_FOLD_AND(_MDSPAN_TRAIT( std::is_convertible, SizeTypes, index_type) /* && ... */) &&
      _MDSPAN_TRAIT( std::is_constructible, extents_type, SizeTypes...) &&
      _MDSPAN_TRAIT( std::is_constructible, mapping_type, extents_type)
    )
  )
  MDSPAN_INLINE_FUNCTION
  explicit constexpr mdarray(container_type&& ctr, SizeTypes... dynamic_extents)
    : map_(extents_type(dynamic_extents...)), ctr_(std::move(ctr))
  { assert(ctr_.size() >= static_cast<size_t>(map_.required_span_size())); }


  MDSPAN_FUNCTION_REQUIRES(
    (MDSPAN_INLINE_FUNCTION constexpr),
    mdarray, (container_type&& ctr, const extents_type& exts), ,
    /* requires */ (_MDSPAN_TRAIT( std::is_constructible, mapping_type, extents_type))
  ) : map_(exts), ctr_(std::move(ctr))
  { assert(ctr_.size() >= static_cast<size_t>(map_.required_span_size())); }

  constexpr mdarray(container_type&& ctr, const mapping_type& m)
    : map_(m), ctr_(std::move(ctr))
  { assert(ctr_.size() >= static_cast<size_t>(map_.required_span_size())); }



  MDSPAN_TEMPLATE_REQUIRES(
    class OtherElementType, class OtherExtents, class OtherLayoutPolicy, class OtherContainer,
    /* requires */ (
      _MDSPAN_TRAIT( std::is_constructible, mapping_type, typename OtherLayoutPolicy::template mapping<OtherExtents>) &&
      _MDSPAN_TRAIT( std::is_constructible, container_type, OtherContainer)
    )
  )
  MDSPAN_INLINE_FUNCTION
  constexpr mdarray(const mdarray<OtherElementType, OtherExtents, OtherLayoutPolicy, OtherContainer>& other)
    : map_(other.mapping()), ctr_(other.container())
  {
    static_assert( std::is_constructible<extents_type, OtherExtents>::value, "");
  }

  // Constructors for container types constructible from a size and allocator
  MDSPAN_TEMPLATE_REQUIRES(
    class Alloc,
    /* requires */ (_MDSPAN_TRAIT( std::is_constructible, container_type, size_t, Alloc) &&
                    _MDSPAN_TRAIT( std::is_constructible, mapping_type, extents_type))
  )
  MDSPAN_INLINE_FUNCTION
  constexpr mdarray(const extents_type& exts, const Alloc& a)
    : map_(exts), ctr_(map_.required_span_size(), a)
  { }

  MDSPAN_TEMPLATE_REQUIRES(
    class Alloc,
    /* requires */ (_MDSPAN_TRAIT( std::is_constructible, container_type, size_t, Alloc))
  )
  MDSPAN_INLINE_FUNCTION
  constexpr mdarray(const mapping_type& map, const Alloc& a)
    : map_(map), ctr_(map_.required_span_size(), a)
  { }

  // Constructors for container types constructible from a container and allocator
  MDSPAN_TEMPLATE_REQUIRES(
    class Alloc,
    /* requires */ (_MDSPAN_TRAIT( std::is_constructible, container_type, container_type, Alloc) &&
                    _MDSPAN_TRAIT( std::is_constructible, mapping_type, extents_type))
  )
  MDSPAN_INLINE_FUNCTION
  constexpr mdarray(const container_type& ctr, const extents_type& exts, const Alloc& a)
    : map_(exts), ctr_(ctr, a)
  { assert(ctr_.size() >= static_cast<size_t>(map_.required_span_size())); }

  MDSPAN_TEMPLATE_REQUIRES(
    class Alloc,
    /* requires */ (_MDSPAN_TRAIT( std::is_constructible, container_type, size_t, Alloc))
  )
  MDSPAN_INLINE_FUNCTION
  constexpr mdarray(const container_type& ctr, const mapping_type& map, const Alloc& a)
    : map_(map), ctr_(ctr, a)
  { assert(ctr_.size() >= static_cast<size_t>(map_.required_span_size())); }

  MDSPAN_TEMPLATE_REQUIRES(
    class Alloc,
    /* requires */ (_MDSPAN_TRAIT( std::is_constructible, container_type, container_type, Alloc) &&
                    _MDSPAN_TRAIT( std::is_constructible, mapping_type, extents_type))
  )
  MDSPAN_INLINE_FUNCTION
  constexpr mdarray(container_type&& ctr, const extents_type& exts, const Alloc& a)
    : map_(exts), ctr_(std::move(ctr), a)
  { assert(ctr_.size() >= static_cast<size_t>(map_.required_span_size())); }

  MDSPAN_TEMPLATE_REQUIRES(
    class Alloc,
    /* requires */ (_MDSPAN_TRAIT( std::is_constructible, container_type, size_t, Alloc))
  )
  MDSPAN_INLINE_FUNCTION
  constexpr mdarray(container_type&& ctr, const mapping_type& map, const Alloc& a)
    : map_(map), ctr_(std::move(ctr), a)
  { assert(ctr_.size() >= map_.required_span_size()); }

  MDSPAN_TEMPLATE_REQUIRES(
    class OtherElementType, class OtherExtents, class OtherLayoutPolicy, class OtherContainer, class Alloc,
    /* requires */ (
      _MDSPAN_TRAIT( std::is_constructible, mapping_type, typename OtherLayoutPolicy::template mapping<OtherExtents>) &&
      _MDSPAN_TRAIT( std::is_constructible, container_type, OtherContainer, Alloc)
    )
  )
  MDSPAN_INLINE_FUNCTION
  constexpr mdarray(const mdarray<OtherElementType, OtherExtents, OtherLayoutPolicy, OtherContainer>& other, const Alloc& a)
    : map_(other.mapping()), ctr_(other.container(), a)
  {
    static_assert( std::is_constructible<extents_type, OtherExtents>::value, "");
  }

  MDSPAN_INLINE_FUNCTION_DEFAULTED constexpr mdarray& operator= (const mdarray&) = default;
  MDSPAN_INLINE_FUNCTION_DEFAULTED constexpr mdarray& operator= (mdarray&&) = default;
  MDSPAN_INLINE_FUNCTION_DEFAULTED
  ~mdarray() = default;

  //--------------------------------------------------------------------------------
  // [mdspan.basic.mapping], mdspan mapping domain multidimensional index to access codomain element

  #if MDSPAN_USE_BRACKET_OPERATOR
  MDSPAN_TEMPLATE_REQUIRES(
    class... SizeTypes,
    /* requires */ (
      _MDSPAN_FOLD_AND(_MDSPAN_TRAIT( std::is_convertible, SizeTypes, index_type) /* && ... */) &&
      extents_type::rank() == sizeof...(SizeTypes)
    )
  )
  MDSPAN_FORCE_INLINE_FUNCTION
  constexpr const_reference operator[](SizeTypes... indices) const noexcept
  {
    return ctr_[map_(static_cast<index_type>(std::move(indices))...)];
  }

  MDSPAN_TEMPLATE_REQUIRES(
    class... SizeTypes,
    /* requires */ (
      _MDSPAN_FOLD_AND(_MDSPAN_TRAIT( std::is_convertible, SizeTypes, index_type) /* && ... */) &&
      extents_type::rank() == sizeof...(SizeTypes)
    )
  )
  MDSPAN_FORCE_INLINE_FUNCTION
  constexpr reference operator[](SizeTypes... indices) noexcept
  {
    return ctr_[map_(static_cast<index_type>(std::move(indices))...)];
  }
  #endif

#if 0
  MDSPAN_TEMPLATE_REQUIRES(
    class SizeType, size_t N,
    /* requires */ (
      _MDSPAN_TRAIT( std::is_convertible, SizeType, index_type) &&
      N == extents_type::rank()
    )
  )
  MDSPAN_FORCE_INLINE_FUNCTION
  constexpr const_reference operator[](const std::array<SizeType, N>& indices) const noexcept
  {
    return __impl::template __callop<reference>(*this, indices);
  }

  MDSPAN_TEMPLATE_REQUIRES(
    class SizeType, size_t N,
    /* requires */ (
      _MDSPAN_TRAIT( std::is_convertible, SizeType, index_type) &&
      N == extents_type::rank()
    )
  )
  MDSPAN_FORCE_INLINE_FUNCTION
  constexpr reference operator[](const std::array<SizeType, N>& indices) noexcept
  {
    return __impl::template __callop<reference>(*this, indices);
  }
#endif


  #if MDSPAN_USE_PAREN_OPERATOR
  MDSPAN_TEMPLATE_REQUIRES(
    class... SizeTypes,
    /* requires */ (
      _MDSPAN_FOLD_AND(_MDSPAN_TRAIT( std::is_convertible, SizeTypes, index_type) /* && ... */) &&
      extents_type::rank() == sizeof...(SizeTypes)
    )
  )
  MDSPAN_FORCE_INLINE_FUNCTION
  constexpr const_reference operator()(SizeTypes... indices) const noexcept
  {
    return ctr_[map_(static_cast<index_type>(std::move(indices))...)];
  }
  MDSPAN_TEMPLATE_REQUIRES(
    class... SizeTypes,
    /* requires */ (
      _MDSPAN_FOLD_AND(_MDSPAN_TRAIT( std::is_convertible, SizeTypes, index_type) /* && ... */) &&
      extents_type::rank() == sizeof...(SizeTypes)
    )
  )
  MDSPAN_FORCE_INLINE_FUNCTION
  constexpr reference operator()(SizeTypes... indices) noexcept
  {
    return ctr_[map_(static_cast<index_type>(std::move(indices))...)];
  }

#if 0
  MDSPAN_TEMPLATE_REQUIRES(
    class SizeType, size_t N,
    /* requires */ (
      _MDSPAN_TRAIT( std::is_convertible, SizeType, index_type) &&
      N == extents_type::rank()
    )
  )
  MDSPAN_FORCE_INLINE_FUNCTION
  constexpr const_reference operator()(const std::array<SizeType, N>& indices) const noexcept
  {
    return __impl::template __callop<reference>(*this, indices);
  }

  MDSPAN_TEMPLATE_REQUIRES(
    class SizeType, size_t N,
    /* requires */ (
      _MDSPAN_TRAIT( std::is_convertible, SizeType, index_type) &&
      N == extents_type::rank()
    )
  )
  MDSPAN_FORCE_INLINE_FUNCTION
  constexpr reference operator()(const std::array<SizeType, N>& indices) noexcept
  {
    return __impl::template __callop<reference>(*this, indices);
  }
#endif
  #endif

  MDSPAN_INLINE_FUNCTION constexpr pointer data() noexcept { return ctr_.data(); };
  MDSPAN_INLINE_FUNCTION constexpr const_pointer data() const noexcept { return ctr_.data(); };
  MDSPAN_INLINE_FUNCTION constexpr container_type& container() noexcept { return ctr_; };
  MDSPAN_INLINE_FUNCTION constexpr const container_type& container() const noexcept { return ctr_; };

  //--------------------------------------------------------------------------------
  // [mdspan.basic.domobs], mdspan observers of the domain multidimensional index space

  MDSPAN_INLINE_FUNCTION static constexpr rank_type rank() noexcept { return extents_type::rank(); }
  MDSPAN_INLINE_FUNCTION static constexpr rank_type rank_dynamic() noexcept { return extents_type::rank_dynamic(); }
  MDSPAN_INLINE_FUNCTION static constexpr size_t static_extent(size_t r) noexcept { return extents_type::static_extent(r); }

  MDSPAN_INLINE_FUNCTION constexpr const extents_type& extents() const noexcept { return map_.extents(); };
  MDSPAN_INLINE_FUNCTION constexpr index_type extent(size_t r) const noexcept { return map_.extents().extent(r); };
  MDSPAN_INLINE_FUNCTION constexpr index_type size() const noexcept {
//    return __impl::__size(*this);
    return ctr_.size();
  };


  //--------------------------------------------------------------------------------
  // [mdspan.basic.obs], mdspan observers of the mapping

  MDSPAN_INLINE_FUNCTION static constexpr bool is_always_unique() noexcept { return mapping_type::is_always_unique(); };
  MDSPAN_INLINE_FUNCTION static constexpr bool is_always_exhaustive() noexcept { return mapping_type::is_always_exhaustive(); };
  MDSPAN_INLINE_FUNCTION static constexpr bool is_always_strided() noexcept { return mapping_type::is_always_strided(); };

  MDSPAN_INLINE_FUNCTION constexpr const mapping_type& mapping() const noexcept { return map_; };
  MDSPAN_INLINE_FUNCTION constexpr bool is_unique() const noexcept { return map_.is_unique(); };
  MDSPAN_INLINE_FUNCTION constexpr bool is_exhaustive() const noexcept { return map_.is_exhaustive(); };
  MDSPAN_INLINE_FUNCTION constexpr bool is_strided() const noexcept { return map_.is_strided(); };
  MDSPAN_INLINE_FUNCTION constexpr index_type stride(size_t r) const { return map_.stride(r); };

  // Converstion to mdspan
  MDSPAN_TEMPLATE_REQUIRES(
    class OtherElementType, class OtherExtents,
    class OtherLayoutType, class OtherAccessorType,
    /* requires */ (
      _MDSPAN_TRAIT(std::is_assignable, mdspan_type,
                       mdspan<OtherElementType, OtherExtents, OtherLayoutType, OtherAccessorType>)
    )
  )
  constexpr operator mdspan<OtherElementType, OtherExtents, OtherLayoutType, OtherAccessorType> () {
    return mdspan_type(data(), map_);
  }

  MDSPAN_TEMPLATE_REQUIRES(
    class OtherElementType, class OtherExtents,
    class OtherLayoutType, class OtherAccessorType,
    /* requires */ (
      _MDSPAN_TRAIT(std::is_assignable, const_mdspan_type,
                      mdspan<OtherElementType, OtherExtents, OtherLayoutType, OtherAccessorType>)
    )
  )
  constexpr operator mdspan<OtherElementType, OtherExtents, OtherLayoutType, OtherAccessorType> () const {
    return const_mdspan_type(data(), map_);
  }

  MDSPAN_TEMPLATE_REQUIRES(
    class OtherAccessorType = default_accessor<element_type>,
    /* requires */ (
      _MDSPAN_TRAIT(std::is_assignable, mdspan_type,
                      mdspan<element_type, extents_type, layout_type, OtherAccessorType>)
    )
  )
  constexpr mdspan<element_type, extents_type, layout_type, OtherAccessorType>
    to_mdspan(const OtherAccessorType& a = default_accessor<element_type>()) {
      return mdspan<element_type, extents_type, layout_type, OtherAccessorType>(data(), map_, a);
  }

  MDSPAN_TEMPLATE_REQUIRES(
    class OtherAccessorType = default_accessor<const element_type>,
    /* requires */ (
      _MDSPAN_TRAIT(std::is_assignable, const_mdspan_type,
                      mdspan<const element_type, extents_type, layout_type, OtherAccessorType>)
    )
  )
  constexpr mdspan<const element_type, extents_type, layout_type, OtherAccessorType>
    to_mdspan(const OtherAccessorType& a = default_accessor<const element_type>()) const {
      return mdspan<const element_type, extents_type, layout_type, OtherAccessorType>(data(), map_, a);
  }

private:
  mapping_type map_;
  container_type ctr_;

  template <class, class, class, class>
  friend class mdarray;
};


} // end namespace MDSPAN_IMPL_PROPOSED_NAMESPACE
} // end namespace MDSPAN_IMPL_STANDARD_NAMESPACE
//END_FILE_INCLUDE: /home/runner/work/mdspan/mdspan/include/experimental/__p1684_bits/mdarray.hpp

#endif // MDARRAY_HPP_
//END_FILE_INCLUDE: /home/runner/work/mdspan/mdspan/include/mdspan/mdarray.hpp
//END_FILE_INCLUDE: /home/runner/work/mdspan/mdspan/include/experimental/mdarray
#endif // _MDSPAN_SINGLE_HEADER_INCLUDE_GUARD_

