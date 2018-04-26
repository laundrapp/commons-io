//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/marcussmith/temp/commons-io/src/main/java/org/apache/commons/io/input/CountingInputStream.java
//

#include "J2ObjC_source.h"
#include "java/io/InputStream.h"
#include "java/lang/ArithmeticException.h"
#include "java/lang/Integer.h"
#include "org/apache/commons/io/input/CountingInputStream.h"
#include "org/apache/commons/io/input/ProxyInputStream.h"

@interface OrgApacheCommonsIoInputCountingInputStream () {
 @public
  /*!
   @brief The count of bytes that have passed.
   */
  jlong count_;
}

@end

@implementation OrgApacheCommonsIoInputCountingInputStream

- (instancetype)initWithJavaIoInputStream:(JavaIoInputStream *)inArg {
  OrgApacheCommonsIoInputCountingInputStream_initWithJavaIoInputStream_(self, inArg);
  return self;
}

- (jlong)skipWithLong:(jlong)length {
  @synchronized(self) {
    jlong skip = [super skipWithLong:length];
    self->count_ += skip;
    return skip;
  }
}

- (void)afterReadWithInt:(jint)n {
  @synchronized(self) {
    if (n != -1) {
      self->count_ += n;
    }
  }
}

- (jint)getCount {
  jlong result = [self getByteCount];
  if (result > JavaLangInteger_MAX_VALUE) {
    @throw create_JavaLangArithmeticException_initWithNSString_(JreStrcat("$J$", @"The byte count ", result, @" is too large to be converted to an int"));
  }
  return (jint) result;
}

- (jint)resetCount {
  jlong result = [self resetByteCount];
  if (result > JavaLangInteger_MAX_VALUE) {
    @throw create_JavaLangArithmeticException_initWithNSString_(JreStrcat("$J$", @"The byte count ", result, @" is too large to be converted to an int"));
  }
  return (jint) result;
}

- (jlong)getByteCount {
  @synchronized(self) {
    return self->count_;
  }
}

- (jlong)resetByteCount {
  @synchronized(self) {
    jlong tmp = self->count_;
    self->count_ = 0;
    return tmp;
  }
}

@end

void OrgApacheCommonsIoInputCountingInputStream_initWithJavaIoInputStream_(OrgApacheCommonsIoInputCountingInputStream *self, JavaIoInputStream *inArg) {
  OrgApacheCommonsIoInputProxyInputStream_initWithJavaIoInputStream_(self, inArg);
}

OrgApacheCommonsIoInputCountingInputStream *new_OrgApacheCommonsIoInputCountingInputStream_initWithJavaIoInputStream_(JavaIoInputStream *inArg) {
  J2OBJC_NEW_IMPL(OrgApacheCommonsIoInputCountingInputStream, initWithJavaIoInputStream_, inArg)
}

OrgApacheCommonsIoInputCountingInputStream *create_OrgApacheCommonsIoInputCountingInputStream_initWithJavaIoInputStream_(JavaIoInputStream *inArg) {
  J2OBJC_CREATE_IMPL(OrgApacheCommonsIoInputCountingInputStream, initWithJavaIoInputStream_, inArg)
}

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(OrgApacheCommonsIoInputCountingInputStream)
