//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/marcussmith/temp/commons-io/src/main/java/org/apache/commons/io/output/CloseShieldOutputStream.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheCommonsIoOutputCloseShieldOutputStream")
#ifdef RESTRICT_OrgApacheCommonsIoOutputCloseShieldOutputStream
#define INCLUDE_ALL_OrgApacheCommonsIoOutputCloseShieldOutputStream 0
#else
#define INCLUDE_ALL_OrgApacheCommonsIoOutputCloseShieldOutputStream 1
#endif
#undef RESTRICT_OrgApacheCommonsIoOutputCloseShieldOutputStream

#if !defined (OrgApacheCommonsIoOutputCloseShieldOutputStream_) && (INCLUDE_ALL_OrgApacheCommonsIoOutputCloseShieldOutputStream || defined(INCLUDE_OrgApacheCommonsIoOutputCloseShieldOutputStream))
#define OrgApacheCommonsIoOutputCloseShieldOutputStream_

#define RESTRICT_OrgApacheCommonsIoOutputProxyOutputStream 1
#define INCLUDE_OrgApacheCommonsIoOutputProxyOutputStream 1
#include "org/apache/commons/io/output/ProxyOutputStream.h"

@class JavaIoOutputStream;

/*!
 @brief Proxy stream that prevents the underlying output stream from being closed.
 <p>
  This class is typically used in cases where an output stream needs to be
  passed to a component that wants to explicitly close the stream even if
  other components would still use the stream for output.
 @version $Id$
 @since 1.4
 */
@interface OrgApacheCommonsIoOutputCloseShieldOutputStream : OrgApacheCommonsIoOutputProxyOutputStream

#pragma mark Public

/*!
 @brief Creates a proxy that shields the given output stream from being
  closed.
 @param outArg underlying output stream
 */
- (instancetype)initWithJavaIoOutputStream:(JavaIoOutputStream *)outArg;

/*!
 @brief Replaces the underlying output stream with a <code>ClosedOutputStream</code>
  sentinel.The original output stream will remain open, but this proxy
  will appear closed.
 */
- (void)close;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheCommonsIoOutputCloseShieldOutputStream)

FOUNDATION_EXPORT void OrgApacheCommonsIoOutputCloseShieldOutputStream_initWithJavaIoOutputStream_(OrgApacheCommonsIoOutputCloseShieldOutputStream *self, JavaIoOutputStream *outArg);

FOUNDATION_EXPORT OrgApacheCommonsIoOutputCloseShieldOutputStream *new_OrgApacheCommonsIoOutputCloseShieldOutputStream_initWithJavaIoOutputStream_(JavaIoOutputStream *outArg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheCommonsIoOutputCloseShieldOutputStream *create_OrgApacheCommonsIoOutputCloseShieldOutputStream_initWithJavaIoOutputStream_(JavaIoOutputStream *outArg);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheCommonsIoOutputCloseShieldOutputStream)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheCommonsIoOutputCloseShieldOutputStream")
