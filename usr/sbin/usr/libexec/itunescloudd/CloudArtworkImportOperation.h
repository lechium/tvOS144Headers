//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CloudLibraryConcurrentOperation.h"

@class ICURLRequest, ICURLSession, NSMutableArray, NSString, NSURL;

@interface CloudArtworkImportOperation : CloudLibraryConcurrentOperation
{
    NSMutableArray *_completionHandlers;	// 8 = 0x8
    ICURLRequest *_urlRequest;	// 16 = 0x10
    _Bool _allowsCellularData;	// 24 = 0x18
    unsigned int _mediaType;	// 28 = 0x1c
    ICURLSession *_URLSession;	// 32 = 0x20
    unsigned long long _cloudID;	// 40 = 0x28
    NSString *_artworkToken;	// 48 = 0x30
    long long _artworkType;	// 56 = 0x38
    long long _sourceType;	// 64 = 0x40
    NSURL *_assetURL;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000100098388
@property(nonatomic) _Bool allowsCellularData; // @synthesize allowsCellularData=_allowsCellularData;
@property(copy, nonatomic) NSURL *assetURL; // @synthesize assetURL=_assetURL;
@property(nonatomic) unsigned int mediaType; // @synthesize mediaType=_mediaType;
@property(readonly, nonatomic) long long sourceType; // @synthesize sourceType=_sourceType;
@property(readonly, nonatomic) long long artworkType; // @synthesize artworkType=_artworkType;
@property(readonly, nonatomic) NSString *artworkToken; // @synthesize artworkToken=_artworkToken;
@property(readonly, nonatomic) unsigned long long cloudID; // @synthesize cloudID=_cloudID;
@property(readonly, nonatomic) ICURLSession *URLSession; // @synthesize URLSession=_URLSession;
- (id)_resizedImageDataFromLocation:(id)arg1;	// IMP=0x0000000100097f74
- (void)cancel;	// IMP=0x0000000100097f00
- (void)start;	// IMP=0x0000000100097348
- (id)description;	// IMP=0x0000000100097274
- (void)callCompletionHandlers;	// IMP=0x0000000100097114
- (void)addCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010009706c
- (id)initWithURLSession:(id)arg1 configuration:(id)arg2 cloudID:(unsigned long long)arg3 artworkToken:(id)arg4 artworkType:(long long)arg5 sourceType:(long long)arg6;	// IMP=0x0000000100096f4c

@end

