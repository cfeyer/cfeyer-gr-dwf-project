/* -*- c++ -*- */

#define CFEYER_DWF_MODULE_API

%include "gnuradio.i"			// the common stuff

//load generated python docstrings
%include "cfeyer_dwf_module_swig_doc.i"

%{
#include "cfeyer_dwf_module/cfeyer_dwf_sink.h"
%}


%include "cfeyer_dwf_module/cfeyer_dwf_sink.h"
GR_SWIG_BLOCK_MAGIC2(cfeyer_dwf_module, cfeyer_dwf_sink);
