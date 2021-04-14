//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AIMDownloadEvent, AssetRequest, NSError, NSNumber;
@protocol AssetDataConsumer;

@interface AppInstallDownloadResponse : NSObject
{
    AssetRequest *_assetRequest;	// 8 = 0x8
    NSNumber *_assetSize;	// 16 = 0x10
    long long _installID;	// 24 = 0x18
    NSError *_error;	// 32 = 0x20
    AIMDownloadEvent *_event;	// 40 = 0x28
    long long _packageID;	// 48 = 0x30
    unsigned long long _requestCount;	// 56 = 0x38
    long long _result;	// 64 = 0x40
    id <AssetDataConsumer> _dataConsumer;	// 72 = 0x48
}

+ (id)finishInstallID:(long long)arg1;	// IMP=0x00000001002d8a10
+ (id)failInstallID:(long long)arg1 withError:(id)arg2;	// IMP=0x00000001002d89a0
+ (id)continueInstallID:(long long)arg1 withDataConsumer:(id)arg2 assetRequest:(id)arg3 event:(id)arg4;	// IMP=0x00000001002d88f8
- (void).cxx_destruct;	// IMP=0x00000001002d8bf4
@property(readonly) id <AssetDataConsumer> dataConsumer; // @synthesize dataConsumer=_dataConsumer;
@property(readonly) long long result; // @synthesize result=_result;
@property(readonly) unsigned long long requestCount; // @synthesize requestCount=_requestCount;
@property(readonly) long long packageID; // @synthesize packageID=_packageID;
@property(readonly) AIMDownloadEvent *event; // @synthesize event=_event;
@property(readonly) NSError *error; // @synthesize error=_error;
@property(readonly) long long installID; // @synthesize installID=_installID;
@property(readonly) NSNumber *assetSize; // @synthesize assetSize=_assetSize;
@property(readonly) AssetRequest *assetRequest; // @synthesize assetRequest=_assetRequest;
- (void)setRequestCount:(unsigned long long)arg1 forPackageID:(long long)arg2;	// IMP=0x00000001002d8b90
- (void)setAssetSize:(id)arg1 forPackageID:(long long)arg2;	// IMP=0x00000001002d8b60
- (id)_initWithInstallID:(long long)arg1 result:(long long)arg2 dataConsumer:(id)arg3 assetRequest:(id)arg4 error:(id)arg5 event:(id)arg6;	// IMP=0x00000001002d8a54

@end

