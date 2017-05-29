/* -*- c++ -*- */
/* 
 * Copyright 2017 <+YOU OR YOUR COMPANY+>.
 * 
 * This is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 * 
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this software; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */


#ifndef INCLUDED_CFEYER_DWF_MODULE_CFEYER_DWF_SINK_H
#define INCLUDED_CFEYER_DWF_MODULE_CFEYER_DWF_SINK_H

#include <cfeyer_dwf_module/api.h>
#include <gnuradio/sync_block.h>

namespace gr {
  namespace cfeyer_dwf_module {

    /*!
     * \brief <+description of block+>
     * \ingroup cfeyer_dwf_module
     *
     */
    class CFEYER_DWF_MODULE_API cfeyer_dwf_sink : virtual public gr::sync_block
    {
     public:
      typedef boost::shared_ptr<cfeyer_dwf_sink> sptr;

      /*!
       * \brief Return a shared_ptr to a new instance of cfeyer_dwf_module::cfeyer_dwf_sink.
       *
       * To avoid accidental use of raw pointers, cfeyer_dwf_module::cfeyer_dwf_sink's
       * constructor is in a private implementation
       * class. cfeyer_dwf_module::cfeyer_dwf_sink::make is the public interface for
       * creating new instances.
       */
      static sptr make(const std::string & serial_number, int analog_out_channel_index);
    };

  } // namespace cfeyer_dwf_module
} // namespace gr

#endif /* INCLUDED_CFEYER_DWF_MODULE_CFEYER_DWF_SINK_H */

