run commands (each needs new window, source)
ros2 launch fws_robot_sim fws_robot_spawn.launch.py

ros2 launch velocity_pub four_ws_control.launch.py

ros2 run keyboard keyboard

ros2 run keyboard keyboard_to_joy.py --ros-args \
  -p config_file_name:=ros2 pkg prefix keyboard/share/keyboard/config/example_config.yaml
