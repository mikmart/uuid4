#include <R.h>
#include <Rinternals.h>
#include <stdlib.h> // for NULL
#include <R_ext/Rdynload.h>

/* .Call calls */
extern SEXP uuid4(SEXP);

static const R_CallMethodDef CallEntries[] = {
    {"uuid4", (DL_FUNC) &uuid4, 1},
    {NULL, NULL, 0}
};

void R_init_uuid4(DllInfo *dll)
{
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
