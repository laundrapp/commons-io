//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/marcussmith/temp/commons-io/src/main/java/org/apache/commons/io/output/TeeOutputStream.java
//

#include "IOSPrimitiveArray.h"
#include "J2ObjC_source.h"
#include "java/io/OutputStream.h"
#include "org/apache/commons/io/output/ProxyOutputStream.h"
#include "org/apache/commons/io/output/TeeOutputStream.h"

@implementation OrgApacheCommonsIoOutputTeeOutputStream

- (instancetype)initWithJavaIoOutputStream:(JavaIoOutputStream *)outArg
                    withJavaIoOutputStream:(JavaIoOutputStream *)branch {
  OrgApacheCommonsIoOutputTeeOutputStream_initWithJavaIoOutputStream_withJavaIoOutputStream_(self, outArg, branch);
  return self;
}

- (void)writeWithByteArray:(IOSByteArray *)b {
  @synchronized(self) {
    [super writeWithByteArray:b];
    [((JavaIoOutputStream *) nil_chk(self->branch_)) writeWithByteArray:b];
  }
}

- (void)writeWithByteArray:(IOSByteArray *)b
                   withInt:(jint)off
                   withInt:(jint)len {
  @synchronized(self) {
    [super writeWithByteArray:b withInt:off withInt:len];
    [((JavaIoOutputStream *) nil_chk(self->branch_)) writeWithByteArray:b withInt:off withInt:len];
  }
}

- (void)writeWithInt:(jint)b {
  @synchronized(self) {
    [super writeWithInt:b];
    [((JavaIoOutputStream *) nil_chk(self->branch_)) writeWithInt:b];
  }
}

- (void)flush {
  [super flush];
  [((JavaIoOutputStream *) nil_chk(self->branch_)) flush];
}

- (void)close {
  @try {
    [super close];
  }
  @finally {
    [((JavaIoOutputStream *) nil_chk(self->branch_)) close];
  }
}

- (void)dealloc {
  RELEASE_(branch_);
  [super dealloc];
}

@end

void OrgApacheCommonsIoOutputTeeOutputStream_initWithJavaIoOutputStream_withJavaIoOutputStream_(OrgApacheCommonsIoOutputTeeOutputStream *self, JavaIoOutputStream *outArg, JavaIoOutputStream *branch) {
  OrgApacheCommonsIoOutputProxyOutputStream_initWithJavaIoOutputStream_(self, outArg);
  JreStrongAssign(&self->branch_, branch);
}

OrgApacheCommonsIoOutputTeeOutputStream *new_OrgApacheCommonsIoOutputTeeOutputStream_initWithJavaIoOutputStream_withJavaIoOutputStream_(JavaIoOutputStream *outArg, JavaIoOutputStream *branch) {
  J2OBJC_NEW_IMPL(OrgApacheCommonsIoOutputTeeOutputStream, initWithJavaIoOutputStream_withJavaIoOutputStream_, outArg, branch)
}

OrgApacheCommonsIoOutputTeeOutputStream *create_OrgApacheCommonsIoOutputTeeOutputStream_initWithJavaIoOutputStream_withJavaIoOutputStream_(JavaIoOutputStream *outArg, JavaIoOutputStream *branch) {
  J2OBJC_CREATE_IMPL(OrgApacheCommonsIoOutputTeeOutputStream, initWithJavaIoOutputStream_withJavaIoOutputStream_, outArg, branch)
}

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(OrgApacheCommonsIoOutputTeeOutputStream)
