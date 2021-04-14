//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface PAMediaConversionServiceResourceURLCollection : NSObject
{
    NSMutableDictionary *_urlReferencesByRole;	// 8 = 0x8
}

+ (id)filenameSummaryStringForDictionaryRepresentation:(id)arg1;	// IMP=0x0000000100007174
+ (_Bool)getSignatureString:(id *)arg1 filenameSummary:(id *)arg2 forDictionaryRepresentation:(id)arg3;	// IMP=0x0000000100006e38
+ (id)collectionForBookmarkDataDictionaryRepresentation:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100006c4c
+ (id)collectionWithMainResourceURL:(id)arg1;	// IMP=0x0000000100006bf4
- (void).cxx_destruct;	// IMP=0x0000000100005c84
@property(retain) NSMutableDictionary *urlReferencesByRole; // @synthesize urlReferencesByRole=_urlReferencesByRole;
- (_Bool)copyURL:(id)arg1 forRole:(id)arg2 toDirectory:(id)arg3 error:(id *)arg4;	// IMP=0x0000000100005ad4
- (id)urlForDebugDumpWithDirectoryName:(id)arg1 inExistingParentDirectory:(id)arg2 error:(id *)arg3;	// IMP=0x000000010000560c
@property(readonly) unsigned long long urlCount;
- (void)enumerateResourceURLs:(CDUnknownBlockType)arg1;	// IMP=0x0000000100005568
- (void)enumerateResourceURLReferences:(CDUnknownBlockType)arg1;	// IMP=0x00000001000053bc
- (id)fileSizeSummary;	// IMP=0x000000010000528c
- (id)description;	// IMP=0x000000010000527c
- (id)logMessageSummary;	// IMP=0x000000010000526c
- (id)logMessageSummaryWithFullPath:(_Bool)arg1;	// IMP=0x0000000100005138
@property(readonly) _Bool allURLsAreReadable;
- (_Bool)removeExistingEmptyFilesWithError:(id *)arg1;	// IMP=0x0000000100004ed0
- (_Bool)ensureFilesExistWithError:(id *)arg1;	// IMP=0x0000000100004d54
- (id)bookmarkDataDictionaryRepresentationWithError:(id *)arg1;	// IMP=0x0000000100004bcc
- (id)typeIdentifierForResourceURLWithRole:(id)arg1;	// IMP=0x00000001000047e8
- (_Bool)containsAnyRole:(id)arg1;	// IMP=0x000000010000461c
- (_Bool)containsAllRoles:(id)arg1;	// IMP=0x0000000100004450
- (void)setShouldDeleteURLOnDeallocation:(_Bool)arg1 forRole:(id)arg2;	// IMP=0x000000010000436c
- (id)resourceURLForRole:(id)arg1;	// IMP=0x0000000100004280
- (void)setResourceURL:(id)arg1 forRole:(id)arg2 deleteOnDeallocation:(_Bool)arg3;	// IMP=0x00000001000041f4
- (void)setResourceURL:(id)arg1 forRole:(id)arg2;	// IMP=0x0000000100004008
- (unsigned long long)hash;	// IMP=0x0000000100003f5c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100003f00
- (id)init;	// IMP=0x0000000100003e8c

@end
