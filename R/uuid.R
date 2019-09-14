#' Generate a character vector of UUID4s
#'
#' A UUID4 is a random 128-bit integer with 6 bits containing fixed version
#' information. They are surfaced to R as a character vector containing the
#' hexadecimal representation. UUIDs are generated with a PCG random number
#' generator, separate from R's built-in RNGs, so `set.seed()` has no effect on
#' `uuid()`.
#'
#' @param n number of UUIDs to generate
#' @return a character vector of length `n`
#' @seealso [RFC 4122](https://tools.ietf.org/html/rfc4122) for the
#'   specification. [http://www.pcg-random.org]() for the RNG used.
#' @export
#' @examples
#' library(uuid4)
#'
#' uuid() # a single UUID4
uuid <- function(n = 1L) {
  .Call(C_uuid4, as.integer(n))
}
