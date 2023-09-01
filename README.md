
<!-- README.md is generated from README.Rmd. Please edit that file -->

# vcfppR

<!-- badges: start -->
<!-- badges: end -->

The goal of vcfppR is to demonstrate the usage of vcfpp in R and
implement some useful function in R.

## Installation

You can install the development version of vcfppR like so:

``` r
devtools::install_github("Zilong-Li/vcfppR")
```

## Example

This example shows how to read GT tag in the VCF/BCF into R tables:

``` r
library(vcfppR)
vcffile <- system.file("extdata", "test-GL.vcf.gz", package="vcfppR")
(gt <- tableGT(vcffile,"chr20"))
summary(gt)
```

This example shows how to read GL tag in the VCF/BCF into R tables:

``` r
library(vcfppR)
vcffile <- system.file("extdata", "test-GL.vcf.gz", package="vcfppR")
(gl <- tableGL(vcffile,"chr20"))
summary(gl)
```

This example shows how to read PL tag in the VCF/BCF into R tables:

``` r
library(vcfppR)
vcffile <- system.file("extdata", "test-GL.vcf.gz", package="vcfppR")
(pl <- tablePL(vcffile,"chr20"))
summary(pl)
```
