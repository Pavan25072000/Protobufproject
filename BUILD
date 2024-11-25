proto_library(
    name = "customer_proto",
    srcs = ["customer.proto"],
)

cc_proto_library(
    name = "customer_cc_proto",
    deps = [":customer_proto"],
)
cc_library(
    name = "utility_headers",
    hdrs = [
        "Required_Headers/message_contains.h",
        "Required_Headers/customer_details.h",
    ],
    visibility = ["//visibility:public"],
)
cc_library(
    name = "server_lib",
    srcs = ["server.cpp"],
    hdrs = ["server.h"],
    deps = [
        ":customer_cc_proto",
        ":utility_headers",
    ],
    visibility = ["//visibility:public"],
)
cc_library(
    name = "customer_lib",
    srcs = ["customer_info.cpp"],
    hdrs = ["customer_info.h"],
    deps = [
        ":customer_cc_proto",
        ":server_lib",
    ],
    visibility = ["//visibility:public"],
)



cc_binary(
    name = "Bank_server_app",
    srcs = ["main.cpp"],
    deps = [
        ":customer_lib",
        ":server_lib",
        ":customer_cc_proto",
    ],
)
# cc_test(
#     name = "client_server_test",
#     srcs = ["test/client_server_test.cpp"],
#     deps = [
#         ":employee_cc_proto",
#         "@com_google_googletest//:gtest_main",
#         ":client_server_app",
#         ":utility_headers",
#     ],
# )