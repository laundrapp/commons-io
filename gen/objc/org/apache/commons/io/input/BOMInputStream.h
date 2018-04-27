//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/marcussmith/temp/commons-io/src/main/java/org/apache/commons/io/input/BOMInputStream.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheCommonsIoInputBOMInputStream")
#ifdef RESTRICT_OrgApacheCommonsIoInputBOMInputStream
#define INCLUDE_ALL_OrgApacheCommonsIoInputBOMInputStream 0
#else
#define INCLUDE_ALL_OrgApacheCommonsIoInputBOMInputStream 1
#endif
#undef RESTRICT_OrgApacheCommonsIoInputBOMInputStream

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheCommonsIoInputBOMInputStream_) && (INCLUDE_ALL_OrgApacheCommonsIoInputBOMInputStream || defined(INCLUDE_OrgApacheCommonsIoInputBOMInputStream))
#define OrgApacheCommonsIoInputBOMInputStream_

#define RESTRICT_OrgApacheCommonsIoInputProxyInputStream 1
#define INCLUDE_OrgApacheCommonsIoInputProxyInputStream 1
#include "org/apache/commons/io/input/ProxyInputStream.h"

@class IOSByteArray;
@class IOSObjectArray;
@class JavaIoInputStream;
@class OrgApacheCommonsIoByteOrderMark;

/*!
 @brief This class is used to wrap a stream that includes an encoded <code>ByteOrderMark</code> as its first bytes.
 This class detects these bytes and, if required, can automatically skip them and return the subsequent byte as the
  first byte in the stream. 
  The <code>ByteOrderMark</code> implementation has the following pre-defined BOMs: 
 <ul>
  <li>UTF-8 - <code>ByteOrderMark.UTF_8</code></li>
  <li>UTF-16BE - <code>ByteOrderMark.UTF_16LE</code></li>
  <li>UTF-16LE - <code>ByteOrderMark.UTF_16BE</code></li>
  <li>UTF-32BE - <code>ByteOrderMark.UTF_32LE</code></li>
  <li>UTF-32LE - <code>ByteOrderMark.UTF_32BE</code></li>
  </ul>
    
 <h3>Example 1 - Detect and exclude a UTF-8 BOM</h3>
   
 @code

  BOMInputStream bomIn = new BOMInputStream(in);
  if (bomIn.hasBOM()) {
      // has a UTF-8 BOM
  } 
  
@endcode
   
 <h3>Example 2 - Detect a UTF-8 BOM (but don't exclude it)</h3>
   
 @code

  boolean include = true;
  BOMInputStream bomIn = new BOMInputStream(in, include);
  if (bomIn.hasBOM()) {
      // has a UTF-8 BOM
  } 
  
@endcode
   
 <h3>Example 3 - Detect Multiple BOMs</h3>
   
 @code

  BOMInputStream bomIn = new BOMInputStream(in, 
    ByteOrderMark.UTF_16LE, ByteOrderMark.UTF_16BE,
    ByteOrderMark.UTF_32LE, ByteOrderMark.UTF_32BE
    );
  if (bomIn.hasBOM() == false) {
      // No BOM found
  } else if (bomIn.hasBOM(ByteOrderMark.UTF_16LE)) {
      // has a UTF-16LE BOM
  } else if (bomIn.hasBOM(ByteOrderMark.UTF_16BE)) {
      // has a UTF-16BE BOM
  } else if (bomIn.hasBOM(ByteOrderMark.UTF_32LE)) {
      // has a UTF-32LE BOM
  } else if (bomIn.hasBOM(ByteOrderMark.UTF_32BE)) {
      // has a UTF-32BE BOM
  } 
  
@endcode
 - seealso: org.apache.commons.io.ByteOrderMark
 - seealso: <a href="http://en.wikipedia.org/wiki/Byte_order_mark">Wikipedia - Byte Order Mark</a>
 @version $Id$
 @since 2.0
 */
@interface OrgApacheCommonsIoInputBOMInputStream : OrgApacheCommonsIoInputProxyInputStream

