
<!-- README.md is generated from README.Rmd. Please edit that file -->

# uuid4

<!-- badges: start -->

[![Travis build
status](https://travis-ci.org/mikmart/uuid4.svg?branch=master)](https://travis-ci.org/mikmart/uuid4)
[![AppVeyor build
status](https://ci.appveyor.com/api/projects/status/github/mikmart/uuid4?branch=master&svg=true)](https://ci.appveyor.com/project/mikmart/uuid4)
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
#> [1] "5172bb8c-e66e-42b5-8f12-c2f5ac1df296"
```

Or specify the number of UUIDs you want to get a vector:

``` r
uuid4::uuid(10)
#>  [1] "bbebc403-f56d-4954-b219-0cc5e7992f58"
#>  [2] "1a0fbe5c-458f-4967-981e-b4cfd9b78b9f"
#>  [3] "62864ef7-049b-45ef-96b7-7fbb1e2c4bdf"
#>  [4] "d6920bb7-ecff-4bb6-bfdc-6272037c1803"
#>  [5] "64e938e5-0330-4cb3-aabd-824ea0f92dff"
#>  [6] "7b540c61-0921-410c-b455-9dbd5f42cf0d"
#>  [7] "2697037b-9aaa-438a-8ecd-70fc819d9f12"
#>  [8] "3d003378-ffd9-4bb3-8ded-9202cf60b544"
#>  [9] "a06c31db-05b0-4a74-8f6b-7e72d3d8eb1d"
#> [10] "8edb36c2-4dbf-4fd8-9e98-660d95585f30"
```
