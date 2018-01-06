#ifndef __ROCCAT_RYOS_DBUS_SERVICES_H__
#define __ROCCAT_RYOS_DBUS_SERVICES_H__

/*
 * This file is part of roccat-tools.
 *
 * roccat-tools is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * roccat-tools is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with roccat-tools. If not, see <http://www.gnu.org/licenses/>.
 */

#include "ryos.h"

G_BEGIN_DECLS

#define RYOS_DBUS_SERVER_PATH "/org/roccat/Ryosmk"
#define RYOS_DBUS_SERVER_INTERFACE "org.roccat.Ryosmk"

DBusGProxy *ryos_dbus_proxy_new(void);
gboolean ryos_dbus_emit_profile_data_changed_outside(DBusGProxy *proxy, guint profile_number);
gboolean ryos_dbus_emit_profile_data_changed_outside_instant(guint profile_number);
gboolean ryos_dbus_emit_profile_changed_outside(DBusGProxy *proxy, guint profile_number);
gboolean ryos_dbus_emit_profile_changed_outside_instant(guint profile_number);
gboolean ryos_dbus_emit_configuration_changed_outside(DBusGProxy *proxy);
gboolean ryos_dbus_emit_configuration_changed_outside_instant(void);

G_END_DECLS

#endif