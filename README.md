
<!-- README.md is generated from README.Rmd. Please edit that file -->

# uuid4

<!-- badges: start -->

<!-- badges: end -->

Fast generation of version 4 universally unique identifiers (UUID4s) as
specified in [RFC 4122](https://tools.ietf.org/html/rfc4122).

## Installation

Install from GitHub with:

``` r
devtools::install_github("mikmart/uuid4")
```

## Example

Create a single UUID by calling `uuid()` without arguments:

``` r
uuid4::uuid()
#> [1] "ea8f6506-6472-419b-aad5-7d7b543c5ce9"
```

Or specify the number of UUIDs you want to get a vector:

``` r
uuid4::uuid(10)
#>  [1] "9eb6430c-94c0-4dd4-b4b9-b0e5292a70af"
#>  [2] "ecb7809b-18a4-44a9-ba98-795768a164c6"
#>  [3] "d579c818-a208-4c1c-b629-7c2d50b1de57"
#>  [4] "1cae08bc-85ec-4136-8bbe-c53e55fafd0d"
#>  [5] "c8466e00-5892-4041-9ee6-a2a42b5e1ccf"
#>  [6] "1d73669e-f07b-47c6-9673-a0b8c9fddac8"
#>  [7] "a0a59d8e-6068-438c-9577-8c126238135f"
#>  [8] "168e0009-ff5a-409f-8342-728c6cb1e33e"
#>  [9] "841ebd88-6292-4b45-8364-a03f9d47a94f"
#> [10] "2f8840c5-5d90-4209-bbb0-a383e81e01b9"
```
