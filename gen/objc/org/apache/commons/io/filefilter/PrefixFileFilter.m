//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/marcussmith/temp/commons-io/src/main/java/org/apache/commons/io/filefilter/PrefixFileFilter.java
//

#include "IOSClass.h"
#include "IOSObjectArray.h"
#include "J2ObjC_source.h"
#include "java/io/File.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/System.h"
#include "java/util/List.h"
#include "org/apache/commons/io/IOCase.h"
#include "org/apache/commons/io/filefilter/AbstractFileFilter.h"
#include "org/apache/commons/io/filefilter/PrefixFileFilter.h"

@interface OrgApacheCommonsIoFilefilterPrefixFileFilter () {
 @public
  /*!
   @brief The filename prefixes to search for
   */
  IOSObjectArray *prefixes_;
  /*!
   @brief Whether the comparison is case sensitive.
   */
  OrgApacheCommonsIoIOCase *caseSensitivity_;
}

@end

J2OBJC_FIELD_SETTER(OrgApacheCommonsIoFilefilterPrefixFileFilter, prefixes_, IOSObjectArray *)
J2OBJC_FIELD_SETTER(OrgApacheCommonsIoFilefilterPrefixFileFilter, caseSensitivity_, OrgApacheCommonsIoIOCase *)

@implementation OrgApacheCommonsIoFilefilterPrefixFileFilter

- (instancetype __nonnull)initWithNSString:(NSString *)prefix {
  OrgApacheCommonsIoFilefilterPrefixFileFilter_initWithNSString_(self, prefix);
  return self;
}

- (instancetype __nonnull)initWithNSString:(NSString *)prefix
              withOrgApacheCommonsIoIOCase:(OrgApacheCommonsIoIOCase *)caseSensitivity {
  OrgApacheCommonsIoFilefilterPrefixFileFilter_initWithNSString_withOrgApacheCommonsIoIOCase_(self, prefix, caseSensitivity);
  return self;
}

- (instancetype __nonnull)initWithNSStringArray:(IOSObjectArray *)prefixes {
  OrgApacheCommonsIoFilefilterPrefixFileFilter_initWithNSStringArray_(self, prefixes);
  return self;
}

- (instancetype __nonnull)initWithNSStringArray:(IOSObjectArray *)prefixes
                   withOrgApacheCommonsIoIOCase:(OrgApacheCommonsIoIOCase *)caseSensitivity {
  OrgApacheCommonsIoFilefilterPrefixFileFilter_initWithNSStringArray_withOrgApacheCommonsIoIOCase_(self, prefixes, caseSensitivity);
  return self;
}

- (instancetype __nonnull)initWithJavaUtilList:(id<JavaUtilList>)prefixes {
  OrgApacheCommonsIoFilefilterPrefixFileFilter_initWithJavaUtilList_(self, prefixes);
  return self;
}

- (instancetype __nonnull)initWithJavaUtilList:(id<JavaUtilList>)prefixes
                  withOrgApacheCommonsIoIOCase:(OrgApacheCommonsIoIOCase *)caseSensitivity {
  OrgApacheCommonsIoFilefilterPrefixFileFilter_initWithJavaUtilList_withOrgApacheCommonsIoIOCase_(self, prefixes, caseSensitivity);
  return self;
}

- (jboolean)acceptWithJavaIoFile:(JavaIoFile *)file {
  NSString *name = [((JavaIoFile *) nil_chk(file)) getName];
  {
    IOSObjectArray *a__ = self->prefixes_;
    NSString * const *b__ = ((IOSObjectArray *) nil_chk(a__))->buffer_;
    NSString * const *e__ = b__ + a__->size_;
    while (b__ < e__) {
      NSString *prefix = *b__++;
      if ([((OrgApacheCommonsIoIOCase *) nil_chk(caseSensitivity_)) checkStartsWithWithNSString:name withNSString:prefix]) {
        return true;
      }
    }
  }
  return false;
}

- (jboolean)acceptWithJavaIoFile:(JavaIoFile *)file
                    withNSString:(NSString *)name {
  {
    IOSObjectArray *a__ = prefixes_;
    NSString * const *b__ = ((IOSObjectArray *) nil_chk(a__))->buffer_;
    NSString * const *e__ = b__ + a__->size_;
    while (b__ < e__) {
      NSString *prefix = *b__++;
      if ([((OrgApacheCommonsIoIOCase *) nil_chk(caseSensitivity_)) checkStartsWithWithNSString:name withNSString:prefix]) {
        return true;
      }
    }
  }
  return false;
}

- (NSString *)description {
  JavaLangStringBuilder *buffer = create_JavaLangStringBuilder_init();
  [buffer appendWithNSString:[super description]];
  [buffer appendWithNSString:@"("];
  if (prefixes_ != nil) {
    for (jint i = 0; i < prefixes_->size_; i++) {
      if (i > 0) {
        [buffer appendWithNSString:@","];
      }
      [buffer appendWithNSString:IOSObjectArray_Get(prefixes_, i)];
    }
  }
  [buffer appendWithNSString:@")"];
  return [buffer description];
}

