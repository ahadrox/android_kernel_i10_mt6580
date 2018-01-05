/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2008
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
*  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
*  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
*  NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
*  SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
*  SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
*  THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
*  NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
*  SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
*
*  BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
*  LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
*  AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
*  OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
*  MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
*
*  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
*  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
*  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/
/*****************************************************************************
 *
 * Filename:
 * ---------
 *   flash_info.h
 *
 * Project:
 * --------
 *   Android
 *
 * Description:
 * ------------
 *   This Module defines the flash information setting.
 *
 * Author:
 * -------
 *  flash information auto generator V0.01
 *
 *   Memory Device database last modified on 2016/8/19
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * $Revision$
 * $Modtime$
 * $Log$
 *
 *------------------------------------------------------------------------------
 * WARNING!!!  WARNING!!!   WARNING!!!  WARNING!!!  WARNING!!!  WARNING!!! 
 * This file is generated by EMI Auto-gen Tool.
 * Please do not modify the content directly!
 * It could be overwritten!
 *============================================================================
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef __CUSTOM_EMI__
#define __CUSTOM_EMI__

#include <linux/mmc/mmc.h>             
#define NUM_EMI_RECORD 5
             
int num_of_emi_records = NUM_EMI_RECORD ;
             
FLASH_INFO_SETTINGS flash_info_settings[] =
{            
          {
                 "Samsung",  /*Vendor*/
        	   "150100463832324D42",  /* NAND_EMMC_ID */
        	   "1G",  /*Ram size*/
        	   "16G",  /*ROM size*/
        },
        {
                 "Sandisk",  /*Vendor*/
        	   "450100445331303038",  /* NAND_EMMC_ID */
        	   "1G",  /*Ram size*/
        	   "8G",  /*ROM size*/
        },
        {
                 "Hynix",  /*Vendor*/
        	   "90014A483847316505",  /* NAND_EMMC_ID */
        	   "1G",  /*Ram size*/
        	   "8G",  /*ROM size*/
        },
        {
                 "Hynix",  /*Vendor*/
        	   "90014A484147326505",  /* NAND_EMMC_ID */
        	   "2G",  /*Ram size*/
        	   "16G",  /*ROM size*/
        },
        {
                 "Samsung",  /*Vendor*/
        	   "150100464531324D42",  /* NAND_EMMC_ID */
        	   "1G",  /*Ram size*/
        	   "16G",  /*ROM size*/
        },

}; 

#endif /* __CUSTOM_EMI__ */
