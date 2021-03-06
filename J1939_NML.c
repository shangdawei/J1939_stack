/////////////////////////////////////////////////////////////////////////////////////////
// File:         J1939_NML.c
// Module:       J1939 stack
// Description:  J1939 stack Network Management Layer
// Originator:   MB
// Derived from: Freescale J1939 stack
// Date created: 09 June 2014
//---------------------------------------------------------------------------------------
// Revision Log:
//   $Log: $
//
//---------------------------------------------------------------------------------------
// Notes:
//
//---------------------------------------------------------------------------------------
/////////////////////////////////////////////////////////////////////////////////////////
// Copyright (C)2014 by Timespace Technology Ltd.  All rights reserved.
//
// This software is confidential.  It is not to be copied or distributed in any form
// to any third party.
//
// This software is provided by Timespace Technology on an 'as is' basis, and Timespace
// Technology expressly disclaims any and all warranties, expressed or implied including,
// without limitation, warranties of merchantability and fitness for a particular
// purpose. In no event shall Timespace Technology be liable for any direct, indirect,
// incidental, punitive or consequential damages - of any kind whatsoever - with respect
// to the software.
/////////////////////////////////////////////////////////////////////////////////////////


#include "J1939_includes.h"


//==========================================================================================
// Network Management Layer Interface Functions
//==========================================================================================

void NML_init(void)
{
}


void NML_process(J1939_RX_MESSAGE_T *msg_ptr)
{
   if (msg_ptr->PGN == REQUEST_FOR_ADDRESS_CLAIMED)
   {
   }
   else if (msg_ptr->PGN == ADDRESS_CLAIMED)
   {
   }
   else if (msg_ptr->PGN == COMMANDED_ADDRESS)
   {
   }
   else
   {
      // send message up the stack to the Application Layer
      AL_process(msg_ptr);
   }
}


void NML_periodic(void)
{
}