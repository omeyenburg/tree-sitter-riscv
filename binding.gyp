{
  "targets": [
    {
      "target_name": "tree_sitter_mips_binding",
      "dependencies": [
        "<!(node -p \"require('node-addon-api').targets\"):node_addon_api_except"
      ],
      "include_dirs": [
        "src"
      ],
      "sources": [
        "bindings/node/binding.cc",
        "src/parser.c",
        "src/scanner.c"
      ],
      "conditions": [
        ["OS!='win'", {
          "cflags_cc": [ "-std=c++20" ],
          "cflags_c": [ "-std=c20" ]
        }, {
          "cflags_cc": [ "/std:c++20", "/utf-8" ],
          "cflags_c": [ "/std:c20", "/utf-8" ]
        }]
      ]
    }
  ]
}
