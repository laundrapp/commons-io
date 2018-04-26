//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/marcussmith/temp/commons-io/src/main/java/org/apache/commons/io/HexDump.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheCommonsIoHexDump")
#ifdef RESTRICT_OrgApacheCommonsIoHexDump
#define INCLUDE_ALL_OrgApacheCommonsIoHexDump 0
#else
#define INCLUDE_ALL_OrgApacheCommonsIoHexDump 1
#endif
#undef RESTRICT_OrgApacheCommonsIoHexDump

#if !defined (OrgApacheCommonsIoHexDump_) && (INCLUDE_ALL_OrgApacheCommonsIoHexDump || defined(INCLUDE_OrgApacheCommonsIoHexDump))
#define OrgApacheCommonsIoHexDump_

@class IOSByteArray;
@class JavaIoOutputStream;

/*!
 @brief Dumps data in hexadecimal format.
 <p>
  Provides a single function to take an array of bytes and display it
  in hexadecimal form. 
 <p>
  Origin of code: POI.
 @version $Id$
 */
@interface OrgApacheCommonsIoHexDump : NSObject

#pragma mark Public

/*!
 @brief Instances should NOT be constructed in standard programming.
 */
- (instancetype)init;

/*!
 @brief Dump an array of bytes to an OutputStream.The output is formatted
  for human inspection, with a hexadecimal offset followed by the
  hexadecimal values of the next 16 bytes of data and the printable ASCII
  characters (if any) that those bytes represent printed per each line
  of output.
 <p>
  The offset argument specifies the start offset of the data array
  within a larger entity like a file or an incoming stream. For example,
  if the data array contains the third kibibyte of a file, then the
  offset argument should be set to 2048. The offset value printed
  at the beginning of each line indicates where in that larger entity
  the first byte on that line is located. 
 <p>
  All bytes between the given index (inclusive) and the end of the
  data array are dumped.
 @param data the byte array to be dumped
 @param offset offset of the byte array within a larger entity
 @param stream the OutputStream to which the data is to be                written
 @param index initial index into the byte array
 @throw IOExceptionis thrown if anything goes wrong writing
          the data to stream
 @throw ArrayIndexOutOfBoundsExceptionif the index is
          outside the data array's bounds
 @throw IllegalArgumentExceptionif the output stream is null
 */
+ (void)dumpWithByteArray:(IOSByteArray *)data
                 withLong:(jlong)offset
   withJavaIoOutputStream:(JavaIoOutputStream *)stream
                  withInt:(jint)index;

@end

J2OBJC_STATIC_INIT(OrgApacheCommonsIoHexDump)

/*!
 @brief The line-separator (initializes to "line.separator" system property.
 */
inline NSString *OrgApacheCommonsIoHexDump_get_EOL(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheCommonsIoHexDump_EOL;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheCommonsIoHexDump, EOL, NSString *)

FOUNDATION_EXPORT void OrgApacheCommonsIoHexDump_init(OrgApacheCommonsIoHexDump *self);

FOUNDATION_EXPORT OrgApacheCommonsIoHexDump *new_OrgApacheCommonsIoHexDump_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheCommonsIoHexDump *create_OrgApacheCommonsIoHexDump_init(void);

FOUNDATION_EXPORT void OrgApacheCommonsIoHexDump_dumpWithByteArray_withLong_withJavaIoOutputStream_withInt_(IOSByteArray *data, jlong offset, JavaIoOutputStream *stream, jint index);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheCommonsIoHexDump)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheCommonsIoHexDump")
