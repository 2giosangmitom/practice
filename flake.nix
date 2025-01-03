{
  description = "LeetCode solutions implemented in C++";
  inputs = {
    nixpkgs.url = "nixpkgs/nixos-unstable";
    flake-utils.url = "github:numtide/flake-utils";
  };

  outputs = {
    nixpkgs,
    flake-utils,
    ...
  }:
    flake-utils.lib.eachDefaultSystem (
      system: let
        pkgs = import nixpkgs {
          inherit system;
        };
      in {
        devShells.default = pkgs.mkShellNoCC {
          buildInputs = with pkgs; [
            clang
            gtest
            bashInteractive
            gnumake
            bear
          ];
          shellHook = ''
            export SHELL="${pkgs.bashInteractive}/bin/bash"
            export GTEST_DEV="${pkgs.gtest.dev}/include/"
            export GTEST="${pkgs.gtest}/lib"
          '';
        };
        formatter = pkgs.alejandra;
      }
    );
}