#pragma mark Public

/*!
 @brief Constructs a new BOM InputStream that excludes a <code>ByteOrderMark.UTF_8</code> BOM.
 @param delegate the InputStream to delegate to
 */
- (instancetype __nonnull)initWithJavaIoInputStream:(JavaIoInputStream *)delegate;

/*!
 @brief Constructs a new BOM InputStream that detects a a <code>ByteOrderMark.UTF_8</code> and optionally includes it.
 @param delegate the InputStream to delegate to
 @param include true to include the UTF-8 BOM or false to exclude it
 */
- (instancetype __nonnull)initWithJavaIoInputStream:(JavaIoInputStream *)delegate
                                        withBoolean:(jboolean)include;

/*!
 @brief Constructs a new BOM InputStream that detects the specified BOMs and optionally includes them.
 @param delegate the InputStream to delegate to
 @param include true to include the specified BOMs or false to exclude them
 @param boms The BOMs to detect and optionally exclude
 */
- (instancetype __nonnull)initWithJavaIoInputStream:(JavaIoInputStream *)delegate
                                        withBoolean:(jboolean)include
           withOrgApacheCommonsIoByteOrderMarkArray:(IOSObjectArray *)boms;

/*!
 @brief Constructs a new BOM InputStream that excludes the specified BOMs.
 @param delegate the InputStream to delegate to
 @param boms The BOMs to detect and exclude
 */
- (instancetype __nonnull)initWithJavaIoInputStream:(JavaIoInputStream *)delegate
           withOrgApacheCommonsIoByteOrderMarkArray:(IOSObjectArray *)boms;

/*!
 @brief Return the BOM (Byte Order Mark).
 @return The BOM or null if none
 @throw IOException
 if an error reading the first bytes of the stream occurs
 */
- (OrgApacheCommonsIoByteOrderMark *)getBOM;

/*!
 @brief Return the BOM charset Name - <code>ByteOrderMark.getCharsetName()</code>.
 @return The BOM charset Name or null if no BOM found
 @throw IOException
 if an error reading the first bytes of the stream occurs
 */
- (NSString *)getBOMCharsetName;

/*!
 @brief Indicates whether the stream contains one of the specified BOMs.
 @return true if the stream has one of the specified BOMs, otherwise false if it does not
 @throw IOException
 if an error reading the first bytes of the stream occurs
 */
- (jboolean)hasBOM;

/*!
 @brief Indicates whether the stream contains the specified BOM.
 @param bom The BOM to check for
 @return true if the stream has the specified BOM, otherwise false if it does not
 @throw IllegalArgumentException
 if the BOM is not one the stream is configured to detect
 @throw IOException
 if an error reading the first bytes of the stream occurs
 */
- (jboolean)hasBOMWithOrgApacheCommonsIoByteOrderMark:(OrgApacheCommonsIoByteOrderMark *)bom;

/*!
 @brief Invokes the delegate's <code>mark(int)</code> method.
 @param readlimit read ahead limit
 */
- (void)markWithInt:(jint)readlimit;

/*!
 @brief Invokes the delegate's <code>read()</code> method, detecting and optionally skipping BOM.
 @return the byte read (excluding BOM) or -1 if the end of stream
 @throw IOException
 if an I/O error occurs
 */
- (jint)read;

/*!
 @brief Invokes the delegate's <code>read(byte[])</code> method, detecting and optionally skipping BOM.
 @param buf the buffer to read the bytes into
 @return the number of bytes read (excluding BOM) or -1 if the end of stream
 @throw IOException
 if an I/O error occurs
 */
- (jint)readWithByteArray:(IOSByteArray *)buf;

/*!
 @brief Invokes the delegate's <code>read(byte[], int, int)</code> method, detecting and optionally skipping BOM.
 @param buf the buffer to read the bytes into
 @param off The start offset
 @param len The number of bytes to read (excluding BOM)
 @return the number of bytes read or -1 if the end of stream
 @throw IOException
 if an I/O error occurs
 */
