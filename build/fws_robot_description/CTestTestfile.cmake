# CMake generated Testfile for 
# Source directory: /home/admin/Documents/projects/u-tour/pathing/remote-repos/learning/fws_robot_harmonic/src/fws_robot_description
# Build directory: /home/admin/Documents/projects/u-tour/pathing/remote-repos/learning/fws_robot_harmonic/build/fws_robot_description
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(copyright "/usr/bin/python3" "-u" "/opt/ros/jazzy/share/ament_cmake_test/cmake/run_test.py" "/home/admin/Documents/projects/u-tour/pathing/remote-repos/learning/fws_robot_harmonic/build/fws_robot_description/test_results/fws_robot_description/copyright.xunit.xml" "--package-name" "fws_robot_description" "--output-file" "/home/admin/Documents/projects/u-tour/pathing/remote-repos/learning/fws_robot_harmonic/build/fws_robot_description/ament_copyright/copyright.txt" "--command" "/opt/ros/jazzy/bin/ament_copyright" "--xunit-file" "/home/admin/Documents/projects/u-tour/pathing/remote-repos/learning/fws_robot_harmonic/build/fws_robot_description/test_results/fws_robot_description/copyright.xunit.xml")
set_tests_properties(copyright PROPERTIES  LABELS "copyright;linter" TIMEOUT "200" WORKING_DIRECTORY "/home/admin/Documents/projects/u-tour/pathing/remote-repos/learning/fws_robot_harmonic/src/fws_robot_description" _BACKTRACE_TRIPLES "/opt/ros/jazzy/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/jazzy/share/ament_cmake_copyright/cmake/ament_copyright.cmake;51;ament_add_test;/opt/ros/jazzy/share/ament_cmake_copyright/cmake/ament_cmake_copyright_lint_hook.cmake;22;ament_copyright;/opt/ros/jazzy/share/ament_cmake_copyright/cmake/ament_cmake_copyright_lint_hook.cmake;0;;/opt/ros/jazzy/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/jazzy/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/jazzy/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/jazzy/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/jazzy/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/admin/Documents/projects/u-tour/pathing/remote-repos/learning/fws_robot_harmonic/src/fws_robot_description/CMakeLists.txt;59;ament_package;/home/admin/Documents/projects/u-tour/pathing/remote-repos/learning/fws_robot_harmonic/src/fws_robot_description/CMakeLists.txt;0;")
add_test(lint_cmake "/usr/bin/python3" "-u" "/opt/ros/jazzy/share/ament_cmake_test/cmake/run_test.py" "/home/admin/Documents/projects/u-tour/pathing/remote-repos/learning/fws_robot_harmonic/build/fws_robot_description/test_results/fws_robot_description/lint_cmake.xunit.xml" "--package-name" "fws_robot_description" "--output-file" "/home/admin/Documents/projects/u-tour/pathing/remote-repos/learning/fws_robot_harmonic/build/fws_robot_description/ament_lint_cmake/lint_cmake.txt" "--command" "/opt/ros/jazzy/bin/ament_lint_cmake" "--xunit-file" "/home/admin/Documents/projects/u-tour/pathing/remote-repos/learning/fws_robot_harmonic/build/fws_robot_description/test_results/fws_robot_description/lint_cmake.xunit.xml")
set_tests_properties(lint_cmake PROPERTIES  LABELS "lint_cmake;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/admin/Documents/projects/u-tour/pathing/remote-repos/learning/fws_robot_harmonic/src/fws_robot_description" _BACKTRACE_TRIPLES "/opt/ros/jazzy/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/jazzy/share/ament_cmake_lint_cmake/cmake/ament_lint_cmake.cmake;47;ament_add_test;/opt/ros/jazzy/share/ament_cmake_lint_cmake/cmake/ament_cmake_lint_cmake_lint_hook.cmake;21;ament_lint_cmake;/opt/ros/jazzy/share/ament_cmake_lint_cmake/cmake/ament_cmake_lint_cmake_lint_hook.cmake;0;;/opt/ros/jazzy/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/jazzy/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/jazzy/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/jazzy/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/jazzy/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/admin/Documents/projects/u-tour/pathing/remote-repos/learning/fws_robot_harmonic/src/fws_robot_description/CMakeLists.txt;59;ament_package;/home/admin/Documents/projects/u-tour/pathing/remote-repos/learning/fws_robot_harmonic/src/fws_robot_description/CMakeLists.txt;0;")
add_test(xmllint "/usr/bin/python3" "-u" "/opt/ros/jazzy/share/ament_cmake_test/cmake/run_test.py" "/home/admin/Documents/projects/u-tour/pathing/remote-repos/learning/fws_robot_harmonic/build/fws_robot_description/test_results/fws_robot_description/xmllint.xunit.xml" "--package-name" "fws_robot_description" "--output-file" "/home/admin/Documents/projects/u-tour/pathing/remote-repos/learning/fws_robot_harmonic/build/fws_robot_description/ament_xmllint/xmllint.txt" "--command" "/opt/ros/jazzy/bin/ament_xmllint" "--xunit-file" "/home/admin/Documents/projects/u-tour/pathing/remote-repos/learning/fws_robot_harmonic/build/fws_robot_description/test_results/fws_robot_description/xmllint.xunit.xml")
set_tests_properties(xmllint PROPERTIES  LABELS "xmllint;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/admin/Documents/projects/u-tour/pathing/remote-repos/learning/fws_robot_harmonic/src/fws_robot_description" _BACKTRACE_TRIPLES "/opt/ros/jazzy/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/jazzy/share/ament_cmake_xmllint/cmake/ament_xmllint.cmake;50;ament_add_test;/opt/ros/jazzy/share/ament_cmake_xmllint/cmake/ament_cmake_xmllint_lint_hook.cmake;18;ament_xmllint;/opt/ros/jazzy/share/ament_cmake_xmllint/cmake/ament_cmake_xmllint_lint_hook.cmake;0;;/opt/ros/jazzy/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/jazzy/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/jazzy/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/jazzy/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/jazzy/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/admin/Documents/projects/u-tour/pathing/remote-repos/learning/fws_robot_harmonic/src/fws_robot_description/CMakeLists.txt;59;ament_package;/home/admin/Documents/projects/u-tour/pathing/remote-repos/learning/fws_robot_harmonic/src/fws_robot_description/CMakeLists.txt;0;")
