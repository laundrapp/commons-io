//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/marcussmith/temp/commons-io/src/main/java/org/apache/commons/io/output/ClosedOutputStream.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheCommonsIoOutputClosedOutputStream")
#ifdef RESTRICT_OrgApacheCommonsIoOutputClosedOutputStream
#define INCLUDE_ALL_OrgApacheCommonsIoOutputClosedOutputStream 0
#else
#define INCLUDE_ALL_OrgApacheCommonsIoOutputClosedOutputStream 1
#endif
#undef RESTRICT_OrgApacheCommonsIoOutputClosedOutputStream

#if !defined (OrgApacheCommonsIoOutputClosedOutputStream_) && (INCLUDE_ALL_OrgApacheCommonsIoOutputClosedOutputStream || defined(INCLUDE_OrgApacheCommonsIoOutputClosedOutputStream))
#define OrgApacheCommonsIoOutputClosedOutputStream_

#define RESTRICT_JavaIoOutputStream 1
#define INCLUDE_JavaIoOutputStream 1
#include "java/io/OutputStream.h"

/*!
 @brief Closed output stream.This stream throws an exception on all attempts to
  write something to the stream.
 <p>
  Typically uses of this class include testing for corner cases in methods
  that accept an output stream and acting as a sentinel value instead of a 
 <code>null</code> output stream.
 @version $Id$
 @since 1.4
 */
@interface OrgApacheCommonsIoOutputClosedOutputStream : JavaIoOutputStream

#pragma mark Public

- (instancetype)init;

/*!
 @brief Throws an <code>IOException</code> to indicate that the stream is closed.
 @param b ignored
 @throw IOExceptionalways thrown
 */
- (void)writeWithInt:(jint)b;

@end

J2OBJC_STATIC_INIT(OrgApacheCommonsIoOutputClosedOutputStream)

/*!
 @brief A singleton.
 */
inline OrgApacheCommonsIoOutputClosedOutputStream *OrgApacheCommonsIoOutputClosedOutputStream_get_CLOSED_OUTPUT_STREAM(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT OrgApacheCommonsIoOutputClosedOutputStream *OrgApacheCommonsIoOutputClosedOutputStream_CLOSED_OUTPUT_STREAM;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheCommonsIoOutputClosedOutputStream, CLOSED_OUTPUT_STREAM, OrgApacheCommonsIoOutputClosedOutputStream *)

FOUNDATION_EXPORT void OrgApacheCommonsIoOutputClosedOutputStream_init(OrgApacheCommonsIoOutputClosedOutputStream *self);

FOUNDATION_EXPORT OrgApacheCommonsIoOutputClosedOutputStream *new_OrgApacheCommonsIoOutputClosedOutputStream_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheCommonsIoOutputClosedOutputStream *create_OrgApacheCommonsIoOutputClosedOutputStream_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheCommonsIoOutputClosedOutputStream)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheCommonsIoOutputClosedOutputStream")
