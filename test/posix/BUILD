cc_test(
    name = "posix_tests",
    srcs = glob(["*.cc"]),  
    copts = ["-Iexternal/gtest/include"],
    deps = [
        "@com_google_googletest//:gtest",
        "@com_google_googletest//:gtest_main",
        "//include/posix:posix",
        "//src/posix:posix"
    ],
    visibility = ["//visibility:public"]
)
