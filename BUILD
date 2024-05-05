load("@rules_cc//cc:defs.bzl", "cc_binary")

cc_test(
    name = "posix_tests",
    srcs = glob(["%workspace%/test/posix/*.cc"]),
    copts = ["-Iexternal/gtest/include"],
    size = 'small',
    deps = [
        "@com_google_googletest//:gtest",       # Include gtest library
        "@com_google_googletest//:gtest_main",
        "//test/posix:posix_tests"
    ]
)

cc_binary(
    name = "main",
    srcs = ["main.cpp"],
    deps = [
        "//include/posix:posix"
    ]
)