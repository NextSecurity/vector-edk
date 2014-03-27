/** @file
  Internal include file for Base UEFI Decompress Libary.

  Copyright (c) 2006, Intel Corporation. All rights reserved.<BR>
  This program and the accompanying materials
  are licensed and made available under the terms and conditions of the BSD License
  which accompanies this distribution.  The full text of the license may be found at
  http://opensource.org/licenses/bsd-license.php

  THE PROGRAM IS DISTRIBUTED UNDER THE BSD LICENSE ON AN "AS IS" BASIS,
  WITHOUT WARRANTIES OR REPRESENTATIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED.

  Module Name:  BaseUefiCustomDecompressLibInternals.h

**/

#ifndef __BASE_UEFI_TIANO_CUSTOM_DECOMPRESS_LIB_INTERNALS_H__
#define __BASE_UEFI_TIANO_CUSTOM_DECOMPRESS_LIB_INTERNALS_H__

#include <PiPei.h>

#include <Library/UefiDecompressLib.h>
#include <Library/DebugLib.h>
#include <Library/BaseMemoryLib.h>

EFI_STATUS
EFIAPI
TianoGetInfo (
  IN      VOID                          *Source,
  IN      UINT32                        SrcSize,
  OUT     UINT32                        *DstSize,
  OUT     UINT32                        *ScratchSize
  )
/*++

Routine Description:

  The implementation is same as that of EFI_TIANO_DECOMPRESS_PROTOCOL.GetInfo().

Arguments:

  This        - The protocol instance pointer
  Source      - The source buffer containing the compressed data.
  SrcSize     - The size of source buffer
  DstSize     - The size of destination buffer.
  ScratchSize - The size of scratch buffer.

Returns:

  EFI_SUCCESS           - The size of destination buffer and the size of scratch buffer are successull retrieved.
  EFI_INVALID_PARAMETER - The source data is corrupted

--*/
;

EFI_STATUS
EFIAPI
TianoDecompress (
  IN      VOID                          *Source,
  IN      UINT32                        SrcSize,
  IN OUT  VOID                          *Destination,
  IN      UINT32                        DstSize,
  IN OUT  VOID                          *Scratch,
  IN      UINT32                        ScratchSize
  )
/*++

Routine Description:

  The implementation is same as that  of EFI_TIANO_DECOMPRESS_PROTOCOL.Decompress().

Arguments:

  This        - The protocol instance pointer
  Source      - The source buffer containing the compressed data.
  SrcSize     - The size of source buffer
  Destination - The destination buffer to store the decompressed data
  DstSize     - The size of destination buffer.
  Scratch     - The buffer used internally by the decompress routine. This  buffer is needed to store intermediate data.
  ScratchSize - The size of scratch buffer.

Returns:

  EFI_SUCCESS           - Decompression is successfull
  EFI_INVALID_PARAMETER - The source data is corrupted

--*/
;

#endif
