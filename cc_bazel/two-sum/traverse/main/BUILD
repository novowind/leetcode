load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library")

cc_library(
  name = "solution",
  srcs = ["solution.cc"],
  hdrs = ["solution.h"],
)

cc_binary(
  name = "two-sum",
  srcs = ["traverse.cc"],
  deps = [
    ":solution",
  ],
)
