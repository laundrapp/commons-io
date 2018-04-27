//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/marcussmith/temp/commons-io/src/main/java/org/apache/commons/io/input/BrokenInputStream.java
//

#include "J2ObjC_source.h"
#include "java/io/IOException.h"
#include "java/io/InputStream.h"
#include "org/apache/commons/io/input/BrokenInputStream.h"

@interface OrgApacheCommonsIoInputBrokenInputStream () {
 @public
  /*!
   @brief The exception that is thrown by all methods of this class.
   */
  JavaIoIOException *exception_;
}

@end

J2OBJC_FIELD_SETTER(OrgApacheCommonsIoInputBrokenInputStream, exception_, JavaIoIOException *)

@implementation OrgApacheCommonsIoInputBrokenInputStream

- (instancetype __nonnull)initWithJavaIoIOException:(JavaIoIOException *)exception {
  OrgApacheCommonsIoInputBrokenInputStream_initWithJavaIoIOException_(self, exception);
  return self;
}

J2OBJC_IGNORE_DESIGNATED_BEGIN
- (instancetype __nonnull)init {
  OrgApacheCommonsIoInputBrokenInputStream_init(self);
  return self;
}
J2OBJC_IGNORE_DESIGNATED_END

- (jint)read {
  @throw nil_chk(exception_);
}

- (jint)available {
  @throw nil_chk(exception_);
}

- (jlong)skipWithLong:(jlong)n {
  @throw nil_chk(exception_);
}

- (void)reset {
  @throw nil_chk(exception_);
}

- (void)close {
  @throw nil_chk(exception_);
}

- (void)dealloc {
  RELEASE_(exception_);
  [super dealloc];
}

@end

void OrgApacheCommonsIoInputBrokenInputStream_initWithJavaIoIOException_(OrgApacheCommonsIoInputBrokenInputStream *self, JavaIoIOException *exception) {
  JavaIoInputStream_init(self);
  JreStrongAssign(&self->exception_, exception);
}

OrgApacheCommonsIoInputBrokenInputStream *new_OrgApacheCommonsIoInputBrokenInputStream_initWithJavaIoIOException_(JavaIoIOException *exception) {
  J2OBJC_NEW_IMPL(OrgApacheCommonsIoInputBrokenInputStream, initWithJavaIoIOException_, exception)
}

OrgApacheCommonsIoInputBrokenInputStream *create_OrgApacheCommonsIoInputBrokenInputStream_initWithJavaIoIOException_(JavaIoIOException *exception) {
  J2OBJC_CREATE_IMPL(OrgApacheCommonsIoInputBrokenInputStream, initWithJavaIoIOException_, exception)
}

void OrgApacheCommonsIoInputBrokenInputStream_init(OrgApacheCommonsIoInputBrokenInputStream *self) {
  OrgApacheCommonsIoInputBrokenInputStream_initWithJavaIoIOException_(self, create_JavaIoIOException_initWithNSString_(@"Broken input stream"));
}

OrgApacheCommonsIoInputBrokenInputStream *new_OrgApacheCommonsIoInputBrokenInputStream_init() {
  J2OBJC_NEW_IMPL(OrgApacheCommonsIoInputBrokenInputStream, init)
}

OrgApacheCommonsIoInputBrokenInputStream *create_OrgApacheCommonsIoInputBrokenInputStream_init() {
  J2OBJC_CREATE_IMPL(OrgApacheCommonsIoInputBrokenInputStream, init)
}

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(OrgApacheCommonsIoInputBrokenInputStream)
