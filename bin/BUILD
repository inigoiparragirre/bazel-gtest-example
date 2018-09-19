cc_binary(
    name = "hello",
    srcs = ["hello.cpp"],
    deps = ["//MyLib:MyLib"],
)

cc_binary(
    name = "hello-rangev3",
    srcs = ["hello-rangev3.cpp"],
    deps = ["@rangev3//:range-v3"],
    copts = ["--std=c++14"]
)