{
  description = "LeetCode solutions implemented in C++, Java, JavaScript";
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
        devShells.default = pkgs.mkShell {
          buildInputs = with pkgs; [
            clang
            gtest
            tokei
            bashInteractive
            cmake
            gnumake
            just
            nodejs_22
          ];
          shellHook = ''
            export SHELL="${pkgs.bashInteractive}/bin/bash"
          '';
        };
        formatter = pkgs.alejandra;
      }
    );
}
