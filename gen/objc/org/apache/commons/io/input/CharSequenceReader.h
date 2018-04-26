//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/marcussmith/temp/commons-io/src/main/java/org/apache/commons/io/input/CharSequenceReader.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheCommonsIoInputCharSequenceReader")
#ifdef RESTRICT_OrgApacheCommonsIoInputCharSequenceReader
#define INCLUDE_ALL_OrgApacheCommonsIoInputCharSequenceReader 0
#else
#define INCLUDE_ALL_OrgApacheCommonsIoInputCharSequenceReader 1
#endif
#undef RESTRICT_OrgApacheCommonsIoInputCharSequenceReader

#if !defined (OrgApacheCommonsIoInputCharSequenceReader_) && (INCLUDE_ALL_OrgApacheCommonsIoInputCharSequenceReader || defined(INCLUDE_OrgApacheCommonsIoInputCharSequenceReader))
#define OrgApacheCommonsIoInputCharSequenceReader_

#define RESTRICT_JavaIoReader 1
#define INCLUDE_JavaIoReader 1
#include "java/io/Reader.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class IOSCharArray;
@protocol JavaLangCharSequence;

/*!
 @brief <code>Reader</code> implementation that can read from String, StringBuffer,
  StringBuilder or CharBuffer.
 <p>
  <strong>Note:</strong> Supports <code>mark(int)</code> and <code>reset()</code>.
 @version $Id$
 @since 1.4
 */
@interface OrgApacheCommonsIoInputCharSequenceReader : JavaIoReader < JavaIoSerializable >

#pragma mark Public

/*!
 @brief Construct a new instance with the specified character sequence.
 @param charSequence The character sequence, may be <code>null</code>
 */
- (instancetype)initWithJavaLangCharSequence:(id<JavaLangCharSequence>)charSequence;

/*!
 @brief Close resets the file back to the start and removes any marked position.
 */
- (void)close;

/*!
 @brief Mark the current position.
 @param readAheadLimit ignored
 */
- (void)markWithInt:(jint)readAheadLimit;

/*!
 @brief Mark is supported (returns true).
 @return <code>true</code>
 */
- (jboolean)markSupported;

/*!
 @brief Read a single character.
 @return the next character from the character sequence
  or -1 if the end has been reached.
 */
- (jint)read;

/*!
 @brief Read the sepcified number of characters into the array.
 @param array The array to store the characters in
 @param offset The starting position in the array to store
 @param length The maximum number of characters to read
 @return The number of characters read or -1 if there are
  no more
 */
- (jint)readWithCharArray:(IOSCharArray *)array
                  withInt:(jint)offset
                  withInt:(jint)length;

/*!
 @brief Reset the reader to the last marked position (or the beginning if
  mark has not been called).
 */
- (void)reset;

/*!
 @brief Skip the specified number of characters.
 @param n The number of characters to skip
 @return The actual number of characters skipped
 */
- (jlong)skipWithLong:(jlong)n;

/*!
 @brief Return a String representation of the underlying
  character sequence.
 @return The contents of the character sequence
 */
- (NSString *)description;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

- (instancetype)initWithId:(id)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheCommonsIoInputCharSequenceReader)

FOUNDATION_EXPORT void OrgApacheCommonsIoInputCharSequenceReader_initWithJavaLangCharSequence_(OrgApacheCommonsIoInputCharSequenceReader *self, id<JavaLangCharSequence> charSequence);

FOUNDATION_EXPORT OrgApacheCommonsIoInputCharSequenceReader *new_OrgApacheCommonsIoInputCharSequenceReader_initWithJavaLangCharSequence_(id<JavaLangCharSequence> charSequence) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheCommonsIoInputCharSequenceReader *create_OrgApacheCommonsIoInputCharSequenceReader_initWithJavaLangCharSequence_(id<JavaLangCharSequence> charSequence);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheCommonsIoInputCharSequenceReader)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheCommonsIoInputCharSequenceReader")
