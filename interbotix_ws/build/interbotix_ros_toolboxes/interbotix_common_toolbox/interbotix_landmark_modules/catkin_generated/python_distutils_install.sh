#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/mahesh/interbotix_ws/src/interbotix_ros_toolboxes/interbotix_common_toolbox/interbotix_landmark_modules"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/mahesh/interbotix_ws/install/lib/python3/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/mahesh/interbotix_ws/install/lib/python3/dist-packages:/home/mahesh/interbotix_ws/build/lib/python3/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/mahesh/interbotix_ws/build" \
    "/usr/bin/python3" \
    "/home/mahesh/interbotix_ws/src/interbotix_ros_toolboxes/interbotix_common_toolbox/interbotix_landmark_modules/setup.py" \
     \
    build --build-base "/home/mahesh/interbotix_ws/build/interbotix_ros_toolboxes/interbotix_common_toolbox/interbotix_landmark_modules" \
    install \
    --root="${DESTDIR-/}" \
    --install-layout=deb --prefix="/home/mahesh/interbotix_ws/install" --install-scripts="/home/mahesh/interbotix_ws/install/bin"
