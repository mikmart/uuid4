#' Generate a character vector of UUID4s
#' @param n number of UUIDs to generate
#' @return a character vector of length `n`
#' @seealso [RFC 4122](https://tools.ietf.org/html/rfc4122) for the specification
#' @export
uuid <- function(n = 1L) {
  .Call("uuid4", as.integer(n))
}
