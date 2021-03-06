/* -*- mode: C; c-file-style: "gnu"; indent-tabs-mode: nil; -*- */
/* dbus-test.h  Declarations of test functions.
 *
 * Copyright (C) 2002  Red Hat Inc.
 *
 * Licensed under the Academic Free License version 2.1
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 *
 */

#ifndef DBUS_TEST_H
#define DBUS_TEST_H

#include <dbus/dbus-types.h>
#include <dbus/dbus-string.h>
#include <dbus/dbus-marshal-validate.h>

/* Only things that are in libdbus-1.la and used from libdbus-internal.la
 * need to have DBUS_PRIVATE_EXPORT. If you get
 *
 * warning: 'foo' redeclared without dllimport attribute: previous
 * dllimport ignored [-Wattributes]
 *
 * then you have added too many.
 */

DBUS_PRIVATE_EXPORT
dbus_bool_t _dbus_hash_test              (void);

DBUS_PRIVATE_EXPORT
dbus_bool_t _dbus_list_test              (void);

DBUS_PRIVATE_EXPORT
dbus_bool_t _dbus_marshal_test           (void);

dbus_bool_t _dbus_marshal_recursive_test (void);
dbus_bool_t _dbus_marshal_byteswap_test  (void);
dbus_bool_t _dbus_marshal_validate_test  (void);

DBUS_PRIVATE_EXPORT
dbus_bool_t _dbus_misc_test              (void);

DBUS_PRIVATE_EXPORT
dbus_bool_t _dbus_signature_test         (void);

DBUS_PRIVATE_EXPORT
dbus_bool_t _dbus_mem_pool_test          (void);

dbus_bool_t _dbus_string_test            (void);

DBUS_PRIVATE_EXPORT
dbus_bool_t _dbus_address_test           (void);

DBUS_PRIVATE_EXPORT
dbus_bool_t _dbus_server_test            (void);

dbus_bool_t _dbus_message_test           (const char *test_data_dir);
dbus_bool_t _dbus_auth_test              (const char *test_data_dir);

DBUS_PRIVATE_EXPORT
dbus_bool_t _dbus_sha_test               (const char *test_data_dir);

DBUS_PRIVATE_EXPORT
dbus_bool_t _dbus_keyring_test           (void);

DBUS_PRIVATE_EXPORT
dbus_bool_t _dbus_data_slot_test         (void);

dbus_bool_t _dbus_sysdeps_test           (void);
dbus_bool_t _dbus_spawn_test             (const char *test_data_dir);

DBUS_PRIVATE_EXPORT
dbus_bool_t _dbus_userdb_test            (const char *test_data_dir);

DBUS_PRIVATE_EXPORT
dbus_bool_t _dbus_transport_unix_test    (void);

DBUS_PRIVATE_EXPORT
dbus_bool_t _dbus_memory_test            (void);

DBUS_PRIVATE_EXPORT
dbus_bool_t _dbus_object_tree_test       (void);

dbus_bool_t _dbus_credentials_test       (const char *test_data_dir);

void        _dbus_run_tests              (const char *test_data_dir,
                                          const char *specific_test);

dbus_bool_t _dbus_test_generate_bodies   (int         sequence,
                                          int         byte_order,
                                          DBusString *signature,
                                          DBusString *body);

#endif /* DBUS_TEST_H */
