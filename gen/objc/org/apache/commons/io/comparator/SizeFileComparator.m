//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/marcussmith/temp/commons-io/src/main/java/org/apache/commons/io/comparator/SizeFileComparator.java
//

#include "J2ObjC_source.h"
#include "java/io/File.h"
#include "java/util/Comparator.h"
#include "org/apache/commons/io/FileUtils.h"
#include "org/apache/commons/io/comparator/AbstractFileComparator.h"
#include "org/apache/commons/io/comparator/ReverseComparator.h"
#include "org/apache/commons/io/comparator/SizeFileComparator.h"

@interface OrgApacheCommonsIoComparatorSizeFileComparator () {
 @public
  /*!
   @brief Whether the sum of the directory's contents should be calculated.
   */
  jboolean sumDirectoryContents_;
}

@end

J2OBJC_INITIALIZED_DEFN(OrgApacheCommonsIoComparatorSizeFileComparator)

id<JavaUtilComparator> OrgApacheCommonsIoComparatorSizeFileComparator_SIZE_COMPARATOR;
id<JavaUtilComparator> OrgApacheCommonsIoComparatorSizeFileComparator_SIZE_REVERSE;
id<JavaUtilComparator> OrgApacheCommonsIoComparatorSizeFileComparator_SIZE_SUMDIR_COMPARATOR;
id<JavaUtilComparator> OrgApacheCommonsIoComparatorSizeFileComparator_SIZE_SUMDIR_REVERSE;

@implementation OrgApacheCommonsIoComparatorSizeFileComparator

J2OBJC_IGNORE_DESIGNATED_BEGIN
- (instancetype __nonnull)init {
  OrgApacheCommonsIoComparatorSizeFileComparator_init(self);
  return self;
}
J2OBJC_IGNORE_DESIGNATED_END

- (instancetype __nonnull)initWithBoolean:(jboolean)sumDirectoryContents {
  OrgApacheCommonsIoComparatorSizeFileComparator_initWithBoolean_(self, sumDirectoryContents);
  return self;
}

- (jint)compareWithId:(JavaIoFile *)file1
               withId:(JavaIoFile *)file2 {
  jlong size1 = 0;
  if ([((JavaIoFile *) nil_chk(file1)) isDirectory]) {
    size1 = sumDirectoryContents_ && [file1 exists] ? OrgApacheCommonsIoFileUtils_sizeOfDirectoryWithJavaIoFile_(file1) : 0;
  }
  else {
    size1 = [file1 length];
  }
  jlong size2 = 0;
  if ([((JavaIoFile *) nil_chk(file2)) isDirectory]) {
    size2 = sumDirectoryContents_ && [file2 exists] ? OrgApacheCommonsIoFileUtils_sizeOfDirectoryWithJavaIoFile_(file2) : 0;
  }
  else {
    size2 = [file2 length];
  }
  jlong result = size1 - size2;
  if (result < 0) {
    return -1;
  }
  else if (result > 0) {
    return 1;
  }
  else {
    return 0;
  }
}

- (NSString *)description {
  return JreStrcat("$$ZC", [super description], @"[sumDirectoryContents=", sumDirectoryContents_, ']');
}

+ (void)initialize {
  if (self == [OrgApacheCommonsIoComparatorSizeFileComparator class]) {
    JreStrongAssignAndConsume(&OrgApacheCommonsIoComparatorSizeFileComparator_SIZE_COMPARATOR, new_OrgApacheCommonsIoComparatorSizeFileComparator_init());
    JreStrongAssignAndConsume(&OrgApacheCommonsIoComparatorSizeFileComparator_SIZE_REVERSE, new_OrgApacheCommonsIoComparatorReverseComparator_initWithJavaUtilComparator_(OrgApacheCommonsIoComparatorSizeFileComparator_SIZE_COMPARATOR));
    JreStrongAssignAndConsume(&OrgApacheCommonsIoComparatorSizeFileComparator_SIZE_SUMDIR_COMPARATOR, new_OrgApacheCommonsIoComparatorSizeFileComparator_initWithBoolean_(true));
    JreStrongAssignAndConsume(&OrgApacheCommonsIoComparatorSizeFileComparator_SIZE_SUMDIR_REVERSE, new_OrgApacheCommonsIoComparatorReverseComparator_initWithJavaUtilComparator_(OrgApacheCommonsIoComparatorSizeFileComparator_SIZE_SUMDIR_COMPARATOR));
    J2OBJC_SET_INITIALIZED(OrgApacheCommonsIoComparatorSizeFileComparator)
  }
}

@end

void OrgApacheCommonsIoComparatorSizeFileComparator_init(OrgApacheCommonsIoComparatorSizeFileComparator *self) {
  OrgApacheCommonsIoComparatorAbstractFileComparator_init(self);
  self->sumDirectoryContents_ = false;
}

OrgApacheCommonsIoComparatorSizeFileComparator *new_OrgApacheCommonsIoComparatorSizeFileComparator_init() {
  J2OBJC_NEW_IMPL(OrgApacheCommonsIoComparatorSizeFileComparator, init)
}

OrgApacheCommonsIoComparatorSizeFileComparator *create_OrgApacheCommonsIoComparatorSizeFileComparator_init() {
  J2OBJC_CREATE_IMPL(OrgApacheCommonsIoComparatorSizeFileComparator, init)
}

void OrgApacheCommonsIoComparatorSizeFileComparator_initWithBoolean_(OrgApacheCommonsIoComparatorSizeFileComparator *self, jboolean sumDirectoryContents) {
  OrgApacheCommonsIoComparatorAbstractFileComparator_init(self);
  self->sumDirectoryContents_ = sumDirectoryContents;
}

OrgApacheCommonsIoComparatorSizeFileComparator *new_OrgApacheCommonsIoComparatorSizeFileComparator_initWithBoolean_(jboolean sumDirectoryContents) {
  J2OBJC_NEW_IMPL(OrgApacheCommonsIoComparatorSizeFileComparator, initWithBoolean_, sumDirectoryContents)
}

OrgApacheCommonsIoComparatorSizeFileComparator *create_OrgApacheCommonsIoComparatorSizeFileComparator_initWithBoolean_(jboolean sumDirectoryContents) {
  J2OBJC_CREATE_IMPL(OrgApacheCommonsIoComparatorSizeFileComparator, initWithBoolean_, sumDirectoryContents)
}

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(OrgApacheCommonsIoComparatorSizeFileComparator)