- (void)dealloc {
  RELEASE_(prefixes_);
  RELEASE_(caseSensitivity_);
  [super dealloc];
}

@end

void OrgApacheCommonsIoFilefilterPrefixFileFilter_initWithNSString_(OrgApacheCommonsIoFilefilterPrefixFileFilter *self, NSString *prefix) {
  OrgApacheCommonsIoFilefilterPrefixFileFilter_initWithNSString_withOrgApacheCommonsIoIOCase_(self, prefix, JreLoadStatic(OrgApacheCommonsIoIOCase, SENSITIVE));
}

OrgApacheCommonsIoFilefilterPrefixFileFilter *new_OrgApacheCommonsIoFilefilterPrefixFileFilter_initWithNSString_(NSString *prefix) {
  J2OBJC_NEW_IMPL(OrgApacheCommonsIoFilefilterPrefixFileFilter, initWithNSString_, prefix)
}

OrgApacheCommonsIoFilefilterPrefixFileFilter *create_OrgApacheCommonsIoFilefilterPrefixFileFilter_initWithNSString_(NSString *prefix) {
  J2OBJC_CREATE_IMPL(OrgApacheCommonsIoFilefilterPrefixFileFilter, initWithNSString_, prefix)
}

void OrgApacheCommonsIoFilefilterPrefixFileFilter_initWithNSString_withOrgApacheCommonsIoIOCase_(OrgApacheCommonsIoFilefilterPrefixFileFilter *self, NSString *prefix, OrgApacheCommonsIoIOCase *caseSensitivity) {
  OrgApacheCommonsIoFilefilterAbstractFileFilter_init(self);
  if (prefix == nil) {
    @throw create_JavaLangIllegalArgumentException_initWithNSString_(@"The prefix must not be null");
  }
  JreStrongAssignAndConsume(&self->prefixes_, [IOSObjectArray newArrayWithObjects:(id[]){ prefix } count:1 type:NSString_class_()]);
  JreStrongAssign(&self->caseSensitivity_, caseSensitivity == nil ? JreLoadStatic(OrgApacheCommonsIoIOCase, SENSITIVE) : caseSensitivity);
}

OrgApacheCommonsIoFilefilterPrefixFileFilter *new_OrgApacheCommonsIoFilefilterPrefixFileFilter_initWithNSString_withOrgApacheCommonsIoIOCase_(NSString *prefix, OrgApacheCommonsIoIOCase *caseSensitivity) {
  J2OBJC_NEW_IMPL(OrgApacheCommonsIoFilefilterPrefixFileFilter, initWithNSString_withOrgApacheCommonsIoIOCase_, prefix, caseSensitivity)
}

OrgApacheCommonsIoFilefilterPrefixFileFilter *create_OrgApacheCommonsIoFilefilterPrefixFileFilter_initWithNSString_withOrgApacheCommonsIoIOCase_(NSString *prefix, OrgApacheCommonsIoIOCase *caseSensitivity) {
  J2OBJC_CREATE_IMPL(OrgApacheCommonsIoFilefilterPrefixFileFilter, initWithNSString_withOrgApacheCommonsIoIOCase_, prefix, caseSensitivity)
}

void OrgApacheCommonsIoFilefilterPrefixFileFilter_initWithNSStringArray_(OrgApacheCommonsIoFilefilterPrefixFileFilter *self, IOSObjectArray *prefixes) {
  OrgApacheCommonsIoFilefilterPrefixFileFilter_initWithNSStringArray_withOrgApacheCommonsIoIOCase_(self, prefixes, JreLoadStatic(OrgApacheCommonsIoIOCase, SENSITIVE));
}

OrgApacheCommonsIoFilefilterPrefixFileFilter *new_OrgApacheCommonsIoFilefilterPrefixFileFilter_initWithNSStringArray_(IOSObjectArray *prefixes) {
  J2OBJC_NEW_IMPL(OrgApacheCommonsIoFilefilterPrefixFileFilter, initWithNSStringArray_, prefixes)
}

OrgApacheCommonsIoFilefilterPrefixFileFilter *create_OrgApacheCommonsIoFilefilterPrefixFileFilter_initWithNSStringArray_(IOSObjectArray *prefixes) {
  J2OBJC_CREATE_IMPL(OrgApacheCommonsIoFilefilterPrefixFileFilter, initWithNSStringArray_, prefixes)
}

