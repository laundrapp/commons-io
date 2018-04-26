//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/marcussmith/temp/commons-io/src/main/java/org/apache/commons/io/comparator/AbstractFileComparator.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheCommonsIoComparatorAbstractFileComparator")
#ifdef RESTRICT_OrgApacheCommonsIoComparatorAbstractFileComparator
#define INCLUDE_ALL_OrgApacheCommonsIoComparatorAbstractFileComparator 0
#else
#define INCLUDE_ALL_OrgApacheCommonsIoComparatorAbstractFileComparator 1
#endif
#undef RESTRICT_OrgApacheCommonsIoComparatorAbstractFileComparator

#if !defined (OrgApacheCommonsIoComparatorAbstractFileComparator_) && (INCLUDE_ALL_OrgApacheCommonsIoComparatorAbstractFileComparator || defined(INCLUDE_OrgApacheCommonsIoComparatorAbstractFileComparator))
#define OrgApacheCommonsIoComparatorAbstractFileComparator_

#define RESTRICT_JavaUtilComparator 1
#define INCLUDE_JavaUtilComparator 1
#include "java/util/Comparator.h"

@class IOSObjectArray;
@protocol JavaUtilFunctionFunction;
@protocol JavaUtilFunctionToDoubleFunction;
@protocol JavaUtilFunctionToIntFunction;
@protocol JavaUtilFunctionToLongFunction;
@protocol JavaUtilList;

/*!
 @brief Abstract file <code>Comparator</code> which provides sorting for file arrays and lists.
 @version $Id$
 @since 2.0
 */
@interface OrgApacheCommonsIoComparatorAbstractFileComparator : NSObject < JavaUtilComparator >

#pragma mark Public

/*!
 @brief Sort an array of files.
 <p>
  This method uses <code>Comparator)</code>
  and returns the original array.
 @param files The files to sort, may be null
 @return The sorted array
 @since 2.0
 */
- (IOSObjectArray *)sortWithJavaIoFileArray:(IOSObjectArray *)files;

/*!
 @brief Sort a List of files.
 <p>
  This method uses <code>Comparator)</code>
  and returns the original list.
 @param files The files to sort, may be null
 @return The sorted list
 @since 2.0
 */
- (id<JavaUtilList>)sortWithJavaUtilList:(id<JavaUtilList>)files;

/*!
 @brief String representation of this file comparator.
 @return String representation of this file comparator
 */
- (NSString *)description;

#pragma mark Package-Private

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheCommonsIoComparatorAbstractFileComparator)

FOUNDATION_EXPORT void OrgApacheCommonsIoComparatorAbstractFileComparator_init(OrgApacheCommonsIoComparatorAbstractFileComparator *self);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheCommonsIoComparatorAbstractFileComparator)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheCommonsIoComparatorAbstractFileComparator")
