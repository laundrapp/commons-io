//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/marcussmith/temp/commons-io/src/main/java/org/apache/commons/io/output/BrokenOutputStream.java
//

#include "J2ObjC_source.h"
#include "java/io/IOException.h"
#include "java/io/OutputStream.h"
#include "org/apache/commons/io/output/BrokenOutputStream.h"

@interface OrgApacheCommonsIoOutputBrokenOutputStream () {
 @public
  /*!
   @brief The exception that is thrown by all methods of this class.
   */
  JavaIoIOException *exception_;
}

@end

J2OBJC_FIELD_SETTER(OrgApacheCommonsIoOutputBrokenOutputStream, exception_, JavaIoIOException *)

@implementation OrgApacheCommonsIoOutputBrokenOutputStream

- (instancetype)initWithJavaIoIOException:(JavaIoIOException *)exception {
  OrgApacheCommonsIoOutputBrokenOutputStream_initWithJavaIoIOException_(self, exception);
  return self;
}

J2OBJC_IGNORE_DESIGNATED_BEGIN
- (instancetype)init {
  OrgApacheCommonsIoOutputBrokenOutputStream_init(self);
  return self;
}
J2OBJC_IGNORE_DESIGNATED_END

- (void)writeWithInt:(jint)b {
  @throw nil_chk(exception_);
}

- (void)flush {
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

void OrgApacheCommonsIoOutputBrokenOutputStream_initWithJavaIoIOException_(OrgApacheCommonsIoOutputBrokenOutputStream *self, JavaIoIOException *exception) {
  JavaIoOutputStream_init(self);
  JreStrongAssign(&self->exception_, exception);
}

OrgApacheCommonsIoOutputBrokenOutputStream *new_OrgApacheCommonsIoOutputBrokenOutputStream_initWithJavaIoIOException_(JavaIoIOException *exception) {
  J2OBJC_NEW_IMPL(OrgApacheCommonsIoOutputBrokenOutputStream, initWithJavaIoIOException_, exception)
}

OrgApacheCommonsIoOutputBrokenOutputStream *create_OrgApacheCommonsIoOutputBrokenOutputStream_initWithJavaIoIOException_(JavaIoIOException *exception) {
  J2OBJC_CREATE_IMPL(OrgApacheCommonsIoOutputBrokenOutputStream, initWithJavaIoIOException_, exception)
}

void OrgApacheCommonsIoOutputBrokenOutputStream_init(OrgApacheCommonsIoOutputBrokenOutputStream *self) {
  OrgApacheCommonsIoOutputBrokenOutputStream_initWithJavaIoIOException_(self, create_JavaIoIOException_initWithNSString_(@"Broken output stream"));
}

OrgApacheCommonsIoOutputBrokenOutputStream *new_OrgApacheCommonsIoOutputBrokenOutputStream_init() {
  J2OBJC_NEW_IMPL(OrgApacheCommonsIoOutputBrokenOutputStream, init)
}

OrgApacheCommonsIoOutputBrokenOutputStream *create_OrgApacheCommonsIoOutputBrokenOutputStream_init() {
  J2OBJC_CREATE_IMPL(OrgApacheCommonsIoOutputBrokenOutputStream, init)
}

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(OrgApacheCommonsIoOutputBrokenOutputStream)
