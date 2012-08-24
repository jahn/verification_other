C $Header: /u/gcmpack/MITgcm_contrib/verification_other/global_oce_cs32/code/Attic/PROFILES_OPTIONS.h,v 1.1 2012/08/24 16:27:27 gforget Exp $
C $Name:  $

C CPP options file for PROFILES package
C Use this file for selecting options within the PROFILES package

#ifndef PROFILES_OPTIONS_H
#define PROFILES_OPTIONS_H
#include "PACKAGES_CONFIG.h"
#include "CPP_OPTIONS.h"

#ifdef ALLOW_PROFILES
C     Package-specific Options & Macros go here

C Unless one uses a straight cartesian grid, the user needs 
C to provide grid dependent interpolation points/coeffs, define
C ALLOW_PROFILES_GENERICGRID, and set profilesDoGenGrid to TRUE
#define ALLOW_PROFILES_GENERICGRID

#endif /* ALLOW_PROFILES */
#endif /* PROFILES_OPTIONS_H */

CEH3 ;;; Local Variables: ***
CEH3 ;;; mode:fortran ***
CEH3 ;;; End: ***