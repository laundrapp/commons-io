//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/marcussmith/temp/commons-io/src/main/java/org/apache/commons/io/output/CloseShieldOutputStream.java
//

#include "J2ObjC_source.h"
#include "java/io/OutputStream.h"
#include "org/apache/commons/io/output/CloseShieldOutputStream.h"
#include "org/apache/commons/io/output/ClosedOutputStream.h"
#include "org/apache/commons/io/output/ProxyOutputStream.h"

@implementation OrgApacheCommonsIoOutputCloseShieldOutputStream

- (instancetype __nonnull)initWithJavaIoOutputStream:(JavaIoOutputStream *)outArg {
  OrgApacheCommonsIoOutputCloseShieldOutputStream_initWithJavaIoOutputStream_(self, outArg);
  return self;
}

- (void)close {
  JreStrongAssignAndConsume(&out_, new_OrgApacheCommonsIoOutputClosedOutputStream_init());
}

@end

void OrgApacheCommonsIoOutputCloseShieldOutputStream_initWithJavaIoOutputStream_(OrgApacheCommonsIoOutputCloseShieldOutputStream *self, JavaIoOutputStream *outArg) {
  OrgApacheCommonsIoOutputProxyOutputStream_initWithJavaIoOutputStream_(self, outArg);
}

OrgApacheCommonsIoOutputCloseShieldOutputStream *new_OrgApacheCommonsIoOutputCloseShieldOutputStream_initWithJavaIoOutputStream_(JavaIoOutputStream *outArg) {
  J2OBJC_NEW_IMPL(OrgApacheCommonsIoOutputCloseShieldOutputStream, initWithJavaIoOutputStream_, outArg)
}

OrgApacheCommonsIoOutputCloseShieldOutputStream *create_OrgApacheCommonsIoOutputCloseShieldOutputStream_initWithJavaIoOutputStream_(JavaIoOutputStream *outArg) {
  J2OBJC_CREATE_IMPL(OrgApacheCommonsIoOutputCloseShieldOutputStream, initWithJavaIoOutputStream_, outArg)
}

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(OrgApacheCommonsIoOutputCloseShieldOutputStream)
