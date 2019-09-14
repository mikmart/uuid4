
<!-- README.md is generated from README.Rmd. Please edit that file -->

# uuid4

<!-- badges: start -->

<!-- badges: end -->

Fast generation of version 4 universally unique identifiers (UUID4s) as
specified in [RFC 4122](https://tools.ietf.org/html/rfc4122). **uuid4**
does not use R’s random number generators, and thus is not affected by
`set.seed()`.

## Installation

Install from GitHub with:

``` r
devtools::install_github("mikmart/uuid4")
```

## Example

Create a single UUID by calling `uuid()` without arguments:

``` r
uuid4::uuid()
#> [1] "48bd74b8-9f03-403d-993e-d46d82d88718"
```

Or specify the number of UUIDs you want to get a vector:

``` r
uuid4::uuid(10)
#>  [1] "877f51dc-a5c0-48e5-9495-96f32d3eb874"
#>  [2] "37bcae86-6640-410c-a1e3-4a0188976f0d"
#>  [3] "365eee56-43ba-4f99-8e64-747939404517"
#>  [4] "74918ae2-7f6a-48b1-aa65-300f209624d5"
#>  [5] "23c23bff-99cd-47b8-8872-d5b75e3735ce"
#>  [6] "b49ffbc0-53a1-4554-b859-fda754fee1c6"
#>  [7] "d714027c-aee2-4a69-8a27-8154a409d1c3"
#>  [8] "7e4ec9c8-ebce-4f1d-9128-79732eb5ee08"
#>  [9] "d9ba0978-8be2-4ed5-9deb-3ff9139f611b"
#> [10] "5a06bba1-4eda-4f35-bf3b-6c1bb5a493c2"
```
