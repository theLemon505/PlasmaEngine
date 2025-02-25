#pragma once
#ifndef LIGHTNING_DELEGATE_HPP
#define LIGHTNING_DELEGATE_HPP

namespace Lightning
{
  // Invalid constants
  const size_t InvalidOpcodeLocation = (size_t)-1;

  // A delegate is a simple type that consists of an index for a function, as well as the this pointer object
  class PlasmaShared Delegate
  {
  public:

    // Constructor
    Delegate();

    // Are two handles the exact same?
    bool operator==(const Delegate& rhs) const;
    bool operator==(Plasma::NullPointerType) const;

    // Are two handles different?
    bool operator!=(const Delegate& rhs) const;
    bool operator!=(Plasma::NullPointerType) const;

    // Hashes a handle (generally used by hashable containers)
    size_t Hash() const;

    // Checks if the value stored within the delegate is null (no function pointer)
    bool IsNull() const;
    bool IsNotNull() const;

    // Invokes a delegate, automatically passing in the 'this' handle
    Any Invoke(const Array<Any>& arguments = Array<Any>());

  public:
    // The function we run when invoking this delegate
    Function* BoundFunction;

    // The handle for the delegate
    Handle ThisHandle;
  };

  typedef const Delegate& DelegateParam;
}

#endif
