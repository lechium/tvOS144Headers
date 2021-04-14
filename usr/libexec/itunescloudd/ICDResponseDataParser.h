//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ICDResponseDataParser : NSObject
{
}

+ (id)_parseListingItemWithBytes:(const char *)arg1 length:(unsigned int)arg2 usingHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000d1478
+ (id)_parseErrorResponseWithBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x00000001000d1210
+ (id)_parsePlayStatusResponseWithBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x00000001000d0674
+ (id)_parseItemIDArrayWithBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x00000001000d04c0
+ (id)_parseBrowseListingWithBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x00000001000d030c
+ (id)_parseListingCollectionWithBytes:(const char *)arg1 length:(unsigned long long)arg2 usingHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000d0100
+ (id)_parseItemsResponseWithBytes:(const char *)arg1 length:(unsigned long long)arg2 usingHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000cfda0
+ (id)_parseUpdateTypeWithBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x00000001000cfc80
+ (id)_parseEditCommandResponseWithBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x00000001000cfa68
+ (id)_parseDictionaryCollectionWithBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x00000001000cf7d8
+ (id)_parseDeletedIDListingWithBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x00000001000cf5a4
+ (id)_parseControlPromptResponseWithBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x00000001000cf374
+ (id)_parseControlInterfacesResponseWithBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x00000001000cf1b0
+ (id)_parseCloudLyricsInfoResponseWithBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x00000001000cefec
+ (id)_parseCloudArtworkInfoResponseWithBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x00000001000cee28
+ (id)_parseBulkCloudLyricsInfoResponseWithBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x00000001000cec9c
+ (id)_parseBulkCloudArtworkInfoResponseWithBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x00000001000ceb10
+ (id)_parseAuthorizedAccountTokenWithBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x00000001000ce850
+ (id)_parseUpdateResponseWithBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x00000001000ce678
+ (id)_parseLoginResponseWithBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x00000001000ce49c
+ (id)_parseResponseCode:(unsigned int)arg1 bytes:(const char *)arg2 length:(unsigned long long)arg3 usingHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000001000ce04c
+ (unsigned long long)_parseItemPropertyCountWithBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x00000001000ce01c
+ (void)enumerateDeletedItemsInResponseData:(id)arg1 usingHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000cde84
+ (void)enumerateItemsInResponseData:(id)arg1 usingHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000cdd90
+ (void)parseItemWithBytes:(const char *)arg1 length:(unsigned long long)arg2 usingHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000cdc94
+ (unsigned long long)parseItemWithBytes:(const char *)arg1 length:(unsigned long long)arg2 valuesOut:(CDStruct_4a344573 *)arg3 valuesCapacity:(unsigned long long)arg4;	// IMP=0x00000001000cd854
+ (id)enumerateRawItemsInResponseData:(id)arg1 usingHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000cd6d4
+ (id)parseResponseData:(id)arg1;	// IMP=0x00000001000cd6c4
+ (id)parseErrorInResponseData:(id)arg1;	// IMP=0x00000001000cd560

@end
