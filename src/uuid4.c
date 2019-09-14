#define R_NO_REMAP
#include <R.h>
#include <Rinternals.h>
#include "uuid/uuid.h"

SEXP uuid4(SEXP n_) {
    R_xlen_t n = INTEGER(n_)[0];
    SEXP out = PROTECT(Rf_allocVector(STRSXP, n));
    for (R_xlen_t i = 0; i < n; i++) {
        uuid_t uuid = uuid4_generate();
        const char * str = uuid_string(&uuid);
        SET_STRING_ELT(out, i, Rf_mkChar(str));
    }
    UNPROTECT(1);
    return out;
}

#include <R_ext/Rdynload.h>

void R_init_uuid4(DllInfo *info) {
  R_RegisterCCallable("uuid4", "uuid4",  (DL_FUNC) &uuid4);
}
