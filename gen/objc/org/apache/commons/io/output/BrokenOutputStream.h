//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/marcussmith/temp/commons-io/src/main/java/org/apache/commons/io/output/BrokenOutputStream.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheCommonsIoOutputBrokenOutputStream")
#ifdef RESTRICT_OrgApacheCommonsIoOutputBrokenOutputStream
#define INCLUDE_ALL_OrgApacheCommonsIoOutputBrokenOutputStream 0
#else
#define INCLUDE_ALL_OrgApacheCommonsIoOutputBrokenOutputStream 1
#endif
#undef RESTRICT_OrgApacheCommonsIoOutputBrokenOutputStream

#if !defined (OrgApacheCommonsIoOutputBrokenOutputStream_) && (INCLUDE_ALL_OrgApacheCommonsIoOutputBrokenOutputStream || defined(INCLUDE_OrgApacheCommonsIoOutputBrokenOutputStream))
#define OrgApacheCommonsIoOutputBrokenOutputStream_

#define RESTRICT_JavaIoOutputStream 1
#define INCLUDE_JavaIoOutputStream 1
#include "java/io/OutputStream.h"

@class JavaIoIOException;

/*!
 @brief Broken output stream.This stream always throws an <code>IOException</code> from
  all <code>OutputStream</code> methods.
 <p>
  This class is mostly useful for testing error handling in code that uses an
  output stream.
 @since 2.0
 */
@interface OrgApacheCommonsIoOutputBrokenOutputStream : JavaIoOutputStream

#pragma mark Public

/*!
 @brief Creates a new stream that always throws an <code>IOException</code>
 */
- (instancetype)init;

/*!
 @brief Creates a new stream that always throws the given exception.
 @param exception the exception to be thrown
 */
- (instancetype)initWithJavaIoIOException:(JavaIoIOException *)exception;

/*!
 @brief Throws the configured exception.
 @throw IOExceptionalways thrown
 */
- (void)close;

/*!
 @brief Throws the configured exception.
 @throw IOExceptionalways thrown
 */
- (void)flush;

/*!
 @brief Throws the configured exception.
 @param b ignored
 @throw IOExceptionalways thrown
 */
- (void)writeWithInt:(jint)b;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheCommonsIoOutputBrokenOutputStream)

FOUNDATION_EXPORT void OrgApacheCommonsIoOutputBrokenOutputStream_initWithJavaIoIOException_(OrgApacheCommonsIoOutputBrokenOutputStream *self, JavaIoIOException *exception);

FOUNDATION_EXPORT OrgApacheCommonsIoOutputBrokenOutputStream *new_OrgApacheCommonsIoOutputBrokenOutputStream_initWithJavaIoIOException_(JavaIoIOException *exception) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheCommonsIoOutputBrokenOutputStream *create_OrgApacheCommonsIoOutputBrokenOutputStream_initWithJavaIoIOException_(JavaIoIOException *exception);

FOUNDATION_EXPORT void OrgApacheCommonsIoOutputBrokenOutputStream_init(OrgApacheCommonsIoOutputBrokenOutputStream *self);

FOUNDATION_EXPORT OrgApacheCommonsIoOutputBrokenOutputStream *new_OrgApacheCommonsIoOutputBrokenOutputStream_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheCommonsIoOutputBrokenOutputStream *create_OrgApacheCommonsIoOutputBrokenOutputStream_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheCommonsIoOutputBrokenOutputStream)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheCommonsIoOutputBrokenOutputStream")
