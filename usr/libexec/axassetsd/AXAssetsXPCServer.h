//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AXAssetsServiceInterface-Protocol.h"
#import "NSXPCListenerDelegate-Protocol.h"

@class NSString, NSXPCListener;
@protocol OS_dispatch_queue;

@interface AXAssetsXPCServer : NSObject <AXAssetsServiceInterface, NSXPCListenerDelegate>
{
    NSXPCListener *_xpcListener;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_xpcQueue;	// 16 = 0x10
    CDUnknownBlockType _refreshAssetCatalogForAssetTypeHandler;	// 24 = 0x18
    CDUnknownBlockType _updateAssetForAssetTypeHandler;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100008790
@property(copy, nonatomic) CDUnknownBlockType updateAssetForAssetTypeHandler; // @synthesize updateAssetForAssetTypeHandler=_updateAssetForAssetTypeHandler;
@property(copy, nonatomic) CDUnknownBlockType refreshAssetCatalogForAssetTypeHandler; // @synthesize refreshAssetCatalogForAssetTypeHandler=_refreshAssetCatalogForAssetTypeHandler;
- (void)updateAssetForAssetType:(id)arg1;	// IMP=0x00000001000086e0
- (void)refreshAssetCatalogForAssetType:(id)arg1 withOverrideTimeout:(id)arg2;	// IMP=0x0000000100008634
- (void)_xpcQueue_acceptNewConnection:(id)arg1;	// IMP=0x0000000100008270
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00000001000080f8
- (void)startServer;	// IMP=0x0000000100008078
- (id)init;	// IMP=0x0000000100007f98

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
