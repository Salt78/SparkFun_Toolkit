#ifndef COMPAT_LOOKAHEAD_HPP
#define COMPAT_LOOKAHEAD_HPP

#ifndef LOOKAHEADMODE_DEFINED
#define LOOKAHEADMODE_DEFINED

// Only define if it doesn't already exist
enum LookaheadMode {
    SKIP_ALL,       // Skip all non-numeric characters
    SKIP_NONE,      // Don't skip any characters
    SKIP_WHITESPACE // Skip only whitespace characters
  };

#endif // LOOKAHEADMODE_DEFINED

#endif // COMPAT_LOOKAHEAD_HPP