/*
 * common.hpp
 *
 *  Created on: 16 May 2018
 *      Author: Yun Wu
 *  log:
 *  2018-05-16 add header files for gps modules
 */

#ifndef SRC_HEADERS_COMMON_HPP_
#define SRC_HEADERS_COMMON_HPP_

#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <math.h>
#include <fcntl.h>
#include <errno.h>
#include <unistd.h>
#include <time.h>
#include <string>
#include <sstream>
#include <fstream>
#include <iostream>
#include <cstdlib>
#include <pthread.h>
#include <thread>
#include <stdexcept>
#include <arpa/inet.h>
#include <linux/serial.h>
#include <linux/ioctl.h>
#include <sys/ioctl.h>
#include <sys/socket.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/resource.h>
#include <sys/time.h>

// debug macro
#define DEBUG
#define PRINT_DEFAUT_SETTING
//#define PRINT_FUNC
//#define PRINT_FILE_LINE
//#define PRINT_DATE_TIME

// profiling macro
#define PROFILING_TIME
#define PROFILING_CYCLE


#endif /* SRC_HEADERS_COMMON_HPP_ */