- (jint)readWithByteArray:(IOSByteArray *)buf
                  withInt:(jint)off
                  withInt:(jint)len;

/*!
 @brief Invokes the delegate's <code>reset()</code> method.
 @throw IOException
 if an I/O error occurs
 */
- (void)reset;

/*!
 @brief Invokes the delegate's <code>skip(long)</code> method, detecting and optionallyskipping BOM.
 @param n the number of bytes to skip
 @return the number of bytes to skipped or -1 if the end of stream
 @throw IOException
 if an I/O error occurs
 */
- (jlong)skipWithLong:(jlong)n;

@end

J2OBJC_STATIC_INIT(OrgApacheCommonsIoInputBOMInputStream)

FOUNDATION_EXPORT void OrgApacheCommonsIoInputBOMInputStream_initWithJavaIoInputStream_(OrgApacheCommonsIoInputBOMInputStream *self, JavaIoInputStream *delegate);

FOUNDATION_EXPORT OrgApacheCommonsIoInputBOMInputStream *new_OrgApacheCommonsIoInputBOMInputStream_initWithJavaIoInputStream_(JavaIoInputStream *delegate) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheCommonsIoInputBOMInputStream *create_OrgApacheCommonsIoInputBOMInputStream_initWithJavaIoInputStream_(JavaIoInputStream *delegate);

FOUNDATION_EXPORT void OrgApacheCommonsIoInputBOMInputStream_initWithJavaIoInputStream_withBoolean_(OrgApacheCommonsIoInputBOMInputStream *self, JavaIoInputStream *delegate, jboolean include);

FOUNDATION_EXPORT OrgApacheCommonsIoInputBOMInputStream *new_OrgApacheCommonsIoInputBOMInputStream_initWithJavaIoInputStream_withBoolean_(JavaIoInputStream *delegate, jboolean include) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheCommonsIoInputBOMInputStream *create_OrgApacheCommonsIoInputBOMInputStream_initWithJavaIoInputStream_withBoolean_(JavaIoInputStream *delegate, jboolean include);

FOUNDATION_EXPORT void OrgApacheCommonsIoInputBOMInputStream_initWithJavaIoInputStream_withOrgApacheCommonsIoByteOrderMarkArray_(OrgApacheCommonsIoInputBOMInputStream *self, JavaIoInputStream *delegate, IOSObjectArray *boms);

FOUNDATION_EXPORT OrgApacheCommonsIoInputBOMInputStream *new_OrgApacheCommonsIoInputBOMInputStream_initWithJavaIoInputStream_withOrgApacheCommonsIoByteOrderMarkArray_(JavaIoInputStream *delegate, IOSObjectArray *boms) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheCommonsIoInputBOMInputStream *create_OrgApacheCommonsIoInputBOMInputStream_initWithJavaIoInputStream_withOrgApacheCommonsIoByteOrderMarkArray_(JavaIoInputStream *delegate, IOSObjectArray *boms);

FOUNDATION_EXPORT void OrgApacheCommonsIoInputBOMInputStream_initWithJavaIoInputStream_withBoolean_withOrgApacheCommonsIoByteOrderMarkArray_(OrgApacheCommonsIoInputBOMInputStream *self, JavaIoInputStream *delegate, jboolean include, IOSObjectArray *boms);

FOUNDATION_EXPORT OrgApacheCommonsIoInputBOMInputStream *new_OrgApacheCommonsIoInputBOMInputStream_initWithJavaIoInputStream_withBoolean_withOrgApacheCommonsIoByteOrderMarkArray_(JavaIoInputStream *delegate, jboolean include, IOSObjectArray *boms) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheCommonsIoInputBOMInputStream *create_OrgApacheCommonsIoInputBOMInputStream_initWithJavaIoInputStream_withBoolean_withOrgApacheCommonsIoByteOrderMarkArray_(JavaIoInputStream *delegate, jboolean include, IOSObjectArray *boms);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheCommonsIoInputBOMInputStream)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_OrgApacheCommonsIoInputBOMInputStream")
