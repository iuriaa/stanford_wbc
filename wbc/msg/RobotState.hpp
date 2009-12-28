/*
 * Copyright (c) 2009 Roland Philippsen <roland DOT philippsen AT gmx DOT net>
 *
 * BSD license:
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. Neither the name of the copyright holder nor the names of
 *    contributors to this software may be used to endorse or promote
 *    products derived from this software without specific prior written
 *    permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHORS AND CONTRIBUTORS ``AS IS''
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED
 * TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A
 * PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT
 * HOLDER OR THE CONTRIBUTORS TO THIS SOFTWARE BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE
 * GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef WBCRUN_MSG_ROBOT_STATE_HPP
#define WBCRUN_MSG_ROBOT_STATE_HPP

#include <wbcnet/msg/RobotState.hpp>
#include <wbc/core/SAIVectorAPI.hpp>
#include <wbc/core/SAIMatrixAPI.hpp>

// We really should find a better way than having a global header for
// this... maybe a checksum on the names of registered header and
// payload fields?
#include <wbcrun/message_id.hpp>

namespace wbcrun {
  
  namespace msg {
    
    class RobotState
      : public wbcnet::msg::RobotState<wbc::SAIVectorAPI,
				       wbc::SAIMatrixAPI>
    {
    public:
      inline RobotState(bool auto_resize,
			uint8_t npos,
			uint8_t nvel,
			uint8_t forces_nrows,
			uint8_t forces_ncolumns)
	: wbcnet::msg::RobotState<wbc::SAIVectorAPI,
				  wbc::SAIMatrixAPI>(ROBOT_STATE, auto_resize, npos, nvel,
						     forces_nrows, forces_ncolumns) {}
    };
    
  }
  
}

#endif // WBCRUN_MSG_ROBOT_STATE_HPP