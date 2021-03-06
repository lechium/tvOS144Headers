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

+ (id)compareResultToNSString:(int)arg1;	// IMP=0x00000001000187c4
+ (id)fileMetaDataWithMetadataDictionary:(id)arg1;	// IMP=0x0000000100016a80
+ (id)fileMetadatatWithPath:(id)arg1;	// IMP=0x0000000100016a2c
+ (id)targetFileWithPath:(id)arg1;	// IMP=0x000000010001649c
+ (id)extendedAttributesWithPath:(id)arg1;	// IMP=0x0000000100016224
+ (id)valueForExtendedAttributesKey:(id)arg1 forPath:(id)arg2;	// IMP=0x0000000100016000
+ (id)accessControlListWithPath:(id)arg1;	// IMP=0x0000000100015d10
+ (id)extendedAttributeKeysWithPath:(id)arg1;	// IMP=0x0000000100015a0c
+ (id)fileAttributesWithPath:(id)arg1;	// IMP=0x0000000100015810
+ (id)fileHashWithPath:(id)arg1;	// IMP=0x000000010001561c
- (void).cxx_destruct;	// IMP=0x0000000100018844
@property(readonly) NSDictionary *dict; // @synthesize dict=_dict;
@property(readonly, getter=getFileSize) long long fileSize;
@property(readonly, getter=getTargetFile) NSString *targetFile;
@property(readonly, getter=getFileType) NSString *fileType;
@property(readonly, getter=getAccessControlList) NSData *accessControlList;
@property(readonly, getter=getExtendedAttributes) NSDictionary *extendedAttributes;
@property(readonly, getter=getFileAttributes) NSDictionary *fileAttributes;
@property(readonly, getter=getHash) NSData *hash;
- (id)fileAttributesAllowSet:(id)arg1;	// IMP=0x000000010001828c
- (int)compareWith:(id)arg1;	// IMP=0x00000001000179fc
- (_Bool)restoreAttribuesToPath:(id)arg1;	// IMP=0x0000000100016d24
- (_Bool)removeAllExtendedAttributes:(id)arg1;	// IMP=0x0000000100016b20
- (void)dealloc;	// IMP=0x0000000100016ad4
- (id)initWithPath:(id)arg1;	// IMP=0x0000000100016684
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000010001660c

@end

