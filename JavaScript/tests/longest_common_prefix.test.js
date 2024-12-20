import { longestCommonPrefix } from "#src/longest_common_prefix";
import { expect, test } from "vitest";

const cases = [
  {
    name: "common prefix",
    strs: ["flower", "flow", "flight"],
    want: "fl",
  },
  {
    name: "no common prefix",
    strs: ["dog", "racecar", "car"],
    want: "",
  },
  {
    name: "empty string array",
    strs: [],
    want: "",
  },
  {
    name: "single string",
    strs: ["single"],
    want: "single",
  },
  {
    name: "all strings are the same",
    strs: ["test", "test", "test"],
    want: "test",
  },
  {
    name: "mixed case strings",
    strs: ["a", "A"],
    want: "",
  },
  {
    name: "one empty string",
    strs: ["", "b"],
    want: "",
  },
];

for (const tt of cases) {
  test(tt.name, () => {
    const actual = longestCommonPrefix(tt.strs);
    expect(actual).toBe(tt.want);
  });
}
