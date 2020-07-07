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

#pragma once

#include "mgos_mdns.h"

#include <stdbool.h>

#include "mgos_mongoose.h"

#ifdef __cplusplus
extern "C" {
#endif

bool mgos_mdns_init(void);

/* Join multicast group. */
bool mgos_mdns_hal_join_group(const char *mcast_ip);

/* Leave multicast group. */
bool mgos_mdns_hal_leave_group(const char *mcast_ip);

#ifdef __cplusplus
}
#endif
