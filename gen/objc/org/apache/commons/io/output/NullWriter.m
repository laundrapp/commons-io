//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/marcussmith/temp/commons-io/src/main/java/org/apache/commons/io/output/NullWriter.java
//

#include "IOSPrimitiveArray.h"
#include "J2ObjC_source.h"
#include "java/io/Writer.h"
#include "java/lang/CharSequence.h"
#include "org/apache/commons/io/output/NullWriter.h"

J2OBJC_INITIALIZED_DEFN(OrgApacheCommonsIoOutputNullWriter)

OrgApacheCommonsIoOutputNullWriter *OrgApacheCommonsIoOutputNullWriter_NULL_WRITER;

@implementation OrgApacheCommonsIoOutputNullWriter

J2OBJC_IGNORE_DESIGNATED_BEGIN
- (instancetype)init {
  OrgApacheCommonsIoOutputNullWriter_init(self);
  return self;
}
J2OBJC_IGNORE_DESIGNATED_END

- (JavaIoWriter *)appendWithChar:(jchar)c {
  return self;
}

- (JavaIoWriter *)appendWithJavaLangCharSequence:(id<JavaLangCharSequence>)csq
                                         withInt:(jint)start
                                         withInt:(jint)end {
  return self;
}

- (JavaIoWriter *)appendWithJavaLangCharSequence:(id<JavaLangCharSequence>)csq {
  return self;
}

- (void)writeWithInt:(jint)idx {
}

- (void)writeWithCharArray:(IOSCharArray *)chr {
}

- (void)writeWithCharArray:(IOSCharArray *)chr
                   withInt:(jint)st
                   withInt:(jint)end {
}

- (void)writeWithNSString:(NSString *)str {
}

- (void)writeWithNSString:(NSString *)str
                  withInt:(jint)st
                  withInt:(jint)end {
}

- (void)flush {
}

- (void)close {
}

+ (void)initialize {
  if (self == [OrgApacheCommonsIoOutputNullWriter class]) {
    JreStrongAssignAndConsume(&OrgApacheCommonsIoOutputNullWriter_NULL_WRITER, new_OrgApacheCommonsIoOutputNullWriter_init());
    J2OBJC_SET_INITIALIZED(OrgApacheCommonsIoOutputNullWriter)
  }
}

@end

void OrgApacheCommonsIoOutputNullWriter_init(OrgApacheCommonsIoOutputNullWriter *self) {
  JavaIoWriter_init(self);
}

OrgApacheCommonsIoOutputNullWriter *new_OrgApacheCommonsIoOutputNullWriter_init() {
  J2OBJC_NEW_IMPL(OrgApacheCommonsIoOutputNullWriter, init)
}

OrgApacheCommonsIoOutputNullWriter *create_OrgApacheCommonsIoOutputNullWriter_init() {
  J2OBJC_CREATE_IMPL(OrgApacheCommonsIoOutputNullWriter, init)
}

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(OrgApacheCommonsIoOutputNullWriter)
