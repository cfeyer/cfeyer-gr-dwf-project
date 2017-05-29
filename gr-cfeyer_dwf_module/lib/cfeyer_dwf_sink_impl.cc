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

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <gnuradio/io_signature.h>
#include "cfeyer_dwf_sink_impl.h"

#define CFEYER_DWF_SINK_MIN_IN 1
#define CFEYER_DWF_SINK_MAX_IN 1
#define CFEYER_DWF_SINK_ITYPE  float

namespace gr {
  namespace cfeyer_dwf_module {

    cfeyer_dwf_sink::sptr
    cfeyer_dwf_sink::make(const std::string & serial_number, int analog_out_channel_index)
    {
      return gnuradio::get_initial_sptr
        (new cfeyer_dwf_sink_impl(serial_number, analog_out_channel_index));
    }

    /*
     * The private constructor
     */
    cfeyer_dwf_sink_impl::cfeyer_dwf_sink_impl(const std::string & serial_number, int analog_out_channel_index)
      : gr::sync_block("cfeyer_dwf_sink",
              gr::io_signature::make(CFEYER_DWF_SINK_MIN_IN, CFEYER_DWF_SINK_MAX_IN, sizeof(CFEYER_DWF_SINK_ITYPE)),
              gr::io_signature::make(0, 0, 0))
    {}

    /*
     * Our virtual destructor.
     */
    cfeyer_dwf_sink_impl::~cfeyer_dwf_sink_impl()
    {
    }

    int
    cfeyer_dwf_sink_impl::work(int noutput_items,
        gr_vector_const_void_star &input_items,
        gr_vector_void_star &output_items)
    {
      const CFEYER_DWF_SINK_ITYPE *in = (const CFEYER_DWF_SINK_ITYPE *) input_items[0];

      // Do <+signal processing+>

      // Tell runtime system how many output items we produced.
      return noutput_items;
    }

  } /* namespace cfeyer_dwf_module */
} /* namespace gr */

