/*
 * Copyright (c) 2014-2018 Cesanta Software Limited
 * All rights reserved
 *
 * Licensed under the Apache License, Version 2.0 (the ""License"");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an ""AS IS"" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef CS_FW_PLATFORMS_STM32_STM32_VFS_DEV_FLASH_H_
#define CS_FW_PLATFORMS_STM32_STM32_VFS_DEV_FLASH_H_

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

#define MGOS_VFS_DEV_TYPE_STM32_FLASH "stm32flash"

bool stm32_vfs_dev_flash_register_type(void);

#ifdef __cplusplus
}
#endif

#endif /* CS_FW_PLATFORMS_STM32_STM32_VFS_DEV_FLASH_H_ */