void OrgApacheCommonsIoFilefilterPrefixFileFilter_initWithNSStringArray_withOrgApacheCommonsIoIOCase_(OrgApacheCommonsIoFilefilterPrefixFileFilter *self, IOSObjectArray *prefixes, OrgApacheCommonsIoIOCase *caseSensitivity) {
  OrgApacheCommonsIoFilefilterAbstractFileFilter_init(self);
  if (prefixes == nil) {
    @throw create_JavaLangIllegalArgumentException_initWithNSString_(@"The array of prefixes must not be null");
  }
  JreStrongAssignAndConsume(&self->prefixes_, [IOSObjectArray newArrayWithLength:prefixes->size_ type:NSString_class_()]);
  JavaLangSystem_arraycopyWithId_withInt_withId_withInt_withInt_(prefixes, 0, self->prefixes_, 0, prefixes->size_);
  JreStrongAssign(&self->caseSensitivity_, caseSensitivity == nil ? JreLoadStatic(OrgApacheCommonsIoIOCase, SENSITIVE) : caseSensitivity);
}

OrgApacheCommonsIoFilefilterPrefixFileFilter *new_OrgApacheCommonsIoFilefilterPrefixFileFilter_initWithNSStringArray_withOrgApacheCommonsIoIOCase_(IOSObjectArray *prefixes, OrgApacheCommonsIoIOCase *caseSensitivity) {
  J2OBJC_NEW_IMPL(OrgApacheCommonsIoFilefilterPrefixFileFilter, initWithNSStringArray_withOrgApacheCommonsIoIOCase_, prefixes, caseSensitivity)
}

OrgApacheCommonsIoFilefilterPrefixFileFilter *create_OrgApacheCommonsIoFilefilterPrefixFileFilter_initWithNSStringArray_withOrgApacheCommonsIoIOCase_(IOSObjectArray *prefixes, OrgApacheCommonsIoIOCase *caseSensitivity) {
  J2OBJC_CREATE_IMPL(OrgApacheCommonsIoFilefilterPrefixFileFilter, initWithNSStringArray_withOrgApacheCommonsIoIOCase_, prefixes, caseSensitivity)
}

void OrgApacheCommonsIoFilefilterPrefixFileFilter_initWithJavaUtilList_(OrgApacheCommonsIoFilefilterPrefixFileFilter *self, id<JavaUtilList> prefixes) {
  OrgApacheCommonsIoFilefilterPrefixFileFilter_initWithJavaUtilList_withOrgApacheCommonsIoIOCase_(self, prefixes, JreLoadStatic(OrgApacheCommonsIoIOCase, SENSITIVE));
}

OrgApacheCommonsIoFilefilterPrefixFileFilter *new_OrgApacheCommonsIoFilefilterPrefixFileFilter_initWithJavaUtilList_(id<JavaUtilList> prefixes) {
  J2OBJC_NEW_IMPL(OrgApacheCommonsIoFilefilterPrefixFileFilter, initWithJavaUtilList_, prefixes)
}

OrgApacheCommonsIoFilefilterPrefixFileFilter *create_OrgApacheCommonsIoFilefilterPrefixFileFilter_initWithJavaUtilList_(id<JavaUtilList> prefixes) {
  J2OBJC_CREATE_IMPL(OrgApacheCommonsIoFilefilterPrefixFileFilter, initWithJavaUtilList_, prefixes)
}

void OrgApacheCommonsIoFilefilterPrefixFileFilter_initWithJavaUtilList_withOrgApacheCommonsIoIOCase_(OrgApacheCommonsIoFilefilterPrefixFileFilter *self, id<JavaUtilList> prefixes, OrgApacheCommonsIoIOCase *caseSensitivity) {
  OrgApacheCommonsIoFilefilterAbstractFileFilter_init(self);
  if (prefixes == nil) {
    @throw create_JavaLangIllegalArgumentException_initWithNSString_(@"The list of prefixes must not be null");
  }
  JreStrongAssign(&self->prefixes_, [prefixes toArrayWithNSObjectArray:[IOSObjectArray arrayWithLength:[prefixes size] type:NSString_class_()]]);
  JreStrongAssign(&self->caseSensitivity_, caseSensitivity == nil ? JreLoadStatic(OrgApacheCommonsIoIOCase, SENSITIVE) : caseSensitivity);
}

OrgApacheCommonsIoFilefilterPrefixFileFilter *new_OrgApacheCommonsIoFilefilterPrefixFileFilter_initWithJavaUtilList_withOrgApacheCommonsIoIOCase_(id<JavaUtilList> prefixes, OrgApacheCommonsIoIOCase *caseSensitivity) {
  J2OBJC_NEW_IMPL(OrgApacheCommonsIoFilefilterPrefixFileFilter, initWithJavaUtilList_withOrgApacheCommonsIoIOCase_, prefixes, caseSensitivity)
}

OrgApacheCommonsIoFilefilterPrefixFileFilter *create_OrgApacheCommonsIoFilefilterPrefixFileFilter_initWithJavaUtilList_withOrgApacheCommonsIoIOCase_(id<JavaUtilList> prefixes, OrgApacheCommonsIoIOCase *caseSensitivity) {
  J2OBJC_CREATE_IMPL(OrgApacheCommonsIoFilefilterPrefixFileFilter, initWithJavaUtilList_withOrgApacheCommonsIoIOCase_, prefixes, caseSensitivity)
}

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(OrgApacheCommonsIoFilefilterPrefixFileFilter)
