//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/marcussmith/temp/commons-io/src/main/java/org/apache/commons/io/output/NullOutputStream.java
//

#include "IOSPrimitiveArray.h"
#include "J2ObjC_source.h"
#include "java/io/OutputStream.h"
#include "org/apache/commons/io/output/NullOutputStream.h"

J2OBJC_INITIALIZED_DEFN(OrgApacheCommonsIoOutputNullOutputStream)

OrgApacheCommonsIoOutputNullOutputStream *OrgApacheCommonsIoOutputNullOutputStream_NULL_OUTPUT_STREAM;

@implementation OrgApacheCommonsIoOutputNullOutputStream

J2OBJC_IGNORE_DESIGNATED_BEGIN
- (instancetype)init {
  OrgApacheCommonsIoOutputNullOutputStream_init(self);
  return self;
}
J2OBJC_IGNORE_DESIGNATED_END

- (void)writeWithByteArray:(IOSByteArray *)b
                   withInt:(jint)off
                   withInt:(jint)len {
}

- (void)writeWithInt:(jint)b {
}

- (void)writeWithByteArray:(IOSByteArray *)b {
}

+ (void)initialize {
  if (self == [OrgApacheCommonsIoOutputNullOutputStream class]) {
    JreStrongAssignAndConsume(&OrgApacheCommonsIoOutputNullOutputStream_NULL_OUTPUT_STREAM, new_OrgApacheCommonsIoOutputNullOutputStream_init());
    J2OBJC_SET_INITIALIZED(OrgApacheCommonsIoOutputNullOutputStream)
  }
}

@end

void OrgApacheCommonsIoOutputNullOutputStream_init(OrgApacheCommonsIoOutputNullOutputStream *self) {
  JavaIoOutputStream_init(self);
}

OrgApacheCommonsIoOutputNullOutputStream *new_OrgApacheCommonsIoOutputNullOutputStream_init() {
  J2OBJC_NEW_IMPL(OrgApacheCommonsIoOutputNullOutputStream, init)
}

OrgApacheCommonsIoOutputNullOutputStream *create_OrgApacheCommonsIoOutputNullOutputStream_init() {
  J2OBJC_CREATE_IMPL(OrgApacheCommonsIoOutputNullOutputStream, init)
}

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(OrgApacheCommonsIoOutputNullOutputStream)
