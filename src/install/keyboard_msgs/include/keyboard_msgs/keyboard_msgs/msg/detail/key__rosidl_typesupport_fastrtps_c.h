// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from keyboard_msgs:msg/Key.idl
// generated code does not contain a copyright notice
#ifndef KEYBOARD_MSGS__MSG__DETAIL__KEY__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define KEYBOARD_MSGS__MSG__DETAIL__KEY__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "keyboard_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "keyboard_msgs/msg/detail/key__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_keyboard_msgs
bool cdr_serialize_keyboard_msgs__msg__Key(
  const keyboard_msgs__msg__Key * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_keyboard_msgs
bool cdr_deserialize_keyboard_msgs__msg__Key(
  eprosima::fastcdr::Cdr &,
  keyboard_msgs__msg__Key * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_keyboard_msgs
size_t get_serialized_size_keyboard_msgs__msg__Key(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_keyboard_msgs
size_t max_serialized_size_keyboard_msgs__msg__Key(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_keyboard_msgs
bool cdr_serialize_key_keyboard_msgs__msg__Key(
  const keyboard_msgs__msg__Key * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_keyboard_msgs
size_t get_serialized_size_key_keyboard_msgs__msg__Key(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_keyboard_msgs
size_t max_serialized_size_key_keyboard_msgs__msg__Key(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_keyboard_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, keyboard_msgs, msg, Key)();

#ifdef __cplusplus
}
#endif

#endif  // KEYBOARD_MSGS__MSG__DETAIL__KEY__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
