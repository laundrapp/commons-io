//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/marcussmith/temp/commons-io/src/main/java/org/apache/commons/io/output/ClosedOutputStream.java
//

#include "J2ObjC_source.h"
#include "java/io/IOException.h"
#include "java/io/OutputStream.h"
#include "org/apache/commons/io/output/ClosedOutputStream.h"

J2OBJC_INITIALIZED_DEFN(OrgApacheCommonsIoOutputClosedOutputStream)

OrgApacheCommonsIoOutputClosedOutputStream *OrgApacheCommonsIoOutputClosedOutputStream_CLOSED_OUTPUT_STREAM;

@implementation OrgApacheCommonsIoOutputClosedOutputStream

J2OBJC_IGNORE_DESIGNATED_BEGIN
- (instancetype __nonnull)init {
  OrgApacheCommonsIoOutputClosedOutputStream_init(self);
  return self;
}
J2OBJC_IGNORE_DESIGNATED_END

- (void)writeWithInt:(jint)b {
  @throw create_JavaIoIOException_initWithNSString_(JreStrcat("$I$", @"write(", b, @") failed: stream is closed"));
}

+ (void)initialize {
  if (self == [OrgApacheCommonsIoOutputClosedOutputStream class]) {
    JreStrongAssignAndConsume(&OrgApacheCommonsIoOutputClosedOutputStream_CLOSED_OUTPUT_STREAM, new_OrgApacheCommonsIoOutputClosedOutputStream_init());
    J2OBJC_SET_INITIALIZED(OrgApacheCommonsIoOutputClosedOutputStream)
  }
}

@end

void OrgApacheCommonsIoOutputClosedOutputStream_init(OrgApacheCommonsIoOutputClosedOutputStream *self) {
  JavaIoOutputStream_init(self);
}

OrgApacheCommonsIoOutputClosedOutputStream *new_OrgApacheCommonsIoOutputClosedOutputStream_init() {
  J2OBJC_NEW_IMPL(OrgApacheCommonsIoOutputClosedOutputStream, init)
}

OrgApacheCommonsIoOutputClosedOutputStream *create_OrgApacheCommonsIoOutputClosedOutputStream_init() {
  J2OBJC_CREATE_IMPL(OrgApacheCommonsIoOutputClosedOutputStream, init)
}

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(OrgApacheCommonsIoOutputClosedOutputStream)
