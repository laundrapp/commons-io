//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/marcussmith/temp/commons-io/src/main/java/org/apache/commons/io/output/TeeOutputStream.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheCommonsIoOutputTeeOutputStream")
#ifdef RESTRICT_OrgApacheCommonsIoOutputTeeOutputStream
#define INCLUDE_ALL_OrgApacheCommonsIoOutputTeeOutputStream 0
#else
#define INCLUDE_ALL_OrgApacheCommonsIoOutputTeeOutputStream 1
#endif
#undef RESTRICT_OrgApacheCommonsIoOutputTeeOutputStream

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheCommonsIoOutputTeeOutputStream_) && (INCLUDE_ALL_OrgApacheCommonsIoOutputTeeOutputStream || defined(INCLUDE_OrgApacheCommonsIoOutputTeeOutputStream))
#define OrgApacheCommonsIoOutputTeeOutputStream_

#define RESTRICT_OrgApacheCommonsIoOutputProxyOutputStream 1
#define INCLUDE_OrgApacheCommonsIoOutputProxyOutputStream 1
#include "org/apache/commons/io/output/ProxyOutputStream.h"

@class IOSByteArray;
@class JavaIoOutputStream;

/*!
 @brief Classic splitter of OutputStream.Named after the unix 'tee' 
  command.
 It allows a stream to be branched off so there 
  are now two streams.
 @version $Id$
 */
@interface OrgApacheCommonsIoOutputTeeOutputStream : OrgApacheCommonsIoOutputProxyOutputStream {
 @public
  /*!
   @brief the second OutputStream to write to
   */
  JavaIoOutputStream *branch_;
}

#pragma mark Public

/*!
 @brief Constructs a TeeOutputStream.
 @param outArg the main OutputStream
 @param branch the second OutputStream
 */
- (instancetype __nonnull)initWithJavaIoOutputStream:(JavaIoOutputStream *)outArg
                              withJavaIoOutputStream:(JavaIoOutputStream *)branch;

/*!
 @brief Closes both output streams.
 If closing the main output stream throws an exception, attempt to close the branch output stream. 
  If closing the main and branch output streams both throw exceptions, which exceptions is thrown by this method is
  currently unspecified and subject to change.
 @throw IOException
 if an I/O error occurs
 */
- (void)close;

/*!
 @brief Flushes both streams.
 @throw IOExceptionif an I/O error occurs
 */
- (void)flush;

/*!
 @brief Write the bytes to both streams.
 @param b the bytes to write
 @throw IOExceptionif an I/O error occurs
 */
- (void)writeWithByteArray:(IOSByteArray *)b;

/*!
 @brief Write the specified bytes to both streams.
 @param b the bytes to write
 @param off The start offset
 @param len The number of bytes to write
 @throw IOExceptionif an I/O error occurs
 */
- (void)writeWithByteArray:(IOSByteArray *)b
                   withInt:(jint)off
                   withInt:(jint)len;

/*!
 @brief Write a byte to both streams.
 @param b the byte to write
 @throw IOExceptionif an I/O error occurs
 */
- (void)writeWithInt:(jint)b;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithJavaIoOutputStream:(JavaIoOutputStream *)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheCommonsIoOutputTeeOutputStream)

J2OBJC_FIELD_SETTER(OrgApacheCommonsIoOutputTeeOutputStream, branch_, JavaIoOutputStream *)

FOUNDATION_EXPORT void OrgApacheCommonsIoOutputTeeOutputStream_initWithJavaIoOutputStream_withJavaIoOutputStream_(OrgApacheCommonsIoOutputTeeOutputStream *self, JavaIoOutputStream *outArg, JavaIoOutputStream *branch);

FOUNDATION_EXPORT OrgApacheCommonsIoOutputTeeOutputStream *new_OrgApacheCommonsIoOutputTeeOutputStream_initWithJavaIoOutputStream_withJavaIoOutputStream_(JavaIoOutputStream *outArg, JavaIoOutputStream *branch) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheCommonsIoOutputTeeOutputStream *create_OrgApacheCommonsIoOutputTeeOutputStream_initWithJavaIoOutputStream_withJavaIoOutputStream_(JavaIoOutputStream *outArg, JavaIoOutputStream *branch);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheCommonsIoOutputTeeOutputStream)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_OrgApacheCommonsIoOutputTeeOutputStream")
