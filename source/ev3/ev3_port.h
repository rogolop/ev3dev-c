
/*  ev3_port.h was generated by yup.py (yupp) 0.7b7
    out of ev3_port.yu-h at 2014-11-26 12:57
 *//**
 *  \file  ev3_port.h (ev3_port.yu-h)
 *  \brief  EV3 Ports.
 *  \author  Vitaly Kravtsov (in4lio@gmail.com)
 *  \copyright  See the LICENSE file.
 */

#ifndef EV3_PORT_H
#define EV3_PORT_H

#ifdef  EV3_PORT_IMPLEMENT
#define EV3_PORT_EXT
#define EV3_PORT_EXT_INIT( dec, init ) \
	dec = init
#else
#define EV3_PORT_EXT extern
#define EV3_PORT_EXT_INIT( dec, init ) \
	extern dec
#endif

#ifndef COMMA
#define COMMA   ,
#endif

#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 *  \defgroup ev3_port Ports
 *  \brief Access to EV3 Ports and Multiplexer Ports.
 *  \see http://www.ev3dev.org/docs/drivers/ev3-output-port/
 *  \see http://www.ev3dev.org/docs/drivers/ev3-input-port/
 *  \see http://www.ev3dev.org/docs/drivers/ht-smux-input-port/
 *  \{
 */

/**
 *  \brief Undefined EV3 port.
 */
#define EV3_PORT__NONE_  0

/**
 *  \brief Get indexes of the EV3 port and the extended port from the port name.
 *  \param name Port name.
 *  \param extport Buffer for the extended port index.
 *  \return EV3 port index.
 */
EV3_PORT_EXT uint8_t ev3_port_inx( const char *name, uint8_t *extport );

/**
 *  \brief Get name of the specified EV3 port or multiplexer port.
 *  \param port Port index.
 *  \param extport Extended port index.
 *  \return Requested value.
 */
EV3_PORT_EXT const char *ev3_port_name( uint8_t port, uint8_t extport );

/** \} */

#ifdef __cplusplus
}
#endif

#endif
