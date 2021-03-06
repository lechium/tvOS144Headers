//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSString;

@interface MSDFileMetadata : NSObject
{
    NSDictionary *_dict;	// 8 = 0x8
}

+ (id)compareResultToNSString:(int)arg1;	// IMP=0x000000010000c86c
+ (id)fileMetaDataWithMetadataDictionary:(id)arg1;	// IMP=0x000000010000ab28
+ (id)fileMetadatatWithPath:(id)arg1;	// IMP=0x000000010000aad4
+ (id)targetFileWithPath:(id)arg1;	// IMP=0x000000010000a544
+ (id)extendedAttributesWithPath:(id)arg1;	// IMP=0x000000010000a2cc
+ (id)valueForExtendedAttributesKey:(id)arg1 forPath:(id)arg2;	// IMP=0x000000010000a0a8
+ (id)accessControlListWithPath:(id)arg1;	// IMP=0x0000000100009db8
+ (id)extendedAttributeKeysWithPath:(id)arg1;	// IMP=0x0000000100009ab4
+ (id)fileAttributesWithPath:(id)arg1;	// IMP=0x00000001000098b8
+ (id)fileHashWithPath:(id)arg1;	// IMP=0x00000001000096c4
- (void).cxx_destruct;	// IMP=0x000000010000c8ec
@property(readonly) NSDictionary *dict; // @synthesize dict=_dict;
@property(readonly, getter=getFileSize) long long fileSize;
@property(readonly, getter=getTargetFile) NSString *targetFile;
@property(readonly, getter=getFileType) NSString *fileType;
@property(readonly, getter=getAccessControlList) NSData *accessControlList;
@property(readonly, getter=getExtendedAttributes) NSDictionary *extendedAttributes;
@property(readonly, getter=getFileAttributes) NSDictionary *fileAttributes;
@property(readonly, getter=getHash) NSData *hash;
- (id)fileAttributesAllowSet:(id)arg1;	// IMP=0x000000010000c334
- (int)compareWith:(id)arg1;	// IMP=0x000000010000baa4
- (_Bool)restoreAttribuesToPath:(id)arg1;	// IMP=0x000000010000adcc
- (_Bool)removeAllExtendedAttributes:(id)arg1;	// IMP=0x000000010000abc8
- (void)dealloc;	// IMP=0x000000010000ab7c
- (id)initWithPath:(id)arg1;	// IMP=0x000000010000a72c
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000010000a6b4

@end

